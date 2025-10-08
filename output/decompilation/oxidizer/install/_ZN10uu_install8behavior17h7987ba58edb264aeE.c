fn uu_install::behavior(a1: i64) -> Result<struct104, struct24> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x154]
    let v1: u8;  // [bp-0x153]
    let v2: u8;  // [bp-0x152]
    let v3: struct640;  // [bp-0x151]
    let v4: struct24;  // [bp-0x150], Other Possible Types: struct640, struct712, struct8
    let v5: u32;  // [bp-0x150]
    let v7: struct640;  // [bp-0x148], Other Possible Types: struct712
    let v8: struct640;  // [bp-0x140]
    let v9: alloc::string::String;  // [bp-0x138], Other Possible Types: u128
    let v10: u64;  // [bp-0x130]
    let v11: struct712;  // [bp-0x128], Other Possible Types: struct640
    let v12: struct640;  // [bp-0x120]
    let v13: struct640;  // [bp-0x11c]
    let v14: struct640;  // [bp-0x118], Other Possible Types: struct712, Result<struct40, struct16>, struct24, u128
    let v15: Result<struct128, struct16>;  // [bp-0x118]
    let v16: Result<struct32, struct16>;  // [bp-0x118]
    let v17: Result<struct40, struct16>;  // [bp-0x118]
    let v18: u64;  // [bp-0x118]
    let v19: struct712;  // [bp-0x110], Other Possible Types: u128
    let v20: struct640;  // [bp-0x108]
    let v21: struct640;  // [bp-0x100], Other Possible Types: struct712, u128
    let v22: struct640;  // [bp-0xf8]
    let v23: struct640;  // [bp-0xf0]
    let v24: struct24;  // [bp-0xe8]
    let v25: struct712;  // [bp-0x94]
    let v26: u32;  // [bp-0x90]
    let v27: core::fmt::rt::Argument;  // [bp-0x8c]
    let v28: u128;  // [bp-0x88]
    let v29: u64;  // [bp-0x80]
    let v30: struct712;  // [bp-0x78]
    let v31: u128;  // [bp-0x68]
    let v32: u64;  // [bp-0x60]
    let v33: struct640;  // [bp-0x58]
    let v34: alloc::string::String;  // [bp-0x50], Other Possible Types: u64
    let v35: u192;  // [bp-0x50]
    let v36: struct640;  // [bp-0x40]
    let v37: struct712;  // [bp-0x38]
    let v39: u32;  // r13d
    let v40: u64;  // rbp
    let v41: i64;  // rax
    let v42: u32;  // eax
    let v43: core::fmt::rt::Argument;  // r15d
    let v44: u64;  // rdx
    let v45: u64;  // rax
    let v46: u8;  // r15b
    let v47: u64;  // rdx
    let v48: u64;  // rax
    let v49: struct56;  // r12
    let v50: u64;  // rdx
    let v51: u64;  // rdx
    let v53: u64;  // rdx
    let v54: i64;  // rax
    let v55: u64;  // rcx
    let v56: void*;  // rdx
    let v57: i64;  // rax
    let v58: void*;  // rcx
    let v59: void*;  // rdx
    let v60: i64;  // rax
    let v61: void*;  // rcx
    let v62: u8;  // al
    let v63: iNone;  // xmm1

    v39 = 0;
    v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "directory");
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "mode") {
        v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "mode");
        v41 = clap_builder::parser::error::MatchesError::unwrap("mode", &v14);
        if !v41 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1)
                field_16: v44
            };
        }
        v42 = uucore::features::mode::get_umask();
        uu_install::mode::parse(&v9, *((v41 + 8) as &i64), *((v41 + 16) as &i64), v40, v42);
        if v9 == 0x8000000000000000 {
            goto LABEL_46680f;
        }
        v14 = v9;
        uu_install::behavior::{{closure}}(&v14);
        return struct24 {
            field_0: 0x8000000000000000
            field_8: uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1)
            field_16: v44
        };
    } else {
LABEL_46680f:
        uucore::features::backup_control::determine_backup_mode(&v18, a1);
        if v18 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v18
                field_16: v19
            };
        }
        v37 = v19;
        v27 = v43;
        v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "target-directory");
        v45 = clap_builder::parser::error::MatchesError::unwrap("target-directory", &v14);
        if v45 {
            v34 = <alloc::string::String as core::clone::Clone>::clone(v45);
        }
        v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-target-directory");
        if (v34 != 0x8000000000000000 & v46) {
            v9 = uucore::util_name();
            v10 = v47;
            eprint!("{}: ", &v9);
            eprintln!("Options --target-directory and --no-target-directory are mutually exclusive");
            v48 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
        } else {
            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "preserve-timestamps");
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "compare");
            v49 = &g_41c6a7.field_0;
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "strip");
            if v2 {
                if !v0 {
                    goto LABEL_466b84;
                }
                v9 = uucore::util_name();
                v10 = v50;
                eprint!("{}: ", &v9);
                eprintln!("Options --compare and --preserve-timestamps are mutually exclusive");
                v48 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
            } else if (v1 & v0) {
                v9 = uucore::util_name();
                v10 = v51;
                eprint!("{}: ", &v9);
                eprintln!("Options --compare and --strip are mutually exclusive");
                v48 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
            } else {
LABEL_466b84:
                v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "owner");
                v54 = clap_builder::parser::error::MatchesError::unwrap("owner", &v14);
                v14 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v55, v56);
                v30 = v20;
                v28 = v14.field_0;
                if v20 {
                    v15 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(v29, v20);
                    if let Err(_) = v15 {
                        v7 = v19;
                        v4 = 1;
                        v9 = <alloc::string::String as core::clone::Clone>::clone(&v28 as u8);
                        v21 = v11;
                        v19 = *(&v9.vec.buf.inner.cap as &i128) as u128;
                        v14 = 11;
                        return struct24 {
                            field_0: 0x8000000000000000
                            field_8: alloc::boxed::Box<T>::new(&v14) as u64
                            field_16: &g_502208
                        };
                    }
                }
                v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "group");
                v57 = clap_builder::parser::error::MatchesError::unwrap("group", &v14);
                v14 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec((v58 ? v58 : 1), v59);
                v33 = v20;
                v31 = v14.field_0;
                if v20 {
                    v16 = <uucore::features::entries::Group as uucore::features::entries::Locate<&str>>::locate(v32, v20);
                    match v16 {
                        Err(_) => {
                            v7 = v19;
                            v4 = 1;
                            v9 = <alloc::string::String as core::clone::Clone>::clone(&v31 as u8);
                            v21 = v11;
                            v19 = *(&v9.vec.buf.inner.cap as &i128) as u128;
                            v14 = 12;
                            return struct24 {
                                field_0: 0x8000000000000000
                                field_8: alloc::boxed::Box<T>::new(&v14) as u64
                                field_16: &g_502208
                            };
                        },
                        Ok(_) => {
                            v12 = 1;
                            v4 = v5;
                        },
                    }
                } else {
                    v12 = 0;
                }
                uucore::features::backup_control::determine_backup_suffix(&v4, a1);
                v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose");
                v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "strip-program");
                v60 = clap_builder::parser::error::MatchesError::unwrap("strip-program", &v17);
                v14 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v49, (v61 ? v60 : 5));
                v11 = v20;
                v9 = v14.field_0;
                v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "create-leading");
                v24 = v35;
                v63 = *(&v4 as &i128);
                *(&v14 as void*) = v63;
                v20 = v8;
                v21 = v9;
                v23 = v11;
                return Ok(struct104 {
                    field_0: v63
                    field_16: v20
                    field_24: v21
                    field_32: v22
                    field_40: v23
                    field_48: v24.field_0
                    field_64: v36
                    field_72: v27
                    field_76: v26
                    field_80: v13
                    field_84: v25
                    field_88: v12
                    field_92: v39
                    field_96: v40 as u8 ^ 1
                    field_97: v3
                    field_98: v2
                    field_99: v0
                    field_100: v1
                    field_101: v62
                    field_102: v46
                    field_103: v37 as u8
                });
            }
        }
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v48
            field_16: v53
        };
    }
}
