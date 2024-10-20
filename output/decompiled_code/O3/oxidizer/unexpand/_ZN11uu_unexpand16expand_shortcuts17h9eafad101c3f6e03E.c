fn uu_unexpand::expand_shortcuts(a0: &u64, a1: void*, a2: u32) -> u64 {
    let v0: struct16;  // [sp-0xe0], Other Possible Types: i64
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i64;  // [sp-0xb8]
    let v6: i64;  // [sp-0xb0]
    let v7: i64;  // [sp-0xa0]
    let v8: struct24;  // [sp-0x98], Other Possible Types: i192, Arguments
    let v9: i64;  // [sp-0x88]
    let v10: i192;  // [sp-0x68], Other Possible Types: String
    let v11: i64;  // [sp-0x50]
    let v12: i64;  // [sp-0x48]
    let v13: Argument;  // [bp-0x40]
    let v15: i64;  // r14
    let v16: i64;  // r14
    let v17: i256;  // ymm0
    let v18: i64;  // r15
    let v19: i64;  // rbx
    let v20: i64;  // rbp
    let v21: i64;  // r12
    let v22: i64;  // r12
    let v23: i64;  // rcx
    let v24: i64;  // rdx
    let v25: i64;  // rcx
    let v26: i32;  // esi
    let v27: i32;  // r8d
    let v28: i32;  // edi
    let v29: i64;  // r14
    let v30: i64;  // r15
    let v31: i64;  // rbx
    let v32: i64;  // rax
    let v33: i64;  // rcx
    let v34: i128;  // xmm0
    let v35: i64;  // r13
    let v36: i64;  // rax
    let v37: i64;  // r13
    let v38: i64;  // r15
    let v39: i64;  // rbx
    let v40: i64;  // rax
    let v41: i64;  // rdx
    let v42: i64;  // rdx
    let v44: i64;  // r15
    let v45: i64;  // rcx
    let v46: i128;  // xmm0
    let v47: i64;  // rax
    let v48: i64;  // r14
    let v49: i64;  // rbx
    let v50: i64;  // rax
    let v51: i64;  // rcx

    if !a2 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    } else {
        v0 = a2;
        v1 = __rust_alloc(a2 * 24, 8);
        v2 = 0;
        v7 = a2 * 24 + a1;
        v6 = 0;
        v5 = "src/uu/unexpand/src/unexpand.rs";
        v3 = 0;
        loop {
            v18 = *((a1 + 8) as &i64);
            v4 = a1;
            v19 = *((a1 + 16) as &i64);
            if v19 && *(v18 as &i8) == 45 {
                if v19 == 1 {
                    v20 = 0;
                } else if *((v18 + 1) as &i8) > 191 {
                    v20 = v19 - 1;
                } else {
                    core::str::slice_error_fail(); /* do not return */
                }
                v21 = v18 + 1;
                loop {
                    loop {
                        v23 = v22;
                        if v23 == v18 + v19 {
LABEL_48440b:
                            if v19 != 1 && *(v21 as &i8) <= 191 {
                                v5 = "src/uu/unexpand/src/unexpand.rs";
                                core::str::slice_error_fail(); /* do not return */
                            }
                            v30 = 0;
                            v31 = 0;
                            do {
                                v30 = v30;
                                if v20 < v31 {
                                    v37 = 0;
                                    goto LABEL_4844f6;
                                }
                                v36 = v20 - v31;
                                if v36 <= 15 {
                                    if v20 == v31 {
                                        goto LABEL_48449e;
                                    }
                                    v41 = 0;
                                    while (*((v21 + v31 + v41) as &i8) != 44) {
                                        v41 += 1;
                                        if v36 == v41 {
                                            goto LABEL_48449e;
                                        }
                                    }
LABEL_4844c8:
                                    v40 = v42 + v31;
                                    v31 = v31 + v42 + 1;
                                    if !(v40 < v20) || !(*((v21 + v40) as &i8) == 44) {
                                        continue;
                                    }
                                    v37 = v35 | -0x100 | 1;
                                    v15 = v31;
                                    v9 = v9;
                                    if !(v40 == v30) {
                                        goto LABEL_484502;
                                    }
                                    goto LABEL_48445a;
                                }
                                v40 = core::slice::memchr::memchr_aligned(44, v21 + v31);
                                if v40 == 1 {
                                    goto LABEL_4844c8;
                                }
                                if v40 {
                                    v37 = v35 | -0x100 | 1;
                                    goto LABEL_484502;
                                }
LABEL_48449e:
                                v37 = 0;
LABEL_4844f6:
                                v31 = v39;
                                v15 = v38;
                                v40 = v20;
                                v9 = v9;
                                if v40 != v30 {
LABEL_484502:
                                    v11 = v30 + v21;
                                    v12 = v40 - v30;
                                    v13 = Argument {
                                        value: &v11
                                        formatter: <&T as core::fmt::Display>::fmt
                                    };
                                    v8 = Arguments {
                                        pieces: ["--tabs="]
                                        args: [&v13]
                                        fmt: None
                                    };
                                    v10 = alloc::fmt::format::format_inner(&v8);
                                    v44 = v2;
                                    if v44 == v0 {
                                        v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                    }
                                    v40 = v1;
                                    v45 = v44 * 3;
                                    *((v40 + v45 * 8 + 16) as &i64) = *((&v10 as &char + 16) as &i64);
                                    v46 = v10;
                                    vvar_30{reg 224} = ((vvar_30{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_473{reg 224}))
                                    *((v40 + v45 * 8) as &i128) = v46;
                                    v2 = v44 + 1;
                                    v9 = v9;
                                }
LABEL_48445a:
                                v9 = v9;
                            } while (v35);
                            v3 = v40 | -0x100 | 1;
                            continue;
                        }
                        v24 = *(v23 as &i8);
                        if v24 < 0 {
                            break;
                        }
                        v25 = v23 + 1;
                    }
                    v26 = v24 & 31;
                    v27 = *((v23 + 1) as &i8) & 63;
                    if (v24 & 255) > 223 {
                        break;
                    }
                    v25 = v23 + 2;
                    v24 = v26 * 64 | v27;
                }
                v28 = *((v23 + 2) as &i8) & 63 | v27 * 64;
                if (v24 & 255) >= 240 {
                    v24 = *((v23 + 3) as &i8) & 63 | v28 * 64 | (v26 & 7) * 0x40000;
                    if v24 == 0x110000 {
                        goto LABEL_48440b;
                    }
                    v25 = v23 + 4;
                    continue;
                } else {
                    v25 = v23 + 3;
                    v24 = v28 | v26 * 0x1000;
                    if !(v24 != 44) || !(v24 - 48 >= 10) {
                        continue;
                    }
                }
            }
            v4 = v4;
            v8 = <alloc::string::String as core::clone::Clone>::clone(v4);
            v29 = v2;
            if v29 == v0 {
                v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v32 = v1;
            v33 = v29 * 3;
            *((v32 + v33 * 8 + 16) as &i64) = v9;
            v34 = v8;
            vvar_30{reg 224} = ((vvar_30{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_375{reg 224}))
            *((v32 + v33 * 8) as &i128) = v34;
            v16 = v29 + 1;
            v2 = v16;
            if v19 == 2 {
                v47 = *(v18 as &i16);
                if !(v47 == 24877) {
                    continue;
                }
            } else if !(v19 == 5) || !(!(*((v18 + 4) as &i8) ^ 108)) || !(!v47) {
                continue;
            }
            v6 = v47 | -0x100 | 1;
            a1 = v4 + 24;
            if a1 == v7 {
                break;
            }
        }
        if (v3 & 1) && !(v6 & 1) {
            v48 = __rust_alloc(12, 1);
            *(v48 as &i64) = 3275369764236963117;
            *((v48 + 8) as &i32) = 2037149295;
            v49 = v2;
            if v49 == v0 {
                v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v50 = v1;
            v51 = v49 * 3;
            *((v50 + v51 * 8) as &i64) = 12;
            *((v50 + v51 * 8 + 8) as &i64) = v48;
            *((v50 + v51 * 8 + 16) as &i64) = 12;
            v2 = v49 + 1;
        }
    }
    *((a0 + 16) as &i64) = v2;
    *(a0 as &i64) = v0;
    *((a0 + 8) as &i64) = v1;
    return a0;
}
