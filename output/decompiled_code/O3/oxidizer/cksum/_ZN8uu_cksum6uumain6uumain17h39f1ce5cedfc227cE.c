fn uu_cksum::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x3da]
    let v1: i8;  // [sp-0x3d9]
    let v2: i64;  // [bp-0x3d8], Other Possible Types: struct16
    let v3: i64;  // [sp-0x3d0]
    let v4: i64;  // [sp-0x3c8]
    let v5: i64;  // [sp-0x3c0]
    let v6: i64;  // [sp-0x3b0]
    let v7: i64;  // [sp-0x3a8]
    let v8: i128;  // [sp-0x3a0]
    let v9: i128;  // [sp-0x390]
    let v10: i64;  // [sp-0x380]
    let v11: i8;  // [bp-0x378], Other Possible Types: struct64
    let v12: i64;  // [sp-0x370]
    let v13: i64;  // [bp-0x368]
    let v14: i128;  // [sp-0x360]
    let v15: i8;  // [bp-0x358]
    let v16: i8;  // [bp-0x348]
    let v17: i320;  // [sp-0x338], Other Possible Types: Result<struct40, struct16>, struct56, struct60, struct10, struct24, struct712
    let v18: i64;  // [sp-0x330]
    let v19: i64;  // [sp-0x328]
    let v20: struct64;  // [sp-0x70], Other Possible Types: i512
    let v22: i64;  // rax
    let v23: i8;  // bpl
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // rdx
    let v30: i8;  // r14b
    let v32: i64;  // r13
    let v33: i64;  // r13
    let v37: i64;  // rcx
    let v38: i64;  // r8
    let v39: i64;  // r9
    let v42: i64;  // rsi
    let v43: i64;  // rcx
    let v44: i64;  // r8
    let v45: i64;  // r9

    v17 = uu_cksum::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v11, &v17, a0, a1);
    if v6 == 0x8000000000000000 {
        v22 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v22;
    }
    v10 = v16;
    v9 = v15;
    v8 = v13;
    v6 = v11;
    v7 = v12;
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "check") as i32;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "algorithm");
    v24 = clap_builder::parser::error::MatchesError::unwrap("algorithm", &v17);
    if v24 {
        v2 = *((v24 + 8) as &i128);
        if !(<T as core::slice::cmp::SliceContains>::slice_contains(&v2, "bsd", 3) as i8 & v23) {
            goto LABEL_5807a9;
        }
    } else if !v23 {
        v2 = struct16 {
            field_0: &g_45577c
            field_8: 3
        };
        <T as core::slice::cmp::SliceContains>::slice_contains(&v2, "bsd", 3);
        goto LABEL_5807a9;
    } else {
        v2 = struct16 {
            field_0: 1
            field_8: 0
        };
        if !<T as core::slice::cmp::SliceContains>::slice_contains(&v2, "bsd", 3) as i8 {
LABEL_5807a9:
            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "length");
            v25 = clap_builder::parser::error::MatchesError::unwrap("length", &v17);
            if !v25 {
                v22 = 0;
                goto LABEL_580843;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, "blake2b") as i8 {
                v17 = uucore::features::checksum::calculate_blake2b_length(*(v25 as &i64), v26);
                v22 = v17.field_8;
                if v17 {
                    return v22;
                }
LABEL_580843:
                v4 = v19;
                if !v23 {
                    v17 = uu_cksum::handle_tag_text_binary_flags(&v6);
                    v22 = v17;
                    if !v22 {
                        v0 = *((&v17 as &char + 8) as &i8);
                        v1 = *((&v17 as &char + 9) as &i8);
                        v17 = uucore::features::checksum::detect_algo(v2, v3, v22, v4);
                        v22 = v18;
                        if v11 {
                            v14 = *((&v17 as &char + 24) as &i128);
                            v11 = v17;
                            v12 = v22;
                            v13 = v19;
                            v30 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "zero") as i8 ? 0 : 10);
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "raw") as i8 {
                                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "base64");
                            }
                            v5 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v13);
                            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "file");
                            v20 = clap_builder::parser::error::MatchesError::unwrap("file", &v17);
                            if !v20 {
                                v17 = struct60 {
                                    field_0: v22
                                    field_8: v4
                                    field_16: v40
                                    field_24: v22
                                    field_32: v5
                                    field_40: v26
                                    field_48: v27
                                    field_56: v0
                                    field_57: v1
                                    field_58: 1
                                    field_59: v41
                                };
                                v22 = uu_cksum::cksum(&v17, v42, v26, v43, v44, v45);
                            } else {
                                v17 = struct60 {
                                    field_0: v22
                                    field_8: v4
                                    field_16: v35
                                    field_24: v22
                                    field_32: v5
                                    field_40: v26
                                    field_48: v27
                                    field_56: v0
                                    field_57: v1
                                    field_58: 1
                                    field_59: v36
                                };
                                v22 = uu_cksum::cksum(&v17, &v20, v26, v37, v38, v39);
                            }
                            if !v22 {
                                return 0;
                            }
                        }
                    }
                } else {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "strict") as i8;
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "status") as i8;
                    if !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "text") as i32 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "binary") as i32) {
                        alloc::boxed::Box<T>::new(12);
                        return v22;
                    }
                    v32 = v3;
                    if v32 {
                        v33 = v2;
                    }
                    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "file");
                    v11 = clap_builder::parser::error::MatchesError::unwrap("file", &v17);
                    core::option::Option<T>::map_or_else(&v17, &v11, v26);
                    v22 = uucore::features::checksum::perform_checksum_validation(v17.field_8, v17.field_16 * 16 + v17.field_8, v33, v32, v22, v4, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "warn") as i32 * 0x10000000000 | v1 * 0x100000000 | v0 * 0x1000000 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "ignore-missing") as i32 * 0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "quiet") as i32 * 0x10000);
                }
                return v22;
            }
        }
    }
    v22 = alloc::boxed::Box<T>::new(12);
    return v22;
}
