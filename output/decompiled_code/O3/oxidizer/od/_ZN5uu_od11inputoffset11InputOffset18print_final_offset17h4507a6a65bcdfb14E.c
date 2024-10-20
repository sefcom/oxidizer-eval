fn uu_od::inputoffset::InputOffset::print_final_offset(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: u8;  // [bp-0x60]
    let v1: Argument;  // [bp-0x48]
    let v2: Arguments;  // [bp-0x38]
    let v4: u64;  // rax

    if a0->field_18 == 3 && !a0->field_0 {
        return v4;
    }
    uu_od::inputoffset::InputOffset::format_byte_offset(&v0, a0);
    v1 = Argument {
        value: &v0
        formatter: <alloc::string::String as core::fmt::Display>::fmt
    };
    v2 = Arguments {
        pieces: [&g_503628, "\n"]
        args: [&v1]
        fmt: None
    };
    v4 = std::io::stdio::_print(&v2);
    return v4;
}
