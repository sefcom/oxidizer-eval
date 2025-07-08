from collections import defaultdict
import sys
import os

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import *


STRUCTS_PY_TEMPLATE = """from collections import OrderedDict
from angr.rust.sim_type import (
    RustSimStruct,
    RustSimTypeReference,
    RustSimTypeSize,
    RustSimTypeBottom,
    RustSimTypeInt,
    RustSimTypeOption,
    RustSimTypeResult,
    RustSimTypeArrayRef,
    RustSimTypeStrRef,
    RustSimTypeUnit,
    RustSimEnum,
    EnumVariant,
    RustSimTypeArray,
)

default_structs = OrderedDict()

"""

INDENT_STR = " " * 4
PRIMITIVE_MAPPINGS = {
    "i8": "RustSimTypeInt(8, signed=True)",
    "i16": "RustSimTypeInt(16, signed=True)",
    "i32": "RustSimTypeInt(32, signed=True)",
    "i64": "RustSimTypeInt(64, signed=True)",
    "i128": "RustSimTypeInt(128, signed=True)",
    "isize": "RustSimTypeSize(signed=True)",
    "u8": "RustSimTypeInt(8, signed=False)",
    "u16": "RustSimTypeInt(16, signed=False)",
    "u32": "RustSimTypeInt(32, signed=False)",
    "u64": "RustSimTypeInt(64, signed=False)",
    "u128": "RustSimTypeInt(128, signed=False)",
    "usize": "RustSimTypeSize(signed=False)",
    "f32": "RustSimTypeInt(32, signed=False)",
    "f64": "RustSimTypeInt(64, signed=False)",
    "char": "RustSimTypeInt(8, signed=False)",
    "bool": "RustSimTypeInt(1, signed=False)",
    "()": "RustSimTypeUnit()",
    "!": None,
}

IS_ARG0_RETBUF = {
    "<&T as core::borrow::Borrow<T>>::borrow": False,
    "<&[u8] as object::read::read_ref::ReadRef>::read_bytes_at_until": False,
    "<alloc::alloc::Global as core::alloc::Allocator>::allocate": False,
    "<alloc::alloc::Global as core::alloc::Allocator>::allocate_zeroed": False,
    "<alloc::alloc::Global as core::alloc::Allocator>::grow": False,
    "<std::fs::File as std::io::Read>::read_to_string": False,
    "<std::panicking::begin_panic_handler::FormatStringPayload as core::panic::PanicPayload>::get": True,
    "<std::panicking::begin_panic_handler::FormatStringPayload as core::panic::PanicPayload>::take_box": False,
    "<std::panicking::begin_panic_handler::StaticStrPayload as core::panic::PanicPayload>::as_str": False,
    "<std::panicking::begin_panic_handler::StaticStrPayload as core::panic::PanicPayload>::get": False,
    "<std::panicking::begin_panic_handler::StaticStrPayload as core::panic::PanicPayload>::take_box": False,
    "<std::process::ChildStdin as std::io::Write>::write": False,
    "<std::sys::pal::unix::stdio::Stderr as std::io::Write>::write": False,
    "<std::sys::pal::unix::stdio::Stderr as std::io::Write>::write_vectored": False,
    "alloc::alloc::Global::alloc_impl": False,
    "alloc::alloc::Global::grow_impl": False,
    "alloc::ffi::c_str::CString::_from_vec_unchecked": True,
    "alloc::sync::arcinner_layout_for_value_layout": False,
    "core::alloc::layout::Layout::array::inner": False,
    "core::num::<impl core::str::traits::FromStr for usize>::from_str": True,
    "core::num::<impl u64>::from_str_radix": True,
    "core::num::<impl usize>::checked_add": False,
    "core::num::<impl usize>::from_str_radix": True,
    "core::slice::iter::Iter<T>::make_slice": False,
    "core::slice::memchr::memchr_aligned": False,
    "core::slice::memchr::memrchr": False,
    "gimli::read::reader::Reader::read_offset": True,
    "gimli::read::reader::Reader::read_sized_offset": True,
    "gimli::read::reader::Reader::read_uleb128": True,
    "gimli::read::unit::AttributeValue<R,Offset>::udata_value": False,
    "gimli::read::unit::EntriesCursor<R>::next_entry": False,
    "gimli::read::unit::skip_attributes": True,
    "memchr::memchr::x86::sse2::memchr": False,
    "rustc_demangle::v0::HexNibbles::try_parse_uint": False,
    "rustc_demangle::v0::Parser::disambiguator": True,
    "rustc_demangle::v0::Parser::hex_nibbles": True,
    "rustc_demangle::v0::Parser::integer_62": True,
    "std::backtrace_rs::symbolize::gimli::elf::Object::build_id": False,
    "std::backtrace_rs::symbolize::gimli::elf::Object::section": False,
    "std::backtrace_rs::symbolize::gimli::stash::Stash::allocate": True,
    "std::fs::File::create": True,
    "std::fs::OpenOptions::_open": True,
    "std::fs::OpenOptions::open": True,
    "std::fs::buffer_capacity_required": False,
    "std::io::impls::<impl std::io::Write for alloc::vec::Vec<u8,A>>::write": True,
    "std::io::impls::<impl std::io::Write for alloc::vec::Vec<u8,A>>::write_vectored": False,
    "std::path::<impl core::convert::AsRef<std::path::Path> for str>::as_ref": False,
    "std::sys::pal::unix::fs::File::open_c": True,
}


class StructsPyGenerator:

    def __init__(self, structs):
        self.structs = structs
        self.output = STRUCTS_PY_TEMPLATE

        self.struct_defs = {}
        self.struct_deps = defaultdict(set)

        self.added_structs = set()

    def add_struct(self, struct_name):
        if struct_name in self.added_structs:
            return True
        if struct_name not in self.struct_defs:
            return False
        if all(self.add_struct(dep) for dep in self.struct_deps[struct_name]):
            self.output += f"default_structs['{struct_name}'] = {self.struct_defs[struct_name]}\n\n"
            self.added_structs.add(struct_name)
            return True
        return False

    def _translate(self, ty: Type, visited):
        translators = {
            Primitive: self._translate_primitive,
            Pointer: self._translate_pointer,
            Struct: self._translate_struct,
            Enumeration: self._translate_enum,
            Array: self._translate_array,
        }
        translator = translators.get(ty.__class__, None)
        ty = translator(ty, visited) if translator else None
        return ty

    def _translate_primitive(self, ty: Primitive, visited):
        return PRIMITIVE_MAPPINGS[ty.name]

    def _translate_pointer(self, ty: Pointer, visited):
        pts_to = self._translate(ty.pts_to, visited)
        return f"RustSimTypeReference({pts_to if pts_to else 'RustSimTypeBottom()'})"

    def _translate_struct(self, ty: Struct, visited):
        if ty.name in visited or ty.name not in self.structs:
            return None
        if ty.fields is None:
            ty = self.structs[ty.name]
        # Translate to array reference instead
        if ty.name.startswith("&[") and ty.name.endswith("]"):
            ele_ty = self._translate(ty.fields[0][1].pts_to, visited)
            if ele_ty:
                return f"RustSimTypeArrayRef({ele_ty})"
        for _, (_, field_ty) in ty.fields.items():
            if not self._translate(field_ty, visited + [ty.name]):
                return None
        self.struct_deps[visited[-1]].add(ty.name)
        return f"default_structs['{ty.name}']"

    def _translate_array(self, ty: Array, visited):
        elem_ty = self._translate(ty.ele_type, visited)
        if elem_ty:
            return f"RustSimTypeArray({elem_ty}, {ty.length})"
        return None

    def _translate_enum(self, ty: Enumeration, visited):
        if ty.name in visited or ty.name not in self.structs:
            return None
        if ty.variants is None:
            ty = self.structs[ty.name]
        for _, (_, variant_fields) in ty.variants.items():
            for field_ty in variant_fields:
                if not self._translate(field_ty, visited + [ty.name]):
                    return None
        self.struct_deps[visited[-1]].add(ty.name)
        return f"default_structs['{ty.name}']"

    def _record_struct_def(self, struct: Struct):
        if struct.name in self.added_structs:
            return True
        struct_def = f"RustSimStruct(name='{struct.name}', fields={{"
        for field_name, field_ty in struct.fields.values():
            field_ty = self._translate(field_ty, visited=[struct.name])
            if field_ty:
                struct_def += f'"{field_name}": {field_ty}, '
            else:
                return False
        struct_def += "})"
        self.struct_defs[struct.name] = struct_def
        return True

    def _record_enum_def(self, ty: Enumeration):
        name_to_variant = {}
        for name, (discriminant, variant_fields) in ty.variants.items():
            variant_field_types = []
            for variant_field in variant_fields:
                variant_field_types.append((self._translate(variant_field, [ty.name]), None))
            if (None, None) in variant_field_types:
                return
            name_to_variant[name] = (discriminant, variant_field_types)
        if (
            ty.name.startswith("core::result::Result<")
            and ty.name.endswith(">")
            and set(name_to_variant.keys()) == {"Ok", "Err"}
        ):
            ok_discriminant, ((ok_type, _),) = name_to_variant["Ok"]
            err_discriminant, ((err_type, _),) = name_to_variant["Err"]
            ok_discriminant_size = ty.discriminant_size if ok_discriminant is not None else 0
            err_discriminant_size = ty.discriminant_size if err_discriminant is not None else 0
            enum_def = f"RustSimTypeResult({ok_type}, {ok_discriminant}, {ok_discriminant_size}, {err_type}, {err_discriminant}, {err_discriminant_size}, name='{ty.name}')"
            self.struct_defs[ty.name] = enum_def
        elif (
            ty.name.startswith("core::option::Option<")
            and ty.name.endswith(">")
            and set(name_to_variant.keys()) == {"None", "Some"}
        ):
            none_discriminant, _ = name_to_variant["None"]
            some_discriminant, ((some_type, _),) = name_to_variant["Some"]
            none_discriminant_size = ty.discriminant_size if none_discriminant is not None else 0
            some_discriminant_size = ty.discriminant_size if some_discriminant is not None else 0
            enum_def = f"RustSimTypeOption({none_discriminant}, {none_discriminant_size}, {some_type}, {some_discriminant}, {some_discriminant_size}, name='{ty.name}')"
            self.struct_defs[ty.name] = enum_def
        else:
            variants = []
            for name, (discriminant, variant_field_types) in name_to_variant.items():
                variant_field_types = [f"({ty}, {name})" for ty, name in variant_field_types]
                variant_def = f"EnumVariant('{name}', [{', '.join(variant_field_types)}], {discriminant}, {ty.discriminant_size if discriminant is not None else 0})"
                variants.append(variant_def)
            enum_def = f"RustSimEnum('{ty.name}', [{', '.join(variants)}])"
            self.struct_defs[ty.name] = enum_def

    def generate(self):
        for struct in self.structs.values():
            if isinstance(struct, Struct):
                self._record_struct_def(struct)
            elif isinstance(struct, Enumeration):
                self._record_enum_def(struct)
        for struct_name in self.struct_defs:
            self.add_struct(struct_name)
        return self.output


PROTOTYPES_PY_TEMPLATE = """from angr.rust.sim_type import (
    RustSimTypeFunction,
    RustSimTypeInt,
    RustSimTypeReference,
    RustSimTypeSize,
    RustSimTypeBottom,
    RustSimTypeResult,
    RustSimTypeArrayRef,
    RustSimTypeUnit,
    RustSimTypeStrRef,
    RustSimTypeArray,
)

def generate_known_rust_prototypes(project):
    known_structs = project.kb.known_structs
    return {
        "std::io::Write::write_all": RustSimTypeFunction(
            args=[RustSimTypeReference(RustSimTypeBottom()), RustSimTypeArrayRef(RustSimTypeInt(8))],
            returnty=RustSimTypeResult(
                RustSimTypeUnit(), 0, project.arch.bytes, RustSimTypeReference(RustSimTypeBottom()), None, 0
            ),
        ),
        "core::result::unwrap": RustSimTypeFunction(
            args=[RustSimTypeReference(RustSimTypeInt(64))], returnty=None, is_class_member_function=True
        ),
        "core::option::unwrap": RustSimTypeFunction(
            args=[RustSimTypeReference(RustSimTypeInt(64))], returnty=None, is_class_member_function=True
        ),
{prototypes}   
    }
"""


class PrototypesPyGenerator:

    def __init__(self, prototype_info, structs_gen):
        self.prototype_info = prototype_info
        self.structs_gen = structs_gen

    def _translate(self, ty: Type):
        translators = {
            Primitive: self._translate_primitive,
            Pointer: self._translate_pointer,
            Struct: self._translate_struct,
            Enumeration: self._translate_struct,
            Array: self._translate_array,
        }
        translator = translators.get(ty.__class__, None)
        ty = translator(ty) if translator else None
        return ty

    def _translate_primitive(self, ty: Primitive):
        return PRIMITIVE_MAPPINGS[ty.name]

    def _translate_pointer(self, ty: Pointer):
        pts_to = self._translate(ty.pts_to)
        return f"RustSimTypeReference({pts_to if pts_to else 'RustSimTypeBottom()'})"

    def _translate_struct(self, ty: Struct | Enumeration):
        # Translate to array reference instead
        if ty.name.startswith("&[") and ty.name.endswith("]"):
            if ty.fields is None:
                ty = self.structs_gen.structs[ty.name]
            ele_ty = self._translate(ty.fields[0][1].pts_to)
            if ele_ty:
                return f"RustSimTypeArrayRef({ele_ty})"
        if ty.name in self.structs_gen.added_structs:
            return f"known_structs['{ty.name}']"
        return None

    def _translate_array(self, ty: Array):
        elem_ty = self._translate(ty.ele_type)
        if elem_ty:
            return f"RustSimTypeArray({elem_ty}, {ty.length})"
        return None

    def generate(self):
        prototypes_py = ""
        for funcname, prototypes in self.prototype_info.items():
            if len(prototypes) > 1:
                continue
            for prototype in prototypes:
                # Calibrate return type
                is_arg0_retbuf = False
                if funcname == "std::fs::metadata":
                    import ipdb

                    ipdb.set_trace()
                if isinstance(prototype.returnty, (Struct, Enumeration)):
                    if prototype.returnty.size > 16:
                        is_arg0_retbuf = True
                        prototype = Prototype((Pointer(prototype.returnty),) + prototype.args, None)
                    elif prototype.returnty.size == 16:
                        if IS_ARG0_RETBUF.get(funcname, False):
                            is_arg0_retbuf = True
                            prototype = Prototype((Pointer(prototype.returnty),) + prototype.args, None)
                # Calibrate struct argument types
                new_args = []
                for arg in prototype.args:
                    if isinstance(arg, (Struct, Enumeration)) and arg.size > 16:
                        arg = Pointer(arg)
                    new_args.append(arg)
                prototype = Prototype(tuple(new_args), prototype.returnty)
                args = [self._translate(arg) for arg in prototype.args]
                returnty = self._translate(prototype.returnty)
                if None not in args:
                    angr_prototype = f"{INDENT_STR * 2}'{funcname}': RustSimTypeFunction(args=[{', '.join(args)}], returnty={returnty or 'None'}, is_arg0_retbuf={is_arg0_retbuf}),\n"
                    prototypes_py += angr_prototype
        return PROTOTYPES_PY_TEMPLATE.replace("{prototypes}", prototypes_py)


def generate_py_files(prototype_info, struct_info):
    structs_gen = StructsPyGenerator(struct_info)
    structs_py = structs_gen.generate()
    prototypes_py = PrototypesPyGenerator(prototype_info, structs_gen).generate()
    return prototypes_py, structs_py


if __name__ == "__main__":
    parser = DwarfParser()
    parser.parse_json("output/dwarf/std.json")
    prototypes_py, structs_py = generate_py_files(parser.prototypes, parser.structs)
    with open("output/prototypes.py", "w", encoding="utf-8") as fd:
        fd.write(prototypes_py)
    with open("output/structs.py", "w", encoding="utf-8") as fd:
        fd.write(structs_py)
