fn uu_env::parse_name_value_opt(a0: i64, a1: void*, a2: u64, a3: u64) -> void {
    let v0: struct24;  // [bp-0xa0]
    let v1: Option<struct48>;  // [bp-0x88]
    let v2: struct48;  // [bp-0x88]
    let v3: struct48;  // [bp-0x58]
    let v5: u64;  // rax

    v0 = struct24 {
        field_0: 0x8000000000000000
        field_8: a2
        field_16: a3
    };
    v1 = uu_env::native_int_str::NativeStr::split_once(&v0, &g_41c7fc);
    match v1 {
        Some(v3) => {
            alloc::vec::Vec<T,A>::push(a1 + 48, &v3);
            *((a0 + 8) as &i8) = 0;
        },
        None => {
            v5 = uu_env::parse_program_opt(a1, a2, a3);
            if !v5 {
                return struct16 {
                    field_0: 0
                    field_8: 1
                };
            }
            return struct16 {
                field_0: v5
                field_8: &g_5107e8
            };
        },
    }
}
