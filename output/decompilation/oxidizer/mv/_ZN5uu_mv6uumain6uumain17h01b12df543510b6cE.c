fn uu_mv::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x479]
    let v1: i128;  // [bp-0x478], Other Possible Types: Result<struct16, struct1>, struct56, struct24
    let v2: struct24;  // [sp-0x470], Other Possible Types: i64
    let v3: i64;  // [sp-0x468]
    let v4: i64;  // [bp-0x460]
    let v5: i64;  // [sp-0x458]
    let v6: i64;  // [bp-0x428], Other Possible Types: struct24
    let v7: i64;  // [sp-0x418]
    let v8: i448;  // [sp-0x410]
    let v9: i64;  // [sp-0x408]
    let v10: i64;  // [sp-0x3d8], Other Possible Types: struct24, struct64, struct25
    let v11: i64;  // [sp-0x3d0]
    let v12: i64;  // [sp-0x3c8]
    let v13: struct24;  // [sp-0x398], Other Possible Types: i192
    let v14: i192;  // [sp-0x380], Other Possible Types: struct24
    let v15: struct24;  // [sp-0x368]
    let v16: struct64;  // [bp-0x350]
    let v17: i8;  // [bp-0x310]
    let v18: i5696;  // [sp-0x2f8], Other Possible Types: struct712
    let v28: i8;  // r13b
    let v29: i64;  // rax
    let v31: i64;  // r14

    v18 = uu_mv::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from_mut(&v1, &v18, a0, a1);
    if v8 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v31;
    }
    v8 = v1;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, _ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88);
    v10 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88, &v1);
    *(&v16.field_0 as &struct64) = struct64 {
        field_0: v20
        field_8: v25
        field_16: v21
        field_32: v22
        field_48: v23
        field_56: v24
    };
    v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v16);
    if *((&v14 as &char + 16) as &i64) == 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v8, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48) as i8 {
        v10 = "files";
        v11 = <&T as core::fmt::Display>::fmt;
        v1 = "The argument '<";
        v2 = 2;
        v5 = 0;
        v3 = &v10;
        v4 = 1;
        core::option::Option<T>::map_or_else();
        v1 = clap_builder::error::Error<F>::format(clap_builder::error::Error<F>::raw(6, &v17), &v18);
        clap_builder::error::Error<F>::exit(&v1); /* do not return */
    }
    v1 = uucore::features::backup_control::determine_backup_mode(&v8);
    if v1 {
        return v31;
    }
    v28 = uucore::features::update_control::determine_update_mode(&v8) as i32;
    if *((&v1 as &char + 8) as &i8) && (!uu_mv::determine_overwrite_mode(&v8) as i32 || (v28 & 1)) {
        v10 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v1 = v10;
        alloc::boxed::Box<T>::new(&v1);
    } else {
        v15 = uucore::features::backup_control::determine_backup_suffix(&v8);
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48);
        v29 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48, &v1);
        if !v29 {
            v6 = 0x8000000000000000;
            goto LABEL_492f77;
        } else {
            v1 = core::ops::function::FnOnce::call_once(v29);
            v6 = v1;
            if !(v6 != 0x8000000000000000) || !(!std::path::Path::is_dir(*((&v6 as &char + 8) as &i64), v7) as i8) {
LABEL_492f77:
                v0 = v28;
                v13 = v15;
                v12 = v7;
                v10 = v6;
                v11 = *((&v6 as &char + 8) as &i64);
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hcc24806db1a5c249E, g_587d58);
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN5uu_mv11OPT_VERBOSE17h564b3b5f0c97021dE, g_587d68) as i8 {
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE, g_587d98);
                }
                v1 = v13;
                uu_mv::mv(*((&v14 as &char + 8) as &i64), *((&v14 as &char + 16) as &i64), &v1);
                return v31;
            }
            v10 = struct25 {
                field_0: 1
                field_8: *((&v6 as &char + 8) as &i128)
                field_24: 1
            };
            v13 = <T as alloc::string::ToString>::to_string(&v10);
            v2 = v13;
            v1 = 8;
            alloc::boxed::Box<T>::new(&v1);
        }
    }
    return v31;
}
