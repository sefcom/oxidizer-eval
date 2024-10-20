fn uu_split::uumain(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: struct8;  // [bp-0x4d8], Other Possible Types: i64
    let v1: i64;  // [bp-0x4d0]
    let v2: i64;  // [sp-0x4c8]
    let v3: i8;  // [bp-0x4c0]
    let v4: i8;  // [bp-0x4b0]
    let v5: i128;  // [sp-0x4a8]
    let v6: i64;  // [sp-0x498]
    let v7: struct24;  // [sp-0x490], Other Possible Types: i192
    let v8: i192;  // [sp-0x478], Other Possible Types: struct16, struct24
    let v9: i64;  // [sp-0x470]
    let v10: i128;  // [sp-0x468]
    let v11: i64;  // [sp-0x458]
    let v12: i64;  // [bp-0x440]
    let v13: i64;  // [sp-0x438]
    let v14: i64;  // [sp-0x430]
    let v15: i64;  // [bp-0x428], Other Possible Types: struct56
    let v16: i64;  // [sp-0x420]
    let v17: i64;  // [sp-0x3f0]
    let v18: i64;  // [sp-0x3e8]
    let v19: i64;  // [sp-0x3e0]
    let v20: i384;  // [bp-0x3d8], Other Possible Types: Enum, struct32, struct48, struct40
    let v21: i64;  // [sp-0x3d0]
    let v22: i64;  // [sp-0x3c8]
    let v23: i64;  // [sp-0x3b8]
    let v24: i128;  // [sp-0x3b0]
    let v25: i64;  // [sp-0x3a0]
    let v26: i128;  // [sp-0x328]
    let v27: i64;  // [sp-0x318]
    let v28: String;  // [sp-0x310], Other Possible Types: i192
    let v29: Arguments;  // [bp-0x2f8], Other Possible Types: i128, struct712
    let v30: i64;  // [sp-0x2e8]
    let v31: i128;  // [bp-0x2e0]
    let v32: i64;  // [sp-0x2d0]
    let v33: i64;  // [sp-0x1d0]
    let v34: i64;  // [sp-0x1c8]
    let v35: i64;  // [sp-0x1c0]
    let v36: i64;  // [sp-0xc8]
    let v37: i64;  // [sp-0xc0]
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1
    let v41: i64;  // rcx
    let v42: i64;  // rax
    let v43: i64;  // rdx
    let v44: i64;  // rax
    let v45: i64;  // r12
    let v46: i64;  // rax
    let v47: i64;  // rax
    let v48: i128;  // xmm1
    let v49: i64;  // r12
    let v50: i64;  // rax
    let v51: i64;  // rcx
    let v52: i64;  // rdi
    let v53: i64;  // rsi
    let v54: i64;  // r8
    let v55: i64;  // r9
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i64;  // r12
    let v59: i32;  // eax
    let v60: i64;  // r15
    let v61: i64;  // rax

    v15 = struct56 {
        field_0: 0x8000000000000000
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
        field_32: <UNKNOWN>
        field_48: <UNKNOWN>
    };
    v12 = 0;
    v1 = 0;
    v20 = struct40 {
        field_0: a0
        field_8: a1
        field_16: &v15
        field_24: &v12
        field_32: &v1
    };
    v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20);
    v39 = *(&v15.field_0 as &i128);
    v31 = v39;
    v40 = v8;
    v29 = v40;
    v30 = *((&v8 as &char + 16) as &i64);
    v27 = v30;
    v26 = v40;
    v6 = v32;
    v5 = v39;
    v29 = uu_split::uu_app();
    v20 = struct32 {
        field_0: v41
        field_8: v41
        field_16: v26
        field_24: v41 + v27 * 24
    };
    v7 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v20);
    v0 = struct8 {
        field_0: 0
    };
    if !((*((&v29 as &char + 701) as &i8) & 8)) || !((v42 = clap_lex::RawArgs::next_os(&v7, &v0), v42)) {
LABEL_442eec:
        if !(*((&v29 as &char + 703) as &i8) & 2) {
            v46 = clap_lex::RawArgs::next_os(&v7, &v0);
            if v46 {
                v47 = std::path::Path::file_name(v46, v43, v43, v41);
                if v47 {
                    v20 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v47, v43);
                    if !v20 && v33 == 0x8000000000000000 {
                        v49 = v22;
                        v20 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v49, 0);
                        memcpy(v34, v21, v49);
                        v33 = v21;
                        v34 = v22;
                        v35 = v49;
                    }
                }
            }
        }
        v8 = clap_builder::builder::command::Command::_do_parse(&v29, &v7, v0);
    } else {
        v44 = std::path::Path::file_stem(v42, v43, v43, v41);
        if !(v44) || !((v20 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v44, v43), !v20)) {
            goto LABEL_442eec;
        }
        v45 = v22;
        v20 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v45, 0);
        memcpy(v18, v21, v45);
        v17 = v21;
        v18 = v22;
        v19 = v45;
        v12 = 0;
        v13 = 1;
        v14 = &v17;
        alloc::vec::Vec<T,A>::drain(&v7, v0, v0);
        v25 = v14;
        v24 = v12;
        v48 = v3;
        v20 = v1;
        v22 = v48;
        v23 = v4;
        v36 = 1;
        v37 = 0;
        v33 = 0x8000000000000000;
        v8 = clap_builder::builder::command::Command::_do_parse(&v29, &v7, v0);
    }
    if v15 != 0x8000000000000000 {
        v15 = v8;
        v20 = uu_split::Settings::from(&v15, &v5);
        if v20 != 2 {
            memcpy(&v29, &v20, 168);
            v50 = uu_split::split(&v29, v53, v43, v41, v54, v55);
        } else {
            v51 = v21;
            v52 = v51 - 3;
            if v51 - 4 >= 5 {
                v52 = 0;
            }
            if !v52 {
                if !(v51 == 3) {
                    goto LABEL_443230;
                }
            } else {
                if !(v52 == 1) || !(*((&v20 as &char + 16) as &i32) == 1) {
LABEL_443230:
                    v11 = *((&v20 as &char + 40) as &i64);
                    v10 = *((&v20 as &char + 24) as &i128);
                    v8 = *((&v20 as &char + 8) as &i128);
                    v12 = &v8;
                    v13 = <uu_split::SettingsError as core::fmt::Display>::fmt;
                    v29 = Arguments {
                        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                        args: &[&Argument] {
                            ptr: &v12
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v30 = &v12;
                    v31 = 1;
                    alloc::fmt::format::format_inner(&v29);
                    v31 = 1;
                    v29 = v1;
                    v30 = v3;
                    v50 = __rust_alloc(32, 8);
                    v57 = v29;
                    *((v50 + 16) as &i64) = v30;
                    *(v50 as &i128) = v57;
                    v58 = &g_508978;
                    goto LABEL_443327;
                }
            }
            v11 = *((&v20 as &char + 40) as &i64);
            v10 = *((&v20 as &char + 24) as &i128);
            v8 = *((&v20 as &char + 8) as &i128);
            v12 = &v8;
            v13 = <uu_split::SettingsError as core::fmt::Display>::fmt;
            v29 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: &[&Argument] {
                    ptr: &v12
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v31 = 1;
            alloc::fmt::format::format_inner(&v29);
            v31 = 1;
            v29 = v1;
            v30 = v3;
            v50 = __rust_alloc(32, 8);
            v56 = v29;
            *((v50 + 16) as &i64) = v30;
            *(v50 as &i128) = v56;
            v58 = &g_5088d0;
LABEL_443327:
        }
    } else {
        v50 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
    }
    if !v50 {
        v59 = uucore::mods::error::get_exit_code() as i32;
        return v59;
    }
    v1 = v50;
    v2 = v58;
    v20 = &v1;
    v21 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v29 = Arguments {
        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
        args: &[&Argument] {
            ptr: &v20
            len: <UNKNOWN>
        }
        fmt: None
    };
    v31 = 1;
    v28 = alloc::fmt::format::format_inner(&v29);
    v20 = v28;
    v22 = *((&v28 as &char + 16) as &i64);
    if v22 {
        v8 = uucore::util_name();
        v9 = v43;
        v15 = &v8;
        v16 = <&T as core::fmt::Display>::fmt;
        v29 = Arguments {
            pieces: [&g_508850, ": "]
            args: &[&Argument] {
                ptr: &v15
                len: <UNKNOWN>
            }
            fmt: None
        };
        v31 = 1;
        std::io::stdio::_eprint(&v29);
        v8 = &v20;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v29 = Arguments {
            pieces: [&g_508870, "\n"]
            args: &[&Argument] {
                ptr: &v8
                len: <UNKNOWN>
            }
            fmt: None
        };
        v31 = 1;
        std::io::stdio::_eprint(&v29);
    }
    if *((v2 + 104) as &i64)() {
        v8 = uucore::execution_phrase();
        v9 = v43;
        v15 = &v8;
        v16 = <&T as core::fmt::Display>::fmt;
        v29 = Arguments {
            pieces: ["Try '", " --help' for more information.\n"]
            args: &[&Argument] {
                ptr: &v15
                len: <UNKNOWN>
            }
            fmt: None
        };
        v30 = &v15;
        v31 = 1;
        std::io::stdio::_eprint(&v29);
    }
    v59 = *((v2 + 96) as &i64)();
    v60 = v2;
    if *(v60 as &i64) {
        v61();
    }
    if *((v60 + 8) as &i64) {
        return v59;
    }
    return v59;
}
