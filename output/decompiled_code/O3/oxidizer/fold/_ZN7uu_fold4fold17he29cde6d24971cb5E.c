fn uu_fold::fold(a0: &struct_0, a1: u64, a2: u8, a3: u32, a4: &u8) -> u64 {
    let v0: u32;  // [sp-0x13c]
    let v1: struct8;  // [sp-0x138], Other Possible Types: struct16, u64, Enum, void*
    let v2: &u8;  // [sp-0x130]
    let v3: &u8;  // [sp-0x128]
    let v4: u32;  // [sp-0x11c]
    let v5: Arguments;  // [bp-0x118], Other Possible Types: u64, i8
    let v6: i8;  // [sp-0x117], Other Possible Types: u8
    let v7: u8;  // [sp-0x116]
    let v8: u64;  // [bp-0x110]
    let v9: u16;  // [sp-0x10c]
    let v10: u64;  // [sp-0x108]
    let v11: u128;  // [bp-0x100]
    let v13: &u8;  // [sp-0xe8], Other Possible Types: Argument
    let v14: &u8;  // [sp-0xe0]
    let v15: void*;  // [sp-0xd8]
    let v16: &u8;  // [bp-0xd0], Other Possible Types: u32
    let v17: u32;  // [sp-0xc8]
    let v18: u32;  // [sp-0xc4]
    let v19: void*;  // [sp-0xc0]
    let v20: &u64;  // [sp-0xb8]
    let v21: void*;  // [sp-0xb0]
    let v22: &struct_0;  // [sp-0xa8]
    let v23: Argument;  // [bp-0xa0]
    let v24: u64;  // [sp-0x90]
    let v25: u64;  // [sp-0x88]
    let v26: u64;  // [sp-0x80]
    let v27: u64;  // [sp-0x78]
    let v28: u128;  // [sp-0x70]
    let v29: void*;  // [sp-0x60]
    let v30: u64;  // [sp-0x58]
    let v31: u64;  // [sp-0x50]
    let v32: u64;  // [sp-0x48]
    let v33: u64;  // [sp-0x38]
    let v35: &struct_0;  // rdi
    let v36: u256;  // ymm0
    let v37: &u8;  // rbx
    let v38: u64;  // r12
    let v39: u64;  // rbx
    let v40: u64;  // r15
    let v41: u256;  // ymm0
    let v42: u64;  // rdx
    let v43: &u8;  // r15
    let v45: &u8;  // r15
    let v46: &u8;  // rcx
    let v47: &u8;  // rbx
    let v68: u256;  // ymm0
    let v69: &u8;  // r12
    let v70: u64;  // r13
    let v71: u64;  // rbx
    let v72: u64;  // r15
    let v73: &&struct_1;  // rax
    let v74: u64;  // rbx
    let v75: &u8;  // r15
    let v76: u64;  // rdx
    let v77: u64;  // r14
    let v78: &u64;  // rbp
    let v79: u64;  // r14
    let v80: &u8;  // r12
    let v81: u32;  // eax
    let v82: u32;  // edx
    let v83: u32;  // ecx
    let v84: &u8;  // r15
    let v86: &u8;  // rdi
    let v87: &u8;  // rsi
    let v88: &u8;  // rsi
    let v90: &u8;  // r15
    let v91: &u8;  // rsi
    let v92: &u8;  // rsi
    let v93: u64;  // rbx
    let v95: &u8;  // rsi
    let v97: u32;  // eax
    let v98: u8;  // al
    let v99: u64;  // rax
    let v100: u32;  // cc_dep1
    let v101: u32;  // cc_dep2
    let v102: u32;  // eax
    let v103: &u8;  // r13
    let v104: u64;  // r13
    let v105: &u8;  // rsi
    let v106: &u8;  // rsi
    let v108: void*;  // rbx

    v35 = a0;
    v18 = a3;
    if !a1 {
        v15 = 0;
        return v15;
    }
    v32 = &a0[a1];
    if !a2 {
        v33 = v18;
        v15 = 0;
        v24 = "src/uu/fold/src/fold.rs";
        loop {
            v69 = v35->field_8;
            v22 = v35;
            v70 = v35->field_10;
            if v70 != 1 || *(v69) != 45 {
                v5 = 0x1b600000000;
                v8 = 0;
                v8 = 1;
                v1 = std::fs::OpenOptions::_open(&v5, v69, v70);
                if v1 as i32 {
                    v15 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v2, v69, v70);
                    return v15;
                }
                v4 = *((&v1 as &char + 4) as &i32);
                v0 = v4 | -0x100 | 1;
                v17 = 0;
                v71 = &g_4e3e20;
                v72 = &v4;
            } else {
                v25 = std::io::stdio::stdin();
                v17 = v25 | -0x100 | 1;
                v0 = 0;
                v71 = &g_4e3e78;
                v72 = &v25;
            }
            v22 += 1;
            v26 = __rust_alloc(0x2000, 1);
            v27 = 0x2000;
            v68 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v28 = 0;
            v29 = 0;
            v30 = v72;
            v31 = v71;
            v19 = 0;
            v20 = 1;
            v21 = 0;
            v1 = 0;
            v2 = 1;
            v73 = &v3;
            v74 = 0;
            v75 = 0;
            loop {
                *(v73) = 0;
                if std::io::append_to_string() as i64 {
                    v15 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v76);
                    return v15;
                }
                if !v76 {
                    break;
                }
                v77 = v21;
                if !v77 {
LABEL_484490:
                    v3 = v3;
                    goto LABEL_484527;
                } else {
                    v78 = v20;
                    v79 = v77 + v78;
                    loop {
                        v80 = *(v78 as &i8);
                        if v80 as u8 >= 0 {
                            v78 = v78 as &char + 1;
                            if v80 as u32 == 10 {
                                goto LABEL_48449a;
                            }
                            goto LABEL_484090;
                        }
                        v81 = v80 as u32 & 31;
                        v82 = *((v78 as &char + 1) as &i8) & 63;
                        if (v80 & 255) <= 223 {
                            v78 = v78 as &char + 2;
                            v80 = v81 * 64 | v82;
                            if v80 as u32 == 10 {
                                goto LABEL_48449a;
                            }
                            goto LABEL_484090;
                        }
                        v83 = *((v78 as &char + 2) as &i8) & 63 | v82 * 64;
                        if (v80 & 255) < 240 {
                            v78 = v78 as &char + 3;
                            v80 = v83 | v81 * 0x1000;
                            if v80 as u32 == 10 {
                                goto LABEL_48449a;
                            }
                        } else {
                            v78 = v78 as &char + 4;
                            v80 = *((v78 as &char + 3) as &i8) & 63 | v83 * 64 | (v81 & 7) * 0x40000;
                            if v80 as u32 == 10 {
LABEL_48449a:
                                v13 = v2;
                                v14 = v3;
                                v23 = Argument {
                                    value: &v13
                                    formatter: <&T as core::fmt::Display>::fmt
                                };
                                v5.pieces.ptr = &g_4e3f10;
                                v8 = 2;
                                std::io::stdio::_print(&v5);
                                v1 = alloc::string::String::replace_range(v14, 1, 0);
                                v108 = 0;
                                goto LABEL_484527;
                            }
                        }
LABEL_484090:
                        if v80 as u32 == 0x110000 {
                            goto LABEL_484490;
                        }
                        if v75 >= a4 {
                            v86 = v2;
                            v87 = v3;
                            if v14 {
                                if v14 >= v87 {
                                    if !(v14 == v87) {
                                        goto LABEL_484793;
                                    }
                                } else {
                                    if *((v86 + v14) as &i8) <= 191 {
                                        goto LABEL_484793;
                                    }
                                }
                            }
                            v13 = v86;
                            v14 = v88;
                            v23 = Argument {
                                value: &v13
                                formatter: <&T as core::fmt::Display>::fmt
                            };
                            v5.pieces.ptr = &g_4e3f10;
                            v8 = 2;
                            std::io::stdio::_print(&v5);
                            v1 = alloc::string::String::replace_range(v14, 1, 0);
                            v74 = 0;
                            v84 = v3;
                        }
                        v90 = v84;
                        if v80 as u32 == 8 {
                            v75 = v90 + 1;
                            if v90 < 1 {
                                v75 = 0;
                            }
                            goto LABEL_48433c;
                        }
                        if v80 as u32 == 9 {
                            break;
                        }
                        if v80 as u32 == 13 {
                            v75 = 0;
                            goto LABEL_48433c;
                        }
                        if !v18 as i8 {
LABEL_484227:
                            v75 = v90 + 1;
                            if v80 as u32 < 128 {
                                goto LABEL_48433c;
                            }
                            goto LABEL_484237;
                        }
                        if !((v80 + 9) as u32 >= 5) || !(v80 as u32 != 32) {
LABEL_484218:
                            v74 = 1;
                            v16 = v3;
                            goto LABEL_484227;
                        } else {
                            if v80 as u32 <= 127 {
                                v75 = v90 + 1;
                                goto LABEL_48433c;
                            }
                            v97 = v80 as u32 >> 8;
                            if v97 <= 31 {
                                if !v97 {
                                    v98 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v80 & 4294967295];
                                    goto LABEL_48447b;
                                } else {
                                    if !(v97 == 22) {
                                        goto LABEL_484485;
                                    }
                                    v100 = v80 as u32;
                                    v101 = 5760;
                                }
                            }
                            if v97 != 32 {
                                if !(v97 == 48) || !((v100 = v80 as u32, v101 = 0x3000, v100 == v101)) {
                                    goto LABEL_484485;
                                }
                                goto LABEL_484218;
                            } else {
                                v99 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v80 & 4294967295];
                                v98 = v99 | -0x100 | (v99 & 255) >> 1 & 255;
LABEL_48447b:
                                if !(!(v98 & 1)) {
                                    goto LABEL_484218;
                                }
LABEL_484485:
                                v75 = v90 + 1;
LABEL_484237:
                                v5 = 0;
                                v102 = v80 as u32;
                                if v80 as u32 < 0x800 {
                                    v5 = v102 >> 6 | 192;
                                    v6 = v80 as u8 & 63 | 128;
                                    v104 = 2;
                                } else if v80 as u32 < 0x10000 {
                                    v5 = Arguments {
                                        pieces: &[&str] {
                                            ptr: (v102 >> 12) as u8 | 224
                                            len: <UNKNOWN>
                                        }
                                        args: [&v23]
                                        fmt: None
                                    };
                                    v7 = v80 as u8 & 63 | 128;
                                    v104 = 3;
                                } else {
                                    v5 = v102 >> 18 | 240;
                                    v6 = ((v80 & 4294967295 & 4294967295) >> 12 & 4294967295) as u8 & 63 | 128;
                                    v104 = 4;
                                }
                                v105 = v3;
                                if v1 - v105 < v104 {
                                    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v105, v104);
                                    v106 = v3;
                                }
                                memcpy(v106 + v2, &v5, v104);
                                v3 = &v3[v104];
                                if v78 == v79 {
                                    goto LABEL_484490;
                                }
                            }
                        }
                    }
                    v75 = (v90 & -8) + 8;
                    v91 = v3;
                    if !(v75 > a4) || !(v91) {
LABEL_48432f:
                        v16 = v92;
                        v93 = v33;
LABEL_48433c:
                        v74 = v93;
                        v103 = v3;
                        if v103 == v1 {
                            v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        }
                        *((v2 + v103) as &u8) = v80 as u8;
                        v3 = v103 + 1;
                        if v78 == v79 {
                            goto LABEL_484490;
                        }
                        continue;
                    }
                    if !v14 {
LABEL_4842ae:
                        v13 = v2;
                        v14 = v95;
                        v23 = Argument {
                            value: &v13
                            formatter: <&T as core::fmt::Display>::fmt
                        };
                        v5.pieces.ptr = &g_4e3f10;
                        v8 = 2;
                        std::io::stdio::_print(&v5);
                        v1 = alloc::string::String::replace_range(v14, 1, 0);
                        v92 = v3;
                        goto LABEL_48432f;
                    } else {
                        if v14 < v91 {
                            if !(*((v13 + v14) as &i8) <= 191) {
                                goto LABEL_4842ae;
                            }
                        } else {
                            if v14 == v91 {
                                goto LABEL_4842ae;
                            }
                        }
                        v24 = "src/uu/fold/src/fold.rs";
LABEL_484793:
                        core::str::slice_error_fail(); /* do not return */
                    }
LABEL_484527:
                    v3 = v3;
                    v73 = &v21;
                    if v3 {
                        v13 = Argument {
                            value: &v1
                            formatter: <alloc::string::String as core::fmt::Display>::fmt
                        };
                        v5.pieces.ptr = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                        v8 = 1;
                        std::io::stdio::_print(&v5);
                        v3 = 0;
                        v73 = &v21;
                    }
                }
            }
            v35 = v22;
            if v35 == v32 {
                return v15;
            }
        }
    } else {
        v15 = 0;
LABEL_48390f:
        v37 = v35->field_8;
        v22 = v35;
        v38 = v35->field_10;
        if v38 == 1 && *(v37) == 45 {
            v25 = std::io::stdio::stdin();
            v16 = v25 | -0x100 | 1;
            v0 = 0;
            v39 = &g_4e3e78;
            v40 = &v25;
            goto LABEL_4839c6;
        }
        v5 = 0x1b600000000;
        v9 = 0;
        v8 = 0;
        v8 = 1;
        v1 = std::fs::OpenOptions::_open(&v5, v37, v38);
        if v1 as i32 {
            v15 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v2, v37, v38);
            return v15;
        }
        v4 = *((&v1 as &char + 4) as &i32);
        v0 = v4 | -0x100 | 1;
        *(&v16 as &i32) = 0;
        v39 = &g_4e3e20;
        v40 = &v4;
LABEL_4839c6:
        v22 += 1;
        v26 = __rust_alloc(0x2000, 1);
        v27 = 0x2000;
        v41 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v28 = 0;
        v29 = 0;
        v30 = v40;
        v31 = v39;
        v1 = 0;
        v2 = 1;
        loop {
            v3 = 0;
            if std::io::append_to_string() as i64 {
                v15 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v42);
                return v15;
            }
            if !v42 {
                v35 = v22;
                if v35 == v32 {
                    return v15;
                }
                goto LABEL_48390f;
            }
            v43 = v3;
            if !v43 {
                continue;
            }
            if v43 != 1 || *(v2) != 10 {
                break;
            }
            *(&v5.pieces.ptr as &&str) = "\n";
            v8 = 1;
            v10 = 8;
            v41 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v11 = 0;
            std::io::stdio::_print(&v5);
        }
        v46 = v45;
        v47 = 0;
    }
}
