fn uu_env::parse_args_from_str(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: struct44;  // [sp-0x60]
    let v1: iNone;  // [sp-0x38]
    let v2: iNone;  // [sp-0x28]
    let v3: i64;  // [sp-0x18]

    v0 = uu_env::split_iterator::split(a1, a2);
    if v0.field_0 == 8 {
        return struct24 {
            field_0: *((&v0.field_4 as &char + 4) as &i128)
            field_16: *((&v0.field_16 as &char + 4) as &i64)
        };
    }
    v3 = *((&v0.field_16 as &char + 12) as &i64);
    v2 = *((&v0.field_4 as &char + 12) as &i128);
    v1 = *(&v0.field_0 as &i128);
    *((a0 + 8) as &long long) = uu_env::parse_args_from_str::{{closure}}(&v1);
    *((a0 + 16) as &&i64) = &g_548908;
    *(a0 as &i64) = 0x8000000000000000;
}
