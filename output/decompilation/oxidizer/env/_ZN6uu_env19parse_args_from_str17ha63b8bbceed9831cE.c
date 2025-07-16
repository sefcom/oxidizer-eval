fn uu_env::parse_args_from_str(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct44;  // [bp-0x60]
    let v1: u64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: u8;  // [bp-0x28]
    let v4: u64;  // [bp-0x18]

    v0 = uu_env::split_iterator::split(a1, a2);
    if v0.field_0 != 8 {
        v4 = v2;
        memcpy(&v3, &v0 as u8, 16);
        memcpy(&v0, &v0, 16);
        return struct24 {
            field_0: 0x8000000000000000
            field_8: uu_env::parse_args_from_str::{{closure}}(&v0 as u128)
            field_16: &g_548908
        };
    }
    return struct24 {
        field_0: *(&(&v0.field_0)[2] as &i128)
        field_16: v1
    };
}
