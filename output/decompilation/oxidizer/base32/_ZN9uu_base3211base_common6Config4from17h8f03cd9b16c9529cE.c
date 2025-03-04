fn uu_base32::base_common::Config::from(a0: &Result<struct34, struct16>, a1: &struct56) -> u64 {
    let v0: i64;  // [sp-0x1b0], Other Possible Types: struct24
    let v1: i64;  // [sp-0x198]
    let v2: iNone;  // [sp-0x190], Other Possible Types: unsigned long
    let v3: i64;  // [sp-0x188]
    let v4: i8;  // [sp-0x180]
    let v5: String;  // [sp-0x178]
    let v6: i32;  // [sp-0x160]
    let v7: i64;  // [sp-0x158], Other Possible Types: Result<struct176, struct8>, struct56, struct16
    let v8: i64;  // [sp-0x150]
    let v9: struct64;  // [sp-0xa8]
    let v10: struct64;  // [sp-0x68]
    let v12: i64;  // r15
    let v13: struct8;  // rax
    let v14: struct8;  // r15
    let v15: struct8;  // rax
    let v16: i64;  // r12
    let v19: i64;  // rax
    let v20: i64;  // r12

    v12 = &anon.c1c055de090567b5a95d92af4d90b7c9.26.llvm.10347091732497712345;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v10 = clap_builder::parser::error::MatchesError::unwrap("file", &v7);
    if !v10.field_0 as i64 {
LABEL_4c1102:
        v0 = 0x8000000000000000;
        goto LABEL_4c1111;
    } else {
        v9 = v10;
        v13 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
        if !v13 {
            core::option::unwrap_failed("src/uu/base32/src/base_common.rs"); /* do not return */
        }
        v14 = v13;
        v15 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
        if v15 {
            v1 = 0;
            *(&v2 as &i128) = *((v15 + 8) as &i128);
            v4 = 1;
            v5 = format!("extra operand {}", &v1);
            v6 = 1;
            alloc::boxed::Box<T>::new(&v5);
        } else {
            v16 = *((v14 + 8) as &i64);
            v12 = *((v14 + 16) as &i64);
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v12, "-") as i8) {
                goto LABEL_4c1102;
            }
            v7 = std::fs::metadata(v16, v12);
            if v7 == 2 {
                v1 = 1;
                v2 = v16;
                v3 = v12;
                v4 = 0;
                v5 = format!("{}: No such file or directory", &v1);
                v6 = 1;
                alloc::boxed::Box<T>::new(&v5);
            } else {
                v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(v16, v12);
LABEL_4c1111:
                v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "wrap");
                v19 = clap_builder::parser::error::MatchesError::unwrap("wrap", &v7);
                if !v19 {
                    v20 = 0;
                } else {
                    v7 = uu_base32::base_common::Config::from::{{closure}}(*((v19 + 8) as &i64), *((v19 + 16) as &i64));
                    v12 = v8;
                    if !v7 {
                        v20 = 1;
                    }
                }
                *((a0 + 32) as &u64) = v0.field_16;
                *((a0 + 16) as &i128) = *(&v0.field_0 as &i128);
                *(a0 as &unsigned long) = v20;
                *((a0 + 8) as &unsigned long) = v12;
                *((a0 + 40) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "decode") as i32;
                *((a0 + 41) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-garbage") as i8;
            }
        }
        return Err(struct16 {
            field_0: v17
            field_8: v18
        });
    }
}
