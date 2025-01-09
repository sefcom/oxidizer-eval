fn uu_od::parse_formats::is_format_size_decimal(a0: u32, a1: u8, a2: u32) -> u64 {
    let v1: u64;  // rbx

    if (a0 - 48 < 10 & a1) {
        alloc::string::String::push(a2, a0);
    }
    return (v1 | -0x100 | a0 - 48 < 10 & a1) & 4294967295 & 4294967295;
}
