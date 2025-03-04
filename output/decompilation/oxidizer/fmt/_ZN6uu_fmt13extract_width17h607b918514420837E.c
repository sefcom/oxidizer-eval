fn uu_fmt::extract_width(a0: &Option<Result<struct8, struct16>>, a1: u32) -> u64 {
    let v0: Result<struct40, struct8>;  // [sp-0xb8], Other Possible Types: unsigned int
    let v1: i64;  // [sp-0xb0]
    let v2: Result<struct8, struct1>;  // [sp-0x88]
    let v3: i64;  // [sp-0x68]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x58]
    let v6: i8;  // [sp-0x50]
    let v7: String;  // [sp-0x48]
    let v8: i32;  // [sp-0x30]
    let v10: i64;  // rax
    let v11: i64;  // r14
    let v12: i64;  // r15
    let v13: i64;  // rax
    let v14: i64;  // rcx
    let v15: i64;  // r13
    let v16: i64;  // rcx
    let v18: i64;  // rdx
    let v19: i64;  // rax
    let v20: i64;  // r15

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "width");
    v10 = clap_builder::parser::error::MatchesError::unwrap("width", &v0);
    if !v10 {
        v13 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, "files");
        v14 = 0;
        v15 = 8;
        if !(v13 == 1 && v18 == 1) {
            *((a0 + v15) as &unsigned long) = v14;
            return struct8 {
                field_0: 0
            };
        }
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "files");
        v19 = clap_builder::parser::error::MatchesError::unwrap("files", &v0);
        v20 = *((v19 + 16) as &i64);
        *(&v0 as &i32) = 0;
        v13 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(&v0), core::option::unwrap(v19), v20);
        if !v13 {
            v14 = 0;
        } else {
            v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v13, v18);
            v14 = v1;
            *((a0 + 8) as &u64) = v0 as i8 ^ 1;
            v15 = 16;
        }
    } else {
        v11 = *((v10 + 8) as &i64);
        v12 = *((v10 + 16) as &i64);
        v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v11, v12);
        match v2 {
            Ok(v16) => {
                return struct24 {
                    field_0: v17
                    field_8: v13
                    field_16: v16
                };
            },
            Err(_) => {
                v3 = 0;
                v4 = v11;
                v5 = v12;
                v6 = 1;
                v7 = format!("invalid width: {}", &v3);
                v8 = 1;
                alloc::boxed::Box<T>::new(&v7);
            },
        }
    }
}
