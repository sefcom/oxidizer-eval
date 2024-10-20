fn uu_tsort::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i8;  // [sp-0x4ed]
    let v1: i32;  // [sp-0x4ec]
    let v2: i64;  // [sp-0x4e8], Other Possible Types: Arguments, struct24
    let v3: i64;  // [sp-0x4e0]
    let v4: i64;  // [sp-0x4d8]
    let v5: i64;  // [bp-0x4d0]
    let v6: i64;  // [sp-0x4b8], Other Possible Types: struct24
    let v7: i64;  // [sp-0x4b0]
    let v8: i64;  // [sp-0x4a8]
    let v9: i64;  // [sp-0x498]
    let v10: struct8;  // [bp-0x490]
    let v11: i64;  // [sp-0x488]
    let v12: i64;  // [sp-0x480]
    let v13: i64;  // [sp-0x478], Other Possible Types: Enum, struct16, struct58, String
    let v15: i64;  // [sp-0x468]
    let v16: i64;  // [sp-0x438]
    let v17: i64;  // [sp-0x430]
    let v18: i64;  // [sp-0x428]
    let v19: i128;  // [sp-0x418], Other Possible Types: String
    let v20: i64;  // [sp-0x408]
    let v21: i64;  // [sp-0x3f8]
    let v22: i64;  // [sp-0x3f0]
    let v23: i448;  // [sp-0x3e8], Other Possible Types: struct56
    let v25: i64;  // [sp-0x3b0]
    let v26: i64;  // [sp-0x3a8]
    let v27: i64;  // [sp-0x378]
    let v28: i64;  // [sp-0x370]
    let v29: i64;  // [sp-0x368]
    let v30: i128;  // [sp-0x360]
    let v31: i8;  // [sp-0x350]
    let v32: i128;  // [sp-0x348]
    let v33: i128;  // [sp-0x338]
    let v34: i128;  // [sp-0x328]
    let v35: i64;  // [sp-0x318], Other Possible Types: Arguments, Enum, struct24, struct712
    let v36: i64;  // [sp-0x310]
    let v37: i64;  // [sp-0x308]
    let v38: i64;  // [bp-0x300]
    let v39: i64;  // [sp-0x2f8]
    let v40: i64;  // [sp-0x2f0]
    let v41: i64;  // [sp-0x2e8]
    let v42: i8;  // [sp-0x2e0]
    let v43: i16;  // [bp-0x2d8]
    let v44: i8;  // [sp-0x2d7]
    let v47: i64;  // r14
    let v48: i64;  // rax
    let v49: i8;  // al
    let v50: i64;  // rax
    let v51: i64;  // r14
    let v52: i64;  // r15
    let v53: i64;  // rdx
    let v54: i64;  // rcx
    let v55: i64;  // rax
    let v56: i128;  // xmm0
    let v57: i64;  // r15
    let v58: i64;  // rdx
    let v59: i64;  // fs
    let v60: i64;  // rax
    let v61: i64;  // fs
    let v62: i128;  // xmm0
    let v63: i64;  // rcx
    let v64: i64;  // r9
    let v65: i64;  // r8
    let v66: i64;  // rdi
    let v67: i64;  // rax
    let v68: i64;  // rsi
    let v69: i64;  // r10
    let v70: i64;  // r11
    let v71: i64;  // rax
    let v72: i64;  // rdx
    let v73: i64;  // r8
    let v74: i64;  // rdx
    let v75: i64;  // rdi
    let v76: i64;  // r13
    let v77: i64;  // r13
    let v79: i64;  // rbx
    let v81: i64;  // r13
    let v83: i128;  // xmm0
    let v85: i64;  // rbx
    let v87: i64;  // rbx
    let v88: i64;  // rbx
    let v89: i64;  // rdx
    let v90: i128;  // xmm0
    let v91: i64;  // r15

    v35 = uu_tsort::uu_app();
    v13 = clap_builder::builder::command::Command::try_get_matches_from(&v35, a0, a1);
    if v25 == 0x8000000000000000 {
        v47 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
    }
    v25 = v13;
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, &g_4108d4, 4);
    v48 = clap_builder::parser::error::MatchesError::unwrap(&g_4108d4, 4, &v35);
    if !v48 {
        core::option::expect_failed(); /* do not return */
    }
    v9 = v48;
    v49 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v48 + 8) as &i64), *((v48 + 16) as &i64), &g_410d69, 1) as i8;
    if v49 {
        v27 = std::io::stdio::stdin();
        v53 = &v27;
        v54 = &g_4e4bb8;
        goto LABEL_437ffa;
    }
    v50 = v9;
    v51 = *((v50 + 8) as &i64);
    v52 = *((v50 + 16) as &i64);
    if std::path::Path::is_dir(v51, v52) as i8 {
        v2 = &v9;
        v3 = <&T as core::fmt::Display>::fmt;
        v35 = Arguments {
            pieces: [&g_4e4af0, ": read error: Is a directory"]
            args: &[&Argument] {
                ptr: &v2
                len: <UNKNOWN>
            }
            fmt: None
        };
        v38 = 1;
        v13 = alloc::fmt::format::format_inner(&v35);
        v38 = 1;
        v35 = v13;
        v37 = v15;
        v55 = __rust_alloc(32, 8);
        v56 = v35;
        *((v55 + 16) as &i64) = v37;
        *(v55 as &i128) = v56;
        v57 = &g_4e4b48;
    }
    v35 = std::fs::File::open(v51, v52);
    v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v35, v9);
    v55 = v13;
    v1 = *((&v13 as &char + 8) as &i32);
    v53 = &v1;
    v54 = &g_4e4a98;
LABEL_437ffa:
    v23 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v53, v54);
    v10 = struct8 {
        field_16: 0
    };
    v11 = 1;
    v12 = 0;
    if <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(&v23, &v10) {
        v55 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v58);
        goto LABEL_43865b;
    } else {
        v0 = v49;
        if vvar_1450 {
            v60 = -48 + *(v59 as &i64) + 8;
        } else {
            v60 = std::sys::thread_local::native::lazy::Storage<T,D>::initialize(*(v61 as &i64) - 48, 0);
            if !v60 {
                core::result::unwrap_failed(); /* do not return */
            }
        }
        v62 = *(v60 as &i128);
        *(v60 as &i64) = *(v60 as &i64) + 1;
        v33 = g_4e4c38;
        v32 = g_4e4c28;
        v34 = v62;
        v35 = 0;
        v36 = v12;
        v37 = v11;
        v38 = v36;
        v39 = 0;
        v41 = 42949672970;
        v42 = 1;
        v43 = 0;
        v36 = v36;
    }
    loop {
        v65 = v39;
        v66 = v40;
        if !(v66 >= v65) || !((v64 = v38, v66 <= v64)) {
LABEL_4383dc:
            if !(!v44) || !((v44 = 1, v77 = v35, v43 || v36 != v77)) {
                goto LABEL_438950;
            }
            v76 = v77 + v37;
            goto LABEL_438420;
        }
        v67 = v66 - v65;
        v68 = v37 + v65;
        v69 = v42;
        v63 = v69 & 4294967295;
        v70 = *((&v35 as &u8 + v63) as &i8);
        if v67 <= 15 {
            if v66 == v65 {
LABEL_4383d4:
                v39 = v66;
                goto LABEL_4383dc;
            } else {
                v72 = 0;
                while (*((v68 + v72) as &i8) != v70) {
                    v72 += 1;
                    if v67 == v72 {
                        goto LABEL_4383d4;
                    }
                }
            }
        }
        v71 = core::slice::memchr::memchr_aligned(v70 & 4294967295, v68);
        if v71 != 1 {
            v63 = v40;
            v39 = v63;
            if !v71 {
                goto LABEL_4383dc;
            }
            v76 = v37 + v35;
            v35 = v65;
        } else {
            v64 = v38;
            v69 = v42;
            v63 = v69 & 4294967295;
            v73 = v39;
            v65 = v73 + v74 + 1;
            v39 = v65;
            v75 = v65;
            if !(v75 >= v63) || !(v65 <= v64) {
                v66 = v40;
                if !(v66 >= v65) || !(v66 <= v64) {
                    goto LABEL_4383dc;
                }
            } else {
                if (v69 & 255) >= 5 {
                    core::slice::index::slice_end_index_len_fail(); /* do not return */
                }
                v65 = v39;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v75 - v63 + v37, v63, &v41, v63) as i8 {
                    v64 = v38;
                }
            }
            continue;
        }
LABEL_438420:
        if !core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v35, v76) {
LABEL_438950:
            uu_tsort::Graph::run_tsort(&v29, &v32);
            if !v29 {
                v20 = v31;
                v19 = v30;
                v35 = alloc::str::join_generic_copy(*((&v19 as &char + 8) as &i64), v31, &g_410cd2, 1);
                v4 = v37;
                v2 = v35;
                v6 = &v2;
                v7 = <alloc::string::String as core::fmt::Display>::fmt;
                v35 = Arguments {
                    pieces: [&g_4e4a40, "\n"]
                    args: &[&Argument] {
                        ptr: &v6
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v38 = 1;
                std::io::stdio::_print(&v35);
                v47 = 0;
            } else {
                v18 = v31;
                v16 = v30;
                v6 = uucore::util_name();
                v7 = v58;
                v2 = &v6;
                v3 = <&T as core::fmt::Display>::fmt;
                v4 = &v9;
                v5 = <&T as core::fmt::Display>::fmt;
                v35 = Arguments {
                    pieces: [&g_4e4c48, ": ", ": input contains a loop:\n"]
                    args: &[&Argument] {
                        ptr: &v2
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v38 = 2;
                v19 = alloc::fmt::format::format_inner(&v35);
                v6 = v19;
                v8 = v20;
                v85 = v18;
                if v85 {
                    do {
                        v87 = v85 * 16;
                        v28 += 16;
                        v21 = uucore::util_name();
                        v22 = v58;
                        v2 = &v21;
                        v3 = <&T as core::fmt::Display>::fmt;
                        v4 = &v28;
                        v5 = <&T as core::fmt::Display>::fmt;
                        v35 = &g_4e4c78;
                        v36 = 3;
                        v39 = 0;
                        v37 = &v2;
                        v38 = 2;
                        if core::fmt::write(&v6, &g_4e49d8, &v35) as i8 {
                            core::result::unwrap_failed(); /* do not return */
                        }
                    } while ((v88 = v87 - 16, v87 != 16));
                }
                v2 = &v6;
                v3 = <alloc::string::String as core::fmt::Display>::fmt;
                v35 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: &[&Argument] {
                        ptr: &v2
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v37 = &v2;
                v38 = 1;
                std::io::stdio::_eprint(&v35);
                v89 = v18;
                v35 = alloc::str::join_generic_copy(v17, v18, &g_410cd2, 1);
                v4 = v37;
                v2 = v35;
                v21 = &v2;
                v22 = <alloc::string::String as core::fmt::Display>::fmt;
                v35 = Arguments {
                    pieces: [&g_4e4a40, "\n"]
                    args: &[&Argument] {
                        ptr: &v21
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v38 = 1;
                std::io::stdio::_print(&v35);
                v2 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v37 = v4;
                v35 = v2;
                v38 = 1;
                v47 = alloc::alloc::exchange_malloc();
                v90 = v35;
                *((v47 + 16) as &i64) = v37;
                *(v47 as &i128) = v90;
            }
            v91 = &g_4e4b48;
        } else {
            v13 = struct58 {
                field_0: 0
                field_8: v58
                field_16: v78
                field_24: v58
                field_32: v78
                field_40: v78 + v58
                field_48: 0
                field_56: 1
            };
            v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13, v58);
            v79 = v8;
            if !v79 {
                goto LABEL_438950;
            }
            v81 = v7 + 24;
            if v79 {
                if v79 == 1 {
                    v29 = 0;
                    v30 = *((v9 + 8) as &i128);
                    v31 = 0;
                    v16 = &v29;
                    v17 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v2 = Arguments {
                        pieces: [&g_4e4cc0, ": input contains an odd number of tokens"]
                        args: &[&Argument] {
                            ptr: &v16
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v5 = 1;
                    v19 = alloc::fmt::format::format_inner(&v2);
                    v5 = 1;
                    v2 = v19;
                    v4 = v20;
                    v55 = __rust_alloc(32, 8);
                    v83 = v2;
                    *((v55 + 16) as &i64) = v4;
                    *(v55 as &i128) = v83;
                    v57 = &g_4e4b48;
LABEL_43865b:
                } else {
                    v79 -= 2;
                    uu_tsort::Graph::add_edge(&v32, *((v81 - 24) as &i64), *((v81 - 16) as &i64), *((v81 - 8) as &i64), *(v81 as &i64));
                    continue;
                }
            }
            if !(!v44) {
                goto LABEL_438950;
            }
        }
    }
}
