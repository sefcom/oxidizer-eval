fn uu_env::parse_args_from_str(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct44;  // [bp-0x60]
    let v1: struct40;  // [bp-0x60]
    let v2: u64;  // [bp-0x48]
    let v3: struct40;  // [bp-0x38]

    v0 = uu_env::split_iterator::split(a1, a2);
    if v0.field_0 != 12 {
        v3 = v1;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: uu_env::parse_args_from_str::{{closure}}(&v3)
            field_16: &g_5108a8
        };
    }
    return struct24 {
        field_0: v0.field_4
        field_16: v2
    };
}
