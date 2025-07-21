fn uu_mv::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x479]
    let v1: struct32;  // [bp-0x478], Other Possible Types: Result<struct56, struct16>, struct24, struct56, u64
    let v2: struct16;  // [bp-0x478], Other Possible Types: struct56
    let v3: u64;  // [bp-0x470]
    let v4: i64;  // [bp-0x468], Other Possible Types: u64
    let v5: u32;  // [bp-0x460]
    let v6: void*;  // [bp-0x458]
    let v7: u64;  // [bp-0x428]
    let v8: u128;  // [bp-0x428]
    let v9: u64;  // [bp-0x420]
    let v10: u64;  // [bp-0x418]
    let v11: struct56;  // [bp-0x410]
    let v12: u64;  // [bp-0x408]
    let v13: struct24;  // [bp-0x3d8], Other Possible Types: struct25, struct64, struct_0 *, u64
    let v14: u64;  // [bp-0x3d0]
    let v16: u64;  // [bp-0x3c8]
    let v17: u64;  // [bp-0x3a8]
    let v18: struct24;  // [bp-0x398], Other Possible Types: u128
    let v19: u64;  // [bp-0x388]
    let v20: Result<struct24, struct24>;  // [bp-0x380]
    let v21: u64;  // [bp-0x378]
    let v22: u64;  // [bp-0x370]
    let v23: struct24;  // [bp-0x368]
    let v24: u64;  // [bp-0x358]
    let v25: struct64;  // [bp-0x350]
    let v26: u8;  // [bp-0x310]
    let v27: u8;  // [bp-0x2f8]
    let v29: u128;  // xmm1
    let v30: u64;  // r14
    let v31: u128;  // xmm0
    let v32: u64;  // rax
    let v33: void*;  // rdx
    let v34: u64;  // rdx
    let v35: core::fmt::Arguments;  // bl
    let v36: u8;  // bpl
    let v37: u8;  // r13b
    let v38: u64;  // rax
    let v39: u8;  // al
    let v40: u8;  // al
    let v41: u8;  // al
    let v42: u8;  // al

    uu_mv::uu_app(&v27);
    v1 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v27, a0, a1);
    match v1 {
        Err(_) => {
            v30 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        },
        Ok(v11) => {
            v29 = *((&v1 as &char + 32) as &i128);
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, _ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E.field_0, g_587d88.field_0);
            v13 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E.field_0, g_587d88.field_0, &v1);
            v25 = struct64 {
                field_0: v32
                field_8: v14
                field_16: v29
                field_32: v31
                field_48: v17
                field_56: v33
            };
            v20 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v25);
            if v22 == 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v11, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E.field_0, g_587d48.field_0) as i8 {
                v13 = "files";
                v14 = <&T as core::fmt::Display>::fmt;
                v1 = "The argument '<";
                v3 = 2;
                v6 = 0;
                v4 = &v13;
                v5 = 1;
                v1 = core::option::Option<T>::map_or_else(v34);
                v1 = clap_builder::error::Error<F>::format(clap_builder::error::Error<F>::raw(6, &v26), &v27);
                clap_builder::error::Error<F>::exit(&v1); /* do not return */
            }
            v35 = uu_mv::determine_overwrite_mode(&v11) as i32 as i8;
            v2 = uucore::features::backup_control::determine_backup_mode(&v11);
            v30 = v2.field_0;
            if !v2.field_0 {
                v36 = v2.field_8 as i8;
                v37 = uucore::features::update_control::determine_update_mode(&v11) as i32 as i8;
                if !v36 || v35 && !(v37 & 1) {
                    v23 = uucore::features::backup_control::determine_backup_suffix(&v11);
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E.field_0, g_587d48.field_0);
                    v38 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E.field_0, g_587d48.field_0, &v1);
                    if v38 && !((v1 = core::ops::function::FnOnce::call_once(v38), v10 = v4, v8 = v1.field_0, v7 == 0x8000000000000000 || std::path::Path::is_dir(v9, v10) as u8)) {
                        v13 = struct25 {
                            field_0: 1
                            field_8: *((&v8 as &char + 8) as &i128)
                            field_24: 1
                        };
                        v18 = <T as alloc::string::ToString>::to_string(&v13);
                        v1 = struct32 {
                            field_0: 8
                            field_8: v18.field_0
                            field_24: v19
                        };
                        v30 = alloc::boxed::Box<T>::new(&v1);
                    } else {
                        v0 = v37;
                        v19 = v24;
                        v18 = v23.field_0;
                        v16 = v10;
                        v13 = v7;
                        v14 = v9;
                        v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hcc24806db1a5c249E.field_0, g_587d58.field_0) as i32 as i8;
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN5uu_mv11OPT_VERBOSE17h564b3b5f0c97021dE.field_0, g_587d68.field_0) as i8 {
                            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE.field_0, g_587d98.field_0);
                        }
                        v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h51274aa3e0aeb94eE.field_0, g_587d38.field_0) as i32 as i8;
                        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN5uu_mv12OPT_PROGRESS17h1c7c0a4244182235E.field_0, g_587d78.field_0) as i32 as i8;
                        v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE.field_0, g_587d98.field_0) as i8;
                        v1 = struct56 {
                            field_0: v18
                            field_16: v19
                            field_24: *(&v13 as &i128)
                            field_40: v16
                            field_48: v39
                            field_49: 1
                            field_50: v40
                            field_51: v41
                            field_52: v42
                            field_53: v35
                            field_54: v36
                            field_55: v0
                        };
                        v30 = uu_mv::mv(v21, v22, &v1);
                    }
                } else {
                    v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v4 = v16;
                    v1 = v13.field_0;
                    v5 = 1;
                    v30 = alloc::boxed::Box<T>::new(&v2);
                }
            }
        },
    }
    return v30;
}
