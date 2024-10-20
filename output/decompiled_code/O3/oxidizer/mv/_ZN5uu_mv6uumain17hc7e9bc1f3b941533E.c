fn uu_mv::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i8;  // [sp-0x4aa]
    let v1: i8;  // [sp-0x4a9]
    let v2: i448;  // [sp-0x4a8], Other Possible Types: Enum, struct16, Arguments, struct24, Argument, struct8
    let v3: i64;  // [sp-0x4a0]
    let v4: i64;  // [sp-0x498]
    let v5: i64;  // [bp-0x490]
    let v6: i64;  // [sp-0x488]
    let v7: i64;  // [sp-0x480]
    let v8: i64;  // [bp-0x478]
    let v9: i8;  // [sp-0x477]
    let v10: i8;  // [sp-0x476]
    let v11: i8;  // [sp-0x475]
    let v12: i8;  // [sp-0x474]
    let v13: i8;  // [sp-0x473]
    let v14: i8;  // [sp-0x472]
    let v15: i8;  // [sp-0x471]
    let v16: i8;  // [sp-0x470]
    let v17: i64;  // [bp-0x458]
    let v18: i64;  // [sp-0x448]
    let v19: i64;  // [sp-0x438]
    let v20: i64;  // [sp-0x430]
    let v21: i192;  // [sp-0x400], Other Possible Types: struct24
    let v22: i64;  // [sp-0x3e8], Other Possible Types: String, Argument
    let v23: i128;  // [sp-0x3e0]
    let v24: i64;  // [sp-0x3d8]
    let v25: i64;  // [sp-0x3d0]
    let v26: i8;  // [bp-0x3c8]
    let v27: i8;  // [bp-0x3b8]
    let v28: i64;  // [sp-0x3a8]
    let v29: i128;  // [sp-0x3a0]
    let v30: i64;  // [sp-0x398]
    let v31: i8;  // [sp-0x390]
    let v32: i64;  // [sp-0x380], Other Possible Types: struct64, Argument
    let v33: i64;  // [sp-0x378]
    let v36: i192;  // [sp-0x340], Other Possible Types: struct24
    let v37: i64;  // [sp-0x328]
    let v38: i64;  // [sp-0x320]
    let v39: i64;  // [sp-0x318]
    let v40: i192;  // [sp-0x310], Other Possible Types: String
    let v41: Arguments;  // [sp-0x2f8], Other Possible Types: i5696, struct712
    let v42: i64;  // [sp-0x2e8]
    let v44: i64;  // rax
    let v45: i64;  // r14
    let v46: i64;  // r15
    let v50: i64;  // rdx
    let v51: i8;  // bpl
    let v52: i8;  // r14b
    let v53: i64;  // r15
    let v54: i64;  // r15
    let v55: i64;  // rcx
    let v56: i64;  // rax
    let v57: i64;  // rax
    let v58: i128;  // xmm0
    let v59: i64;  // r15
    let v60: i128;  // xmm0
    let v61: i128;  // xmm1
    let v62: i64;  // rdx
    let v63: i32;  // eax
    let v64: i64;  // rsi
    let v65: i64;  // rdi
    let v66: i64;  // r15
    let v67: i64;  // rax

    v41 = uu_mv::uu_app();
    v2 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v41, a0, a1);
    if v19 == 0x8000000000000000 {
        v44 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
        goto LABEL_44d269;
    }
    v19 = v2;
    v45 = _ZN5uu_mv9ARG_FILES17he49188e40d44c397E;
    v46 = g_530820;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, v45, v46);
    v32 = clap_builder::parser::error::MatchesError::unwrap(v45, v46, &v2);
    *(&v32.field_0 as &struct64) = struct64 {
        field_0: v47
        field_8: v48
        field_16: v34
        field_32: v35
        field_48: v49
        field_56: v50
    };
    v21 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v32);
    if *((&v21 as &char + 16) as &i64) == 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v19, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h2c84a0872c50ea29E, g_5307e0) as i8 {
        v28 = "files";
        v29 = <&T as core::fmt::Display>::fmt;
        v2 = Arguments {
            pieces: ["The argument '<", ">...' requires at least 2 values, but only 1 was provided"]
            args: &[&Argument] {
                ptr: &v28
                len: <UNKNOWN>
            }
            fmt: None
        };
        v5 = 1;
        v22 = alloc::fmt::format::format_inner(&v2);
        v2 = clap_builder::error::Error<F>::format(clap_builder::error::Error<F>::raw(6, &v22), &v41, v50);
        v2 = clap_builder::error::Error<F>::exit();
    }
    v51 = uu_mv::determine_overwrite_mode(&v19) as i32;
    v2 = uucore::features::backup_control::determine_backup_mode(&v19);
    v44 = v2;
    if v44 {
        goto LABEL_44d242;
    }
    v52 = *((&v2 as &char + 8) as &i8);
    v53 = uucore::features::update_control::determine_update_mode(&v19) as i32;
    if v52 && (!v51 || (v53 | 2) == 3) {
        v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(66, 0);
        v56 = v4;
        *((v56 + 48) as &i128) = 129465650615362032794846830781535694125;
        *((v56 + 32) as &i128) = 43129471625161341309589720761327562029;
        *((v56 + 16) as &i128) = 63045783732390416309721094575626478125;
        *(v56 as &i128) = 59983470580877091706815775436629238115;
        *((v56 + 64) as &i16) = 27753;
        v5 = 1;
        v2 = v3;
        v3 = v56;
        v4 = 66;
        v44 = __rust_alloc(32, 8);
        v58 = v2;
        *((v44 + 16) as &i128) = *((&v2 as &char + 16) as &i128);
        *(v44 as &i128) = v58;
        v59 = &g_52d750;
    } else {
        v36 = uucore::features::backup_control::determine_backup_suffix(&v19);
        v1 = v53;
        v54 = _ZN5uu_mv20OPT_TARGET_DIRECTORY17h2c84a0872c50ea29E;
        v55 = g_5307e0;
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, v54, v55);
        v57 = clap_builder::parser::error::MatchesError::unwrap(v54, v55, &v2);
        if !v57 {
            v17 = 0x8000000000000000;
            goto LABEL_44d72e;
        }
        v2 = <std::ffi::os_str::OsString as core::convert::From<&T>>::from(v57);
        v18 = v4;
        v17 = v2;
        if v17 != 0x8000000000000000 && !std::path::Path::is_dir(*((&v17 as &char + 8) as &i64), v18) as i8 {
            v28 = 1;
            v29 = *((&v17 as &char + 8) as &i128);
            v31 = 1;
            v37 = 0;
            v38 = 1;
            v39 = 0;
            v8 = 32;
            v16 = 3;
            v2 = 0;
            v4 = 0;
            v6 = &v37;
            v7 = &g_52d5f0;
            if <os_display::Quoted as core::fmt::Display>::fmt(&v28, &v2) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
            v23 = v37;
            v25 = v39;
            v22 = 8;
            v44 = __rust_alloc(56, 8);
            *((v44 + 48) as &i8) = v27;
            v60 = v22;
            v61 = *((&v23 as &char + 8) as &i128);
            *((v44 + 32) as &i8) = v26;
            *((v44 + 16) as &i128) = v61;
            *(v44 as &i128) = v60;
            v59 = &g_52d7f8;
        } else {
LABEL_44d72e:
            v30 = *((&v36 as &char + 16) as &i64);
            v28 = v36;
            v24 = v18;
            v22 = v17;
            v23 = *((&v17 as &char + 8) as &i64);
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hdd40af3522df9332E, g_5307f0) as i8;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, _ZN5uu_mv11OPT_VERBOSE17h62d74e82951bd2e2E, g_530800) as i8 {
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, _ZN5uu_mv9OPT_DEBUG17ha2cfb0343e630fdcE, g_530830);
            }
            v62 = g_530830;
            v13 = v51;
            v14 = v52;
            v2 = v28;
            v4 = v30;
            v15 = v1;
            v5 = v22;
            v7 = v24;
            v8 = v0;
            v9 = 1;
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h38b9f6d5ad76c729E, g_5307d0) as i32;
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, _ZN5uu_mv12OPT_PROGRESS17h4fdd756e7c4480a0E, g_530810) as i32;
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, _ZN5uu_mv9OPT_DEBUG17ha2cfb0343e630fdcE, g_530830) as i8;
            v44 = uu_mv::mv(*((&v21 as &char + 8) as &i64), *((&v21 as &char + 16) as &i64));
LABEL_44d269:
            if !v44 {
                v63 = uucore::mods::error::get_exit_code() as i32;
                return v63;
            }
            v19 = v44;
            v20 = v59;
            v2 = Argument {
                value: &v19
                formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
            };
            v41 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: [&v2]
                fmt: None
            };
            v40 = alloc::fmt::format::format_inner(&v41);
            v2 = v40;
            v64 = *((&v40 as &char + 16) as &i64);
            v4 = *((&v40 as &char + 16) as &i64);
            v65 = v3;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, *((&v40 as &char + 16) as &i64), 1, 0) as i8 {
                v32 = uucore::util_name();
                v33 = v50;
                v22 = Argument {
                    value: &v32
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v41 = Arguments {
                    pieces: [&g_52d698, ": "]
                    args: [&v22]
                    fmt: None
                };
                std::io::stdio::_eprint(&v41);
                v32 = Argument {
                    value: &v2
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v41 = Arguments {
                    pieces: [&g_52d6b8, "\n"]
                    args: [&v32]
                    fmt: None
                };
                std::io::stdio::_eprint(&v41);
            }
            if *((v20 + 104) as &i64)() {
                v32 = uucore::execution_phrase();
                v33 = v50;
                v22 = &v32;
                v41 = Arguments {
                    pieces: ["Try '", " --help' for more information.\n"]
                    args: [&v22]
                    fmt: None
                };
                v42 = &v22;
                std::io::stdio::_eprint(&v41);
            }
            v63 = *((v20 + 96) as &i64)();
            v66 = v20;
            if *(v66 as &i64) {
                v67();
            }
            if *((v66 + 8) as &i64) {
                return v63;
            }
            return v63;
        }
    }
LABEL_44d242:
    goto LABEL_44d269;
}
