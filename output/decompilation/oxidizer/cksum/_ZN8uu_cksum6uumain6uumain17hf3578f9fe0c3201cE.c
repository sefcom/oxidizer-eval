fn uu_cksum::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x3da]
    let v1: i8;  // [sp-0x3d9]
    let v2: struct16;  // [bp-0x3d8], Other Possible Types: unsigned long, int
    let v3: i64;  // [sp-0x3d0]
    let v4: i64;  // [sp-0x3c8]
    let v5: i64;  // [sp-0x3c0]
    let v6: i64;  // [sp-0x3b0]
    let v7: i64;  // [sp-0x3a8]
    let v8: iNone;  // [sp-0x3a0]
    let v9: iNone;  // [sp-0x390]
    let v10: i64;  // [sp-0x380]
    let v11: i64;  // [sp-0x378], Other Possible Types: char, struct64
    let v12: i64;  // [sp-0x370]
    let v13: i8;  // [sp-0x368], Other Possible Types: unsigned long
    let v14: iNone;  // [sp-0x360]
    let v15: i8;  // [bp-0x358]
    let v16: i8;  // [bp-0x348]
    let v17: i64;  // [sp-0x338], Other Possible Types: Result<struct40, struct8>, struct56, struct712
    let v18: struct24;  // [sp-0x338], Other Possible Types: int, Result<struct40, struct8>
    let v19: i64;  // [sp-0x330]
    let v20: i64;  // [sp-0x328]
    let v21: i64;  // [sp-0x320]
    let v22: i64;  // [sp-0x318]
    let v23: i64;  // [sp-0x310]
    let v24: i64;  // [sp-0x308]
    let v25: i8;  // [sp-0x300]
    let v26: i8;  // [sp-0x2ff]
    let v27: i8;  // [sp-0x2fe]
    let v28: i8;  // [sp-0x2fd]
    let v29: struct64;  // [sp-0x70]
    let v31: i64;  // r15
    let v32: i8;  // bpl
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rbx
    let v37: i64;  // r13
    let v38: i8;  // r14b
    let v39: i64;  // r12
    let v40: i64;  // rdx
    let v41: i64;  // rax
    let v42: i64;  // rdx

    v17 = uu_cksum::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v11, &v17, a0, a1);
    if v6 == 0x8000000000000000 {
        v31 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v31;
    }
    v10 = *(&v16 as &i64);
    v9 = *(&v15 as &i128);
    v8 = *(&v13 as &i128);
    v6 = v11;
    v7 = v12;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "check") as i32;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "algorithm");
    v33 = clap_builder::parser::error::MatchesError::unwrap("algorithm", &v17);
    if v33 {
        *(&v2 as &i128) = *((v33 + 8) as &i128);
        if !(<T as core::slice::cmp::SliceContains>::slice_contains(&v2, "bsd", 3) as i8 & v32) {
            goto LABEL_580869;
        }
    } else if !v32 {
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
            v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "length");
            v34 = clap_builder::parser::error::MatchesError::unwrap("length", &v18);
            if !v34 {
                v35 = 0;
                goto LABEL_580903;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, "blake2b") as i8 {
                v18 = uucore::features::checksum::calculate_blake2b_length(*(v34 as &i64));
                v35 = v19;
                if v17 {
                    v31 = v35;
                    return v31;
                }
LABEL_580903:
                v4 = v20;
                if !v32 {
                    uu_cksum::handle_tag_text_binary_flags(&v18, &v6);
                    v31 = v17;
                    if v31 {
                        return v31;
                    }
                    v0 = (&v18)[8] as i8;
                    v1 = (&v18)[9] as i8;
                    v17 = uucore::features::checksum::detect_algo(v2, v3, v35, v4);
                    v37 = v17;
                    v31 = v19;
                    if !v37 {
                        return v31;
                    }
                    v14 = *((&v17 as &char + 24) as &i128);
                    v11 = v37;
                    v12 = v31;
                    v13 = v20;
                    v38 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "zero") as i8 ? 0 : 10);
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "raw") as i8 {
                        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "base64");
                    }
                    v5 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v13);
                    v39 = (&v14)[8] as i64;
                    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "file");
                    v29 = clap_builder::parser::error::MatchesError::unwrap("file", &v17);
                    if !v29.field_0 as i64 {
                        v17 = v35;
                        v19 = v4;
                        v20 = v37;
                        v21 = v31;
                        v22 = v5;
                        v23 = v42;
                        v24 = v39;
                        v25 = v0;
                        v26 = v1;
                        v27 = 1;
                        v28 = v38;
                        v41 = uu_cksum::cksum();
                    } else {
                        v17 = v35;
                        v19 = v4;
                        v20 = v37;
                        v21 = v31;
                        v22 = v5;
                        v23 = v40;
                        v24 = v39;
                        v25 = v0;
                        v26 = v1;
                        v27 = 1;
                        v28 = v38;
                        v41 = uu_cksum::cksum(&v17, &v29);
                    }
                    v31 = v41;
                    if v41 {
                        return v31;
                    }
                    return 0;
                } else {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "strict") as i8;
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "status") as i8;
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "warn");
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "ignore-missing");
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "quiet");
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "text") as i32 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "binary") as i32 {
                        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "file");
                        v11 = clap_builder::parser::error::MatchesError::unwrap("file", &v17);
                        core::option::Option<T>::map_or_else(&v17, &v11);
                        return v31;
                    }
                }
            }
        }
    }
    v31 = alloc::boxed::Box<T>::new(12);
    return v31;
}
