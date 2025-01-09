fn uu_tail::args::parse_obsolete(a0: &Option<struct80>, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0xa8]
    let v1: i88;  // [sp-0x90], Other Possible Types: struct11
    let v3: i32;  // eax
    let v4: i64;  // r12

    v1 = uu_tail::parse::parse_obsolete(a1);
    v3 = *((&v1 as &char + 10) as &i8);
    if v3 == 2 {
        v4 = v1;
        v0 = std::sys::os_str::bytes::Slice::to_string_lossy(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
        goto *((4358892 + vvar_38{reg 112} * 4) as &i32) + 4358892;
    } else {
        if v3 == 3 {
            return struct8 {
                field_0: 5
            };
        }
        uu_tail::args::Settings::from_obsolete_args(a0, &v1, a2);
    }
}
