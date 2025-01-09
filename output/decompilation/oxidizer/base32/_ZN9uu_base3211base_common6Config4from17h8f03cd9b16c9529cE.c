fn uu_base32::base_common::Config::from(a0: &Result<struct34, struct16>, a1: &struct56) -> u64 {
    let v0: i64;  // [sp-0x1c0]
    let v1: i64;  // [sp-0x1b8]
    let v2: i192;  // [sp-0x1b0], Other Possible Types: struct24
    let v3: i64;  // [sp-0x198]
    let v4: i64;  // [bp-0x190]
    let v5: i64;  // [sp-0x188]
    let v6: i8;  // [sp-0x180]
    let v7: i8;  // [bp-0x178]
    let v8: i32;  // [sp-0x160]
    let v9: i320;  // [sp-0x158], Other Possible Types: struct16, Result<struct40, struct8>, struct56
    let v10: i64;  // [sp-0x150]
    let v11: i64;  // [sp-0x148]
    let v12: i64;  // [sp-0x140]
    let v13: i64;  // [sp-0x138]
    let v14: struct64;  // [sp-0xa8]
    let v15: struct64;  // [sp-0x68], Other Possible Types: i512
    let v17: i64;  // r15
    let v18: struct8;  // rax
    let v19: struct8;  // r15
    let v20: struct8;  // rax
    let v21: i64;  // r12
    let v24: i64;  // rax
    let v25: i64;  // r12
    let v26: i64;  // r15

    v17 = &anon.c1c055de090567b5a95d92af4d90b7c9.26.llvm.10347091732497712345;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v15 = clap_builder::parser::error::MatchesError::unwrap("file", &v9);
    if !v15 {
LABEL_4c1102:
        v2 = 0x8000000000000000;
        goto LABEL_4c1111;
    } else {
        v14 = v15;
        v18 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
        if !v18 {
            core::option::unwrap_failed("src/uu/base32/src/base_common.rs"); /* do not return */
        }
        v19 = v18;
        v20 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
        if v20 {
            v3 = 0;
            v4 = *((v20 + 8) as &i128);
            v6 = 1;
            v0 = &v3;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v9 = "extra operand ";
            v10 = 1;
            v13 = 0;
            v11 = &v0;
            v12 = 1;
            core::option::Option<T>::map_or_else();
            v8 = 1;
            alloc::boxed::Box<T>::new(&v7);
        } else {
            v21 = *((v19 + 8) as &i64);
            v17 = *((v19 + 16) as &i64);
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v17, "-") as i8) {
                goto LABEL_4c1102;
            }
            v9 = std::fs::metadata(v21, v17);
            if v9 == 2 {
                v3 = 1;
                v4 = v21;
                v5 = v17;
                v6 = 0;
                v0 = &v3;
                v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                v9 = &g_549580;
                v10 = 2;
                v13 = 0;
                v11 = &v0;
                v12 = 1;
                core::option::Option<T>::map_or_else();
                v8 = 1;
                alloc::boxed::Box<T>::new(&v7);
            } else {
                v2 = std::sys::pal::unix::os::split_paths::bytes_to_path(v21, v17);
LABEL_4c1111:
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "wrap");
                v24 = clap_builder::parser::error::MatchesError::unwrap("wrap", &v9);
                if !v24 {
                    v25 = 0;
                } else {
                    v9 = uu_base32::base_common::Config::from::{{closure}}(*((v24 + 8) as &i64), *((v24 + 16) as &i64));
                    if !v9 {
                        v25 = 1;
                        v26 = v10;
                    }
                }
                *((a0 + 32) as &i64) = *((&v2 as &char + 16) as &i64);
                *((a0 + 16) as &i192) = v2;
                *(a0 as &i64) = v25;
                *((a0 + 8) as &i64) = v26;
                *((a0 + 40) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "decode") as i32;
                *((a0 + 41) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-garbage") as i8;
            }
        }
        return Err(struct16 {
            field_0: v22
            field_8: v23
        });
    }
}
