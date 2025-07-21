fn uu_cksum::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x3da]
    let v1: core::result::Result<u16, core::num::error::ParseIntError>;  // [bp-0x3d9], Other Possible Types: u8
    let v2: u128;  // [bp-0x3d8]
    let v3: u64;  // [bp-0x3d0]
    let v4: u64;  // [bp-0x3c8]
    let v5: u64;  // [bp-0x3c0]
    let v6: u64;  // [bp-0x3b0]
    let v7: u64;  // [bp-0x3a8]
    let v8: u128;  // [bp-0x3a0]
    let v9: u128;  // [bp-0x390]
    let v10: u64;  // [bp-0x380]
    let v11: Result<struct56, struct16>;  // [bp-0x378], Other Possible Types: struct64, u64
    let v12: u64;  // [bp-0x370]
    let v13: u64;  // [bp-0x368]
    let v14: u128;  // [bp-0x360]
    let v15: u128;  // [bp-0x358]
    let v16: struct40;  // [bp-0x338], Other Possible Types: struct56, u8
    let v17: Result<struct40, struct16>;  // [bp-0x338], Other Possible Types: u64
    let v18: Result<struct40, struct16>;  // [bp-0x338]
    let v19: struct24;  // [bp-0x338]
    let v20: u64;  // [bp-0x338]
    let v21: struct56;  // [bp-0x338]
    let v22: u64;  // [bp-0x330]
    let v23: u56;  // [bp-0x32f]
    let v24: u64;  // [bp-0x328]
    let v25: u64;  // [bp-0x320]
    let v26: u64;  // [bp-0x318]
    let v27: u64;  // [bp-0x310]
    let v28: u64;  // [bp-0x308]
    let v29: u8;  // [bp-0x300]
    let v30: u8;  // [bp-0x2ff]
    let v31: u8;  // [bp-0x2fe]
    let v32: u8;  // [bp-0x2fd]
    let v33: struct64;  // [bp-0x70]
    let v35: u8;  // bpl
    let v36: i64;  // rax
    let v37: u8;  // cl
    let v38: i64;  // rax
    let v39: u64;  // rbx
    let v40: u64;  // r12
    let v41: u64;  // r15
    let v42: u8;  // al
    let v43: u8;  // al
    let v44: u64;  // r13
    let v45: u32;  // eax
    let v46: u32;  // eax
    let v48: u32;  // eax
    let v49: u8;  // r14b
    let v50: u8;  // bpl
    let v51: u64;  // r13
    let v52: u64;  // r13
    let v54: u64;  // r14
    let v55: u64;  // rsi
    let v56: u64;  // r12
    let v57: u64;  // rdx
    let v58: u64;  // rax
    let v59: u64;  // rdx

    uu_cksum::uu_app(&v16);
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v16, a0, a1);
    match v11 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        },
        Ok(_) => {
            v10 = *((&v11 as &char + 48) as &i64);
            v9 = v15;
            v8 = *((&v11 as &char + 16) as &i128);
            v6 = v11 as i64;
            v7 = v12;
            v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "check") as i32 as i8;
            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "algorithm");
            v36 = clap_builder::parser::error::MatchesError::unwrap("algorithm", &v17);
            if v36 {
                v2 = *((v36 + 8) as &i128) as u128;
                v37 = 12;
                if !(<T as core::slice::cmp::SliceContains>::slice_contains(&v2 as u8, "bsd", 3) as u8 & v35) {
                    goto LABEL_580869;
                }
                goto LABEL_5809d4;
            } else {
                if v35 {
                    v2 = 1;
                    v3 = 0;
                    v37 = 12;
                    if !<T as core::slice::cmp::SliceContains>::slice_contains(&v2, "bsd", 3) as u8 {
                        goto LABEL_580869;
                    }
LABEL_5809d4:
                    v41 = alloc::boxed::Box<T>::new(v37);
                } else {
                    v2 = &g_455663;
                    v3 = 3;
                    <T as core::slice::cmp::SliceContains>::slice_contains(&v2, "bsd", 3);
LABEL_580869:
                    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "length");
                    v38 = clap_builder::parser::error::MatchesError::unwrap("length", &v18);
                    if v38 {
                        v37 = 10;
                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3 as u32, "blake2b") as i8 {
                            goto LABEL_5809d4;
                        }
                        v19 = uucore::features::checksum::calculate_blake2b_length(*(v38 as &i64));
                        v39 = v19.field_8;
                        v40 = v24;
                        if !v19.field_0 {
                            goto LABEL_580903;
                        }
                        v41 = v39;
                    } else {
LABEL_580903:
                        v4 = v40;
                        if v35 {
                            v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "text") as i32 as i8;
                            v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "binary") as i32 as i8;
                            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "strict") as i8;
                            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "status") as i8;
                            v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "warn") as i32;
                            v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "ignore-missing") as i32;
                            v48 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "quiet") as i32;
                            v37 = 11;
                            if !(!v42 && !v43) {
                                goto LABEL_5809d4;
                            }
                            v51 = v3;
                            v52 = v51;
                            if v52 {
                                v52 = v2;
                            }
                            v54 = v52;
                            v16 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "file");
                            v11 = clap_builder::parser::error::MatchesError::unwrap("file", &v16);
                            core::option::Option<T>::map_or_else(&v16, &v11);
                            v41 = uucore::features::checksum::perform_checksum_validation(v16.field_8, v24 * 16 + v16.field_8, v54, v51, v39, v4, v45 as u64 * 0x10000000000 | v1 as u64 * 0x100000000 | (v0 as u32 * 0x1000000) as u64 | (v46 * 0x100) as u64 | (v48 * 0x10000) as u64);
                        } else {
                            uu_cksum::handle_tag_text_binary_flags(&v16, &v6);
                            v41 = v20;
                            if !v20 {
                                v0 = *((&v18 as &char + 8) as &i8);
                                v1 = v23 as i8;
                                v16 = uucore::features::checksum::detect_algo(v2, v3, v39, v4);
                                v44 = v16.field_0;
                                v41 = v16.field_8;
                                if v44 {
                                    v14 = *(&v16.field_24 as &i128) as u128;
                                    v11 = v44;
                                    v12 = v41;
                                    v13 = v24;
                                    v49 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "zero") as i8 ? 0 : 10);
                                    v50 = 1;
                                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "raw") as i8 {
                                        v50 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "base64") as i8 * 2;
                                    }
                                    v5 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v13, v55) as u64;
                                    v56 = *((&v14 as &char + 8) as &i64);
                                    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "file");
                                    v33 = clap_builder::parser::error::MatchesError::unwrap("file", &v21);
                                    if v33.field_0 as i64 {
                                        v17 = v39;
                                        v22 = v4;
                                        v24 = v44;
                                        v25 = v41;
                                        v26 = v5;
                                        v27 = v57;
                                        v28 = v56;
                                        v29 = v0;
                                        v30 = v1;
                                        v31 = v50;
                                        v32 = v49;
                                        v58 = uu_cksum::cksum(&v17, &v33);
                                    } else {
                                        v17 = v39;
                                        v22 = v4;
                                        v24 = v44;
                                        v25 = v41;
                                        v26 = v5;
                                        v27 = v59;
                                        v28 = v56;
                                        v29 = v0;
                                        v30 = v1;
                                        v31 = v50;
                                        v32 = v49;
                                        v58 = uu_cksum::cksum();
                                    }
                                    v41 = v58;
                                    return 0;
                                }
                            }
                        }
                    }
                }
                return v41;
            }
        },
    }
}
