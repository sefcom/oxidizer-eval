fn uu_cksum::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x3ea]
    let v1: u8;  // [bp-0x3e9]
    let v2: i64;  // [bp-0x3e8], Other Possible Types: u8
    let v3: u8;  // [bp-0x3e8]
    let v4: u128;  // [bp-0x3e0]
    let v6: u64;  // [bp-0x3d8]
    let v7: u64;  // [bp-0x3d0]
    let v8: u64;  // [bp-0x3c8]
    let v9: struct56;  // [bp-0x3b8]
    let v10: u64;  // [bp-0x380]
    let v11: struct16;  // [bp-0x378], Other Possible Types: struct64
    let v12: struct56;  // [bp-0x378], Other Possible Types: u64
    let v13: u8;  // [bp-0x370]
    let v14: std::env::ArgsOs;  // [bp-0x338], Other Possible Types: struct24, struct40, struct712, Result<struct40, struct16>, struct56, struct60
    let v15: u64;  // [bp-0x330]
    let v16: u64;  // [bp-0x328]
    let v17: i64;  // [bp-0x320]
    let v18: u64;  // [bp-0x318]
    let v19: struct64;  // [bp-0x70]
    let v21: u8;  // bpl
    let v22: i64;  // rax
    let v23: i64;  // rax
    let v24: core::fmt::rt::Argument;  // cl
    let v25: u64;  // rbx
    let v26: u64;  // r12
    let v27: u8;  // al
    let v28: u8;  // al
    let v29: u32;  // eax
    let v30: u32;  // eax
    let v31: u8;  // al
    let v32: u64;  // r15
    let v33: u64;  // r15
    let v35: u64;  // r12
    let v36: u64;  // r14
    let v38: u8;  // r13b
    let v39: u8;  // bpl
    let v40: u64;  // rdx
    let v41: u64;  // rax
    let v42: u64;  // rdx

    v14 = uu_cksum::uu_app();
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v14, a0, a1);
    if (((0 ^ v11.field_0) & (0 ^ -(v12))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11.field_8);
    }
    v9 = v12;
    v9 = v12;
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "check");
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9);
    v22 = clap_builder::parser::error::MatchesError::unwrap(&v14);
    if v22 {
        v4 = *((v22 + 8) as &i128);
    }
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9);
    v23 = clap_builder::parser::error::MatchesError::unwrap(&v14);
    if v23 {
        v24 = 10;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "blake2b") {
            goto LABEL_4832b8;
        }
        v14 = uucore::features::checksum::calculate_blake2b_length(*(v23 as &i64));
        v25 = v15;
        if (v14.field_0 as i8 & 1) {
            v26 = v25;
        } else {
            v7 = v16;
            goto LABEL_4832a9;
        }
    } else {
LABEL_4832a9:
        v24 = 12;
        if (<T as core::slice::cmp::SliceContains>::slice_contains(&v4) & v21) {
LABEL_4832b8:
            v26 = alloc::boxed::Box<T>::new(v24);
        } else if v21 {
            v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "text");
            v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "binary");
            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "strict");
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "status");
            v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "warn");
            v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "ignore-missing");
            v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "quiet");
            v24 = 11;
            if v28 || v27 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "tag") {
                goto LABEL_4832b8;
            }
            v32 = v6;
            v33 = v32;
            if v33 {
                v33 = v4;
            }
            v35 = v33;
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9);
            v11 = clap_builder::parser::error::MatchesError::unwrap(&v14);
            core::option::Option<T>::map_or_else(&v14, &v11);
            v26 = uucore::features::checksum::perform_checksum_validation(v15, v16 * 16 + v15, v35, v32, v25, v7, v30 * 0x100 | v3 * 0x10000 | (!v0 ? (!v31 ? (v29 | 2) * 0x1000000 : 0x1000000) : 0));
        } else {
            v14 = std::env::args_os();
            uu_cksum::handle_tag_text_binary_flags(&v11, &v14);
            v26 = v11.field_0;
            if !v11.field_0 {
                v1 = v13;
                v0 = *((&v11.field_8 as &char + 1) as &i8);
                v14 = uucore::features::checksum::detect_algo(v4, v6, v25, v7);
                v36 = v14.field_0;
                v26 = v15;
                if v36 {
                    v2 = v17;
                    v10 = v18;
                    v38 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "zero") ? 0 : 10);
                    v39 = 1;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "raw") {
                        v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "base64") * 2;
                    }
                    v8 = *((v2 + 40) as &i64)(v16) as i64;
                    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9);
                    v19 = clap_builder::parser::error::MatchesError::unwrap(&v14);
                    if v19.field_0 as i64 {
                        v14 = struct60 {
                            field_0: v25
                            field_8: v7
                            field_16: v36
                            field_24: v26
                            field_32: v8
                            field_40: v40
                            field_48: v10
                            field_56: v1
                            field_57: v0
                            field_58: v39
                            field_59: v38
                        };
                        v41 = uu_cksum::cksum(&v14, &v19);
                    } else {
                        v14 = struct60 {
                            field_0: v25
                            field_8: v7
                            field_16: v36
                            field_24: v26
                            field_32: v8
                            field_40: v42
                            field_48: v10
                            field_56: v1
                            field_57: v0
                            field_58: v39
                            field_59: v38
                        };
                        v41 = uu_cksum::cksum(&v14);
                    }
                    v26 = v41;
                    return 0;
                }
            }
        }
    }
    return v26;
}
