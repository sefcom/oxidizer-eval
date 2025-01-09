fn uu_cksum::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x3da]
    let v1: i8;  // [sp-0x3d9]
    let v2: struct16;  // [bp-0x3d8], Other Possible Types: i64
    let v3: i64;  // [sp-0x3d0]
    let v4: i64;  // [sp-0x3c8]
    let v5: i64;  // [sp-0x3c0]
    let v6: i64;  // [sp-0x3b0]
    let v7: i64;  // [sp-0x3a8]
    let v8: i128;  // [sp-0x3a0]
    let v9: i128;  // [sp-0x390]
    let v10: i64;  // [sp-0x380]
    let v11: i456;  // [sp-0x378], Other Possible Types: Result<struct56, struct8>, struct64
    let v12: i64;  // [sp-0x370]
    let v13: i64;  // [sp-0x368]
    let v14: i128;  // [sp-0x360]
    let v15: i64;  // [sp-0x338], Other Possible Types: Result<struct40, struct8>, struct56, struct24, struct712, struct10
    let v16: i64;  // [sp-0x330]
    let v17: i64;  // [sp-0x328]
    let v18: i64;  // [sp-0x320]
    let v19: i64;  // [sp-0x318]
    let v20: i64;  // [sp-0x310]
    let v21: i64;  // [sp-0x308]
    let v22: i8;  // [sp-0x300]
    let v23: i8;  // [sp-0x2ff]
    let v24: i8;  // [sp-0x2fe]
    let v25: i8;  // [sp-0x2fd]
    let v26: struct64;  // [sp-0x70], Other Possible Types: i512
    let v28: i64;  // rax
    let v29: i8;  // bpl
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // r13
    let v35: i8;  // r14b
    let v37: i64;  // r13
    let v38: i64;  // r13
    let v40: i64;  // r12
    let v41: i64;  // rdx
    let v42: i64;  // rdx

    v15 = uu_cksum::uu_app();
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    if v6 == 0x8000000000000000 {
        v28 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v28;
    }
    v10 = *((&v11 as &char + 48) as &i64);
    v9 = *((&v11 as &char + 32) as &i128);
    v8 = *((&v11 as &char + 16) as &i128);
    v6 = v11;
    v7 = v12;
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "check") as i32;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "algorithm");
    v30 = clap_builder::parser::error::MatchesError::unwrap("algorithm", &v15);
    if v30 {
        v2 = *((v30 + 8) as &i128);
        if !(<T as core::slice::cmp::SliceContains>::slice_contains(&v2, "bsd", 3) as i8 & v29) {
            goto LABEL_580869;
        }
    } else if !v29 {
        v2 = struct16 {
            field_0: &g_455663
            field_8: 3
        };
        <T as core::slice::cmp::SliceContains>::slice_contains(&v2, "bsd", 3);
        goto LABEL_580869;
    } else {
        v2 = struct16 {
            field_0: 1
            field_8: 0
        };
        if !<T as core::slice::cmp::SliceContains>::slice_contains(&v2, "bsd", 3) as i8 {
LABEL_580869:
            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "length");
            v31 = clap_builder::parser::error::MatchesError::unwrap("length", &v15);
            if !v31 {
                v28 = 0;
                goto LABEL_580903;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, "blake2b") as i8 {
                v15 = uucore::features::checksum::calculate_blake2b_length(*(v31 as &i64));
                if v15 {
                    return v28;
                }
LABEL_580903:
                v4 = v17;
                if !v29 {
                    v15 = uu_cksum::handle_tag_text_binary_flags(&v6);
                    v28 = v15;
                    if !v28 {
                        v0 = *((&v15 as &char + 8) as &i8);
                        v1 = *((&v15 as &char + 9) as &i8);
                        v15 = uucore::features::checksum::detect_algo(v2, v3, v28, v4);
                        v32 = v15;
                        v28 = v16;
                        if v32 {
                            v14 = *((&v15 as &char + 24) as &i128);
                            v11 = v32;
                            v12 = v28;
                            v13 = v17;
                            v35 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "zero") as i8 ? 0 : 10);
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "raw") as i8 {
                                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "base64");
                            }
                            v5 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v13);
                            v40 = *((&v14 as &char + 8) as &i64);
                            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "file");
                            v26 = clap_builder::parser::error::MatchesError::unwrap("file", &v15);
                            if !v26 {
                                v15 = v28;
                                v16 = v4;
                                v17 = v32;
                                v18 = v28;
                                v19 = v5;
                                v20 = v42;
                                v21 = v40;
                                v22 = v0;
                                v23 = v1;
                                v24 = 1;
                                v25 = v35;
                                v28 = uu_cksum::cksum();
                            } else {
                                v15 = v28;
                                v16 = v4;
                                v17 = v32;
                                v18 = v28;
                                v19 = v5;
                                v20 = v41;
                                v21 = v40;
                                v22 = v0;
                                v23 = v1;
                                v24 = 1;
                                v25 = v35;
                                v28 = uu_cksum::cksum();
                            }
                            if !v28 {
                                return 0;
                            }
                        }
                    }
                } else {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "strict") as i8;
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "status") as i8;
                    if !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "text") as i32 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "binary") as i32) {
                        alloc::boxed::Box<T>::new(12);
                        return v28;
                    }
                    v37 = v3;
                    if v37 {
                        v38 = v2;
                    }
                    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "file");
                    v11 = clap_builder::parser::error::MatchesError::unwrap("file", &v15);
                    core::option::Option<T>::map_or_else(&v15, &v11);
                    v28 = uucore::features::checksum::perform_checksum_validation(v16, v17 * 16 + v16, v38, v37, v28, v4, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "warn") as i32 * 0x10000000000 | v1 * 0x100000000 | v0 * 0x1000000 & 4294967295 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "ignore-missing") as i32 * 0x100 & 4294967295 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "quiet") as i32 * 0x10000 & 4294967295);
                }
                return v28;
            }
        }
    }
    alloc::boxed::Box<T>::new(12);
    return v28;
}
