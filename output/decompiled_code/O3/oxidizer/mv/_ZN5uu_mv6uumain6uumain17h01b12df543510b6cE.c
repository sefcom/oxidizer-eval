fn uu_mv::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x479]
    let v1: i448;  // [sp-0x478], Other Possible Types: Result<struct56, struct16>, struct24, struct56
    let v2: i192;  // [bp-0x470]
    let v3: i64;  // [bp-0x428]
    let v4: i64;  // [sp-0x418]
    let v5: i448;  // [sp-0x410]
    let v6: i64;  // [sp-0x408]
    let v7: i64;  // [sp-0x3d8], Other Possible Types: struct64, struct25, struct24
    let v8: i64;  // [sp-0x3d0]
    let v9: i64;  // [sp-0x3c8]
    let v10: i192;  // [sp-0x398], Other Possible Types: struct24
    let v11: i192;  // [sp-0x380], Other Possible Types: struct24
    let v12: struct24;  // [sp-0x368], Other Possible Types: i192
    let v13: struct64;  // [bp-0x350]
    let v14: i64;  // [sp-0x318]
    let v15: i192;  // [sp-0x310]
    let v16: struct712;  // [sp-0x2f8], Other Possible Types: i5696
    let v18: i64;  // r8
    let v19: i64;  // r9
    let v20: i64;  // rax
    let v26: i64;  // rdx
    let v29: i8;  // r13b
    let v30: i64;  // rax

    v16 = uu_mv::uu_app(a1, a2);
    v1 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v16, a0, a1, v18, v19);
    if v5 == 0x8000000000000000 {
        v20 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v20;
    }
    v5 = v1;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88);
    v7 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88, &v1);
    *(&v13.field_0 as &struct64) = struct64 {
        field_0: v21
        field_8: v22
        field_16: v23
        field_32: v24
        field_48: v25
        field_56: v26
    };
    v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13, v14);
    if *((&v11 as &char + 16) as &i64) == 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v5, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48) as i8 {
        v15 = format!("The argument '<{:?}>...' requires at least 2 values, but only 1 was provided", "files");
        v1 = clap_builder::error::Error<F>::format(clap_builder::error::Error<F>::raw(6, &v15), &v16, v26);
        clap_builder::error::Error<F>::exit(&v1); /* do not return */
    }
    v1 = uucore::features::backup_control::determine_backup_mode(&v5);
    if v1 {
        return v20;
    }
    v29 = uucore::features::update_control::determine_update_mode(&v5) as i32;
    if *((&v1 as &char + 8) as &i8) && (!uu_mv::determine_overwrite_mode(&v5) as i32 || (v29 & 1)) {
        v7 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v1 = v7;
        v20 = alloc::boxed::Box<T>::new(&v1);
    } else {
        v12 = uucore::features::backup_control::determine_backup_suffix(&v5);
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48);
        v30 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48, &v1);
        if !v30 {
            v3 = 0x8000000000000000;
            goto LABEL_492f77;
        } else {
            v1 = core::ops::function::FnOnce::call_once(v30, v26);
            v3 = v1;
            if !(v3 != 0x8000000000000000) || !(!std::path::Path::is_dir(*((&v3 as &char + 8) as &i64), v4) as i8) {
LABEL_492f77:
                v0 = v29;
                v10 = v12;
                v9 = v4;
                v7 = v3;
                v8 = *((&v3 as &char + 8) as &i64);
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hcc24806db1a5c249E, g_587d58);
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN5uu_mv11OPT_VERBOSE17h564b3b5f0c97021dE, g_587d68) as i8 {
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE, g_587d98);
                }
                v1 = v10;
                v20 = uu_mv::mv(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), &v1, v9, v18, v19);
                return v20;
            }
            v7 = struct25 {
                field_0: 1
                field_8: *((&v3 as &char + 8) as &i128)
                field_24: 1
            };
            v10 = <T as alloc::string::ToString>::to_string(&v7);
            v2 = v10;
            v1 = 8;
            v20 = alloc::boxed::Box<T>::new(&v1);
        }
    }
    return v20;
}
