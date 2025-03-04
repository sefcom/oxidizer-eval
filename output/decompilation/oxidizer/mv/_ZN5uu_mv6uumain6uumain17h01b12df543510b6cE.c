fn uu_mv::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x479]
    let v1: i64;  // [sp-0x478], Other Possible Types: struct24, Result<struct40, struct8>, char, int, struct56
    let v2: struct24;  // [sp-0x470]
    let v3: i64;  // [sp-0x468]
    let v4: i32;  // [bp-0x460], Other Possible Types: int
    let v5: i64;  // [sp-0x450]
    let v6: i8;  // [sp-0x448]
    let v7: i8;  // [sp-0x447]
    let v8: i8;  // [sp-0x446]
    let v9: i8;  // [sp-0x445]
    let v10: i8;  // [sp-0x444]
    let v11: i8;  // [sp-0x443]
    let v12: i8;  // [sp-0x442]
    let v13: i8;  // [sp-0x441]
    let v14: iNone;  // [bp-0x428], Other Possible Types: struct24, unsigned long
    let v15: i64;  // [sp-0x418]
    let v16: i64;  // [sp-0x410], Other Possible Types: int
    let v17: i64;  // [sp-0x408]
    let v18: i64;  // [sp-0x3d8], Other Possible Types: struct25, struct24, struct64
    let v19: i64;  // [sp-0x3d0]
    let v20: i64;  // [sp-0x3c8]
    let v21: struct24;  // [sp-0x398], Other Possible Types: int
    let v22: i64;  // [sp-0x388]
    let v23: struct24;  // [sp-0x380]
    let v24: struct24;  // [sp-0x368]
    let v25: struct64;  // [bp-0x350]
    let v26: String;  // [sp-0x310]
    let v27: struct712;  // [sp-0x2f8]
    let v35: i8;  // bl
    let v36: i8;  // bpl
    let v37: i8;  // r13b
    let v38: i64;  // rax
    let v39: i8;  // al
    let v40: i64;  // r14

    v27 = uu_mv::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from_mut(&v1, &v27, a0, a1);
    if v16 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        return v40;
    }
    v16 = v1;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, _ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88);
    v18 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88, &v1);
    *(&v25.field_0 as &struct64) = struct64 {
        field_0: v29
        field_8: v30
        field_16: v31
        field_32: v32
        field_48: v33
        field_56: v34
    };
    v23 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v25);
    if v23.field_16 == 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v16, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48) as i8 {
        v26 = format!("The argument '<{}>...' requires at least 2 values, but only 1 was provided", "files");
        v1 = clap_builder::error::Error<F>::format(clap_builder::error::Error<F>::raw(6, &v26), &v27);
        clap_builder::error::Error<F>::exit(&v1); /* do not return */
    }
    v35 = uu_mv::determine_overwrite_mode(&v16) as i32;
    v1 = uucore::features::backup_control::determine_backup_mode(&v16);
    if v1 {
        return v40;
    }
    v36 = *((&v1 as &char + 8) as &i8);
    v37 = uucore::features::update_control::determine_update_mode(&v16) as i32;
    if v36 && (!v35 || (v37 & 1)) {
        v18 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v1 = v18;
        *(&v4 as &i32) = 1;
        alloc::boxed::Box<T>::new(&v1);
    } else {
        v24 = uucore::features::backup_control::determine_backup_suffix(&v16);
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48);
        v38 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48, &v1);
        if !v38 {
            *(&v14 as &i64) = 0x8000000000000000;
            goto LABEL_492f77;
        } else {
            v1 = core::ops::function::FnOnce::call_once(v38);
            v14 = v1;
            if !(v14.field_0 != 0x8000000000000000) || !(!std::path::Path::is_dir(v14.field_8, v15) as i8) {
LABEL_492f77:
                v0 = v37;
                v21 = v24;
                v20 = v15;
                v18 = v14 as i64;
                v19 = v14.field_8;
                v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hcc24806db1a5c249E, g_587d58) as i32;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN5uu_mv11OPT_VERBOSE17h564b3b5f0c97021dE, g_587d68) as i8 {
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE, g_587d98);
                }
                v11 = v35;
                v12 = v36;
                v1 = v21;
                v3 = v22;
                v13 = v0;
                *(&v4 as &i128) = *(&v18 as &i128);
                v5 = v20;
                v6 = v39;
                v7 = 1;
                v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h51274aa3e0aeb94eE, g_587d38) as i32;
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN5uu_mv12OPT_PROGRESS17h1c7c0a4244182235E, g_587d78) as i32;
                v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE, g_587d98) as i8;
                return v40;
            }
            v18 = struct25 {
                field_0: 1
                field_8: *(&v14.field_8 as &i128)
                field_24: 1
            };
            v21 = <T as alloc::string::ToString>::to_string(&v18);
            v2 = v21;
            v1 = 8;
        }
    }
    return v40;
}
