fn uu_tail::args::parse_obsolete() -> u32 {
    let v0: struct24;  // [sp-0xa8]
    let v1: i88;  // [sp-0x90], Other Possible Types: struct11
    let v3: i64;  // rsi
    let v4: i32;  // eax
    let v5: i64;  // r12
    let v6: i64;  // rdi
    let v7: i64;  // rdi
    let v8: i64;  // rdx

    v1 = uu_tail::parse::parse_obsolete(v3);
    v4 = *((&v1 as &char + 10) as &i8);
    if v4 == 2 {
        v5 = v1;
        v0 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v3 + 8) as &i64), *((v3 + 16) as &i64));
        goto *((4358892 + vvar_35{reg 112} * 4) as &i32) + 4358892;
    } else {
        if v4 == 3 {
            *(v6 as &i64) = 5;
        } else {
            uu_tail::args::Settings::from_obsolete_args(v7, &v1, v8);
        }
        return;
    }
}
