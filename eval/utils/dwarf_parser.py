from collections import defaultdict
from dataclasses import dataclass, asdict
from pprint import pprint
import json
import traceback
from collections import OrderedDict

from elftools.dwarf.dwarf_expr import DWARFExprParser
from elftools.elf.elffile import ELFFile
from angr.rust.utils.library import demangle


class Type:
    pass


@dataclass(frozen=True)
class Pointer(Type):
    pts_to: Type


@dataclass(frozen=True)
class Primitive(Type):
    name: str
    size: int


@dataclass(frozen=True)
class Struct(Type):
    name: str
    size: int
    fields: dict[int, tuple[str, Type]]


@dataclass(frozen=True)
class Enumeration(Type):
    name: str
    size: int
    discriminant_size: int
    variants: dict[str, tuple[int, list[Type]]]


@dataclass(frozen=True)
class Array(Type):
    ele_type: Type
    length: int


@dataclass(frozen=True)
class Prototype:
    args: tuple[Type]
    returnty: Type


@dataclass(frozen=True)
class Variable:
    name: str
    type: Type
    category: str
    location: str | int


DWARF_REG_MAP_X64 = {
    0: "rax",
    1: "rdx",
    2: "rcx",
    3: "rbx",
    4: "rsi",
    5: "rdi",
    6: "rbp",
    7: "rsp",
    8: "r8",
    9: "r9",
    10: "r10",
    11: "r11",
    12: "r12",
    13: "r13",
    14: "r14",
    15: "r15",
}


class NoExistenceException(Exception):

    def __init__(self, message):
        self.message = message
        super().__init__(self.message)


class DwarfParser:

    def __init__(self):

        self.structs = {}
        self.prototypes = defaultdict(set)
        self.local_variables = defaultdict(list)
        self._variant_structs = set()

    @staticmethod
    def _get_full_name(die, name):
        full_name = name
        parent = die.get_parent()
        while parent and parent.tag != "DW_TAG_compile_unit":
            full_name = DwarfParser._get_value(parent, "DW_AT_name").decode() + "::" + full_name
            parent = parent.get_parent()
        return full_name

    @staticmethod
    def _get_value(die, attr, ensure_existence=True):
        attr = die.attributes.get(attr)
        if attr is None and ensure_existence:
            raise NoExistenceException()
        return attr.value if attr else None

    @staticmethod
    def _get_children(die, tag, ensure_existence=True):
        result = []
        for child in die.iter_children():
            if child.tag == tag:
                result.append(child)
        if not result and ensure_existence:
            raise NoExistenceException()
        return result

    @staticmethod
    def _get_child(die, tag, ensure_existence=True):
        children = DwarfParser._get_children(die, tag, ensure_existence)
        return children[0] if children else None

    @staticmethod
    def _get_referred_die(die, attr, ensure_existence=True):
        value = DwarfParser._get_value(die, attr, ensure_existence)
        referred_die = None
        if value:
            referred_die = die.cu.dwarfinfo.get_DIE_from_refaddr(value + die.cu.cu_offset)
        assert referred_die or not ensure_existence
        return referred_die

    def _parse_type(self, die):
        if die.tag == "DW_TAG_pointer_type":
            pointed_to_die = self._get_referred_die(die, "DW_AT_type")
            ty = self._parse_type(pointed_to_die)
            return Pointer(ty)
        elif die.tag == "DW_TAG_structure_type":
            name = self._get_value(die, "DW_AT_name").decode()
            full_name = self._get_full_name(die, name)
            size = self._get_value(die, "DW_AT_byte_size")
            if self._get_child(die, "DW_TAG_variant_part", ensure_existence=False):
                return Enumeration(full_name, size, size, None)
            return Struct(full_name, size, None)
        elif die.tag == "DW_TAG_base_type":
            size = self._get_value(die, "DW_AT_byte_size")
            return Primitive(self._get_value(die, "DW_AT_name").decode(), size)
        elif die.tag == "DW_TAG_enumeration_type":
            type_die = self._get_referred_die(die, "DW_AT_type")
            return self._parse_type(type_die)
        elif die.tag == "DW_TAG_array_type":
            ele_ty_die = self._get_referred_die(die, "DW_AT_type")
            ele_ty = self._parse_type(ele_ty_die)
            length = None
            subrange_die = self._get_child(die, "DW_TAG_subrange_type")
            length = self._get_value(subrange_die, "DW_AT_count")
            assert length is not None
            return Array(ele_ty, length)
        return None

    def _parse_member(self, die):
        field_name = self._get_value(die, "DW_AT_name").decode()
        field_offset = self._get_value(die, "DW_AT_data_member_location")
        type_die = self._get_referred_die(die, "DW_AT_type")
        field_ty = self._parse_type(type_die)
        return field_offset, field_name, field_ty

    def _parse_discriminant_size(self, die):
        if die:
            type_die = self._get_referred_die(die, "DW_AT_type")
            return self._get_value(type_die, "DW_AT_byte_size")
        return 0

    def _parse_variant(self, die):
        variant_name = self._get_value(die, "DW_AT_name").decode()
        type_die = self._get_referred_die(die, "DW_AT_type")
        full_name = self._get_full_name(type_die, variant_name)
        self._variant_structs.add(full_name)
        variant_fields = []
        for field_die in self._get_children(type_die, "DW_TAG_member", ensure_existence=False):
            _, _, field_ty = self._parse_member(field_die)
            variant_fields.append(field_ty)
        return variant_name, tuple(variant_fields)

    def _add_enum(self, name, size, die):
        variant_part_die = self._get_child(die, "DW_TAG_variant_part")
        discr_die = self._get_referred_die(variant_part_die, "DW_AT_discr", ensure_existence=False)
        discriminant_size = self._parse_discriminant_size(discr_die)
        variants = {}
        for variant_die in self._get_children(variant_part_die, "DW_TAG_variant", ensure_existence=False):
            discriminant = self._get_value(variant_die, "DW_AT_discr_value", ensure_existence=False)
            variant_name, variant_fields = self._parse_variant(self._get_child(variant_die, "DW_TAG_member"))
            variants[variant_name] = (discriminant, variant_fields)
        self.structs[name] = Enumeration(name, size, discriminant_size, variants)

    def _add_struct(self, name, size, die):
        fields = OrderedDict()
        for child in self._get_children(die, "DW_TAG_member", ensure_existence=False):
            field_offset, field_name, field_ty = self._parse_member(child)
            fields[field_offset] = (field_name, field_ty)
        fields = OrderedDict(sorted(fields.items(), key=lambda t: t[0]))
        self.structs[name] = Struct(name, size, fields)

    def _handle_structure(self, die):
        name = self._get_value(die, "DW_AT_name", ensure_existence=False)
        if name is None:
            return
        name = name.decode()
        full_name = self._get_full_name(die, name)
        size = self._get_value(die, "DW_AT_byte_size", ensure_existence=False)
        if self._get_child(die, "DW_TAG_variant_part", ensure_existence=False):
            self._add_enum(full_name, size, die)
        else:
            self._add_struct(full_name, size, die)

    def _parse_local_variables(self, die, func_name):
        expr_parser = DWARFExprParser(die.cu.dwarfinfo.structs)
        queue = [die]
        while queue:
            child = queue.pop()
            queue += list(child.iter_children())
            if child.tag == "DW_TAG_variable":
                origin_die = self._get_referred_die(child, "DW_AT_abstract_origin", ensure_existence=False)
                if origin_die:
                    child = origin_die

                var_name = self._get_value(child, "DW_AT_name", ensure_existence=False)
                var_name = var_name.decode() if var_name else None
                var_type_die = self._get_referred_die(child, "DW_AT_type", ensure_existence=False)

                var_type = self._parse_type(var_type_die)

                # Parse location type
                var_location_attr = child.attributes.get("DW_AT_location")
                var_category = "unknown"
                offset_or_reg = None

                if var_location_attr:
                    if var_location_attr.form.startswith("DW_FORM_sec_offset"):
                        var_category = "location_list"
                    else:
                        ops = expr_parser.parse_expr(var_location_attr.value)
                        if ops:
                            op = ops[0]
                            if op.op_name.startswith("DW_OP_reg"):
                                var_category = "register"
                                reg_num = int(op.op_name.replace("DW_OP_reg", ""))
                                offset_or_reg = DWARF_REG_MAP_X64.get(reg_num, None)
                                if not offset_or_reg:
                                    continue
                            elif op.op_name == "DW_OP_fbreg":
                                var_category = "stack"
                                offset_or_reg = op.args[0]  # signed offset
                            # elif op.op_name.startswith("DW_OP_breg"):
                            #     var_category = "stack"
                            #     offset_or_reg = (op.op_name, op.args[0])  # register base + offset
                if var_category in ("stack", "register"):
                    var_info = Variable(var_name, var_type, var_category, offset_or_reg)
                    if var_info not in self.local_variables[func_name]:
                        self.local_variables[func_name].append(var_info)

    def _handle_subprogram(self, die):
        if die.attributes.get("DW_AT_inline", None):
            return
        func_name = die.attributes.get("DW_AT_linkage_name", None)
        if func_name:
            func_name = demangle(func_name.value.decode())
            returnty_die = self._get_referred_die(die, "DW_AT_type", ensure_existence=False)
            returnty = self._parse_type(returnty_die) if returnty_die else None
            args = []
            for child in self._get_children(die, "DW_TAG_formal_parameter", ensure_existence=False):
                arg_die = self._get_referred_die(child, "DW_AT_type")
                args.append(self._parse_type(arg_die))
            prototype = Prototype(tuple(args), returnty)
            self.prototypes[func_name].add(prototype)

            self._parse_local_variables(die, func_name)

    def parse(self, path):
        with open(path, "rb") as fd:
            elffile = ELFFile(fd)
            for cu in elffile.get_dwarf_info().iter_CUs():
                queue = list(cu.iter_DIEs())
                while queue:
                    die = queue.pop()
                    try:
                        if die.tag == "DW_TAG_namespace":
                            queue += list(die.iter_children())
                        elif die.tag == "DW_TAG_structure_type":
                            self._handle_structure(die)
                        elif die.tag == "DW_TAG_subprogram":
                            self._handle_subprogram(die)
                    except NoExistenceException:
                        print(f"Skip {die}")
                        traceback.print_exc()
        for variant_struct in self._variant_structs:
            if variant_struct in self.structs:
                del self.structs[variant_struct]

    @staticmethod
    def _from_dict(data):
        if data is None:
            return None
        clz = None
        if "pts_to" in data:
            clz = "Pointer"
        elif set(data.keys()) == {"name", "size"}:
            clz = "Primitive"
        elif "fields" in data:
            clz = "Struct"
        elif "variants" in data:
            clz = "Enumeration"
        elif "ele_type" in data:
            clz = "Array"
        elif "args" in data:
            clz = "Prototype"
        elif "location" in data:
            clz = "Variable"
        match clz:
            case "Pointer":
                return Pointer(DwarfParser._from_dict(data["pts_to"]))
            case "Primitive":
                return Primitive(data["name"], data["size"])
            case "Struct":
                fields = None
                if data["fields"] is not None:
                    fields = OrderedDict()
                    for offset, (field_name, field_ty) in data["fields"].items():
                        offset = int(offset)
                        fields[offset] = (field_name, DwarfParser._from_dict(field_ty))
                return Struct(data["name"], data["size"], fields)
            case "Enumeration":
                variants = None
                if data["variants"] is not None:
                    variants = {}
                    for name, (discriminant, variant_types) in data["variants"].items():
                        variants[name] = (
                            discriminant,
                            tuple(DwarfParser._from_dict(variant_ty) for variant_ty in variant_types),
                        )
                return Enumeration(data["name"], data["size"], data["discriminant_size"], variants)
            case "Array":
                return Array(DwarfParser._from_dict(data["ele_type"]), data["length"])
            case "Prototype":
                return Prototype(
                    tuple(DwarfParser._from_dict(arg) for arg in data["args"]), DwarfParser._from_dict(data["returnty"])
                )
            case "Variable":
                return Variable(data["name"], DwarfParser._from_dict(data["type"]), data["category"], data["location"])
            case _:
                import ipdb

                ipdb.set_trace()
                assert False

    def parse_json(self, path):
        with open(path, "r") as fd:
            json_object = json.load(fd)
            d = json_object["structs"]
            for name in d:
                self.structs[name] = self._from_dict(d[name])
            d = json_object["prototypes"]
            for name in d:
                self.prototypes[name] = set(self._from_dict(prototype) for prototype in d[name])
            d = json_object["variables"]
            for name in d:
                self.local_variables[name] = [self._from_dict(var) for var in d[name]]

    def dump_json(self, path):
        with open(path, "w") as fd:
            d = defaultdict(dict)
            for name in self.structs:
                d["structs"][name] = asdict(self.structs[name])
            for name in self.prototypes:
                d["prototypes"][name] = [asdict(prototype) for prototype in self.prototypes[name]]
            for name in self.local_variables:
                d["variables"][name] = [asdict(var) for var in self.local_variables[name]]
            json.dump(d, fd, indent=2)


if __name__ == "__main__":
    # path = "target/x86_64-unknown-linux-gnu/debug/deps/std-fa2ce7845f8b40af.std.58d5dad5a830f2fb-cgu.07.rcgu.o"
    path = "fmt"
    parser = DwarfParser()
    parser.parse(path)
    parser.dump_json("output/fmt.json")

    # new_parser = DwarfParser()
    # new_parser.parse_json("output/structs.json", "output/prototypes.json", "output/variables.json")

    # assert parser.structs == new_parser.structs
    # assert parser.prototypes == new_parser.prototypes
    # assert parser.local_variables == new_parser.local_variables
    # pprint(parser.structs["std::io::error::Error"])
    # pprint(parser.prototypes["<std::fs::File as std::io::Read>::read_to_string"])
    import ipdb

    ipdb.set_trace()
