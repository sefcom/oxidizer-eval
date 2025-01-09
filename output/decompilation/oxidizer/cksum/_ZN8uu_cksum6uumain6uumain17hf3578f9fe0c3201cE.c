fn uu_cksum::uumain::uumain(a0: u32, a1: u32) -> u64 {
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
    let v13: i8;  // [bp-0x368]
    let v14: i128;  // [sp-0x360]
    let v15: i8;  // [bp-0x358]
    let v16: i8;  // [bp-0x348]
    let v17: i320;  // [sp-0x338], Other Possible Types: Result<struct40, struct8>, struct56, struct24, struct712
    let v18: i64;  // [sp-0x330]
    let v19: i64;  // [sp-0x328]
    let v20: i64;  // [sp-0x320]
    let v21: i64;  // [sp-0x318]
    let v22: i64;  // [sp-0x310]
    let v23: i64;  // [sp-0x308]
    let v24: i8;  // [sp-0x300]
    let v25: i8;  // [sp-0x2ff]
    let v26: i8;  // [sp-0x2fe]
    let v27: i8;  // [sp-0x2fd]
    let v28: struct64;  // [sp-0x70], Other Possible Types: i512
    let v30: i64;  // rax
    let v31: i8;  // bpl
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // rbx
    let v35: i64;  // r13
    let v36: i64;  // r15
    let v39: i8;  // r14b
    let v41: i64;  // r13
    let v42: i64;  // r13
    let v44: i64;  // r12
    let v45: i64;  // rdx
    let v46: i64;  // rax
    let v47: i64;  // rdx

    v17 = uu_cksum::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v11, &v17, a0, a1);
    if v6 == 0x8000000000000000 {
        v30 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v30;
    }
    v10 = v16;
    v9 = v15;
    v8 = v13;
    v6 = v11;
    v7 = v12;
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "check") as i32;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "algorithm");
    v32 = clap_builder::parser::error::MatchesError::unwrap("algorithm", &v17);
    if v32 {
        v2 = *((v32 + 8) as &i128);
        if !(<T as core::slice::cmp::SliceContains>::slice_contains(&v2, "bsd", 3) as i8 & v31) {
            goto LABEL_580869;
        }
    } else if !v31 {
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
            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "length");
            v33 = clap_builder::parser::error::MatchesError::unwrap("length", &v17);
            if !v33 {
                v34 = 0;
                goto LABEL_580903;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, "blake2b") as i8 {
                v17 = uucore::features::checksum::calculate_blake2b_length(*(v33 as &i64));
                if v17 {
                    return v30;
                }
LABEL_580903:
                v4 = v19;
                if !v31 {
                    uu_cksum::handle_tag_text_binary_flags(&v17, &v6);
                    if v17 {
                        return v30;
                    }
                    v0 = *((&v17 as &char + 8) as &i8);
                    v1 = *((&v17 as &char + 9) as &i8);
                    v17 = uucore::features::checksum::detect_algo(v2, v3, v34, v4);
                    v35 = v17;
                    v36 = v18;
                    if !v35 {
                        return v30;
                    }
                    v14 = *((&v17 as &char + 24) as &i128);
                    v11 = v35;
                    v12 = v36;
                    v13 = v19;
                    v39 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "zero") as i8 ? 0 : 10);
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "raw") as i8 {
                        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "base64");
                    }
                    v5 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v13);
                    v44 = *((&v14 as &char + 8) as &i64);
                    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "file");
                    v28 = clap_builder::parser::error::MatchesError::unwrap("file", &v17);
                    if !v28 {
                        v17 = v34;
                        v18 = v4;
                        v19 = v35;
                        v20 = v36;
                        v21 = v5;
                        v22 = v47;
                        v23 = v44;
                        v24 = v0;
                        v25 = v1;
                        v26 = 1;
                        v27 = v39;
                        v46 = uu_cksum::cksum();
                    } else {
                        v17 = v34;
                        v18 = v4;
                        v19 = v35;
                        v20 = v36;
                        v21 = v5;
                        v22 = v45;
                        v23 = v44;
                        v24 = v0;
                        v25 = v1;
                        v26 = 1;
                        v27 = v39;
                        v46 = uu_cksum::cksum();
                    }
                    if v46 {
                        return v30;
                    }
                    v30 = 0;
                    return 0;
                } else {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "strict") as i8;
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "status") as i8;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "text") as i32 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "binary") as i32 {
                        v41 = v3;
                        if v41 {
                            v42 = v2;
                        }
                        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "file");
                        v11 = clap_builder::parser::error::MatchesError::unwrap("file", &v17);
                        core::option::Option<T>::map_or_else(&v17, &v11);
                        uucore::features::checksum::perform_checksum_validation(v18, v19 * 16 + v18, v42, v41, v34, v4, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "warn") as i32 * 0x10000000000 | v1 * 0x100000000 | v0 * 0x1000000 & 4294967295 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "ignore-missing") as i32 * 0x100 & 4294967295 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "quiet") as i32 * 0x10000 & 4294967295);
                        return v30;
                    }
                }
            }
        }
    }
    alloc::boxed::Box<T>::new(12);
    return v30;
}
