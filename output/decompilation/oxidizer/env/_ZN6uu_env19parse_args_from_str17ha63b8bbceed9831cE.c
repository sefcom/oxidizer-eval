fn uu_env::parse_args_from_str(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i352;  // [sp-0x60], Other Possible Types: struct44
    let v1: i128;  // [sp-0x38]
    let v2: i128;  // [sp-0x28]
    let v3: i64;  // [sp-0x18]

    v0 = uu_env::split_iterator::split(a1, a2);
    if v0 == 8 {
        return struct24 {
            field_0: *((&v0 as &char + 8) as &i128)
            field_16: *((&v0 as &char + 24) as &i64)
        };
    }
    v3 = *((&v0 as &char + 32) as &i64);
    v2 = *((&v0 as &char + 16) as &i128);
    v1 = v0;
    *((a0 + 8) as &long long) = uu_env::parse_args_from_str::{{closure}}(&v1);
    *((a0 + 16) as &&i64) = &g_548908;
    *(a0 as &i64) = 0x8000000000000000;
}
