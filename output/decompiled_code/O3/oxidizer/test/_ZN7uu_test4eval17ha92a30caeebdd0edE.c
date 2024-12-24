fn uu_test::eval(a0: void*, a1: void*) -> u64 {
    let v0: i64;  // [sp-0x118], Other Possible Types: Option<Result<struct33, struct9>>, Result<struct16, struct10>, struct25
    let v1: i64;  // [sp-0x110]
    let v2: i64;  // [sp-0x108]
    let v3: i64;  // [sp-0xf8]
    let v4: i128;  // [sp-0xe8], Other Possible Types: struct24
    let v5: i64;  // [sp-0xd8]
    let v6: i128;  // [bp-0xc8], Other Possible Types: struct24, struct25
    let v7: i128;  // [bp-0xb8]
    let v8: i64;  // [sp-0xa8]
    let v9: i128;  // [sp-0x98]
    let v10: i64;  // [sp-0x88]
    let v11: i128;  // [sp-0x78]
    let v12: i128;  // [sp-0x68]
    let v13: i64;  // [sp-0x58]
    let v14: i128;  // [sp-0x48]
    let v15: i64;  // [sp-0x38]
    let v17: i64;  // rcx
    let v18: i64;  // rdx
    let v19: i64;  // rax
    let v20: i64;  // rsi
    let v21: i64;  // rsi
    let v22: i64;  // r15
    let v23: i64;  // rsi
    let v24: i64;  // rcx
    let v25: i8;  // al
    let v26: i64;  // rdx
    let v27: i64;  // rdx
    let v28: i64;  // rdx
    let v29: i128;  // xmm0
    let v30: i64;  // rcx
    let v31: i64;  // rcx
    let v32: i64;  // rdx
    let v33: i128;  // xmm1
    let v34: i64;  // rax
    let v35: i64;  // rdx
    let v36: i64;  // rsi
    let v37: i64;  // rdi
    let v38: i128;  // xmm1
    let v39: i64;  // rdx
    let v40: i64;  // rsi
    let v41: i64;  // rdi
    let v42: i128;  // xmm1
    let v43: i64;  // rcx
    let v44: i64;  // rcx
    let v45: i128;  // xmm0
    let v46: i64;  // rax
    let v47: i64;  // r15
    let v48: i64;  // r12
    let v49: i64;  // rax
    let v50: i64;  // rcx
    let v51: i64;  // rax
    let v52: i64;  // rdx
    let v53: i128;  // xmm1
    let v55: i64;  // rax
    let v56: i64;  // rbp
    let v57: i64;  // rcx
    let v58: i64;  // rcx
    let v59: i64;  // rdx
    let v60: i128;  // xmm1
    let v61: i64;  // rcx
    let v62: i64;  // rcx
    let v63: i64;  // rdx
    let v64: i128;  // xmm1
    let v65: i64;  // rdx
    let v66: i32;  // ecx
    let v67: i64;  // rdx
    let v68: i64;  // rdx
    let v69: i64;  // rax
    let v70: i64;  // rax
    let v71: i8;  // r14b
    let v72: i64;  // rcx
    let v73: i8;  // al
    let v74: i64;  // rcx
    let v75: i8;  // al
    let v77: i32;  // edx
    let v79: i64;  // rsi
    let v81: i8;  // dl
    let v82: i8;  // cl
    let v83: i64;  // rdx
    let v84: i64;  // rsi
    let v85: i64;  // rcx
    let v86: i8;  // al

    v17 = *((a1 + 16) as &i64);
    if !v17 {
        goto LABEL_4ac1d7;
    }
    v18 = v17 - 1;
    *((a1 + 16) as &i64) = v18;
    v19 = *((a1 + 8) as &i64);
    v20 = v18 * 5;
    v11 = *((v19 + v20 * 8) as &i128);
    v13 = *((v19 + v20 * 8 + 32) as &i64);
    v12 = *((v19 + v20 * 8 + 16) as &i128);
    v21 = v11 - 1;
    switch (v21) {
    case 0:
        v0 = uu_test::eval(a1);
        v24 = v0;
        v25 = *((&v0 as &char + 8) as &i8);
        if v24 == 7 {
            return struct8 {
                field_0: 0
            };
        }
        return struct8 {
            field_0: 0
        };
    case 1:
        v4 = *((&v11 as &char + 8) as &i128);
        v5 = *((&v12 as &char + 8) as &i64);
        v22 = *((&v4 as &char + 8) as &i64);
        if !<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(v22, v5, &g_41d12a) as i8 {
            if !((<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(v22, v5, &g_41d12c) as i8 & *((a1 + 16) as &i64) < 2) == 1) {
                goto LABEL_4ac54d;
            }
LABEL_4ac508:
            v0 = struct25 {
                field_0: 1
                field_8: v54
                field_24: 1
            };
            v6 = <T as alloc::string::ToString>::to_string(&v0);
            *((a0 + 24) as &struct24) = v6.field_16;
            *((a0 + 8) as &i192) = v6;
            *(a0 as &i64) = 6;
        } else {
            if *((a1 + 16) as &i64) <= 1 {
                goto LABEL_4ac508;
            }
LABEL_4ac54d:
            v0 = uu_test::eval(a1);
            v55 = v0;
            v56 = *((&v0 as &char + 8) as &i8);
            if v55 != 7 {
                *((a0 + 24) as &i64) = *((&v0 as &char + 24) as &i64);
                *((a0 + 9) as &i128) = *((&v0 as &char + 9) as &i128);
                *(a0 as &i64) = v55;
                *((a0 + 8) as &i8) = v56;
            } else {
                v0 = uu_test::eval(a1);
                v70 = v0;
                v71 = *((&v0 as &char + 8) as &i8);
                if v70 != 7 {
                    *((a0 + 24) as &i64) = *((&v0 as &char + 24) as &i64);
                    *((a0 + 9) as &i128) = *((&v0 as &char + 9) as &i128);
                    *(a0 as &i64) = v70;
                    *((a0 + 8) as &i8) = v71;
                } else {
                    v77 = v56;
                    if v71 {
                        v79 = 1;
                    } else {
                        v79 = v77;
                    }
                    v82 = (!<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((&v4 as &char + 8) as &i64), v5, &g_41d12a) as i8 ? v79 & 4294967295 : (v71 ? v77 : 0));
                    *((a0 + 8) as &i8) = v82;
                    *(a0 as &i64) = 7;
                }
            }
        }
LABEL_4acb40:
        break;
    case 2:
        v2 = *((&v12 as &char + 8) as &i64);
        v0 = *((&v11 as &char + 8) as &i128);
        *((a0 + 8) as &u8) = v2;
        *(a0 as &i64) = 7;
        break;
    case 3:
        v23 = *((&v11 as &char + 8) as &i64);
        if !v23 {
            v5 = v13;
            v4 = v12;
            if !v18 {
                v6 = 7;
                goto LABEL_4acac1;
            } else {
                v26 = v17;
                v27 = v26 - 2;
                *((a1 + 16) as &i64) = v27;
                v28 = v27 * 5;
                v29 = *((v19 + v28 * 8) as &i128);
                v8 = *((v19 + v28 * 8 + 32) as &i64);
                v7 = *((v19 + v28 * 8 + 16) as &i128);
                v6 = v29;
                if v26 != 2 {
                    v43 = v17 - 3;
                    *((a1 + 16) as &i64) = v43;
                    v44 = v43 * 5;
                    v45 = *((v19 + v44 * 8) as &i128);
                    v3 = *((v19 + v44 * 8 + 32) as &i64);
                    v2 = *((v19 + v44 * 8 + 16) as &i128);
                    v0 = v45;
                } else {
LABEL_4acac1:
                    v0 = 7;
                }
            }
            v65 = v0;
            v66 = v6;
            if !<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((&v4 as &char + 8) as &i64), v5, &g_41d12e) as i8 {
                if v65 != 7 && v66 != 7 {
                    <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(&v0, &v6);
                }
            } else {
                if v65 != 7 && v66 != 7 {
                    <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(&v0, &v6);
                }
            }
            *((a0 + 8) as &u8) = v66 == 7 & v65 == 7;
            *(a0 as &i64) = 7;
LABEL_4acb8e:
            v81 = v83 | -0x100 | 1;
            goto LABEL_4acb90;
        } else if v23 != 1 {
            v10 = v13;
            v9 = v12;
            if !v18 {
                v0 = 7;
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v39 = v17 - 2;
            *((a1 + 16) as &i64) = v39;
            v40 = v39 * 5;
            v41 = *((v19 + v40 * 8 + 32) as &i64);
            v42 = *((v19 + v40 * 8 + 16) as &i128);
            v0 = *((v19 + v40 * 8) as &i128);
            v3 = v41;
            v2 = v42;
            if v0 != 3 {
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v5 = *((&v2 as &char + 8) as &i64);
            v4 = *((&v0 as &char + 8) as &i128);
            if !v39 {
                v0 = 7;
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v61 = v17 - 3;
            *((a1 + 16) as &i64) = v61;
            v62 = v61 * 5;
            v63 = *((v19 + v62 * 8 + 32) as &i64);
            v64 = *((v19 + v62 * 8 + 16) as &i128);
            v0 = *((v19 + v62 * 8) as &i128);
            v3 = v63;
            v2 = v64;
            if v0 != 3 {
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v68 = *((&v2 as &char + 8) as &i64);
            v7 = *((&v2 as &char + 8) as &i64);
            v6 = *((&v0 as &char + 8) as &i128);
            v0 = uu_test::files(*((&v6 as &char + 8) as &i64), v68, *((&v4 as &char + 8) as &i64), v5, *((&v9 as &char + 8) as &i64), v10);
            v74 = v0;
            v75 = *((&v0 as &char + 8) as &i8);
            if v74 == 7 {
                *((a0 + 8) as &i8) = v75;
                *(a0 as &i64) = 7;
                v81 = 0;
LABEL_4acb90:
                v84 = *((&v11 as &char + 8) as &i64);
                if v84 && v84 != 1 && !v81 {
                    return struct8 {
                        field_0: 0
                    };
                }
                break;
            } else {
                *((a0 + 24) as &i64) = *((&v2 as &char + 8) as &i64);
                *((a0 + 9) as &i128) = *((&v0 as &char + 9) as &i128);
                *(a0 as &i64) = v74;
                *((a0 + 8) as &i8) = v75;
                goto LABEL_4acaab;
            }
        } else {
            v10 = v13;
            v9 = v12;
            if !v18 {
                v0 = 7;
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v35 = v17 - 2;
            *((a1 + 16) as &i64) = v35;
            v36 = v35 * 5;
            v37 = *((v19 + v36 * 8 + 32) as &i64);
            v38 = *((v19 + v36 * 8 + 16) as &i128);
            v0 = *((v19 + v36 * 8) as &i128);
            v3 = v37;
            v2 = v38;
            if v0 != 3 {
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v5 = *((&v2 as &char + 8) as &i64);
            v4 = *((&v0 as &char + 8) as &i128);
            if !v35 {
                v0 = 7;
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v57 = v17 - 3;
            *((a1 + 16) as &i64) = v57;
            v58 = v57 * 5;
            v59 = *((v19 + v58 * 8 + 32) as &i64);
            v60 = *((v19 + v58 * 8 + 16) as &i128);
            v0 = *((v19 + v58 * 8) as &i128);
            v3 = v59;
            v2 = v60;
            if v0 != 3 {
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v67 = *((&v2 as &char + 8) as &i64);
            v7 = *((&v2 as &char + 8) as &i64);
            v6 = *((&v0 as &char + 8) as &i128);
            v0 = uu_test::integers(*((&v6 as &char + 8) as &i64), v67, *((&v4 as &char + 8) as &i64), v5, *((&v9 as &char + 8) as &i64), v10);
            v72 = v0;
            v73 = *((&v0 as &char + 8) as &i8);
            if v72 == 7 {
                *((a0 + 8) as &i8) = v73;
                *(a0 as &i64) = 7;
                goto LABEL_4acb8e;
            } else {
                *((a0 + 24) as &i64) = *((&v2 as &char + 8) as &i64);
                *((a0 + 9) as &i128) = *((&v0 as &char + 9) as &i128);
                *(a0 as &i64) = v72;
                *((a0 + 8) as &i8) = v73;
LABEL_4acaab:
                break;
            }
        }
    case 4:
        if !*((&v11 as &char + 8) as &i64) {
            v15 = v13;
            v14 = v12;
            if !v18 {
LABEL_4ac637:
                *((a0 + 8) as &i8) = 1;
                *(a0 as &i64) = 7;
                break;
            }
            v30 = v17 - 2;
            *((a1 + 16) as &i64) = v30;
            v31 = v30 * 5;
            v32 = *((v19 + v31 * 8 + 32) as &i64);
            v33 = *((v19 + v31 * 8 + 16) as &i128);
            v0 = *((v19 + v31 * 8) as &i128);
            v3 = v32;
            v2 = v33;
            v34 = v0;
            if v34 == 3 {
                v10 = *((&v2 as &char + 8) as &i64);
                v9 = *((&v0 as &char + 8) as &i128);
                goto LABEL_4acc25;
            }
            if v34 != 6 {
                if v34 == 7 {
                    goto LABEL_4ac637;
                }
                v6 = struct25 {
                    field_0: 1
                    field_8: *((&v14 as &char + 8) as &i128)
                    field_24: 1
                };
                v4 = <T as alloc::string::ToString>::to_string(&v6);
                *((a0 + 24) as &struct24) = v4.field_16;
                *((a0 + 8) as &i128) = v4;
                *(a0 as &i64) = 3;
                v69 = v0;
                break;
            } else {
                v6 = std::sys::os_str::bytes::Slice::to_owned(1, 0);
                v9 = v6;
LABEL_4acc25:
                *((a0 + 8) as &i32) = (<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((&v14 as &char + 8) as &i64), v15, &g_41d147) as i8 ? (-0x100 | !v10) & 4294967295 & 4294967295 : (-0x100 | v10) & 4294967295 & 4294967295);
                *(a0 as &i64) = 7;
                if !*((&v11 as &char + 8) as &i64) {
                    return struct8 {
                        field_0: 0
                    };
                }
                goto LABEL_4acc88;
            }
        } else {
            v4 = v12;
            v5 = v13;
            v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((&v4 as &char + 8) as &i64), v13);
            if v0 {
                core::option::unwrap_failed(); /* do not return */
            }
            v46 = *((a1 + 16) as &i64);
            if !v46 {
                v0 = 7;
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v47 = v1;
            v48 = v2;
            v49 = v46 - 1;
            *((a1 + 16) as &i64) = v49;
            v50 = *((a1 + 8) as &i64);
            v51 = v49 * 5;
            v52 = *((v50 + v51 * 8 + 32) as &i64);
            v53 = *((v50 + v51 * 8 + 16) as &i128);
            v0 = *((v50 + v51 * 8) as &i128);
            v3 = v52;
            v2 = v53;
            if v0 != 3 {
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v7 = *((&v2 as &char + 8) as &i64);
            v6 = *((&v0 as &char + 8) as &i128);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, "-b") as i8 {
                goto LABEL_4ac9ef;
            }
            if ... {
LABEL_4ac9ef:
                uu_test::path();
                goto LABEL_4aca01;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, "-t") as i8 {
                v0 = uu_test::isatty(*((&v6 as &char + 8) as &i64), v7);
                v85 = v0;
                v86 = *((&v0 as &char + 8) as &i8);
                if v85 != 7 {
                    *((a0 + 24) as &i64) = *((&v2 as &char + 8) as &i64);
                    *((a0 + 9) as &i128) = *((&v0 as &char + 9) as &i128);
                    *(a0 as &i64) = v85;
                    *((a0 + 8) as &i8) = v86;
                    goto LABEL_4acb40;
                } else {
LABEL_4aca01:
                    *((a0 + 8) as &u8) = v86;
                    *(a0 as &i64) = 7;
                    if *((&v11 as &char + 8) as &i64) {
                        return struct8 {
                            field_0: 0
                        };
                    }
                }
            } else {
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, "-u") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, "-w") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, "-x") as i8 {
                    uu_test::eval::panic_cold_explicit(); /* do not return */
                }
                goto LABEL_4ac9ef;
            }
LABEL_4acc88:
            break;
        }
    case 5: case 6:
LABEL_4ac1d7:
        return struct8 {
            field_0: 0
        };
    default:
        return struct8 {
            field_0: 0
        };
    }
    return struct8 {
        field_0: 0
    };
}
