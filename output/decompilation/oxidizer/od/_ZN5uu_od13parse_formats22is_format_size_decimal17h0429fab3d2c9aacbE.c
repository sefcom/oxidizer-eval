fn uu_od::parse_formats::is_format_size_decimal(a0: u32, a1: u8, a2: u64) -> long long {
    let v1: u32;  // ebx

    if (a0 - 48 < 10 & a1) {
        alloc::string::String::push(a2, a0);
    }
    return v1 & -0x100 | a0 - 48 < 10 & a1;
}
