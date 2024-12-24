fn uu_mv::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x479]
    let v1: i64;  // [sp-0x478], Other Possible Types: Result<struct40, struct16>, struct24, struct56
    let v2: i192;  // [bp-0x470]
    let v3: i192;  // [bp-0x428]
    let v4: i64;  // [sp-0x418]
    let v5: i64;  // [sp-0x410]
    let v6: i64;  // [sp-0x408]
    let v7: i64;  // [sp-0x3d8], Other Possible Types: struct64, struct24, struct25
    let v8: i192;  // [sp-0x398], Other Possible Types: struct24
    let v9: i192;  // [sp-0x380], Other Possible Types: struct24
    let v10: struct24;  // [sp-0x368], Other Possible Types: i192
    let v11: struct64;  // [bp-0x350]
    let v12: i64;  // [sp-0x318]
    let v13: i192;  // [sp-0x310]
    let v14: struct712;  // [sp-0x2f8], Other Possible Types: i5696
    let v16: i64;  // rax
    let v22: i64;  // rdx
    let v25: i64;  // r13
    let v26: i64;  // rax
    let v27: i64;  // r8
    let v28: i64;  // r9

    v14 = uu_mv::uu_app(a1, a2);
    v1 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v14, a0, a1);
    if v5 == 0x8000000000000000 {
        v16 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v16;
    }
    v5 = v1;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN5uu_mv9ARG_FILES17h450455c27cd4d73cE, g_586ff8);
    v7 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv9ARG_FILES17h450455c27cd4d73cE, g_586ff8, &v1);
    *(&v11.field_0 as &struct64) = struct64 {
        field_0: v17
        field_8: v18
        field_16: v19
        field_32: v20
        field_48: v21
        field_56: v22
    };
    v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v11, v12);
    if *((&v9 as &char + 16) as &i64) == 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v5, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9e68c48e073d8e7cE, g_586fb8) as i8 {
        v13 = format!("The argument '<{:?}>...' requires at least 2 values, but only 1 was provided", "files");
        v1 = clap_builder::error::Error<F>::format(clap_builder::error::Error<F>::raw(6, &v13), &v14, v22);
        clap_builder::error::Error<F>::exit(&v1); /* do not return */
    }
    v1 = uucore::features::backup_control::determine_backup_mode(&v5);
    if v1 {
        return v16;
    }
    v25 = uucore::features::update_control::determine_update_mode(&v5) as i32;
    if *((&v1 as &char + 8) as &i8) && (!uu_mv::determine_overwrite_mode(&v5) as i32 || (v25 | 2) == 3) {
        v7 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v1 = v7;
        v16 = alloc::boxed::Box<T>::new(&v1);
    } else {
        v10 = uucore::features::backup_control::determine_backup_suffix(&v5);
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9e68c48e073d8e7cE, g_586fb8);
        v26 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9e68c48e073d8e7cE, g_586fb8, &v1);
        if !v26 {
            v3 = 0x8000000000000000;
            goto LABEL_492d65;
        } else {
            v1 = core::ops::function::FnOnce::call_once(v26, v22);
            v3 = v1;
            if !(v3 != 0x8000000000000000) || !(!std::path::Path::is_dir(*((&v3 as &char + 8) as &i64), v4) as i8) {
LABEL_492d65:
                v0 = v25;
                v8 = v10;
                v7.field_16 = vvar_451{stack -1048};
                v7 = v3;
                v7.8 = (stack_base)[1056] as i64;
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17h268c1d539ed3f3bdE, g_586fc8);
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN5uu_mv11OPT_VERBOSE17ha990e699302cc524E, g_586fd8) as i8 {
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN5uu_mv9OPT_DEBUG17h20196c736f62d6a7E, g_587008);
                }
                v1 = v8;
                v16 = uu_mv::mv(*((&v9 as &char + 8) as &i64), *((&v9 as &char + 16) as &i64), &v1, v7.field_16, v27, v28);
                return v16;
            }
            v7 = struct25 {
                field_0: 1
                field_8: *((&v3 as &char + 8) as &i128)
                field_24: 1
            };
            v8 = <T as alloc::string::ToString>::to_string(&v7);
            v2 = v8;
            v1 = 8;
            v16 = alloc::boxed::Box<T>::new(&v1);
        }
    }
    return v16;
}
