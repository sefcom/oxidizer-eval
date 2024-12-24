fn uu_base32::base_common::Config::from(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x1b0], Other Possible Types: struct24
    let v1: i64;  // [sp-0x198]
    let v2: i128;  // [bp-0x190]
    let v3: i64;  // [sp-0x188]
    let v4: i8;  // [sp-0x180]
    let v5: i192;  // [sp-0x178]
    let v6: i32;  // [sp-0x160]
    let v7: i64;  // [sp-0x158], Other Possible Types: Result<struct176, struct16>, struct56, struct16
    let v8: i512;  // [bp-0xa8]
    let v9: i512;  // [sp-0x68], Other Possible Types: struct64
    let v11: i64;  // r15
    let v12: i64;  // rsi
    let v13: i64;  // rdx
    let v14: struct8;  // rax
    let v15: i64;  // r15
    let v16: struct8;  // rax
    let v17: i64;  // r12
    let v18: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // r12
    let v22: i64;  // rax

    v11 = &anon.0042c4fb131193d352280bb9a37e85a0.27.llvm.14663537404383231718;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v9 = clap_builder::parser::error::MatchesError::unwrap("file", &v7);
    if v9 {
        v8 = v9;
        v14 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v12, v13);
        if !v14 {
            core::option::unwrap_failed(); /* do not return */
        }
        v15 = v14;
        v16 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v12, v13);
        if v16 {
            v1 = 0;
            v2 = *((v16 + 8) as &i128);
            v4 = 1;
            v5 = format!("extra operand {:?}", &v1);
            v6 = 1;
            v18 = alloc::boxed::Box<T>::new(&v5);
            return struct24 {
                field_0: 2
                field_8: v18
                field_16: &g_54a270
            };
        }
        v17 = *((v15 + 8) as &i64);
        v11 = *((v15 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v11, "-") as i8 {
            v7 = std::fs::metadata(v17, v11);
            if v7 == 2 {
                v1 = 1;
                v2 = v17;
                v3 = v11;
                v4 = 0;
                v5 = format!("{:?}: No such file or directory", &v1);
                v6 = 1;
                v18 = alloc::boxed::Box<T>::new(&v5);
                return struct24 {
                    field_0: 2
                    field_8: v18
                    field_16: &g_54a338
                };
            }
            v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(v17, v11);
LABEL_4c13c1:
            v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "wrap");
            v20 = clap_builder::parser::error::MatchesError::unwrap("wrap", &v7);
            if !v20 {
                v21 = 0;
            } else {
                v7 = uu_base32::base_common::Config::from::{{closure}}(*((v20 + 8) as &i64), *((v20 + 16) as &i64));
                v22 = v7;
                v11 = v7.field_8;
                if v22 {
                    return struct24 {
                        field_0: 2
                        field_8: v18
                        field_16: &g_54a338
                    };
                }
                v21 = 1;
            }
            *((a0 + 32) as &i64) = *((&v0 as &char + 16) as &i64);
            *((a0 + 16) as &i192) = v0;
            *(a0 as &i64) = v21;
            *((a0 + 8) as &i64) = v11;
            *((a0 + 40) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "decode") as i32;
            *((a0 + 41) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-garbage") as i8;
            return struct24 {
                field_0: 2
                field_8: v18
                field_16: &g_54a338
            };
        }
    }
    v0 = 0x8000000000000000;
    goto LABEL_4c13c1;
}
