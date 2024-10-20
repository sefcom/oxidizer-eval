fn uu_ln::link_files_in_dir(a0: void*, a1: u32, a2: u32, a3: u32, a4: &u64, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x151]
    let v1: Arguments;  // [sp-0x150], Other Possible Types: i64, struct24, struct32, Enum
    let v2: i64;  // [sp-0x148]
    let v3: i64;  // [sp-0x140]
    let v4: i64;  // [sp-0x138]
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x128]
    let v7: i32;  // [sp-0x11c]
    let v8: i128;  // [sp-0x118]
    let v9: i128;  // [bp-0x108], Other Possible Types: Argument
    let v10: i64;  // [sp-0x100], Other Possible Types: Argument
    let v11: i64;  // [sp-0xf8]
    let v12: i8;  // [bp-0xf0]
    let v13: i64;  // [bp-0xe8], Other Possible Types: Argument
    let v14: Argument;  // [bp-0xe0]
    let v15: i64;  // [sp-0xd8]
    let v16: i64;  // [sp-0xd0]
    let v17: struct24;  // [sp-0xc8], Other Possible Types: i192
    let v19: i64;  // [sp-0x90]
    let v20: i128;  // [sp-0x88], Other Possible Types: Enum
    let v21: i128;  // [sp-0x78]
    let v22: i64;  // [sp-0x68]
    let v23: i64;  // [sp-0x60]
    let v24: i128;  // [sp-0x58]
    let v25: i128;  // [sp-0x48]
    let v27: i64;  // fs
    let v28: i64;  // r13
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // rdx
    let v32: i128;  // xmm0
    let v33: i128;  // xmm1
    let v34: i128;  // xmm0
    let v35: i256;  // ymm0
    let v36: i256;  // ymm0
    let v37: i128;  // xmm1
    let v38: i256;  // ymm1
    let v39: i256;  // ymm1
    let v40: i64;  // 4096
    let v41: i64;  // 4096
    let v42: i64;  // r14
    let v43: i64;  // r15
    let v44: i64;  // r13
    let v45: i64;  // rbp
    let v46: i64;  // rax
    let v47: i64;  // r13
    let v48: i64;  // rbx
    let v49: i64;  // rcx
    let v51: i128;  // xmm0
    let v52: i64;  // rax
    let v54: i128;  // xmm0
    let v57: i64;  // rbx
    let v58: i64;  // rax
    let v59: i128;  // xmm0
    let v60: i256;  // ymm0
    let v61: i64;  // rax
    let v62: i64;  // rbx
    let v63: i64;  // r14
    let v64: i64;  // r13
    let v65: i128;  // xmm0
    let v66: i128;  // xmm0
    let v67: i128;  // xmm0
    let v68: i128;  // xmm1
    let v70: i64;  // r15
    let v71: i128;  // xmm0
    let v73: i256;  // ymm0
    let v74: i64;  // r12
    let v75: i64;  // r12
    let v77: i64;  // r8
    let v78: i64;  // r9
    let v81: i128;  // xmm0
    let v84: i64;  // rax
    let v85: i128;  // xmm0
    let v86: i128;  // xmm0
    let v87: i128;  // xmm0
    let v88: i128;  // xmm0
    let v89: i64;  // rax
    let v95: i128;  // xmm0
    let v96: i128;  // xmm1

    if !std::path::Path::is_dir(a2, a3) as i8 {
        v1 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
        v4 = 0x8000000000000000;
        v29 = __rust_alloc(48, &g_0);
        v32 = v1;
        v33 = *((&v1 as &char + 16) as &i128);
        *((v29 + &g_20 as &u8) as &i64) = v5;
        *((v29 + &g_10 as &u8) as &i128) = v33;
        *(v29 as &i128) = v32;
        return v29;
    }
    if *((*(v27 as &i64) - 48) as &i64) {
        v28 = *((*(v27 as &i64) + -40) as &i64);
    } else {
        v28 = std::sys::pal::unix::rand::hashmap_random_keys();
        v30 = *(v27 as &i64) - 48;
        *(v30 as &&i64) = &g_0;
        *((v30 + &g_0 as &u8) as &i64) = v28;
        *((v30 + &g_10 as &u8) as &i64) = v31;
    }
    *((*(v27 as &i64) + -40) as &&i64) = v5 + &g_0 as &u8;
    v1 = hashbrown::raw::RawTable<T,A>::with_capacity_in(a1);
    v5 = v28;
    v34 = v1;
    vvar_47{reg 224} = ((vvar_383{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_382{reg 224}))
    v37 = *((&v1 as &char + 16) as &i128);
    vvar_48{reg 256} = ((vvar_386{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_385{reg 256}))
    v20 = v34;
    v21 = v37;
    v22 = v5;
    v23 = v6;
    if !a1 {
LABEL_4890b8:
        v29 = &g_0;
    } else {
        v19 = a0 + a1 * &g_10;
        v0 = *((a4 + 54) as &i8) == &g_0 & *((a4 + 52) as &i8) != &g_0;
        v7 = (v19 | -0x100 | &g_0) as u32;
        do {
            v42 = v41;
            v43 = v40;
            if v0 && std::path::Path::is_symlink(v43, v42) as i8 {
                if std::path::Path::is_file(v43, v42) as i8 {
                    v46 = std::sys::pal::unix::fs::unlink(v43, v42);
                    if v46 {
                        v8 = v46;
                        if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                            once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                        }
                        v54 = g_4f4ae0;
                        vvar_47{reg 224} = ((vvar_47{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_485{reg 224}))
                        v9 = v54;
                        v13 = &v9;
                        v1 = Arguments {
                            pieces: [&g_4ef9e8, ": "]
                            args: [&v13]
                            fmt: None
                        };
                        v3 = &v13;
                        std::io::stdio::_eprint(&v1);
                        v9 = &g_0;
                        v10 = v43;
                        v11 = v42;
                        *(&v12 as &&i64) = &g_0;
                        v13 = Argument {
                            value: &v9
                            formatter: <os_display::Quoted as core::fmt::Display>::fmt
                        };
                        v14 = Argument {
                            value: <os_display::Quoted as core::fmt::Display>::fmt
                            formatter: &v8
                        };
                        v16 = <std::io::error::Error as core::fmt::Display>::fmt;
                        v1 = Arguments {
                            pieces: ["Could not update ", ": ", "\n"]
                            args: [&v13, &v14]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v1);
                    }
                }
                if std::path::Path::is_dir(v43, v42) as i8 {
                    v58 = std::sys::pal::unix::fs::rmdir(v43, v42);
                    if v58 {
                        v8 = v58;
                        if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                            once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                        }
                        v59 = g_4f4ae0;
                        vvar_47{reg 224} = ((vvar_47{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_540{reg 224}))
                        v9 = v59;
                        v13 = &v9;
                        v1 = Arguments {
                            pieces: [&g_4ef9e8, ": "]
                            args: [&v13]
                            fmt: None
                        };
                        v3 = &v13;
                        std::io::stdio::_eprint(&v1);
                        v9 = &g_0;
                        v10 = v43;
                        v11 = v42;
                        *(&v12 as &&i64) = &g_0;
                        v13 = &v9;
                        v14 = Argument {
                            value: <os_display::Quoted as core::fmt::Display>::fmt
                            formatter: &v8
                        };
                        v15 = &v8;
                        v16 = <std::io::error::Error as core::fmt::Display>::fmt;
                        v1 = Arguments {
                            pieces: ["Could not update ", ": ", "\n"]
                            args: [&v13, &v14]
                            fmt: None
                        };
                        v3 = &v13;
                        std::io::stdio::_eprint(&v1);
                    }
                }
                v17 = std::sys::pal::unix::os::split_paths::bytes_to_path(v43, v42);
            } else {
                v44 = *((a0 + &g_0 as &u8) as &i64);
                v45 = *((a0 + &g_10 as &u8) as &i64);
                v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v44, v45);
                if !v1 {
                    v47 = v2;
                    v48 = v3;
                    v17 = std::path::Path::_join(v43, v42, v52, v57);
                } else {
                    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    }
                    v51 = g_4f4ae0;
                    vvar_464{reg 224} = ((vvar_47{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_463{reg 224}))
                    v9 = v51;
                    v13 = Argument {
                        value: &v9
                        formatter: <&T as core::fmt::Display>::fmt
                    };
                    v1 = Arguments {
                        pieces: [&g_4ef9e8, ": "]
                        args: [&v13]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v1);
                    v9 = &g_0;
                    v10 = v44;
                    v11 = v45;
                    *(&v12 as &&i64) = &g_0;
                    v13 = &v9;
                    v1 = Arguments {
                        pieces: ["cannot stat ", ": No such file or directory\n"]
                        args: [&v13]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v1);
                    v7 = &g_0;
                    v1 = v1;
                    v2 = v2;
                    v3 = v3;
                    continue;
                }
            }
            if *((&v21 as &char + 8) as &i64) {
                v61 = core::hash::BuildHasher::hash_one(&v22, &v17);
                a0 = a0;
                v62 = v20;
                v63 = *((&v20 as &char + 8) as &i64);
                v64 = v63 & v61;
                vvar_578{reg 224} = Conv(64->128, (vvar_572{reg 16} >> 0x39<8>))
                v66 = BinaryOp InterleaveLOV;
                v67 = v66 >> 64 CONCAT v66 CONCAT v66 CONCAT v66 CONCAT v66;
                vvar_47{reg 224} = ((((((vvar_47{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_578{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_580{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_582{reg 224}))
                v68 = v67 CONCAT v67 CONCAT v67 CONCAT v67;
                vvar_48{reg 256} = ((vvar_48{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_584{reg 256}))
                v24 = v68;
                loop {
                    v70 = &g_0;
                    v71 = *((v62 + v64) as &i128);
                    v25 = v71;
                    vvar_594{reg 224} = ((((vvar_182{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_591{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_591{reg 224} CmpEQV vvar_584{reg 256})))
                    v74 = UnaryOp GetMSBs;
                    if v74 {
                        do {
                            v75 = v74;
                            if <Q as hashbrown::Equivalent<K>>::equivalent(&v17, ((-(((v75 & 4294967295) == &g_0 ? &g_20 : UnaryOp Ctz & 4294967295) + v64 & v63) + (-(((v75 & 4294967295) == &g_0 ? &g_20 : UnaryOp Ctz & 4294967295) + v64 & v63) << &g_0) << &g_0) + v62 - &g_10 as &u8) as &i64, v31, v49, v77, v78) as i8 {
                                a0 = a0;
                                if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                                    once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                                }
                                v85 = g_4f4ae0;
                                v9 = v85;
                                v13 = &v9;
                                v1 = Arguments {
                                    pieces: [&g_4ef9e8, ": "]
                                    args: [&v13]
                                    fmt: None
                                };
                                v3 = &v13;
                                std::io::stdio::_eprint(&v1);
                                v86 = *((&v17 as &char + 8) as &i128);
                                v8 = v86;
                                v87 = *((a0 + &g_0 as &u8) as &i128);
                                vvar_47{reg 224} = ((((((vvar_594{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_675{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_689{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_691{reg 224}))
                                v13 = v87;
                                v9 = Argument {
                                    value: &v8
                                    formatter: <std::path::Display as core::fmt::Display>::fmt
                                };
                                v10 = Argument {
                                    value: <std::path::Display as core::fmt::Display>::fmt
                                    formatter: &v13
                                };
                                v12 = <std::path::Display as core::fmt::Display>::fmt;
                                v1 = Arguments {
                                    pieces: ["will not overwrite just-created '", "' with '", "'\n"]
                                    args: [&v9, &v10]
                                    fmt: None
                                };
                                std::io::stdio::_eprint(&v1);
                                goto LABEL_488fb0;
                            }
                        } while ((v3 = v3, v2 = v2, v1 = v1, a0 += &g_10, a0 != v19));
                    }
                    v81 = v25;
                    vvar_47{reg 224} = ((((vvar_594{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_638{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_638{reg 224} CmpEQV 0xffffffffffffffffffffffffffffffff<128>)))
                    if UnaryOp GetMSBs {
                        break;
                    }
                    v64 = (v64 + v70 + &g_10 as &u8) as &i64 & v63;
                    vvar_48{reg 256} = ((vvar_48{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1134{stack -88}))
                }
                goto LABEL_488fb0;
            }
            v84 = uu_ln::link() as i64;
            if v84 == &g_0 {
                goto LABEL_488fb8;
            }
            v8 = v84;
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v88 = g_4f4ae0;
            vvar_47{reg 224} = ((vvar_47{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_705{reg 224}))
            v9 = v88;
            v13 = &v9;
            v1 = Arguments {
                pieces: [&g_4ef9e8, ": "]
                args: [&v13]
                fmt: None
            };
            v3 = &v13;
            std::io::stdio::_eprint(&v1);
            v9 = Argument {
                value: &v8
                formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
            };
            v1 = Arguments {
                pieces: [&g_4efa88, "\n"]
                args: [&v9]
                fmt: None
            };
            std::io::stdio::_eprint(&v1);
            if *(v31 as &i64) {
                v89();
            }
LABEL_488fb0:
            v7 = &g_0;
LABEL_488fb8:
            memcpy(v2, *((&v17 as &char + 8) as &i64), *((&v17 as &char + 16) as &i64));
            v1 = struct24 {
                field_0: v91
                field_8: v92
                field_16: v91
            };
            v20 = hashbrown::map::HashMap<K,V,S,A>::insert(&v1, v31, v49, v77, v78);
            v1 = v1;
            v2 = v2;
            v3 = v3;
        } while ((v3 = v3, v2 = v2, v1 = v1, a0 += &g_10, a0 != v19));
        if !((v7 & &g_0) == &g_0) {
            goto LABEL_4890b8;
        }
        v4 = 9223372036854775809;
        v29 = __rust_alloc(48, &g_0);
        v95 = v1;
        v96 = v3;
        *((v29 + &g_20 as &u8) as &i128) = *((&v1 as &char + 32) as &i128);
        *((v29 + &g_10 as &u8) as &i128) = v96;
        *(v29 as &i128) = v95;
    }
    return v29;
}
