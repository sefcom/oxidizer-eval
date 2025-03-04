fn uu_env::parse_name_value_opt(a0: &Result<struct16, struct1>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [bp-0xa0]
    let v1: Option<struct48>;  // [sp-0x88]
    let v2: Option<struct48>;  // [sp-0x58]

    v0 = struct24 {
        field_0: 0x8000000000000000
        field_8: a2
        field_16: a3
    };
    v1 = uu_env::native_int_str::NativeStr::split_once(&v0, &g_417620);
    if v1 as i64 != 9223372036854775809 {
        v2 = v1;
        alloc::vec::Vec<T,A>::push(a1 + 48, &v2);
        *((a0 + 8) as &i8) = 0;
    } else if !uu_env::parse_program_opt(a1, a2, a3) {
        *((a0 + 8) as &i8) = 1;
    } else {
        return Ok(struct16 {
            field_0: v4
            field_8: &g_548840
        });
    }
}
