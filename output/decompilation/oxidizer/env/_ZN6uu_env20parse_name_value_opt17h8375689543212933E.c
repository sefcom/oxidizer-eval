fn uu_env::parse_name_value_opt(a1: i64, a2: i64, a3: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xa0]
    let v1: Option<struct48>;  // [bp-0x88]
    let v2: struct48;  // [bp-0x88]
    let v3: struct48;  // [bp-0x58]
    let v6: u64;  // rax

    v0 = struct24 {
        field_0: 0x8000000000000000
        field_8: a2
        field_16: a3
    };
    v1 = uu_env::native_int_str::NativeStr::split_once(&v0, &g_417620);
    if v1 as i64 != 9223372036854775809 {
        v3 = v2;
        v3 = v2;
        alloc::vec::Vec<T,A>::push(a1 + 48, &v3);
        return struct16 {
            field_0: v6
            field_8: 0
        };
    } else if uu_env::parse_program_opt(a1, a2, a3) {
        *((a0 + 8) as &&u8) = &g_548840;
    } else {
        *((a0 + 8) as &i8) = 1;
    }
}
