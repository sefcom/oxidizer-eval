fn uu_expand::expand_line(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i8;  // [sp-0x9e]
    let v1: i8;  // [sp-0x9d]
    let v2: i32;  // [sp-0x9c]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: i64;  // [sp-0x80]
    let v7: i32;  // [sp-0x74]
    let v8: i128;  // [sp-0x70], Other Possible Types: Result<struct16, struct10>, struct24
    let v10: i64;  // [sp-0x40]
    let v11: i64;  // [sp-0x38]
    let v13: i64;  // r14
    let v14: i64;  // 4096
    let v15: i64;  // 4096
    let v16: i64;  // rbp
    let v17: i8;  // cl
    let v18: i64;  // r13
    let v19: i64;  // rbx
    let v20: i64;  // rax
    let v21: i32;  // r12d
    let v22: i64;  // rdx
    let v23: i32;  // edx
    let v24: i64;  // r12
    let v25: i64;  // rcx
    let v26: i64;  // rcx
    let v27: i64;  // r13
    let v28: i64;  // rsi
    let v29: i64;  // r8
    let v30: i64;  // rbp
    let v31: i64;  // r14
    let v32: i64;  // rdx
    let v33: i64;  // rsi
    let v34: i64;  // r13
    let v35: i64;  // r12
    let v36: i64;  // rax
    let v37: i64;  // rax
    let v38: i64;  // r12
    let v39: i64;  // rdi
    let v41: i64;  // 4096
    let v42: i64;  // rbx

    v13 = *((a0 + 16) as &i64);
    if v13 {
        v1 = *((a4 + 73) as &i8);
        v0 = *((a4 + 72) as &i8);
        v4 = *((a4 + 56) as &i64);
        v6 = *((a4 + 64) as &i64);
        v5 = *((a0 + 8) as &i64);
        v2 = v5 | -0x100 | 1;
        v7 = *((a4 + 74) as &i8);
        v3 = 0;
        v16 = 0;
        do {
            v17 = *((v5 + v16) as &i8);
            if v1 {
                v18 = -0x100 | v17 < 0;
                v19 = 1;
                v20 = 1;
                if (v16 += v42, v16 < v13) {
                    goto LABEL_4b3700;
                }
                v8 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v16, v16 + 1 + v18, v5, v13, "src/uu/expand/src/expand.rs"), v22);
                match v8 {
                    Err(_) => {
                        v20 = 1;
                        v21 = 2;
                        goto LABEL_4b3813;
                    },
                    Ok(_) => {
                        v10 = *((&v8 as &char + 8) as &i64);
                        v11 = *((&v8 as &char + 16) as &i64) + v10;
                        v23 = (!core::str::validations::next_code_point(&v10) as i32 ? 0x110000 : v22 as u32);
                        if v23 == 8 {
                            v21 = 0;
LABEL_4b38d7:
                            v20 = 0;
                            goto LABEL_4b38d9;
                        } else if v23 == 9 {
                            v21 = 1;
                            goto LABEL_4b38d7;
                        } else {
                            v20 = 1;
                            v21 = 2;
                            if v23 != 0x110000 {
                                if v23 < 127 {
                                    if (v16 += v42, v16 < v13) {
                                        goto LABEL_4b38d9;
                                    }
                                    goto LABEL_4b38d7;
                                } else if v23 >= 160 {
                                    v20 = unicode_width::tables::charwidth::lookup_width(v23 as u32 as u64);
LABEL_4b38d9:
                                    v19 = v18 + 1;
                                    if v21 == 1 {
                                        goto LABEL_4b38f0;
                                    }
LABEL_4b3822:
                                    if v21 != 2 {
                                        v25 = v3;
                                        v26 = v25 - 1;
                                        if v25 < 1 {
                                            v26 = 0;
                                        }
                                        v3 = v26;
LABEL_4b370e:
                                        v32 = v5;
                                        v2 = 0;
                                        v28 = v19 + v16;
                                        v29 = "src/uu/expand/src/expand.rs";
                                        goto LABEL_4b373b;
                                    }
LABEL_4b3700:
                                    v3 += v20;
                                    goto LABEL_4b370e;
                                }
                            }
                        }
                    },
                }
            } else {
                v20 = 1;
                if v17 == 9 {
                    v19 = 1;
LABEL_4b38f0:
                    v24 = v3;
                    v27 = uu_expand::next_tabstop(a2, a3, v24, v7);
                    v3 = v24 + v27;
                    if !(!(v2 & 1)) || !(v0) {
                        if v27 > v6 {
                            v8 = alloc::str::<impl str>::repeat(" ", v27);
                            v33 = *((&v8 as &char + 8) as &i64);
                            v34 = *((&v8 as &char + 16) as &i64);
                            v35 = *((a1 + 16) as &i64);
                            if v34 < *(a1 as &i64) - v35 {
                                memcpy(*((a1 + 8) as &i64) + v35, v33, v34);
                                *((a1 + 16) as &i64) = v35 + v34;
                            } else {
                                v36 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v33, v34);
                                if v36 {
                                    return v36;
                                }
                            }
                            continue;
                        }
                        if v27 && v27 < v6 && *((v4 + v27) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                        v38 = *((a1 + 16) as &i64);
                        if v27 >= *(a1 as &i64) - v38 {
                            v4 = v4;
LABEL_4b38b6:
                            v36 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v41, v4, v27);
                            if v36 {
                                return v36;
                            }
                        } else {
                            v39 = *((a1 + 8) as &i64) + v38;
                            v4 = v4;
LABEL_4b3760:
                            memcpy(v39, v4, v27);
                            *((a1 + 16) as &i64) = v27 + v38;
                        }
                    } else {
                        v28 = v19 + v16;
                        v29 = "src/uu/expand/src/expand.rs";
                        v5 = v5;
LABEL_4b373b:
                        v37 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v30, v28, v5, v31, v29);
                        v27 = v22;
                        v38 = *((a1 + 16) as &i64);
                        if v22 >= *(a1 as &i64) - v38 {
                            goto LABEL_4b38b6;
                        } else {
                            v39 = *((a1 + 8) as &i64) + v38;
                            goto LABEL_4b3760;
                        }
                    }
                } else {
                    v21 = (-0x100 | v17 != 8) * 2;
LABEL_4b3813:
                    v19 = 1;
                    if v21 == 1 {
                        goto LABEL_4b38f0;
                    }
                    goto LABEL_4b3822;
                }
            }
        } while ((v16 += v42, v16 < v13));
    }
    v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a1, v14, v15);
    if !v36 {
        alloc::vec::Vec<T,A>::truncate(a0, 0);
        return 0;
    }
    return v36;
}
