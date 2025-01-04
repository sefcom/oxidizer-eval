fn uu_base32::base_common::Config::from(a0: &Result<struct34, struct16>, a1: &struct56) -> u64 {
    let v0: i192;  // [sp-0x1b0], Other Possible Types: struct24
    let v1: i64;  // [sp-0x198]
    let v2: i128;  // [bp-0x190]
    let v3: i64;  // [sp-0x188]
    let v4: i8;  // [sp-0x180]
    let v5: i192;  // [sp-0x178]
    let v6: i32;  // [sp-0x160]
    let v7: i320;  // [sp-0x158], Other Possible Types: Result<struct40, struct16>, struct56, struct16
    let v8: i64;  // [sp-0x150]
    let v9: i512;  // [bp-0xa8]
    let v10: struct64;  // [sp-0x68], Other Possible Types: i512
    let v12: i64;  // r15
    let v13: i64;  // rsi
    let v14: i64;  // rdx
    let v15: struct8;  // rax
    let v16: i64;  // r15
    let v17: struct8;  // rax
    let v18: i64;  // r12
    let v19: i64;  // rax
    let v21: i64;  // rax
    let v22: i64;  // r12
    let v23: i64;  // rax

    v12 = &anon.c1c055de090567b5a95d92af4d90b7c9.26.llvm.10347091732497712345;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v10 = clap_builder::parser::error::MatchesError::unwrap("file", &v7);
    if v10 {
        v9 = v10;
        v15 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v13, v14);
        if !v15 {
            core::option::unwrap_failed(); /* do not return */
        }
        v16 = v15;
        v17 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v13, v14);
        if v17 {
            v1 = 0;
            v2 = *((v17 + 8) as &i128);
            v4 = 1;
            v5 = format!("extra operand {:?}", &v1);
            v6 = 1;
            v19 = alloc::boxed::Box<T>::new(&v5);
            return struct24 {
                field_0: 2
                field_8: v19
                field_16: &g_5495f0
            };
        }
        v18 = *((v16 + 8) as &i64);
        v12 = *((v16 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v12, "-") as i8 {
            v7 = std::fs::metadata(v18, v12);
            if v7 == 2 {
                v1 = 1;
                v2 = v18;
                v3 = v12;
                v4 = 0;
                v5 = format!("{:?}: No such file or directory", &v1);
                v6 = 1;
                v19 = alloc::boxed::Box<T>::new(&v5);
                return struct24 {
                    field_0: 2
                    field_8: v19
                    field_16: &g_549698
                };
            }
            v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(v18, v12);
LABEL_4c1111:
            v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "wrap");
            v21 = clap_builder::parser::error::MatchesError::unwrap("wrap", &v7);
            if !v21 {
                v22 = 0;
            } else {
                v7 = uu_base32::base_common::Config::from::{{closure}}(*((v21 + 8) as &i64), *((v21 + 16) as &i64));
                v23 = v7;
                v12 = v8;
                if v23 {
                    return struct24 {
                        field_0: 2
                        field_8: v19
                        field_16: &g_549698
                    };
                }
                v22 = 1;
            }
            *((a0 + 32) as &i64) = *((&v0 as &char + 16) as &i64);
            *((a0 + 16) as &i192) = v0;
            *(a0 as &i64) = v22;
            *((a0 + 8) as &i64) = v12;
            *((a0 + 40) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "decode") as i32;
            *((a0 + 41) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-garbage") as i8;
            return struct24 {
                field_0: 2
                field_8: v19
                field_16: &g_549698
            };
        }
    }
    v0 = 0x8000000000000000;
    goto LABEL_4c1111;
}
