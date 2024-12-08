fn uu_env::parse_name_value_opt(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct24;  // [bp-0xa0]
    let v1: i384;  // [sp-0x88], Other Possible Types: Option<struct48>
    let v2: i384;  // [bp-0x58]
    let v4: i64;  // rax
    let v5: i64;  // rdx

    v0 = struct24 {
        field_0: 0x8000000000000000
        field_8: a2
        field_16: a3
    };
    v1 = uu_env::native_int_str::NativeStr::split_once(&v0, &g_417844);
    match v1 {
        Some(v2) => {
            alloc::vec::Vec<T,A>::push(a1 + 48, &v2, v5);
            *((a0 + 8) as &i8) = 0;
            goto LABEL_4cc359;
        },
        None => {
            v4 = uu_env::parse_program_opt(a1, a2, a3);
            if v4 {
                *((a0 + 8) as &&i64) = &g_549000;
            } else {
                *((a0 + 8) as &i8) = 1;
LABEL_4cc359:
                v4 = 0;
            }
        },
    }
    *(a0 as &i64) = v4;
}
