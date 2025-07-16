fn uu_mv::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x479]
    let v1: u64;  // [bp-0x478], Other Possible Types: Result<struct56, struct16>, struct56, struct24
    let v2: u128;  // [bp-0x478], Other Possible Types: Result<struct16, struct9>
    let v3: Result<struct40, struct16>;  // [bp-0x478]
    let v4: struct24;  // [bp-0x478]
    let v5: u64;  // [bp-0x470]
    let v6: u64;  // [bp-0x468], Other Possible Types: struct_1 *
    let v7: u32;  // [bp-0x460]
    let v8: void*;  // [bp-0x458]
    let v9: u64;  // [bp-0x428]
    let v10: u64;  // [bp-0x420]
    let v11: u64;  // [bp-0x418]
    let v12: u128;  // [bp-0x410]
    let v13: u64;  // [bp-0x408]
    let v14: u8;  // [bp-0x400]
    let v15: u8;  // [bp-0x3f0]
    let v16: u64;  // [bp-0x3e0]
    let v17: u208;  // [bp-0x3d8], Other Possible Types: struct24, struct64, struct_0 *
    let v18: u64;  // [bp-0x3d0]
    let v20: u64;  // [bp-0x3c8]
    let v21: u64;  // [bp-0x3a8]
    let v22: u128;  // [bp-0x398], Other Possible Types: struct24
    let v23: u64;  // [bp-0x388]
    let v24: struct24;  // [bp-0x380]
    let v25: u64;  // [bp-0x378]
    let v26: u64;  // [bp-0x370]
    let v27: struct24;  // [bp-0x368]
    let v28: u64;  // [bp-0x358]
    let v29: u512;  // [bp-0x350]
    let v30: u8;  // [bp-0x310]
    let v31: u8;  // [bp-0x2f8]
    let v33: u128;  // xmm1
    let v34: u64;  // r14
    let v35: u128;  // xmm0
    let v36: u64;  // rax
    let v37: void*;  // rdx
    let v38: u64;  // rdx
    let v39: u8;  // bl
    let v40: u8;  // r13b
    let v41: u64;  // rax
    let v42: u8;  // al
    let v43: u8;  // al
    let v44: u8;  // al
    let v45: u8;  // al

    uu_mv::uu_app(&v31);
    v1 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v31, a0, a1);
    match v1 {
        Err(_) => {
            v34 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        },
        Ok(_) => {
            v16 = *((&v1 as &char + 48) as &i64);
            v33 = *((&v1 as &char + 32) as &i128);
            memcpy(&v15, &v1, 16);
            memcpy(&v14, &v1, 16);
            v12 = v2;
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, _ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E.field_0, g_587d88.field_0);
            v17 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E.field_0, g_587d88.field_0, &v1);
            v29 = struct64 {
                field_0: v36
                field_8: v18
                field_16: v33
                field_32: v35
                field_48: v21
                field_56: v37
            };
            v24 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v29);
            if v26 == 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v12, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E.field_0, g_587d48.field_0) as i8 {
                v17 = "files";
                v18 = <&T as core::fmt::Display>::fmt;
                v1 = "The argument '<";
                v5 = 2;
                v8 = 0;
                v6 = &v17;
                v7 = 1;
                v1 = core::option::Option<T>::map_or_else(v38);
                v1 = clap_builder::error::Error<F>::format(clap_builder::error::Error<F>::raw(6, &v30), &v31);
                clap_builder::error::Error<F>::exit(&v1); /* do not return */
            }
            v39 = uu_mv::determine_overwrite_mode(&v12) as i32 as i8;
            v2 = uucore::features::backup_control::determine_backup_mode(&v12);
            v34 = v2 as i64;
            if let Err(_) = v2 {
                v40 = uucore::features::update_control::determine_update_mode(&v12) as i32 as i8;
                if !*((&v2 as &char + 8) as &i8) || v39 && !(v40 & 1) {
                    v27 = uucore::features::backup_control::determine_backup_suffix(&v12);
                    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E.field_0, g_587d48.field_0);
                    v41 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E.field_0, g_587d48.field_0, &v3);
                    if v41 {
                        v4 = core::ops::function::FnOnce::call_once(v41);
                        v11 = v6;
                        memcpy(&v9 as u8, &v4, 16);
                        if v9 == 0x8000000000000000 || std::path::Path::is_dir(v10, v11) as u8 {
                            goto LABEL_492f77;
                        }
                        v17 = struct25 {
                            field_0: 1
                            field_8: *(&v10 as &i128)
                            field_24: 1
                        };
                        v22 = <T as alloc::string::ToString>::to_string(&v17);
                        v1 = struct32 {
                            field_0: 8
                            field_8: v22.field_0
                            field_24: v23
                        };
                        v34 = alloc::boxed::Box<T>::new(&v1);
                    } else {
LABEL_492f77:
                        v0 = v40;
                        v23 = v28;
                        memcpy(&v22 as u8, &v27, 16);
                        v20 = v11;
                        v17 = v9;
                        v18 = v10;
                        v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hcc24806db1a5c249E.field_0, g_587d58.field_0) as i32 as i8;
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN5uu_mv11OPT_VERBOSE17h564b3b5f0c97021dE.field_0, g_587d68.field_0) as i8 {
                            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE.field_0, g_587d98.field_0);
                        }
                        v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h51274aa3e0aeb94eE.field_0, g_587d38.field_0) as i32 as i8;
                        v44 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN5uu_mv12OPT_PROGRESS17h1c7c0a4244182235E.field_0, g_587d78.field_0) as i32 as i8;
                        v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE.field_0, g_587d98.field_0) as i8;
                        v1 = struct56 {
                            field_0: v22
                            field_16: v23
                            field_24: *(&v17 as &i128)
                            field_40: v20
                            field_48: v42
                            field_49: 1
                            field_50: v43
                            field_51: v44
                            field_52: v45
                            field_53: v39
                            field_54: *((&v3 as &char + 8) as &i8)
                            field_55: v0
                        };
                        v34 = uu_mv::mv(v25, v26, &v1);
                    }
                } else {
                    v17 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v6 = v20;
                    v1 = v17.field_0;
                    v7 = 1;
                    v34 = alloc::boxed::Box<T>::new(&v2);
                }
            }
        },
    }
    return v34;
}
