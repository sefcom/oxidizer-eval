fn uu_ls::calculate_padding_collection(a0: &u64, a1: void*, a2: u32, a3: void*, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x146]
    let v1: i8;  // [sp-0x145]
    let v2: i8;  // [sp-0x144]
    let v3: i8;  // [sp-0x143]
    let v4: i8;  // [sp-0x142]
    let v5: i8;  // [sp-0x141]
    let v6: i64;  // [sp-0x140]
    let v7: i64;  // [sp-0x138], Other Possible Types: String, struct24
    let v8: i64;  // [sp-0x130]
    let v9: i64;  // [sp-0x128]
    let v10: i64;  // [bp-0x120]
    let v11: i64;  // [bp-0x118]
    let v12: i64;  // [bp-0x110]
    let v13: i64;  // [sp-0x108]
    let v14: i64;  // [sp-0x100]
    let v15: i64;  // [sp-0xf8]
    let v16: i64;  // [sp-0xe8]
    let v17: i32;  // [sp-0xdc]
    let v18: i64;  // [sp-0xd8], Other Possible Types: struct24, Arguments, Enum
    let v19: i64;  // [sp-0xd0]
    let v20: i64;  // [sp-0xc8]
    let v21: i64;  // [sp-0xc0]
    let v22: i64;  // [sp-0xb8]
    let v23: i64;  // [sp-0xb0]
    let v24: i64;  // [sp-0xa8]
    let v25: i8;  // [sp-0xa0]
    let v26: i64;  // [sp-0x98]
    let v29: i64;  // [sp-0x80]
    let v30: i64;  // [sp-0x78]
    let v31: i64;  // [sp-0x70]
    let v32: i64;  // [sp-0x68]
    let v33: i64;  // [sp-0x60]
    let v34: i64;  // [sp-0x58]
    let v35: i64;  // [bp-0x50], Other Possible Types: Argument
    let v36: i64;  // [sp-0x40]
    let v38: i64;  // r15
    let v39: i64;  // rax
    let v40: i64;  // rcx
    let v41: i64;  // rdx
    let v43: i64;  // r14
    let v44: i64;  // 4096
    let v45: i64;  // r8
    let v46: i64;  // r12
    let v47: i64;  // rax
    let v48: i64;  // rbp
    let v49: i64;  // r12
    let v50: i64;  // r13
    let v51: i64;  // rax
    let v52: i64;  // rsi
    let v53: i64;  // rcx
    let v56: i64;  // rbp
    let v58: i64;  // rax
    let v59: i64;  // rdx
    let v60: i64;  // r13
    let v61: i64;  // rdi
    let v62: i64;  // r8
    let v63: i64;  // rsi
    let v64: i64;  // rcx
    let v65: i64;  // r8
    let v66: i64;  // rsi
    let v67: i64;  // rcx
    let v68: i64;  // r8
    let v69: i64;  // r9
    let v71: i64;  // rcx
    let v73: i64;  // rdx
    let v75: i64;  // r13
    let v76: i64;  // rax
    let v81: i64;  // r8

    v38 = a2 * 304 + a1;
    v5 = *((a3 + 233) as &i8);
    v4 = *((a3 + 234) as &i8);
    v36 = *((a3 + 208) as &i64);
    v29 = *((a3 + 216) as &i64);
    v0 = *((a3 + 241) as &i8);
    v3 = *((a3 + 248) as &i8);
    v1 = *((a3 + 227) as &i8);
    v2 = *((a3 + 235) as &i8);
    v39 = 1;
    v16 = 1;
    v40 = 1;
    v41 = 1;
    v15 = 1;
    v14 = 1;
    v13 = 1;
    v43 = 1;
    loop {
        do {
            v45 = v44;
            v33 = 1;
            v32 = v41;
            v31 = v40;
            v30 = v39;
            do {
                if v5 {
                    v46 = a1 + 72;
                    do {
                        if v46 - 72 == v38 {
                            *(a0 as &i64) = v43;
                            *((a0 + 8) as &i64) = v13;
                            *((a0 + 16) as &i64) = v14;
                            *((a0 + 24) as &i64) = v15;
                            *((a0 + 32) as &i64) = v33;
                            *((a0 + 40) as &i64) = v32;
                            *((a0 + 48) as &i64) = v31;
                            *((a0 + 56) as &i64) = v30;
                            *((a0 + 64) as &i64) = v16;
                            return v16;
                        }
                        v47 = *(v46 as &i64);
                        if v47 == 3 {
                            core::cell::once::OnceCell<T>::try_init(v46, v46 - 72, a4, v40, v45, a5);
                            v47 = *(v46 as &i64);
                        }
                        v46 += 304;
                    } while (v47 == 2);
                    v34 = *((v46 - 264) as &i64);
                    v35 = Argument {
                        value: &v34
                        formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                    };
                    v18 = Arguments {
                        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                        args: [&v35]
                        fmt: None
                    };
                    v7 = alloc::fmt::format::format_inner(&v18);
                    v49 = v9;
                    v50 = v46 - 376;
                    v48 = v46 - 72;
                    if v49 > v43 {
                        v18 = v18;
                        v19 = v19;
                        v20 = v20;
                        v21 = v21;
                    } else {
                        v18 = v18;
                        v19 = v19;
                        v20 = v20;
                        v21 = v21;
                    }
                } else {
                    if a1 == v38 {
                        *(a0 as &i64) = v43;
                        *((a0 + 8) as &i64) = v13;
                        *((a0 + 16) as &i64) = v14;
                        *((a0 + 24) as &i64) = v15;
                        *((a0 + 32) as &i64) = v33;
                        *((a0 + 40) as &i64) = v32;
                        *((a0 + 48) as &i64) = v31;
                        *((a0 + 56) as &i64) = v30;
                        *((a0 + 64) as &i64) = v16;
                        return v16;
                    }
                    v48 = a1 + 304;
                    v18 = v18;
                    v19 = v19;
                    v20 = v20;
                    v21 = v21;
                }
                v21 = v21;
                v20 = v20;
                v19 = v19;
                v18 = v18;
                a1 = v48;
                if v4 {
                    v51 = *((v50 + 72) as &i64);
                    if v51 == 3 {
                        core::cell::once::OnceCell<T>::try_init(v50 + 72, v50, a4, v40, v45, a5);
                        if *((v50 + 72) as &i64) == 2 {
                            continue;
                        }
                    } else if v51 == 2 {
                        continue;
                    }
                    v52 = ((*((v50 + 128) as &i32) & 0xb000 | 0x4000) == 0x6000 ? 0 : *((v50 + 168) as &i64) * 0x200);
                    v53 = v29;
                    if !v0 {
                        if !v53 {
                            core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
                        }
                        v52 = (!(v52 | v53) >> 32 ? (0 CONCAT v52) /m v53 : (0 CONCAT v52) /m v53 & 4294967295 & 4294967295);
                    }
                    v18 = uucore::features::format::human::human_readable(v52, v0, v53, v45, a5);
                    v16 = v56;
                }
            } while (v3 != 1);
            v58 = *((v50 + 72) as &i64);
            if v58 != 3 {
                v6 = v6;
                if !(v58 == 2) {
                    goto LABEL_4d8f8e;
                }
                goto LABEL_4d8f57;
            } else {
                v6 = v50 + 72;
                core::cell::once::OnceCell<T>::try_init(v6, v50, a4, v40, v45, a5);
                v6 = v6;
                if *((v50 + 72) as &i64) == 2 {
LABEL_4d8f57:
                    v62 = 0;
                    continue;
                } else {
LABEL_4d8f8e:
                    v18 = uu_ls::display_len_or_rdev(v6, v36, v0, v45, a5);
                    v65 = v18;
                    v66 = v21;
                    if v66 != 0x8000000000000000 {
                        v63 = v23;
                        v62 = v20;
                        v12 = v62;
                        v6 = v63;
                        if v66 {
                            v10 = v19;
                            v65 = v65;
                            v12 = v62;
                            v6 = v63;
                        }
                        v61 = v6 + v12 + 2;
                        if !v65 {
                            goto LABEL_4d9070;
                        }
LABEL_4d9052:
                        goto LABEL_4d9070;
                    } else {
                        v61 = v20;
                        if v65 {
                            v63 = 0;
                            v62 = 0;
                            goto LABEL_4d9052;
                        } else {
                            v63 = 0;
                            v62 = 0;
LABEL_4d9070:
                            v35 = *((v50 + 120) as &i64);
                            v7 = 0;
                            v8 = 1;
                            v9 = 0;
                            v24 = 32;
                            v25 = 3;
                            v18 = 0;
                            v60 = 0;
                            v22 = &v7;
                            v23 = &g_5ac0e8;
                            if core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt(&v35, &v18) as i8 {
                                core::result::unwrap_failed(); /* do not return */
                            }
                            v11 = v7;
                            v26 = v8;
                            v64 = v9;
                            v17 = v1;
                            v7 = uu_ls::display_uname(*((v50 + 132) as &i32), v1, v67, v68, v69);
                            v59 = v9;
                            v18 = uu_ls::display_group(*((v50 + 136) as &i32), v17, v67, v68, v69);
                            v20 = v60;
                        }
                    }
                }
            }
            v20 = v20;
            v13 = v71;
            v14 = v73;
            v15 = v75;
            v76 = v33;
            v39 = 0;
            v40 = 0;
            v41 = 0;
        } while (a2 == 1);
        v40 = v81;
    }
}
