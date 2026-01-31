use anyhow::Result;
use anyhow::anyhow;
use gimli::read::{Dwarf, UnitOffset as ReadUnitOffset};
use gimli::{AttributeValue, EndianSlice, LittleEndian, SectionId, Unit, UnitOffset};
use object::ObjectSymbol;
use object::{Object, ObjectSection};
use rustc_demangle::demangle;
use serde::{Deserialize, Serialize};
use serde_json::json;
use std::collections::{BTreeMap, HashMap, HashSet};
use std::hash::Hash;

#[derive(Debug, Clone, PartialEq, Eq, PartialOrd, Ord, Hash, Serialize, Deserialize)]
#[serde(tag = "kind")]
pub enum TypeRepr {
    Pointer {
        pts_to: Box<TypeRepr>,
    },
    Primitive {
        name: String,
        size: u64,
    },
    Struct {
        name: String,
        size: u64,
        fields: Option<BTreeMap<u64, (String, TypeRepr)>>,
    },
    Enumeration {
        name: String,
        size: u64,
        discriminant_size: u64,
        variants: Option<BTreeMap<String, (i64, Vec<TypeRepr>)>>,
    },
    Array {
        ele_type: Box<TypeRepr>,
        length: u64,
    },
    Prototype {
        args: Vec<TypeRepr>,
        returnty: Option<Box<TypeRepr>>,
    },
    None,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(tag = "kind")]
pub struct Variable {
    pub name: String,
    #[serde(rename = "type")]
    pub ty: TypeRepr,
    pub category: String,
    pub location: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct Function {
    pub name: String,
    pub addr: u64,
    pub prototype: TypeRepr,
    pub local_variables: Vec<Variable>,
}

/// Parser struct
pub struct DwarfParser<'a> {
    dwarf: Dwarf<EndianSlice<'a, LittleEndian>>,
    variant_structs: HashSet<String>,
    name_to_address: HashMap<String, u64>,
    pub address_to_name: HashMap<u64, String>,
    pub structs: BTreeMap<String, TypeRepr>,
    pub functions: HashMap<String, Function>,
    /// Maps (unit offset, DIE offset) -> full struct name
    struct_names: HashMap<(usize, usize), String>,
}

impl<'a> DwarfParser<'a> {
    pub fn from_file(path: &str) -> anyhow::Result<DwarfParser<'static>> {
        // read file & parse object
        let buffer = std::fs::read(path)?;
        let obj = object::File::parse(&*buffer)?;
        let mut name_to_address: HashMap<String, u64> = HashMap::new();
        let mut address_to_name: HashMap<u64, String> = HashMap::new();
        for sym in obj.symbols() {
            if let Ok(name) = sym.name() {
                name_to_address.insert(name.to_string(), sym.address());
                address_to_name.insert(
                    sym.address(),
                    DwarfParser::strip_hash(demangle(name).to_string().as_str()),
                );
            }
        }

        // loader closure required by gimli::Dwarf::load
        let loader = |id: SectionId| -> Result<EndianSlice<'static, LittleEndian>, gimli::Error> {
            // get section bytes as Vec<u8> (or empty vec if missing)
            let data_vec: Vec<u8> = obj
                .section_by_name(id.name())
                .and_then(|sec| sec.uncompressed_data().ok())
                .map(|cow| cow.into_owned())
                .unwrap_or_else(Vec::new);

            // Leak the boxed slice to get a &'static [u8].
            // This is simple and safe for CLI tools; to avoid leak, store all sections in the struct instead.
            let boxed: Box<[u8]> = data_vec.into_boxed_slice();
            let static_slice: &'static [u8] = Box::leak(boxed);

            Ok(EndianSlice::new(static_slice, LittleEndian))
        };

        // Load sections into a Dwarf<Cow<[u8]>> (owned)
        let dwarf = gimli::Dwarf::load(&loader)?;

        // construct parser, initialize other maps empty
        Ok(DwarfParser {
            dwarf,
            variant_structs: HashSet::new(),
            name_to_address,
            address_to_name,
            structs: BTreeMap::new(),
            functions: HashMap::new(),
            struct_names: HashMap::new(),
        })
    }

    pub fn parse_all(&mut self) -> Result<()> {
        let mut iter = self.dwarf.units();
        while let Some(header) = iter.next()? {
            let unit = self.dwarf.unit(header)?;
            self.parse_unit(&unit)?;
        }

        Ok(())
    }

    fn parse_unit(&mut self, unit: &Unit<EndianSlice<'a, LittleEndian>>) -> Result<()> {
        let unit_offset = unit.header.offset().as_debug_info_offset().unwrap().0 as usize;

        // First pass: build struct name mapping
        {
            let mut entries = unit.entries();
            let mut namespace_stack: Vec<String> = Vec::new();

            while let Some((delta_depth, entry)) = entries.next_dfs()? {
                // Adjust namespace stack based on depth change
                if delta_depth <= 0 {
                    for _ in 0..(-delta_depth + 1) {
                        namespace_stack.pop();
                    }
                }

                let tag = entry.tag();

                // Record struct full name
                if tag == gimli::DW_TAG_structure_type {
                    if let Ok(local_name) = self.string_value(&entry, gimli::DW_AT_name) {
                        let full_name = {
                            let mut parts: Vec<&str> = namespace_stack
                                .iter()
                                .filter(|s| !s.is_empty())
                                .map(|s| s.as_str())
                                .collect();
                            parts.push(&local_name);
                            parts.join("::")
                        };
                        let key = (unit_offset, entry.offset().0);
                        self.struct_names.insert(key, full_name);
                    }
                }

                // Push to namespace stack
                let name = match tag {
                    gimli::DW_TAG_namespace | gimli::DW_TAG_module => {
                        self.string_value(&entry, gimli::DW_AT_name).ok()
                    }
                    _ => None,
                };
                namespace_stack.push(name.unwrap_or_default());
            }
        }

        // Second pass: process structs and subprograms
        {
            let mut entries = unit.entries();
            while let Some((_, entry)) = entries.next_dfs()? {
                let tag = entry.tag();
                match tag {
                    gimli::DW_TAG_structure_type => {
                        let _ = self.handle_structure(unit, &entry);
                    }
                    gimli::DW_TAG_subprogram => {
                        let _ = self.handle_subprogram(unit, &entry);
                    }
                    _ => {}
                }
            }
        }

        Ok(())
    }

    fn strip_hash(name: &str) -> String {
        let mut parts: Vec<&str> = name.split("::").collect();
        if parts.len() > 1
            && let Some(last) = parts.last()
        {
            if last.starts_with('h')
                && last.len() > 1
                && last[1..].chars().all(|c| c.is_ascii_hexdigit())
            {
                parts.pop();
            }
        }
        parts.join("::")
    }

    fn get_struct_full_name(
        &self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
    ) -> Result<String> {
        let unit_offset = unit.header.offset().as_debug_info_offset().unwrap().0 as usize;
        let key = (unit_offset, entry.offset().0);
        match self.struct_names.get(&key) {
            Some(n) => Ok(n.clone()),
            None => Err(anyhow!("Cannot find struct name")),
        }
    }

    fn handle_structure(
        &mut self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
    ) -> Result<()> {
        // Get full name from struct_names mapping
        let name = match self.get_struct_full_name(unit, entry) {
            Ok(n) => n,
            Err(_) => return Ok(()), // Skip anonymous structs
        };

        // Get struct size
        let size = match self.int_value(entry, gimli::DW_AT_byte_size) {
            Ok(s) => s,
            Err(_) => return Ok(()), // Skip structs without size (forward declarations)
        };

        // Try to parse as enum first, then as struct
        let type_repr = if let Some((discriminant_size, variants)) = self.parse_enum(unit, entry) {
            self.variant_structs.insert(name.clone());
            TypeRepr::Enumeration {
                name: name.clone(),
                size,
                discriminant_size,
                variants: if variants.is_empty() {
                    None
                } else {
                    Some(variants)
                },
            }
        } else {
            let fields = self.parse_struct_fields(unit, entry);
            TypeRepr::Struct {
                name: name.clone(),
                size,
                fields: if fields.is_empty() {
                    None
                } else {
                    Some(fields)
                },
            }
        };

        self.structs.insert(name, type_repr);
        Ok(())
    }

    /// Parse enum variants from a DW_TAG_variant_part.
    /// Returns Some((discriminant_size, variants)) if this is an enum, None otherwise.
    fn parse_enum(
        &self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
    ) -> Option<(u64, BTreeMap<String, (i64, Vec<TypeRepr>)>)> {
        if !entry.has_children() {
            return None;
        }

        let mut tree = unit.entries_tree(Some(entry.offset())).ok()?;
        let root = tree.root().ok()?;
        let mut children = root.children();

        while let Ok(Some(child)) = children.next() {
            if child.entry().tag() == gimli::DW_TAG_variant_part {
                let discriminant_size = self.parse_discriminant_size(unit, child.entry());
                let variants = self.parse_variants(unit, child);
                return Some((discriminant_size, variants));
            }
        }

        None
    }

    /// Parse discriminant size from DW_AT_discr attribute.
    fn parse_discriminant_size(
        &self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        variant_part: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
    ) -> u64 {
        self.resolve_entry(unit, variant_part, gimli::DW_AT_discr)
            .and_then(|discr| self.resolve_entry(unit, &discr, gimli::DW_AT_type))
            .and_then(|discr_type| self.int_value(&discr_type, gimli::DW_AT_byte_size))
            .unwrap_or(0)
    }

    /// Parse all variants from a DW_TAG_variant_part node.
    fn parse_variants(
        &self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        variant_part: gimli::EntriesTreeNode<EndianSlice<'a, LittleEndian>>,
    ) -> BTreeMap<String, (i64, Vec<TypeRepr>)> {
        let mut variants = BTreeMap::new();
        let mut variant_children = variant_part.children();

        while let Ok(Some(variant_node)) = variant_children.next() {
            if variant_node.entry().tag() != gimli::DW_TAG_variant {
                continue;
            }

            let discr_value = self
                .int_value(variant_node.entry(), gimli::DW_AT_discr_value)
                .map(|v| v as i64)
                .unwrap_or(0);

            if let Some((name, fields)) = self.parse_variant_member(unit, variant_node, discr_value)
            {
                variants.insert(name, (discr_value, fields));
            }
        }

        variants
    }

    /// Parse a single variant's member (name and fields).
    fn parse_variant_member(
        &self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        variant_node: gimli::EntriesTreeNode<EndianSlice<'a, LittleEndian>>,
        discr_value: i64,
    ) -> Option<(String, Vec<TypeRepr>)> {
        let mut member_children = variant_node.children();

        while let Ok(Some(member_node)) = member_children.next() {
            if member_node.entry().tag() != gimli::DW_TAG_member {
                continue;
            }

            let variant_name = self
                .string_value(member_node.entry(), gimli::DW_AT_name)
                .unwrap_or_else(|_| format!("Variant{}", discr_value));

            let variant_fields = self.parse_variant_fields(unit, member_node.entry());
            return Some((variant_name, variant_fields));
        }

        None
    }

    /// Parse fields inside a variant's type struct.
    fn parse_variant_fields(
        &self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        member_entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
    ) -> Vec<TypeRepr> {
        let mut fields = Vec::new();

        let member_type = match self.resolve_entry(unit, member_entry, gimli::DW_AT_type) {
            Ok(t) if t.tag() == gimli::DW_TAG_structure_type => t,
            _ => return fields,
        };

        let mut tree = match unit.entries_tree(Some(member_type.offset())) {
            Ok(t) => t,
            Err(_) => return fields,
        };

        let root = match tree.root() {
            Ok(r) => r,
            Err(_) => return fields,
        };

        let mut children = root.children();
        while let Ok(Some(field_node)) = children.next() {
            if field_node.entry().tag() != gimli::DW_TAG_member {
                continue;
            }

            if let Ok(field_type_entry) =
                self.resolve_entry(unit, field_node.entry(), gimli::DW_AT_type)
            {
                if let Ok(field_type) = self.parse_type(unit, &field_type_entry) {
                    fields.push(field_type);
                }
            }
        }

        fields
    }

    /// Parse struct fields from DW_TAG_member children.
    fn parse_struct_fields(
        &self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
    ) -> BTreeMap<u64, (String, TypeRepr)> {
        let mut fields = BTreeMap::new();

        if !entry.has_children() {
            return fields;
        }

        let mut tree = match unit.entries_tree(Some(entry.offset())) {
            Ok(t) => t,
            Err(_) => return fields,
        };

        let root = match tree.root() {
            Ok(r) => r,
            Err(_) => return fields,
        };

        let mut children = root.children();
        while let Ok(Some(child)) = children.next() {
            if child.entry().tag() != gimli::DW_TAG_member {
                continue;
            }

            let field_name = match self.string_value(child.entry(), gimli::DW_AT_name) {
                Ok(n) => n,
                Err(_) => continue,
            };

            let offset = match self.int_value(child.entry(), gimli::DW_AT_data_member_location) {
                Ok(o) => o,
                Err(_) => continue,
            };

            let field_type_entry = match self.resolve_entry(unit, child.entry(), gimli::DW_AT_type)
            {
                Ok(e) => e,
                Err(_) => continue,
            };

            if let Ok(field_type) = self.parse_type(unit, &field_type_entry) {
                fields.insert(offset, (field_name, field_type));
            }
        }

        fields
    }

    fn handle_subprogram(
        &mut self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
    ) -> Result<()> {
        // skip inlined
        if entry.attr_value(gimli::DW_AT_inline)?.is_some() {
            return Ok(());
        }

        let func_name = self.string_value(entry, gimli::DW_AT_linkage_name)?;
        let func_addr = if let Some(addr) = self.name_to_address.get(&func_name) {
            *addr
        } else {
            return Ok(());
        };
        let decl_path = self.resolve_decl_path(entry, unit)?;

        // skip library functions
        if decl_path.contains(".cargo")
            || decl_path.contains(".rustup")
            || decl_path.contains("/rustc/")
            || decl_path.contains("/rust/")
        {
            return Ok(());
        }

        let func_name = DwarfParser::strip_hash(&demangle(&func_name).to_string());
        if func_name.contains("{{closure}}") {
            return Ok(());
        }

        let ret_ty_entry = self.resolve_entry(unit, entry, gimli::DW_AT_type);
        let ret_ty = if let Ok(ret_ty_entry) = ret_ty_entry {
            self.parse_type(unit, &ret_ty_entry)
                .unwrap_or(TypeRepr::None)
        } else {
            TypeRepr::None
        };
        let mut arg_tys = Vec::new();
        if let Ok(mut tree) = unit.entries_tree(Some(entry.offset())) {
            if let Ok(root) = tree.root() {
                let mut children = root.children();
                while let Some(child) = children.next()? {
                    if child.entry().tag() == gimli::DW_TAG_formal_parameter {
                        let param_entry = child.entry();
                        let param_ty_entry =
                            self.resolve_entry(unit, &param_entry, gimli::DW_AT_type);
                        if let Ok(param_ty_entry) = param_ty_entry {
                            let param_ty = self
                                .parse_type(unit, &param_ty_entry)
                                .unwrap_or(TypeRepr::None);
                            arg_tys.push(param_ty);
                        } else {
                            arg_tys.push(TypeRepr::None);
                        }
                    }
                }
            }
        }

        let prototype = TypeRepr::Prototype {
            args: arg_tys,
            returnty: Some(Box::new(ret_ty)),
        };
        let local_variables = self.parse_local_variables(unit, entry);

        self.functions.insert(
            decl_path,
            Function {
                name: func_name,
                addr: func_addr,
                prototype,
                local_variables,
            },
        );

        Ok(())
    }

    fn parse_local_variable(
        &self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
    ) -> Result<Variable> {
        let real = self
            .resolve_entry(unit, entry, gimli::DW_AT_abstract_origin)
            .unwrap_or(entry.clone());
        let var_name = self.string_value(&real, gimli::DW_AT_name)?;
        let var_type_entry = self.resolve_entry(unit, &real, gimli::DW_AT_type)?;
        let var_type = self.parse_type(unit, &var_type_entry)?;
        if let Some(loc_attr) = real.attr_value(gimli::DW_AT_location)? {
            match loc_attr {
                AttributeValue::Exprloc(expr) => {
                    // parse expr to get location
                    // for simplicity, just print the expression bytes here
                    let expr_bytes = expr.0.clone();
                    let op = gimli::DwOp(expr_bytes[0]);
                    let loc = gimli::Operation::parse(&mut expr_bytes.clone(), unit.encoding());
                    if let Ok(gimli::Operation::FrameOffset { offset }) = loc {
                        match op {
                            gimli::DW_OP_fbreg => {
                                return Ok(Variable {
                                    name: var_name,
                                    ty: var_type,
                                    category: "stack".to_string(),
                                    location: offset.to_string(),
                                });
                            }
                            _ => {
                                if gimli::DW_OP_reg0 <= op && op <= gimli::DW_OP_reg15 {
                                    let reg_idx = op.0 - gimli::DW_OP_reg0.0;
                                    let reg_name = match reg_idx {
                                        0 => "rax",
                                        1 => "rdx",
                                        2 => "rcx",
                                        3 => "rbx",
                                        4 => "rsi",
                                        5 => "rdi",
                                        6 => "rbp",
                                        7 => "rsp",
                                        8 => "r8",
                                        9 => "r9",
                                        10 => "r10",
                                        11 => "r11",
                                        12 => "r12",
                                        13 => "r13",
                                        14 => "r14",
                                        15 => "r15",
                                        _ => "unknown",
                                    };
                                    return Ok(Variable {
                                        name: var_name,
                                        ty: var_type,
                                        category: "register".to_string(),
                                        location: reg_name.to_string(),
                                    });
                                }
                            }
                        };
                    }
                }
                _ => {}
            }
        }
        Err(anyhow!("Failed to parse local variable location"))
    }

    fn parse_local_variables(
        &self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
    ) -> Vec<Variable> {
        let mut vars = Vec::new();
        if let Ok(mut tree) = unit.entries_tree(Some(entry.offset())) {
            if let Ok(root) = tree.root() {
                // Use a queue of offsets (copyable) to avoid holding multiple mutable borrows
                // of the children iterator by storing nodes that borrow the tree.
                let mut queue: Vec<UnitOffset> = vec![root.entry().offset()];
                while let Some(offset) = queue.pop() {
                    if let Ok(mut subtree) = unit.entries_tree(Some(offset)) {
                        if let Ok(subroot) = subtree.root() {
                            let entry = subroot.entry();
                            if entry.tag() == gimli::DW_TAG_variable {
                                if let Ok(var) = self.parse_local_variable(unit, &entry) {
                                    let size = match &var.ty {
                                        TypeRepr::Struct { size, .. } => *size,
                                        TypeRepr::Enumeration { size, .. } => *size,
                                        _ => 1, // just a placeholder
                                    };
                                    if size > 0 {
                                        vars.push(var);
                                    }
                                }
                            }
                            let mut children = subroot.children();
                            while let Ok(Some(child)) = children.next() {
                                queue.push(child.entry().offset());
                            }
                        }
                    }
                }
            }
        }
        vars
    }

    /// Parse a type DIE given (unit_id, offset)
    fn parse_type(
        &self,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
    ) -> Result<TypeRepr> {
        let result = match entry.tag() {
            gimli::DW_TAG_pointer_type => {
                if let Ok(type_entry) = self.resolve_entry(unit, entry, gimli::DW_AT_type) {
                    let pts = self.parse_type(unit, &type_entry)?;
                    TypeRepr::Pointer {
                        pts_to: Box::new(pts),
                    }
                } else {
                    TypeRepr::Pointer {
                        pts_to: Box::new(TypeRepr::None),
                    }
                }
            }

            gimli::DW_TAG_structure_type => {
                let name = match self.get_struct_full_name(unit, entry) {
                    Ok(n) => n,
                    Err(_) => return Ok(TypeRepr::None), // Skip anonymous structs
                };
                let size = self.int_value(entry, gimli::DW_AT_byte_size)?;
                // Determine whether this structure contains a DW_TAG_variant_part child.
                let mut is_variant_part = false;
                if entry.has_children() {
                    // Use the entries_tree API to iterate over immediate children of this entry.
                    if let Ok(mut tree) = unit.entries_tree(Some(entry.offset())) {
                        if let Ok(root) = tree.root() {
                            let mut children = root.children();
                            while let Some(child) = children.next()? {
                                if child.entry().tag() == gimli::DW_TAG_variant_part {
                                    is_variant_part = true;
                                    break;
                                }
                            }
                        }
                    }
                }
                if is_variant_part {
                    TypeRepr::Enumeration {
                        name,
                        size,
                        discriminant_size: size,
                        variants: None,
                    }
                } else {
                    TypeRepr::Struct {
                        name,
                        size,
                        fields: None,
                    }
                }
            }

            gimli::DW_TAG_base_type => {
                let name = self.string_value(entry, gimli::DW_AT_name)?;
                let size = self.int_value(entry, gimli::DW_AT_byte_size)?;
                TypeRepr::Primitive { name, size }
            }

            gimli::DW_TAG_enumeration_type => {
                if let Ok(type_entry) = self.resolve_entry(unit, entry, gimli::DW_AT_type) {
                    self.parse_type(unit, &type_entry)?
                } else {
                    TypeRepr::None
                }
            }

            gimli::DW_TAG_array_type => {
                // element type + subrange
                if let Ok(type_entry) = self.resolve_entry(unit, entry, gimli::DW_AT_type) {
                    let ele = self.parse_type(unit, &type_entry)?;
                    // subrange
                    let mut len = None;
                    if let Ok(mut tree) = unit.entries_tree(Some(entry.offset())) {
                        if let Ok(root) = tree.root() {
                            let mut children = root.children();
                            while let Some(child) = children.next()? {
                                let child_entry = child.entry();
                                if child_entry.tag() == gimli::DW_TAG_subrange_type {
                                    len = Some(self.int_value(&child_entry, gimli::DW_AT_count)?);
                                }
                            }
                        }
                    }
                    if let Some(len) = len {
                        TypeRepr::Array {
                            ele_type: Box::new(ele),
                            length: len,
                        }
                    } else {
                        TypeRepr::None
                    }
                } else {
                    TypeRepr::None
                }
            }

            _ => TypeRepr::None,
        };
        Ok(result)
    }

    fn resolve_decl_path(
        &self,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
        unit: &Unit<EndianSlice<'a, LittleEndian>>,
    ) -> Result<String> {
        let file_index = self.int_value(entry, gimli::DW_AT_decl_file)?;
        let decl_line = self.int_value(entry, gimli::DW_AT_decl_line)?;
        let header = unit
            .line_program
            .as_ref()
            .ok_or(anyhow!("failed to get line program"))?
            .header();

        if let Some(file) = header.file(file_index)
            && let Some(dir) = header.directory(file.directory_index())
        {
            if let Some(file_name) = file.path_name().string_value(&self.dwarf.debug_str)
                && let Some(dir_name) = dir.string_value(&self.dwarf.debug_str)
                && let Some(comp_dir_name) = unit.comp_dir
            {
                let file_name = file_name.to_string_lossy().to_string();
                let dir_name = dir_name.to_string_lossy().to_string();
                let comp_dir_name = comp_dir_name.to_string_lossy().to_string();

                let full_path = std::path::Path::new(&comp_dir_name)
                    .join(std::path::Path::new(&dir_name))
                    .join(std::path::Path::new(&file_name))
                    .to_string_lossy()
                    .to_string();
                return Ok(format!("{}:{:?}", full_path, decl_line));
            }
        }
        Err(anyhow!("failed to resolve declaration path"))
    }

    fn int_value(
        &self,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
        name: gimli::DwAt,
    ) -> Result<u64> {
        if let Ok(attr) = entry.attr(name) {
            if let Some(attr) = attr {
                if let Some(d) = attr.udata_value() {
                    return Ok(d);
                }
            }
        }
        Err(anyhow!("missing integer value"))
    }

    fn string_value(
        &self,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'a, LittleEndian>>,
        name: gimli::DwAt,
    ) -> Result<String> {
        if let Ok(attr) = entry.attr(name) {
            if let Some(attr) = attr {
                if let Some(s) = attr.string_value(&self.dwarf.debug_str) {
                    return Ok(s.to_string_lossy().to_string());
                }
            }
        }
        Err(anyhow!("missing string value"))
    }

    fn resolve_entry<'u>(
        &self,
        unit: &'u Unit<EndianSlice<'a, LittleEndian>>,
        entry: &gimli::DebuggingInformationEntry<EndianSlice<'u, LittleEndian>>,
        name: gimli::DwAt,
    ) -> Result<gimli::DebuggingInformationEntry<EndianSlice<'u, LittleEndian>>> {
        if let Ok(attr) = entry.attr(name) {
            if let Some(attr) = attr {
                match attr.value() {
                    AttributeValue::UnitRef(ro) => {
                        let offset = ro.0;
                        if let Ok(e) = unit.entry(ReadUnitOffset(offset)) {
                            return Ok(e);
                        }
                    }
                    _ => {}
                }
            }
        }
        Err(anyhow!("failed to resolve entry"))
    }
}

fn main() -> Result<()> {
    let binary_path = std::env::args()
        .nth(1)
        .expect("Usage: dwarf_parser <binary_path> <output_path>");
    let output_path = std::env::args()
        .nth(2)
        .expect("Usage: dwarf_parser <binary_path> <output_path>");

    let mut parser = DwarfParser::from_file(&binary_path)?;
    parser.parse_all()?;

    // dump to json
    let result = json!({
        "symbols": parser.address_to_name,
        "functions": parser.functions,
        "structs": parser.structs,
    });
    let json = serde_json::to_string_pretty(&result)?;
    std::fs::write(&output_path, json)?;
    Ok(())
}
