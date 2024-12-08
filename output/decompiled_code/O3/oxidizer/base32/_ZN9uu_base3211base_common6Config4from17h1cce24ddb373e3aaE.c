fn uu_base32::base_common::Config::from(a0: u32, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x1b0], Other Possible Types: struct24
    let v1: i64;  // [sp-0x198]
    let v2: i64;  // [bp-0x190]
    let v3: i64;  // [sp-0x188]
    let v4: i8;  // [sp-0x180]
    let v5: i192;  // [sp-0x178]
    let v6: i32;  // [sp-0x160]
    let v7: i320;  // [sp-0x158], Other Possible Types: Result<struct40, struct16>, struct56, struct16
    let v8: i128;  // [sp-0xa8]
    let v9: i128;  // [sp-0x98]
    let v10: i128;  // [sp-0x88]
    let v11: i128;  // [sp-0x78]
    let v12: i512;  // [sp-0x68], Other Possible Types: struct64
    let v14: i64;  // r15
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v17: struct8;  // rax
    let v18: i64;  // r15
    let v19: struct8;  // rax
    let v20: i64;  // r12
    let v21: i64;  // rax
    let v23: i64;  // rax
    let v24: i64;  // r12
    let v25: i64;  // rax

    v14 = &anon.0042c4fb131193d352280bb9a37e85a0.27.llvm.14663537404383231718;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v12 = clap_builder::parser::error::MatchesError::unwrap("file", &v7);
    if v12 {
        v11 = *((&v12 as &char + 48) as &i128);
        v10 = *((&v12 as &char + 32) as &i128);
        v9 = *((&v12 as &char + 16) as &i128);
        v8 = v12;
        v17 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v15, v16);
        if !v17 {
            core::option::unwrap_failed(); /* do not return */
        }
        v18 = v17;
        v19 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v15, v16);
        if v19 {
            v1 = 0;
            v2 = *((v19 + 8) as &i128);
            v4 = 1;
            v5 = format!("extra operand {:?}", &v1);
            v6 = 1;
            v21 = alloc::boxed::Box<T>::new(&v5);
            return struct24 {
                field_0: 2
                field_8: v21
                field_16: &g_54a270
            };
        }
        v20 = *((v18 + 8) as &i64);
        v14 = *((v18 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v14, "-") as i8 {
            v7 = std::fs::metadata(v20, v14);
            if v7 == 2 {
                v1 = 1;
                v2 = v20;
                v3 = v14;
                v4 = 0;
                v5 = format!("{:?}: No such file or directory", &v1);
                v6 = 1;
                v21 = alloc::boxed::Box<T>::new(&v5);
                return struct24 {
                    field_0: 2
                    field_8: v21
                    field_16: &g_54a338
                };
            }
            v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(v20, v14);
LABEL_4c13c1:
            v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "wrap");
            v23 = clap_builder::parser::error::MatchesError::unwrap("wrap", &v7);
            if !v23 {
                v24 = 0;
            } else {
                v7 = uu_base32::base_common::Config::from::{{closure}}(*((v23 + 8) as &i64), *((v23 + 16) as &i64));
                v25 = v7;
                v14 = v7.field_8;
                if v25 {
                    return struct24 {
                        field_0: 2
                        field_8: v21
                        field_16: &g_54a338
                    };
                }
                v24 = 1;
            }
            *((a0 + 32) as &i64) = *((&v0 as &char + 16) as &i64);
            *((a0 + 16) as &i192) = v0;
            *(a0 as &i64) = v24;
            *((a0 + 8) as &i64) = v14;
            *((a0 + 40) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "decode") as i32;
            *((a0 + 41) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-garbage") as i8;
            return struct24 {
                field_0: 2
                field_8: v21
                field_16: &g_54a338
            };
        }
    }
    v0 = 0x8000000000000000;
    goto LABEL_4c13c1;
}
