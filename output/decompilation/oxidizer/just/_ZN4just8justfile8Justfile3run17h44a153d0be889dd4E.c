fn just::justfile::Justfile::run(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: u64, a6: u64) -> int {
    let v0: u64;  // [bp-0x418]
    let v1: u64;  // [bp-0x410]
    let v2: u64;  // [bp-0x400]
    let v3: u8;  // [bp-0x3fe]
    let v4: i64;  // [bp-0x3f8], Other Possible Types: struct_6 *, u64
    let v5: u64;  // [bp-0x3f0]
    let v6: struct80;  // [bp-0x3e8]
    let v7: struct24;  // [bp-0x3e8]
    let v8: u64;  // [bp-0x3e8]
    let v9: struct9;  // [bp-0x3e8]
    let v10: Result<struct40, struct24>;  // [bp-0x3e8]
    let v11: struct224;  // [bp-0x3e8]
    let v12: struct16;  // [bp-0x3e8]
    let v13: struct57;  // [bp-0x3e8]
    let v14: u16;  // [bp-0x3e7]
    let v15: u8;  // [bp-0x3e5]
    let v16: iNone;  // [bp-0x3e1], Other Possible Types: u128
    let v17: void*;  // [bp-0x3e0]
    let v18: struct16;  // [bp-0x3d8]
    let v19: struct24;  // [bp-0x3d1], Other Possible Types: u128
    let v20: struct112;  // [bp-0x3d0]
    let v21: u64;  // [bp-0x3c8]
    let v22: void*;  // [bp-0x3c0]
    let v23: struct16;  // [bp-0x3b8]
    let v24: struct24;  // [bp-0x3b0]
    let v25: i8;  // [bp-0x398]
    let v26: i8;  // [bp-0x397]
    let v27: i8;  // [bp-0x390]
    let v28: i8;  // [bp-0x388]
    let v29: u8;  // [bp-0x304]
    let v30: void*;  // [bp-0x300]
    let v31: void*;  // [bp-0x2f8]
    let v32: void*;  // [bp-0x2f0], Other Possible Types: u64
    let v34: iNone;  // [bp-0x2d8]
    let v36: alloc::string::String;  // [bp-0x2b8], Other Possible Types: struct32, u128
    let v37: u128;  // [bp-0x2b8]
    let v38: Result<struct20, struct16>;  // [bp-0x2b8]
    let v39: core::fmt::rt::Argument;  // [bp-0x2b4]
    let v40: u64;  // [bp-0x2b0]
    let v41: iNone;  // [bp-0x2a8], Other Possible Types: u64
    let v42: iNone;  // [bp-0x298]
    let v43: iNone;  // [bp-0x288]
    let v44: iNone;  // [bp-0x278]
    let v45: iNone;  // [bp-0x268]
    let v46: struct24;  // [bp-0x250]
    let v47: u64;  // [bp-0x248]
    let v48: void*;  // [bp-0x238]
    let v49: struct16;  // [bp-0x238]
    let v50: u64;  // [bp-0x230]
    let v51: void*;  // [bp-0x228]
    let v52: u8;  // [bp-0x220]
    let v53: struct24;  // [bp-0x210]
    let v54: u128;  // [bp-0x208]
    let v55: u64;  // [bp-0x200]
    let v56: u64;  // [bp-0x1f8]
    let v57: u8;  // [bp-0x1f0]
    let v58: u64;  // [bp-0x1e8]
    let v59: struct157;  // [bp-0x1d8], Other Possible Types: struct16, struct17, struct32, int, u128
    let v60: Option<struct32>;  // [bp-0x1d8], Other Possible Types: u256
    let v61: struct32;  // [bp-0x1d1], Other Possible Types: u128
    let v62: u128;  // [bp-0x1c9]
    let v63: u128;  // [bp-0x1c8]
    let v64: u128;  // [bp-0x1c1]
    let v65: u64;  // [bp-0x1b9]
    let v66: u8;  // [bp-0xf0]
    let v67: struct72;  // [bp-0xd0]
    let v68: struct32;  // [bp-0x88]
    let v69: struct56;  // [bp-0x68]
    let v70: u64;  // rax
    let v71: u64;  // rcx
    let v72: u64;  // rdx
    let v73: u64;  // rax
    let v75: struct32;  // rax
    let v76: struct24;  // rcx
    let v77: u8;  // al
    let v78: Result<struct40, struct16>;  // xmm0
    let v79: iNone;  // xmm2
    let v80: iNone;  // xmm3
    let v81: u8;  // al
    let v82: i64;  // rax
    let v83: u64;  // rbp
    let v84: u64;  // rcx
    let v86: struct16;  // rax
    let v87: struct24;  // xmm0
    let v88: struct112;  // xmm0lq
    let v89: u64;  // rcx
    let v90: u64;  // r14
    let v91: struct16;  // rax
    let v92: struct24;  // xmm0
    let v93: struct112;  // xmm0lq
    let v94: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // rcx
    let v95: i64;  // rdx
    let v96: i64;  // rdx
    let v97: u64;  // rax
    let v98: u64;  // rdx
    let v100: u128;  // xmm1
    let v101: iNone;  // xmm1
    let v102: u64;  // r15
    let v103: u8;  // al
    let v104: u64;  // rax
    let v105: Option<struct24>;  // rbp
    let v106: u8;  // al
    let v107: u128;  // xmm0
    let v108: iNone;  // xmm0
    let v109: iNone;  // xmm0
    let v110: u8;  // al
    let v111: iNone;  // xmm0
    let v112: iNone;  // xmm1
    let v113: iNone;  // xmm2
    let v114: iNone;  // xmm0
    let v115: iNone;  // xmm2
    let v116: iNone;  // xmm3
    let v117: u64;  // r15
    let v118: u32;  // r15d
    let v119: u8;  // al
    let v120: core::fmt::rt::Argument;  // ebp
    let v121: iNone;  // xmm1
    let v122: iNone;  // xmm2
    let v123: iNone;  // xmm0
    let v124: iNone;  // xmm1
    let v125: iNone;  // xmm2
    let v126: u64;  // [bp-0x400]
    let v129: void*;  // [bp-0x308], Other Possible Types: u32

    v70 = *(a4 as &i64);
    v71 = *((a4 + 8) as &i64);
    v72 = v70;
    v73 = v70;
    if v73 {
        v73 = *((a4 + 16) as &i64);
    }
    v6 = struct80 {
        field_0: v72
        field_8: 0
        field_16: v70
        field_24: v71
        field_32: v72
        field_40: 0
        field_48: v70
        field_56: v71
        field_64: v73
        field_72: a1
    };
    core::iter::traits::iterator::Iterator::collect(&v52, &v6);
    if v53 {
        v19 = v53;
        v16 = v52;
        v75 = *((&v16 as &char + 8) as &i64);
        v76 = v19.field_0;
        return struct40 {
            field_0: 51
            field_1: <UNKNOWN>
            field_16: v76
            field_24: <UNKNOWN>
        };
    }
    if *((a2 + 413) as &i8) {
        v8 = just::load_dotenv::load_dotenv(a2, a1 + 168, *((a3 + 32) as &i64), *((a3 + 40) as &i64));
        v77 = v10 as i8;
        if v77 != 56 {
            v78 = *((&v10 as &char + 1) as &i128);
            v79 = *((&v10 as &char + 32) as &i128);
            v80 = *(&v6.field_48 as &i128);
            v62 = *((&v10 as &char + 16) as &i128);
            *(&v59 as &Result<struct40, struct16>) = v78;
            return struct112 {
                field_0: v77
                field_1: <UNKNOWN>
                field_16: <UNKNOWN>
                field_32: <UNKNOWN>
                field_48: <UNKNOWN>
                field_64: <UNKNOWN>
                field_80: <UNKNOWN>
                field_96: <UNKNOWN>
            };
        }
    }
    just::scope::Scope::root(&v66);
    v69 = typed_arena::Arena<T>::new();
    v46 = struct24 {
        field_0: 0
        padding_8: <UNKNOWN>
        field_16: 0
    };
    just::justfile::Justfile::evaluate_scopes(&v8, a1, &v69, a2, &v34, a4, &v66, &v46, a3);
    v81 = v6.field_0;
    if v81 != 56 {
        v123 = *((&v6.field_0 as &char + 1) as &i128);
        v124 = *((&v6.field_16 as &char + 1) as &i128);
        v125 = *((&v6.field_32 as &char + 1) as &i128);
        return struct112 {
            field_0: v81
            field_1: <UNKNOWN>
            field_17: <UNKNOWN>
            field_33: <UNKNOWN>
            field_49: <UNKNOWN>
            field_65: <UNKNOWN>
            field_81: <UNKNOWN>
            field_96: <UNKNOWN>
        };
    }
    v82 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v46.field_0, v47, *((a1 + 56) as &i64), *((a1 + 64) as &i64));
    core::option::unwrap(v82);
    v83 = *((v82 + 8) as &i64);
    v84 = *((a2 + 312) as &i64) ^ 0x8000000000000000;
    match ((v84 < 17 ? v84 : 2)) {
        2 => {
            v117 = a2 + 336;
            if *((a2 + 417) as &i8) {
                v11 = just::settings::Settings::shell_command(a1 + 168, a2);
                v12 = std::process::Command::arg(v117);
                memcpy(&v59 as u8, &v12, 224);
            } else {
                v59 = std::process::Command::new(v117);
            }
            v1 = *((a2 + 320) as &i64);
            v0 = *((a2 + 328) as &i64);
            v59 = std::process::Command::args(*((a2 + 320) as &i64), *((a2 + 328) as &i64));
            v59 = std::process::Command::current_dir(a3 + 24);
            v129 = 0;
            v31 = 0;
            v32 = v83;
            <std::process::Command as just::command_ext::CommandExt>::export(&v59, a1 + 168, &v34, &v129 as u8, a1 + 568);
            memcpy(&v8, &v59, 224);
            v38 = <std::process::Command as just::command_ext::CommandExt>::status_guard(&v8);
            v118 = *((&v38 as &char + 16) as &i32);
            match v38 {
                Err(_) => {
                    v13 = just::justfile::Justfile::run::{{closure}}(*((a2 + 344) as &i64), *((a2 + 352) as &i64), v1, v0, v40);
                    v119 = v13.field_0;
                    v126 = v14;
                    v3 = v15;
                    v120 = *(&(&v13.field_0)[4] as &i32);
                    v36 = *(&v13.field_8 as &i128) as u128;
                    *(&v41 as &i128) = *((&v13.field_16 as &char + 8) as &i128);
                    *(&v42 as &u128) = v13.field_40;
                    v43 = *(&(&v11)[7] as &i128);
                    v44 = *(&(&v11)[9] as &i128);
                    v45 = *(&(&v11)[11] as &i128);
                    if v119 != 56 {
                        v121 = v41 as i128;
                        v122 = v42 as i128;
                        return struct112 {
                            field_0: v119
                            field_1: <UNKNOWN>
                            field_3: v120
                            field_4: v36
                            field_8: <UNKNOWN>
                            field_24: <UNKNOWN>
                            field_40: <UNKNOWN>
                            field_56: <UNKNOWN>
                            field_72: <UNKNOWN>
                            field_88: <UNKNOWN>
                        };
                    }
                },
                Ok(_) => {
                    v120 = v39;
                    break;
                },
            }
            if v120 {
                v7 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(*((a2 + 344) as &i64), *((a2 + 352) as &i64));
                v41 = v7.field_16;
                v37 = *(&v7.field_0 as &i128);
                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v7, v1, v0);
                return struct56 {
                    field_0: 11
                    padding_1: <UNKNOWN>
                    field_4: v120
                    field_8: v37
                    field_24: v41
                    field_32: *(&v7.field_0 as &i128)
                    field_48: v7.field_16
                };
            } else if v118 {
                return struct8 {
                    field_0: 30
                    padding_1: <UNKNOWN>
                    field_4: v118
                };
            } else {
                return struct1 {
                    field_0: 56
                };
            }
        }
        6 => {
            if *((a2 + 320) as &i64) == 0x8000000000000000 {
                v86 = *(v83 as &i64);
                v67 = struct72 {
                    field_0: v89
                    field_8: 0
                    field_16: v86
                    field_24: v88
                    field_32: v89
                    field_40: 0
                    field_48: v86
                    field_56: v87
                };
                v90 = core::iter::traits::iterator::Iterator::fold(&v67);
                v91 = *(v83 as &i64);
                *(&v8 as &core::result::Result<std::path::PathBuf, std::io::error::Error>) = v94;
                v17 = 0;
                v18 = v91;
                v20 = v93;
                *(&v21 as &core::result::Result<std::path::PathBuf, std::io::error::Error>) = v94;
                v22 = 0;
                if v90 <= 65535 {
                    for (v24 = v92; <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v8) as u64 && v95; print!("{} := \"{}\"\n{}", &v126, v95, 0);
) {
                        if *((v95 + 102) as &i8) {
                            continue;
                        }
                        v2 = just::token::Token::lexeme(v95 + 24);
                        v4 = v95;
                    }
                } else {
                    for (v23 = v91; <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v8) as u64 && v96; panic!("Formatting argument out of range");
) {
                        if !*((v96 + 102) as &i8) {
                            v126 = just::token::Token::lexeme(v96 + 24);
                            v4 = v96;
                        }
                    }
                }
            } else {
                v97 = just::scope::Scope::value(v83, *((a2 + 328) as &i64), *((a2 + 336) as &i64));
                if !v97 {
                    v59 = just::justfile::Justfile::suggest_variable(a1, *((a2 + 328) as &i64), *((a2 + 336) as &i64));
                    v36 = <alloc::string::String as core::clone::Clone>::clone(a2 + 320);
                    v100 = *((&v59.field_8 as &char + 8) as &i128);
                    *(&v16 as &i128) = *(&v59.field_0 as &i128);
                    v19 = v100;
                    v101 = (&v16)[9] as i128;
                    return struct72 {
                        field_0: 21
                        field_1: <UNKNOWN>
                        field_17: <UNKNOWN>
                        field_32: *(&v36.vec.buf.inner.cap as &i128)
                        field_40: <UNKNOWN>
                        field_56: <UNKNOWN>
                    };
                }
                v36 = v97;
                v40 = v98;
                print!("{}", &v36 as u8);
            }
            return struct1 {
                field_0: 56
            };
        }
        _ => {
            core::iter::traits::iterator::Iterator::collect(&v57, a5, a5 + a6 * 24);
            v102 = v58;
            just::argument_parser::ArgumentParser::parse_arguments(&v8, a1, v102);
            v103 = v6.field_0;
            if v103 != 56 {
                v114 = *((&v6.field_0 as &char + 1) as &i128);
                v115 = *(&v6.field_32 as &i128);
                v116 = *(&v6.field_48 as &i128);
                v62 = *(&v6.field_16 as &i128);
                v59 = v114;
                return struct112 {
                    field_0: v103
                    field_1: <UNKNOWN>
                    field_16: <UNKNOWN>
                    field_32: <UNKNOWN>
                    field_48: <UNKNOWN>
                    field_64: <UNKNOWN>
                    field_80: <UNKNOWN>
                    field_96: <UNKNOWN>
                };
            }
            v0 = v102;
            v104 = v6.field_24;
            v54 = *(&v6.field_8 as &i128);
            v56 = v104;
            v48 = 0;
            v50 = 8;
            v51 = 0;
            if v56 {
                v1 = v56 * 48;
                v105 = 0;
                do {
                    v9 = just::justfile::Justfile::invocation(a1, *((v55 + v105 + 8) as &i64), *((v55 + v105 + 16) as &i64), *((v55 + v105 + 32) as &i64), *((v55 + v105 + 40) as &i64), 0);
                    v106 = v9.field_0;
                    if v106 != 56 {
                        v65 = v6.field_32;
                        v108 = *((&v6.field_0 as &char + 1) as &i128);
                        v63 = *((&v6.field_16 as &char + 1) as &i128);
                        v59 = v108;
                        v109 = v59 as i128;
                        return struct112 {
                            field_0: v106
                            field_1: <UNKNOWN>
                            field_17: <UNKNOWN>
                            field_32: *(&v6.field_40 as &i128)
                            field_40: <UNKNOWN>
                            field_56: <UNKNOWN>
                            field_72: <UNKNOWN>
                            field_88: <UNKNOWN>
                        };
                    }
                    v107 = *(&v6.field_8 as &i128);
                    v64 = *(&v6.field_24 as &i128);
                    v61 = v107;
                    v68 = v61;
                    v49 = alloc::vec::Vec<T,A>::push(&v68);
                    v105 += 48;
                } while (v1 != v105);
            }
            v129 = 0;
            v29 = 0;
            v30 = 0;
            v32 = 0;
            v36 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v49);
            v60 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v36);
            if let None = v60 {
                return struct1 {
                    field_0: 56
                };
            }
            do {
                core::iter::traits::iterator::Iterator::collect(&v126, *((&v60 as &char + 8) as &i64), *((&v60 as &char + 16) as &i64) * 16 + *((&v60 as &char + 8) as &i64));
                just::justfile::Justfile::run_recipe(&v8, v4, v5, a2, &v34, 0, &v129, *((&v60 as &char + 24) as &i64), &v46, a3);
                v110 = v9.field_0;
                if v110 != 56 {
                    v111 = *((&v6.field_0 as &char + 1) as &i128);
                    v112 = *((&v6.field_16 as &char + 1) as &i128);
                    v113 = *((&v6.field_32 as &char + 1) as &i128);
                    return struct112 {
                        field_0: v110
                        field_1: <UNKNOWN>
                        field_17: <UNKNOWN>
                        field_33: <UNKNOWN>
                        field_49: <UNKNOWN>
                        field_65: <UNKNOWN>
                        field_81: <UNKNOWN>
                        field_96: <UNKNOWN>
                    };
                }
                v60 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v36);
            } while (v60 as i64 != 0x8000000000000000);
            return struct1 {
                field_0: 56
            };
        }
    }
}
