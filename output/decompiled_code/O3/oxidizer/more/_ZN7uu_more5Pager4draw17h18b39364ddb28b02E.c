fn uu_more::Pager::draw(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x158], Other Possible Types: struct16, String
    let v1: i64;  // [sp-0x150]
    let v2: i64;  // [sp-0x148]
    let v3: Arguments;  // [sp-0x140], Other Possible Types: i64
    let v4: i64;  // [sp-0x138]
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: i64;  // [sp-0x118]
    let v9: i64;  // [sp-0x110]
    let v10: i128;  // [bp-0x108], Other Possible Types: Argument
    let v11: i64;  // [sp-0xf8]
    let v12: i64;  // [sp-0xe8], Other Possible Types: Argument, String, struct40
    let v13: i64;  // [sp-0xe0], Other Possible Types: Argument
    let v14: i64;  // [sp-0xd8]
    let v15: i64;  // [sp-0xd0]
    let v16: i64;  // [sp-0xb8]
    let v17: i32;  // [sp-0x9c]
    let v18: i192;  // [bp-0x98]
    let v19: i64;  // [sp-0x80]
    let v20: i192;  // [bp-0x78]
    let v21: i192;  // [sp-0x60], Other Possible Types: String
    let v22: String;  // [sp-0x48], Other Possible Types: i192
    let v24: i64;  // rax
    let v25: i64;  // rsi
    let v26: i64;  // rdx
    let v27: i64;  // rcx
    let v28: i64;  // r14
    let v29: i64;  // r12
    let v30: i64;  // rax
    let v31: i64;  // rcx
    let v32: i64;  // r15
    let v33: i64;  // rbp
    let v34: i64;  // 4096
    let v35: i64;  // rbx
    let v36: i8;  // r13b
    let v37: i64;  // r13
    let v38: i64;  // r12
    let v39: i64;  // r15
    let v40: i64;  // r14
    let v41: i64;  // r12
    let v42: i64;  // rbp
    let v43: i64;  // cc_ndep
    let v44: i64;  // cc_dep2
    let v45: i64;  // cc_dep2
    let v46: i64;  // rbp
    let v47: i64;  // cc_dep2
    let v49: i64;  // rbp
    let v51: i64;  // cc_ndep
    let v52: i64;  // rax
    let v53: i64;  // rax
    let v54: i64;  // r14
    let v55: i64;  // xmm0lq
    let v56: i64;  // rax
    let v58: i64;  // rcx
    let v59: i64;  // rax
    let v60: i256;  // ymm0
    let v63: i64;  // rax
    let v65: i64;  // rdx
    let v66: i64;  // rax

    v24 = <std::io::stdio::Stdout as std::io::Write>::write_all(a1, &anon.d58bd02a723bd021606085005bc52729.42.llvm.16558445346262642515, 4, a3);
    if v24 {
        v3 = v24;
        core::result::unwrap_failed(); /* do not return */
    }
    v24 = <std::io::stdio::Stdout as std::io::Write>::flush(a1, v25, v26, v27);
    if !v24 {
        *((a0 + 56) as &i64) = 0;
        v0 = 0;
        v1 = &g_8;
        v2 = 0;
        v28 = *((a0 + 64) as &i16);
        if v28 {
            v29 = *((a0 + &g_8 as &u8) as &i64);
            v30 = *((a0 + 16) as &i64);
            v31 = v29 + v30 * 24;
            v32 = *((a0 + 24) as &i64);
            if vvar_824 {
                if v32 {
                    if v30 <= v32 {
                        goto LABEL_4a3918;
                    }
                    v29 += v32 * 24;
                } else if !v30 {
                    goto LABEL_4a3918;
                }
                v16 = v31;
                v35 = *((v29 + 16) as &i64);
                v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                *(v1 as &i64) = v29;
                v2 = 1;
                if v28 == 1 {
                    goto LABEL_4a38f9;
                }
                v36 = !v35;
                v37 = a0 | -0x100 | v36;
                v38 = v29 + 24;
                v33 = 1;
                v9 = 0;
                while (v38 != v16) {
                    if *((v38 + 16) as &i64) {
                        v37 = ((v36 & 1) ? 0 : v36);
                        v44 = v0;
                        if v33 == v0 {
                            v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        }
                        *((v1 + v33 * &g_8) as &i64) = v38;
                        v43 = v33 < v44;
                        v33 += 1;
                        v2 = v33;
                    } else if (v36 & 1) {
                        v9 += 1;
                        *((a0 + 56) as &i64) = v9;
                        v43 = amd64g_calculate_rflags_c(17, (v36 & 1) as u8 as u64, 0, v43);
                        v32 += 1;
                        *((a0 + 24) as &i64) = v32;
                    } else {
                        v45 = v0;
                        if v33 == v0 {
                            v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        }
                        *((v1 + v33 * &g_8) as &i64) = v38;
                        v43 = v33 < v45;
                        v33 += 1;
                        v2 = v33;
                        v37 = v37 | -0x100 | 1;
                    }
                    v38 += 24;
                    if v33 >= v28 {
                        goto LABEL_4a3f09;
                    }
                }
            }
            if !v32 {
                if !v30 {
                    goto LABEL_4a3918;
                }
                goto LABEL_4a38d7;
            }
            if v30 <= v32 {
LABEL_4a3918:
                v33 = 0;
                goto LABEL_4a396b;
            }
            v29 += v32 * 24;
LABEL_4a38d7:
            v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
            *(v1 as &i64) = v29;
            v2 = 1;
            if v28 != 1 {
                v41 = v29 + 24;
                v42 = 1;
            } else {
LABEL_4a38f9:
                v19 = v28;
                v9 = v0;
                v39 = v1;
                v40 = v39 + &g_8 as &u8;
                goto LABEL_4a3996;
            }
            loop {
                if v41 == v31 {
LABEL_4a396b:
                    *((v34 + 24) as &i64) = *((v34 + 48) as &i64);
                    goto LABEL_4a3f09;
                } else {
                    v47 = v0;
                    if v33 == v0 {
                        v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                    }
                    *((v1 + v33 * &g_8) as &i64) = v41;
                    v43 = v33 < v47;
                    v42 = v33 + 1;
                    v2 = v42;
                    v41 += 24;
                    if v28 == v2 {
LABEL_4a3f09:
                        v49 = v46;
                        v39 = v1;
                        if !v49 {
                            break;
                        }
                        v9 = v0;
                        v19 = v28;
                        v40 = v39 + v49 * &g_8;
LABEL_4a3996:
                        v16 = v39;
                        do {
                            v21 = *(v39 as &i64);
                            v10 = Argument {
                                value: &v21
                                formatter: <&T as core::fmt::Display>::fmt
                            };
                            v3 = Arguments {
                                pieces: ["\r", "\n"]
                                args: [&v10]
                                fmt: None
                            };
                            v12 = alloc::fmt::format::format_inner(&v3);
                            v52 = <std::io::stdio::Stdout as std::io::Write>::write_all(a1, v13, v14, v27);
                            if v52 {
                                v3 = v52;
                                core::result::unwrap_failed(); /* do not return */
                            }
                            v39 += &g_8 as &u8;
                        } while (v39 != v40);
                        break;
                    }
                }
            }
        }
        v53 = *((a0 + 48) as &i64);
        v54 = v28 + *((a0 + 24) as &i64);
        if !(amd64g_calculate_condition(3, 4, v28, *((a0 + 24) as &i64), v51) as char) {
            v54 = -1;
        }
        if v53 > v54 {
            round(v55);
            s_158 =L Conv(256->16, (((((((((((((((vvar_522{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>)))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>)) DivV ((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>)) DivV ((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>))) * 0x4059000000000000<128>))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | 0x40efffe000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(256->128, (((((((((((((vvar_522{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>)))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>)) DivV ((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>)) DivV ((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>))) * 0x4059000000000000<128>))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | 0x40efffe000000000<256>)) MinV (0x0<128> MaxV ((((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_216{reg 24})) - 0x45300000000000004330000000000000<128>)) DivV ((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_493{reg 16})) - 0x45300000000000004330000000000000<128>))) * 0x4059000000000000<128>))))))<2>
            v12 = &v0;
            v13 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
            v3 = &g_517f48;
            v7 = 0;
        } else {
            v56 = *((a0 + 32) as &i64);
            v12 = v58;
            v13 = v59;
            v0 = &v12;
            v1 = <&T as core::fmt::Display>::fmt;
            v3 = Arguments {
                pieces: ["Next file: ", "--More--("]
                args: &[&Argument] {
                    ptr: v62
                    len: 1
                }
                fmt: None
            };
            v4 = 1;
        }
        v22 = alloc::fmt::format::format_inner(&v3);
        v20 = v22;
        v12 = Argument {
            value: &v20
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v3 = Arguments {
            pieces: ["--More--(", ")"]
            args: [&v12]
            fmt: None
        };
        v21 = alloc::fmt::format::format_inner(&v3);
        v18 = v21;
        if *((a0 + 66) as &i8) {
            if a2 == 0x110000 {
                v12 = &v18;
                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = Arguments {
                    pieces: [&g_517fa8, "[Press space to continue, 'q' to quit.]"]
                    args: [&v12]
                    fmt: None
                };
                v0 = alloc::fmt::format::format_inner(&v3);
            } else {
                v17 = a2;
                v12 = Argument {
                    value: &v18
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v13 = Argument {
                    value: <alloc::string::String as core::fmt::Display>::fmt
                    formatter: &v17
                };
                v15 = <char as core::fmt::Display>::fmt;
                v3 = Arguments {
                    pieces: [&g_517fc8, " [Unknown key: '", "'. Press 'h' for instructions. (unimplemented)]"]
                    args: [&v12, &v13]
                    fmt: None
                };
                v0 = alloc::fmt::format::format_inner(&v3);
            }
LABEL_4a3de3:
            v10 = v0;
            v11 = v2;
        } else if a2 == 0x110000 {
            v11 = *((&v21 as &char + 16) as &i64);
            v10 = v21;
        } else {
            v12 = Argument {
                value: &v18
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v13 = Argument {
                value: <alloc::string::String as core::fmt::Display>::fmt
                formatter: "\x07"
            };
            v15 = <&T as core::fmt::Display>::fmt;
            v3 = Arguments {
                pieces: [&g_419990, &g_4199a0]
                args: [&v12, &v13]
                fmt: None
            };
            v0 = alloc::fmt::format::format_inner(&v3);
            goto LABEL_4a3de3;
        }
        v3 = &g_41f1e9;
        v4 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
        v5 = &v10;
        v6 = <alloc::string::String as core::fmt::Display>::fmt;
        v7 = &g_41f1ea;
        v8 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
        v12 = struct40 {
            field_0: "\r"
            field_8: 3
            field_16: &v3
            field_24: 3
            field_32: 0
        };
        v63 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(a1, &v12, v26);
        if v63 {
            v12 = v63;
            core::result::unwrap_failed(); /* do not return */
        }
        v66 = <std::io::stdio::Stdout as std::io::Write>::flush(a1, v20, v65, v27);
        if v66 {
            v3 = v66;
            core::result::unwrap_failed(); /* do not return */
        }
        return v66;
    }
}
