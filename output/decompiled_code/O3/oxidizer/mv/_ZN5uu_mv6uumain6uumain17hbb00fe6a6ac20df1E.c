fn uu_mv::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x479]
    let v1: i64;  // [sp-0x478], Other Possible Types: struct56, Result<struct56, struct16>, struct32, struct9, struct24, struct28
    let v4: i64;  // [bp-0x428]
    let v5: i64;  // [sp-0x418]
    let v6: i64;  // [sp-0x410], Other Possible Types: struct56
    let v7: i64;  // [sp-0x408]
    let v8: i64;  // [sp-0x3d8], Other Possible Types: struct64, struct24, struct25
    let v10: i128;  // [sp-0x398], Other Possible Types: struct24
    let v11: i64;  // [sp-0x388]
    let v12: struct24;  // [sp-0x380], Other Possible Types: i192
    let v13: i192;  // [sp-0x368], Other Possible Types: struct24
    let v14: struct64;  // [bp-0x350]
    let v15: i64;  // [sp-0x318]
    let v16: i192;  // [sp-0x310]
    let v17: struct712;  // [sp-0x2f8], Other Possible Types: i5696
    let v19: i64;  // rax
    let v25: i64;  // rdx
    let v28: i64;  // r13
    let v29: i64;  // rax
    let v30: i64;  // r8
    let v31: i64;  // r9

    v17 = uu_mv::uu_app(a1, a2);
    v1 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v17, a0, a1);
    if v6 == 0x8000000000000000 {
        v19 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v19;
    }
    *(&v6.field_0 as &struct56) = struct56 {
        field_0: v1
        field_8: v2
        field_16: *((&v1 as &char + 16) as &i128)
        field_32: *((&v1 as &char + 32) as &i128)
        field_48: *((&v1 as &char + 48) as &i64)
    };
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, _ZN5uu_mv9ARG_FILES17h450455c27cd4d73cE, g_586ff8);
    v8 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv9ARG_FILES17h450455c27cd4d73cE, g_586ff8, &v1);
    *(&v14.field_0 as &struct64) = struct64 {
        field_0: v20
        field_8: v21
        field_16: v22
        field_32: v23
        field_48: v24
        field_56: v25
    };
    v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v14, v15);
    if *((&v12 as &char + 16) as &i64) == 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v6, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9e68c48e073d8e7cE, g_586fb8) as i8 {
        v16 = format!("The argument '<{:?}>...' requires at least 2 values, but only 1 was provided", "files");
        v1 = clap_builder::error::Error<F>::format(clap_builder::error::Error<F>::raw(6, &v16), &v17, v25);
        clap_builder::error::Error<F>::exit(&v1); /* do not return */
    }
    v1 = uucore::features::backup_control::determine_backup_mode(&v6);
    if v1 {
        return v19;
    }
    v28 = uucore::features::update_control::determine_update_mode(&v6) as i32;
    if *((&v1 as &char + 8) as &i8) && (!uu_mv::determine_overwrite_mode(&v6) as i32 || (v28 | 2) == 3) {
        v8 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v1 = struct28 {
            field_0: v8
            field_16: v9
            field_24: 1
        };
        v19 = alloc::boxed::Box<T>::new(&v1);
    } else {
        v13 = uucore::features::backup_control::determine_backup_suffix(&v6);
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9e68c48e073d8e7cE, g_586fb8);
        v29 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9e68c48e073d8e7cE, g_586fb8, &v1);
        if !v29 {
            v4 = 0x8000000000000000;
            goto LABEL_492d65;
        } else {
            v1 = core::ops::function::FnOnce::call_once(v29, v25);
            v5 = v1.field_16;
            v4 = v1;
            if !(v4 != 0x8000000000000000) || !(!std::path::Path::is_dir(*((&v4 as &char + 8) as &i64), v5) as i8) {
LABEL_492d65:
                v0 = v28;
                v11 = *((&v13 as &char + 16) as &i64);
                v10 = v13;
                v8.field_16 = vvar_451{stack -1048};
                v8 = v4;
                v8.8 = (stack_base)[1056] as i64;
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17h268c1d539ed3f3bdE, g_586fc8);
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, _ZN5uu_mv11OPT_VERBOSE17ha990e699302cc524E, g_586fd8) as i8 {
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, _ZN5uu_mv9OPT_DEBUG17h20196c736f62d6a7E, g_587008);
                }
                v1 = struct56 {
                    field_0: v10
                    field_16: v11
                    field_24: v8
                    field_40: v9
                    field_48: v20 as u8
                    field_49: 1
                    field_50: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17hc51bdc493fd46f05E, g_586fa8) as i32 as i8
                    field_51: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, _ZN5uu_mv12OPT_PROGRESS17h63563f48b7cd0614E, g_586fe8) as i32 as i8
                    field_52: v3
                    field_53: v26
                    field_54: v27
                    field_55: v0
                };
                v1.52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(stack_base + -1040, _ZN5uu_mv9OPT_DEBUG17h20196c736f62d6a7E, g_587008) as i8;
                v19 = uu_mv::mv(*((&v12 as &char + 8) as &i64), *((&v12 as &char + 16) as &i64), &v1, v8.field_16, v30, v31);
                return v19;
            }
            v8 = struct25 {
                field_0: 1
                field_8: *((&v4 as &char + 8) as &i128)
                field_24: 1
            };
            v10 = <T as alloc::string::ToString>::to_string(&v8);
            v1 = struct32 {
                field_0: 8
                field_8: v10
                field_24: v11
            };
            v19 = alloc::boxed::Box<T>::new(&v1);
        }
    }
    return v19;
}
