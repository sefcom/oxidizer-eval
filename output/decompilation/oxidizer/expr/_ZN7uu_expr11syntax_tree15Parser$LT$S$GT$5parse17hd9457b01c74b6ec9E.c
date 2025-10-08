fn uu_expr::syntax_tree::Parser<S>::parse(a0: i64, a1: i64) -> int {
    let v0: u64;  // [bp-0x90]
    let v1: u128;  // [bp-0x88]
    let v2: u128;  // [bp-0x78]
    let v3: u64;  // [bp-0x70]
    let v4: iNone;  // [bp-0x68]
    let v5: iNone;  // [bp-0x58]
    let v6: Result<struct36, struct40>;  // [bp-0x40], Other Possible Types: struct24
    let v7: u64;  // [bp-0x30]
    let v9: u64;  // rax
    let v11: u32;  // rdx
    let v12: u64;  // rcx

    if !*((a1 + 8) as &i64) {
        return struct16 {
            field_0: 9223372036854775813
            field_8: 3
        };
    }
    v6 = uu_expr::syntax_tree::Parser<S>::parse_precedence(a1, 0);
    v4 = *((&v6 as &char + 8) as &i128);
    v5 = *((&v6 as &char + 24) as &i128);
    match v6 {
        Err(_) => {
            *((a0 + 24) as void*) = v5;
            *((a0 + 8) as void*) = v4;
        },
        Ok(_) => {
            *(&v2 as void*) = v5;
            *(&v1 as void*) = v4;
            v0 = v6 as i64;
            if *((a1 + 16) as &i64) >= *((a1 + 8) as &i64) {
                v12 = v1 as i64;
                return struct40 {
                    field_0: v0
                    field_8: v12
                    field_16: *((&v1 as &char + 8) as &i128)
                    field_32: v3
                };
            }
            v9 = *((a1 + 16) as &i64) * 3;
            v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(<alloc::string::String as core::convert::AsRef<str>>::as_ref(*((*(a1 as &i64) + v9 * 8 + 8) as &i64), *((*(a1 as &i64) + v9 * 8 + 16) as &i64)), v11);
            return struct40 {
                field_0: 9223372036854775813
                field_8: 0
                field_16: *(&v6.field_0 as &i128)
                field_32: v7
            };
        },
    }
}
