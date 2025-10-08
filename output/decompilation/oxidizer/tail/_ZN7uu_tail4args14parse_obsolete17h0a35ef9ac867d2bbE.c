fn uu_tail::args::parse_obsolete(a0: &struct80, a1: i64, a2: i64) -> u64 {
    let v0: Result<struct24, struct24>;  // [bp-0x50]
    let v1: struct11;  // [bp-0x38]
    let v3: u32;  // eax

    v1 = uu_tail::parse::parse_obsolete(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v3 = v1.field_10;
    if v3 == 2 {
        v0 = alloc::string::String::from_utf8_lossy(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    } else if v3 == 3 {
        return struct8 {
            field_0: 5
        };
    } else {
        uu_tail::args::Settings::from_obsolete_args(a0, &v1, a2);
        return a0;
    }
}
