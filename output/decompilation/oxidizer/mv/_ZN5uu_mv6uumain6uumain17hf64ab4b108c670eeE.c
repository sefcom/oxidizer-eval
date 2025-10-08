fn uu_mv::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i8;  // [bp-0x43a]
    let v1: u8;  // [bp-0x439]
    let v2: struct24;  // [bp-0x438], Other Possible Types: struct32, struct64, struct56, Result<struct56, struct16>, u64
    let v3: struct56;  // [bp-0x438], Other Possible Types: u128
    let v4: u64;  // [bp-0x430]
    let v5: u64;  // [bp-0x428]
    let v6: u32;  // [bp-0x420]
    let v7: u64;  // [bp-0x3e8]
    let v8: u64;  // [bp-0x3e0]
    let v9: u64;  // [bp-0x3d8]
    let v10: struct56;  // [bp-0x3d0]
    let v11: u64;  // [bp-0x3c8]
    let v12: struct24;  // [bp-0x398], Other Possible Types: struct25, struct64
    let v13: u64;  // [bp-0x388]
    let v14: u64;  // [bp-0x368]
    let v15: u8;  // [bp-0x358]
    let v16: u64;  // [bp-0x350]
    let v17: u64;  // [bp-0x348]
    let v18: struct24;  // [bp-0x340]
    let v19: u64;  // [bp-0x330]
    let v20: struct24;  // [bp-0x328]
    let v21: u64;  // [bp-0x318]
    let v22: alloc::string::String;  // [bp-0x310]
    let v23: struct712;  // [bp-0x2f8]
    let v25: u64;  // r15
    let v26: iNone;  // xmm1
    let v27: u128;  // xmm0
    let v28: u64;  // rcx
    let v29: u64;  // rax
    let v30: void*;  // rdx
    let v31: u64;  // rax
    let v32: u8;  // bpl
    let v33: u8;  // bl
    let v34: i8;  // r13b
    let v35: i64;  // rax
    let v36: u8;  // al
    let v37: u8;  // al
    let v38: u8;  // al

    v23 = uu_mv::uu_app();
    v2 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v23, a0, a1);
    if (((0 ^ v2 as i64) & (0 ^ -(v3))) >> 63) as char {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
    } else {
        v26 = *((&v2 as &char + 32) as &i128);
        v10 = v3;
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10, _ZN5uu_mv9ARG_FILES17he14f9154b9a463acE.field_0, g_5415c8.field_0);
        v12 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv9ARG_FILES17he14f9154b9a463acE.field_0, g_5415c8.field_0, &v2);
        v2 = struct64 {
            field_0: v29
            field_8: v28
            field_16: v26
            field_32: v27
            field_48: v14
            field_56: v30
        };
        core::iter::traits::iterator::Iterator::collect(&v15, &v2);
        if v17 == 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v10, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h77eb98cd3bbfa9edE.field_0, g_541588.field_0) {
            v22 = format!("The argument '<{}>...' requires at least 2 values, but only 1 was provided", "files");
            v31 = clap_builder::error::Error<F>::raw(&v22);
            clap_builder::error::Error<F>::format(v31, &v23);
            v2 = v31;
            clap_builder::error::Error<F>::exit(&v2); /* do not return */
        }
        v32 = uu_mv::determine_overwrite_mode(&v10);
        v2 = uucore::features::backup_control::determine_backup_mode(&v10);
        v25 = v2 as i64;
        v33 = v4;
        if let Err(_) = v2 {
            v34 = uucore::features::update_control::determine_update_mode(&v10) as u32 as u8;
            if v33 && (((!v32) as u8 as u8 | v34) & 1) {
                v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("cannot combine --backup with -n/--no-clobber or --update=none-fail");
                v5 = v13;
                v3 = *(&v12.field_0 as &i128) as u128;
                v6 = 1;
                v25 = alloc::boxed::Box<T>::new(&v2) as u64;
            } else {
                v18 = uucore::features::backup_control::determine_backup_suffix(&v10);
                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h77eb98cd3bbfa9edE.field_0, g_541588.field_0);
                v35 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h77eb98cd3bbfa9edE.field_0, g_541588.field_0, &v2);
                if v35 {
                    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v35 + 8) as &i64), *((v35 + 16) as &i64));
                    v7 = v4;
                    v9 = v5;
                    if v2.field_0 == 0x8000000000000000 {
                        v8 = 0x8000000000000000;
                        v0 = v34;
                        goto LABEL_479c8c;
                    }
                    if std::path::Path::is_dir(v4, v9) as u8 {
                        v0 = v34;
                        v8 = v2.field_0;
LABEL_479c8c:
                        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hd8dfd0a13820f25cE.field_0, g_541598.field_0) as u8;
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN5uu_mv11OPT_VERBOSE17h47157023e9bd1ebdE.field_0, g_5415a8.field_0) as u8 {
                            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN5uu_mv9OPT_DEBUG17h2efdc9740af23c68E.field_0, g_5415d8.field_0);
                        }
                        v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h95889265a0210865E.field_0, g_541578.field_0) as u32 as u8;
                        v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN5uu_mv12OPT_PROGRESS17h9d10bdda2f353b4fE.field_0, g_5415b8.field_0) as u32 as u8;
                        v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN5uu_mv9OPT_DEBUG17h2efdc9740af23c68E.field_0, g_5415d8.field_0) as u8;
                        v2 = struct56 {
                            field_0: *(&v18.field_0 as &i128)
                            field_16: v19
                            field_24: v8
                            field_32: v7
                            field_40: v9
                            field_48: v1
                            field_49: 1
                            field_50: v36
                            field_51: v37
                            field_52: v38
                            field_53: v32
                            field_54: v33
                            field_55: v0
                        };
                        v25 = uu_mv::mv(v16, v17, &v2);
                    } else {
                        v12 = struct25 {
                            field_0: 1
                            field_8: v7
                            field_16: v9
                            field_24: 1
                        };
                        v20 = <T as alloc::string::SpecToString>::spec_to_string(&v12);
                        v2 = struct32 {
                            field_0: 7
                            field_8: *(&v20.field_0 as &i128)
                            field_24: v21
                        };
                        v25 = alloc::boxed::Box<T>::new(&v2) as u64;
                    }
                } else {
                    v8 = 0x8000000000000000;
                    v0 = v34;
                    goto LABEL_479c8c;
                }
            }
        }
    }
    return v25;
}
