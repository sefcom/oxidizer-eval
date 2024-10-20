fn uu_touch::touch() -> u32 {
    let v0: i8;  // [sp-0x1f1]
    let v1: i32;  // [sp-0x1f0]
    let v2: i8;  // [sp-0x1ea]
    let v3: i8;  // [sp-0x1e9]
    let v4: i64;  // [sp-0x1e8]
    let v5: i64;  // [bp-0x1e0], Other Possible Types: struct8
    let v6: i32;  // [bp-0x1d8]
    let v7: i64;  // [bp-0x1d0]
    let v8: i64;  // [sp-0x1c0]
    let v9: i64;  // [sp-0x1b8]
    let v10: i8;  // [bp-0x1a8]
    let v11: i8;  // [bp-0x1a0]
    let v12: i64;  // [sp-0x198]
    let v13: i64;  // [sp-0x188]
    let v14: i32;  // [sp-0x170]
    let v15: i32;  // [sp-0x16c]
    let v16: i64;  // [sp-0x168]
    let v17: i64;  // [sp-0x160]
    let v18: i64;  // [bp-0x158]
    let v19: i64;  // [sp-0x150]
    let v20: i64;  // [sp-0x148]
    let v21: i64;  // [sp-0x130], Other Possible Types: Enum, struct16
    let v22: i192;  // [sp-0x128], Other Possible Types: struct24
    let v23: i32;  // [bp-0x120]
    let v24: i8;  // [bp-0x110]
    let v25: i64;  // [sp-0x108]
    let v26: i64;  // [sp-0x100]
    let v27: i8;  // [sp-0xf8]
    let v28: i64;  // [sp-0x80]
    let v29: i64;  // [sp-0x78]
    let v30: i64;  // [sp-0x70]
    let v31: struct16;  // [sp-0x68], Other Possible Types: i64
    let v32: i64;  // [sp-0x58], Other Possible Types: struct16
    let v34: i64;  // rcx
    let v35: i64;  // rbp
    let v36: i64;  // rcx
    let v37: i64;  // cc_ndep
    let v38: i64;  // r13
    let v39: i64;  // r12
    let v40: i64;  // rsi
    let v41: i32;  // edx
    let v42: i64;  // rsi
    let v43: i32;  // eax
    let v44: i64;  // rsi
    let v45: i64;  // rdx
    let v46: i64;  // rcx
    let v47: i64;  // rbx
    let v48: i64;  // rcx
    let v49: i32;  // ecx
    let v51: i64;  // r14
    let v53: i64;  // cc_ndep
    let v54: i64;  // r12
    let v55: i64;  // rsi
    let v56: i64;  // rdx
    let v57: i64;  // rdx
    let v58: i32;  // ebx
    let v59: i64;  // rdx
    let v60: i64;  // rax
    let v61: i64;  // rcx
    let v62: i64;  // rdi
    let v64: i64;  // rdi
    let v65: i64;  // rax
    let v67: i64;  // r13
    let v68: i64;  // r8
    let v69: i64;  // r9
    let v70: i64;  // rdi
    let v71: i64;  // rax
    let v72: i64;  // rcx
    let v73: i64;  // rsi
    let v74: i64;  // rdx
    let v75: i64;  // rax
    let v76: i64;  // rcx
    let v77: i64;  // rdi
    let v79: i128;  // xmm0
    let v80: i64;  // rdi
    let v81: i64;  // rax
    let v82: i64;  // rcx
    let v83: i64;  // rsi
    let v84: i64;  // rdi
    let v85: i64;  // rax
    let v86: i64;  // rcx
    let v87: i32;  // esi
    let v88: i64;  // rbx
    let v89: i128;  // xmm0
    let v90: i64;  // rdi
    let v91: i64;  // rax
    let v92: i64;  // r14
    let v94: i64;  // rbp
    let v95: i64;  // r15
    let v96: i256;  // ymm0
    let v97: i64;  // rbx
    let v98: i64;  // r13
    let v99: i64;  // r12
    let v100: i64;  // rcx
    let v102: i64;  // r12
    let v103: i128;  // xmm0
    let v104: i64;  // rax
    let v105: i64;  // rax
    let v107: i32;  // ecx
    let v108: i64;  // rdx
    let v109: i32;  // esi
    let v110: i64;  // rax
    let v112: i64;  // rcx
    let v114: i64;  // rdi
    let v116: i64;  // rdx
    let v118: i64;  // rdi
    let v120: i64;  // rbx
    let v121: i64;  // rdi
    let v122: i64;  // rax

    v35 = *((v34 + 24) as &i64);
    v36 = v35 + 9223372036854775809;
    if v35 >= 9223372036854775810 {
        v36 = 0;
    }
    if v36 {
        if v36 == 1 {
            v40 = *((v34 + 32) as &i64);
            v41 = *((v34 + 40) as &i32);
        } else {
            v21 = chrono::offset::local::Local::now(v42, 0x8000000000000000);
            v43 = v21;
            v44 = v43 >> 13;
            v45 = v44 - 1 & 4294967295;
            v46 = 0;
            if v44 <= 0 {
                v48 = (1 - v44 & 4294967295) * 1374389535;
                v37 = amd64g_calculate_rflags_c(36, v48 >> 39, v48 >> 38, v37);
                v49 = (v48 >> 39) + 1;
                v45 = v45 + v49 * 400 & 4294967295;
                v46 = v49 * -146097;
            }
            v41 = *((&v21 as &char + 8) as &i32);
            v40 = -62135683200 + *((&v21 as &char + 4) as &i32) + (((((v43 >> 4 & 511) + v46 & 4294967295) - (((v45 & 4294967295) * 1374389535 >> 37) + ((v45 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + (v45 * 1461 >> 2) & 4294967295) + ((((v45 & 4294967295) * 1374389535 >> 37) + ((v45 & 4294967295) * 1374389535 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) & 4294967295 & 4294967295) * 86400;
        }
        v8 = v40;
        v1 = v41;
        v8 = v8;
    } else {
        v38 = *((v34 + 32) as &i64);
        v39 = *((v34 + 40) as &i64);
        v21 = uu_touch::stat(v38, v39, -0x100 | !*((v34 + 49) as &i8));
        if v21 {
            v47 = v22;
            memcpy(v51, v38, v39);
            v65 = v64;
            *(v65 as &i64) = 9223372036854775810;
            *((v65 + 8) as &i64) = v39;
            *((v65 + 16) as &i32) = v51;
            *((v65 + 20) as &i32) = v51 >> 32;
            *((v65 + 24) as &i64) = v39;
            *((v65 + 32) as &i32) = v47;
            *((v65 + 36) as &i32) = v47 >> 32;
            return;
        }
        v41 = *((&v21 as &char + 16) as &i32);
        v8 = v21;
        v1 = v24;
    }
    v8 = v8;
    v54 = *(v34 as &i64);
    if v54 == 0x8000000000000000 {
        v1 = v1;
        if !(!v56) {
            goto LABEL_53e43c;
        }
    } else {
        v11 = v57;
        v58 = v41;
        v59 = (v8 * 1749024623285053783 >> 77) + (v8 * 1749024623285053783 >> 127);
        v60 = v59 * 86400;
        v61 = v8 - v60;
        v62 = v61 >> 63;
        v12 = v8;
        if !(v62 + v59 - 2146764485 >= -0x100000000) || !(chrono::naive::date::NaiveDate::from_num_days_from_ce_opt(v62 + v59 + 719163) as i32) || !(v58 <= 1999999999) || !(v58 < 0x3b9aca00) && !((amd64g_calculate_condition(9, 20, v61, 0, v53) as char ? v61 : v8 + -(v60) + 86400) - (amd64g_calculate_condition(9, 20, v61, 0, v53) as char ? v61 : v8 + -(v60) + 86400) / 60 * 60 == 59) || !((v5 = struct8 {
    field_0: v66
    field_4: v63
}, v6 = v58, <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime(1, &v5), v31 as i32)) {
            v71 = v70;
            *(v71 as &i64) = 9223372036854775809;
            *((v71 + 8) as &i64) = v12;
            *((v71 + 16) as &i32) = v58;
            return;
        }
        v31 = struct16 {
            field_0: v34
            field_8: v6
            field_12: v66
        };
        v67 = *((v34 + 8) as &i64);
        v4 = *((v34 + 16) as &i64);
        v21 = uu_touch::parse_date(&v31, v67, *((v34 + 16) as &i64), v68, v69);
        v72 = v21;
        v58 = *((&v21 as &char + 16) as &i32);
        if v72 != 9223372036854775812 {
            v79 = *((&v21 as &char + 20) as &i128);
            v81 = v80;
            *((v81 + 32) as &i8) = v24;
            *((v81 + 20) as &i128) = v79;
            *(v81 as &i64) = v72;
            *((v81 + 8) as &i64) = v12;
            *((v81 + 16) as &i32) = v58;
            return;
        }
        v10 = 9223372036854775812;
        v9 = v67;
        v12 = v22;
        v73 = v8;
        v74 = (v73 * 1749024623285053783 >> 77) + (v73 * 1749024623285053783 >> 127);
        v75 = v74 * 86400;
        v76 = v73 - v75;
        v77 = v76 >> 63;
        if v77 + v74 - 2146764485 < -0x100000000 {
            v85 = v84;
            *(v85 as &i64) = 9223372036854775809;
            *((v85 + 8) as &i64) = v83;
            *((v85 + 16) as &i32) = v1;
            return;
        }
        v83 = v8;
        if !chrono::naive::date::NaiveDate::from_num_days_from_ce_opt(v77 + v74 + 719163) as i32 {
            vvar_1346{reg 16} = v84;
            *(v85 as &i64) = 9223372036854775809;
            *((v85 + 8) as &i64) = v83;
            *((v85 + 16) as &i32) = v1;
            return;
        }
        v83 = v8;
        if v1 > 1999999999 {
            vvar_1350{reg 16} = v84;
            *(v85 as &i64) = 9223372036854775809;
            *((v85 + 8) as &i64) = v83;
            *((v85 + 16) as &i32) = v1;
            return;
        }
        if v1 >= 0x3b9aca00 {
            v8 = v8;
            if (v82 & 4294967295) - (v82 & 4294967295) / 60 * 60 != 59 {
                vvar_1354{reg 16} = v84;
                *(v85 as &i64) = 9223372036854775809;
                *((v85 + 8) as &i64) = v83;
                *((v85 + 16) as &i32) = v1;
                return;
            }
        }
        v5 = struct8 {
            field_0: v66
            field_4: v82 as i32
        };
        v6 = v1;
        <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime(1, &v5);
        v8 = v8;
        if !v32 {
            vvar_1358{reg 16} = v84;
            *(v85 as &i64) = 9223372036854775809;
            *((v85 + 8) as &i64) = v83;
            *((v85 + 16) as &i32) = v1;
            return;
        }
        v32 = struct16 {
            field_0: v34
            field_8: v6
            field_12: v66
        };
        v21 = uu_touch::parse_date(&v32, v9, v4, v68, v69);
        v86 = v21;
        v87 = *((&v21 as &char + 16) as &i32);
        if v86 != v10 {
            v89 = *((&v21 as &char + 20) as &i128);
            v91 = v90;
            *((v91 + 32) as &i8) = v24;
            *((v91 + 20) as &i128) = v89;
            *(v91 as &i64) = v86;
            *((v91 + 8) as &i64) = v8;
            *((v91 + 16) as &i32) = v1;
            return;
        }
        v1 = v87;
        v8 = v22;
        v88 = v11;
        v1 = v1;
        v55 = v12;
        if v88 {
LABEL_53e43c:
            v3 = *((v34 + 48) as &i8);
            v10 = *((v34 + 49) as &i8);
            v0 = *((v34 + 50) as &i8);
            v2 = !(v35 ^ 9223372036854775809) && !(v54 ^ 0x8000000000000000);
            v15 = *((v34 + 51) as &i8);
            v92 = v42 + 16;
            v94 = 0;
            v12 = v55;
            v14 = v58;
            do {
                v95 = v88 * 24;
                v97 = *((v92 - 16) as &i64);
                if v97 == 0x8000000000000000 {
                    v22 = std::sys::os_str::bytes::Slice::to_owned(&g_46b293, 11);
                    v98 = *((&v22 as &char + 8) as &i64);
                    v100 = *((&v22 as &char + 16) as &i64);
                    v9 = v22;
                    v11 = v9 == 0x8000000000000000;
                    v13 = v98;
                    v28 = v100;
                    v30 = v98 + 8;
                    v29 = v98 + 16;
                    if v9 != 0x8000000000000000 {
                        v102 = v28;
                    } else {
                        v98 = *(v30 as &i64);
                    }
                    v99 = v102;
                    v104 = __rust_alloc(1, 1);
                    *(v104 as &i8) = 45;
                    v18 = 1;
                    v19 = v104;
                    v20 = 1;
                    if !(!v10) {
                        goto LABEL_53e690;
                    }
                    goto LABEL_53e62a;
                } else {
                    v98 = *((v92 - 8) as &i64);
                    v99 = *(v92 as &i64);
                    v16 = v98;
                    v17 = v99;
                    v5 = 0;
                    v6 = 1;
                    v7 = 0;
                    v26 = 32;
                    v27 = 3;
                    v21 = 0;
                    v23 = 0;
                    v24 = &v5;
                    v25 = &g_691a38;
                    if <std::path::Display as core::fmt::Display>::fmt(&v16, &v21) as i8 {
                        core::result::unwrap_failed(); /* do not return */
                    }
                    v13 = v92 - 16;
                    v30 = v92 - 8;
                    v103 = v5;
                    vvar_134{reg 224} = ((vvar_134{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_749{reg 224}))
                    v18 = v103;
                    v20 = v7;
                    v11 = 1;
                    v29 = v92;
                    v9 = 0x8000000000000000;
                    if !v10 {
LABEL_53e62a:
                        v21 = std::sys::pal::unix::fs::stat(v98, v99);
                        goto LABEL_53e6a4;
                    } else {
LABEL_53e690:
                        v21 = std::sys::pal::unix::fs::lstat(v98, v99);
LABEL_53e6a4:
                        v4 = v22;
                        if v21 == 2 {
                            goto *((4631676 + ((stack_base)[488] as i64 & 3) * 4) as &i32) + 4631676;
                        }
                        v1 = v1;
                        v12 = v12;
                        v14 = v14;
                        if v15 != 2 {
                            if v15 == 1 {
                                v21 = uu_touch::stat(v98, v99, -0x100 | !v10);
                                if !v21 {
                                    v1 = v1;
                                    v12 = v22;
                                } else {
                                    v105 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v22, v98, v99);
                                    goto LABEL_53ec69;
                                }
                            } else {
                                v21 = uu_touch::stat(v98, v99, -0x100 | !v10);
                                if v21 {
                                    v105 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v22, v98, v99);
                                    goto LABEL_53ec69;
                                }
                                v107 = *((&v21 as &char + 32) as &i32);
                                v108 = v12;
                                v109 = v14;
                                if !v10 {
                                    goto LABEL_53ec0e;
                                }
                                goto LABEL_53eb90;
                            }
                        }
                        v109 = v14;
                        v108 = v12;
                        v107 = v1;
                        if !v10 {
                            goto LABEL_53ec0e;
                        }
LABEL_53eb90:
                        if v97 != 0x8000000000000000 {
                            v6 = v108;
                            v7 = v109;
                            v5 = 1;
                            v23 = v107;
                            *(&v21.field_0 as &struct16) = struct16 {
                                field_0: 1
                                field_8: v66
                            };
                            v110 = filetime::imp::linux::set_times(v98, v99, &v5, &v21, 1, v69);
                            v21 = v21;
                            v22 = v22;
                            goto LABEL_53ec56;
                        }
LABEL_53ec0e:
                        v6 = v108;
                        v7 = v109;
                        v5 = 1;
                        v23 = v107;
                        *(&v21.field_0 as &struct16) = struct16 {
                            field_0: 1
                            field_8: v66
                        };
                        v110 = filetime::imp::linux::set_times(v98, v99, &v5, &v21, 0, v69);
                        v21 = v21;
                        v22 = v22;
LABEL_53ec56:
                        v22 = v22;
                        v21 = v21;
                        if v110 {
                            v105 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v110, v98, v99);
                        } else {
                            v105 = 0;
                            continue;
                        }
LABEL_53ec69:
                    }
                }
                if !v105 {
                    v11 |= !v9;
                } else if v11 {
                    v116 = *(v29 as &i64);
                    v13 = v118;
                    v120 = v116;
                    memcpy(v13, *(v30 as &i64), v120);
                    v112 = v120;
                    v28 = v112;
                    v122 = v121;
                    *(v122 as &i64) = v112;
                    *((v122 + 8) as &i64) = v13;
                    *((v122 + 16) as &i64) = v28;
                    *((v122 + 24) as &i64) = v105;
                    *((v122 + 32) as &&i64) = &anon.a8009f0f96d850c1c46a2cf3287456a4.4.llvm.17503802422331354604;
                    *((v122 + 40) as &i64) = v94;
                    return;
                } else {
                    v112 = v9;
                    if v112 != 9223372036854775812 {
                        vvar_1342{reg 16} = v121;
                        *(v122 as &i64) = v112;
                        *((v122 + 8) as &i64) = v13;
                        *((v122 + 16) as &i64) = v28;
                        *((v122 + 24) as &i64) = v105;
                        *((v122 + 32) as &&i64) = &anon.a8009f0f96d850c1c46a2cf3287456a4.4.llvm.17503802422331354604;
                        *((v122 + 40) as &i64) = v94;
                        return;
                    }
                }
                v92 += 24;
                v94 += 1;
            } while (v95 != 24);
        }
    }
    *(v114 as &i64) = 9223372036854775812;
    return;
}
