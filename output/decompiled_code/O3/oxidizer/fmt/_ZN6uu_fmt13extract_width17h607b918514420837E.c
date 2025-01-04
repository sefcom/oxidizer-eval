fn uu_fmt::extract_width(a0: &Option<Result<struct16, struct8>>, a1: u32) -> u64 {
    let v0: Result<struct8, struct1>;  // [sp-0xb8], Other Possible Types: i32
    let v1: i64;  // [sp-0xb0]
    let v2: Result<struct8, struct1>;  // [sp-0x88]
    let v3: i8;  // [bp-0x80]
    let v4: i64;  // [sp-0x68]
    let v5: i64;  // [sp-0x60]
    let v6: i64;  // [sp-0x58]
    let v7: i8;  // [sp-0x50]
    let v8: i192;  // [sp-0x48]
    let v9: i32;  // [sp-0x30]
    let v11: i64;  // rax
    let v12: i64;  // r14
    let v13: i64;  // r15
    let v14: i64;  // rax
    let v16: i64;  // r13
    let v17: i64;  // rcx
    let v18: i64;  // rcx
    let v19: i64;  // rdx
    let v20: i64;  // rdx

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "width");
    v11 = clap_builder::parser::error::MatchesError::unwrap("width", &v0);
    if !v11 {
        v14 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, &g_41d8a5);
        v16 = 8;
        v17 = 0;
        if v14 == 1 {
            v17 = 0;
            if v20 == 1 {
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "files");
                v0 = 0;
                v14 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(&v0), core::option::unwrap(clap_builder::parser::error::MatchesError::unwrap(&g_41d8a5, 5, &v0)));
                if !v14 {
                    v17 = 0;
                } else {
                    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v14, v20);
                    v14 = v0 ^ 1;
                    *((a0 + 8) as &i64) = v14;
                    v16 = 16;
                    v17 = v1;
                }
            }
        }
        *((a0 + v16) as &i64) = v17;
        return struct8 {
            field_0: 0
        };
    } else {
        v12 = *((v11 + 8) as &i64);
        v13 = *((v11 + 16) as &i64);
        v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v12, v13);
        match v2 {
            Ok(v18) => {
                v14 = 1;
                v19 = 0;
            },
            Err(_) => {
                v4 = 0;
                v5 = v12;
                v6 = v13;
                v7 = 1;
                v8 = format!("invalid width: {:?}", &v4);
                v9 = 1;
                v14 = alloc::boxed::Box<T>::new(&v8);
                v19 = 1;
                v18 = &g_526400;
            },
        }
        return struct24 {
            field_0: v19
            field_8: v14
            field_16: v18
        };
    }
}
