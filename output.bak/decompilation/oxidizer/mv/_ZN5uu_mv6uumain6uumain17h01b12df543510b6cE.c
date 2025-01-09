fn uu_mv::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x479]
    let v1: i328;  // [sp-0x478], Other Possible Types: Result<struct56, struct8>, struct56, struct28, struct32, struct24
    let v2: i64;  // [sp-0x470]
    let v3: i64;  // [sp-0x468]
    let v4: i64;  // [bp-0x460]
    let v5: i64;  // [sp-0x458]
    let v6: i8;  // [sp-0x444]
    let v7: i192;  // [bp-0x428], Other Possible Types: struct24
    let v8: i64;  // [sp-0x418]
    let v9: struct56;  // [sp-0x410], Other Possible Types: i64
    let v10: i64;  // [sp-0x408]
    let v11: i64;  // [sp-0x3d8], Other Possible Types: struct24, struct64, struct25
    let v12: i64;  // [sp-0x3d0]
    let v13: i64;  // [sp-0x3c8]
    let v14: struct24;  // [sp-0x398]
    let v16: struct24;  // [sp-0x380], Other Possible Types: i192
    let v17: struct24;  // [sp-0x368]
    let v18: struct64;  // [bp-0x350]
    let v19: i8;  // [bp-0x310]
    let v20: i5696;  // [sp-0x2f8], Other Possible Types: struct712
    let v22: i64;  // rax
    let v31: i8;  // r13b
    let v32: i64;  // rax

    v20 = uu_mv::uu_app();
    v1 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v20, a0, a1);
    if v9 == 0x8000000000000000 {
        v22 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        return v22;
    }
    v9 = struct56 {
        field_0: v1
        field_8: v2
        field_16: *((&v1 as &char + 16) as &i128)
        field_32: *((&v1 as &char + 32) as &i128)
        field_48: *((&v1 as &char + 48) as &i64)
    };
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88);
    v11 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88, &v1);
    *(&v18.field_0 as &struct64) = struct64 {
        field_0: v23
        field_8: v24
        field_16: v25
        field_32: v26
        field_48: v27
        field_56: v28
    };
    v16 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18);
    if *((&v16 as &char + 16) as &i64) == 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48) as i8 {
        v11 = "files";
        v12 = <&T as core::fmt::Display>::fmt;
        v1 = "The argument '<";
        v2 = 2;
        v5 = 0;
        v3 = &v11;
        v4 = 1;
        core::option::Option<T>::map_or_else();
        v1 = clap_builder::error::Error<F>::format(clap_builder::error::Error<F>::raw(6, &v19), &v20);
        clap_builder::error::Error<F>::exit(&v1); /* do not return */
    }
    v1 = uucore::features::backup_control::determine_backup_mode(&v9);
    if v1 {
        return v22;
    }
    v31 = uucore::features::update_control::determine_update_mode(&v9) as i32;
    if *((&v1 as &char + 8) as &i8) && (!uu_mv::determine_overwrite_mode(&v9) as i32 || (v31 & 1)) {
        v11 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v1 = struct28 {
            field_0: v11
            field_16: v13
            field_24: 1
        };
        v22 = alloc::boxed::Box<T>::new(&v1);
    } else {
        v17 = uucore::features::backup_control::determine_backup_suffix(&v9);
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48);
        v32 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48, &v1);
        if !v32 {
            v7 = 0x8000000000000000;
            goto LABEL_492f77;
        } else {
            v1 = core::ops::function::FnOnce::call_once(v32);
            v7 = v1;
            if !(v7 != 0x8000000000000000) || !(!std::path::Path::is_dir(*((&v7 as &char + 8) as &i64), v8) as i8) {
LABEL_492f77:
                v0 = v31;
                v14 = v17;
                v13 = v8;
                v11 = v7;
                v12 = *((&v7 as &char + 8) as &i64);
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hcc24806db1a5c249E, g_587d58);
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN5uu_mv11OPT_VERBOSE17h564b3b5f0c97021dE, g_587d68) as i8 {
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE, g_587d98);
                }
                *(&v1.field_0 as &struct56) = struct56 {
                    field_0: v14
                    field_16: v15
                    field_24: v11
                    field_40: v13
                    field_48: v23 as u8
                    field_49: 1
                    field_50: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h51274aa3e0aeb94eE, g_587d38) as i32 as i8
                    field_51: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN5uu_mv12OPT_PROGRESS17h1c7c0a4244182235E, g_587d78) as i32 as i8
                    field_52: v6
                    field_53: v29
                    field_54: v30
                    field_55: v0
                };
                v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE, g_587d98) as i8;
                v22 = uu_mv::mv(*((&v16 as &char + 8) as &i64), *((&v16 as &char + 16) as &i64), &v1);
                return v22;
            }
            v11 = struct25 {
                field_0: 1
                field_8: *((&v7 as &char + 8) as &i128)
                field_24: 1
            };
            v14 = <T as alloc::string::ToString>::to_string(&v11);
            v1 = struct32 {
                field_0: 8
                field_8: v14
                field_24: v15
            };
            v22 = alloc::boxed::Box<T>::new(&v1);
        }
    }
    return v22;
}
