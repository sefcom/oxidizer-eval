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
    let v21: i64;  // rbx
    let v22: i32;  // r12d
    let v23: i64;  // rdx
    let v24: i32;  // edx
    let v25: i64;  // r12
    let v26: i64;  // rcx
    let v27: i64;  // rcx
    let v28: i64;  // r13
    let v29: i64;  // rsi
    let v30: i64;  // r8
    let v31: i64;  // rbp
    let v32: i64;  // r14
    let v33: i64;  // rdx
    let v34: i64;  // rsi
    let v35: i64;  // r13
    let v36: i64;  // r12
    let v37: i64;  // rax
    let v38: i64;  // rax
    let v39: i64;  // r12
    let v40: i64;  // rdi
    let v42: i64;  // 4096
    let v43: i64;  // rbx

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
                if (v16 += v43, v16 < v13) {
                    goto LABEL_4b3700;
                }
                v8 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v16, v16 + 1 + v18, v5, v13, "src/uu/expand/src/expand.rs"), v23);
                match v8 {
                    Err(_) => {
                        v20 = 1;
                        v22 = 2;
                        goto LABEL_4b3813;
                    },
                    Ok(_) => {
                        v10 = *((&v8 as &char + 8) as &i64);
                        v11 = *((&v8 as &char + 16) as &i64) + v10;
                        v24 = (!core::str::validations::next_code_point(&v10) as i32 ? 0x110000 : v23 as u32);
                        if v24 == 8 {
                            v22 = 0;
LABEL_4b38d7:
                            v20 = 0;
                            goto LABEL_4b38d9;
                        } else if v24 == 9 {
                            v22 = 1;
                            goto LABEL_4b38d7;
                        } else {
                            v20 = 1;
                            v22 = 2;
                            if v24 != 0x110000 {
                                if v24 < 127 {
                                    if (v16 += v43, v16 < v13) {
                                        goto LABEL_4b38d9;
                                    }
                                    goto LABEL_4b38d7;
                                } else if v24 >= 160 {
                                    v20 = unicode_width::tables::charwidth::lookup_width(v24 as u32 as u64);
LABEL_4b38d9:
                                    v21 = v18 + 1;
                                    if v22 == 1 {
                                        goto LABEL_4b38f0;
                                    }
LABEL_4b3822:
                                    if v22 != 2 {
                                        v26 = v3;
                                        v27 = v26 - 1;
                                        if v26 < 1 {
                                            v27 = 0;
                                        }
                                        v3 = v27;
LABEL_4b370e:
                                        v33 = v5;
                                        v2 = 0;
                                        v29 = v21 + v16;
                                        v30 = "src/uu/expand/src/expand.rs";
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
                    v21 = 1;
LABEL_4b38f0:
                    v25 = v3;
                    v28 = uu_expand::next_tabstop(a2, a3, v25, v7);
                    v3 = v25 + v28;
                    if !(!(v2 & 1)) || !(v0) {
                        if v28 > v6 {
                            v8 = alloc::str::<impl str>::repeat(" ", v28);
                            v34 = *((&v8 as &char + 8) as &i64);
                            v35 = *((&v8 as &char + 16) as &i64);
                            v36 = *((a1 + 16) as &i64);
                            if v35 < *(a1 as &i64) - v36 {
                                memcpy(*((a1 + 8) as &i64) + v36, v34, v35);
                                *((a1 + 16) as &i64) = v36 + v35;
                            } else {
                                v37 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v34, v35);
                                if v37 {
                                    return v37;
                                }
                            }
                            continue;
                        }
                        if v28 && v28 < v6 && *((v4 + v28) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                        v39 = *((a1 + 16) as &i64);
                        if v28 >= *(a1 as &i64) - v39 {
                            v4 = v4;
LABEL_4b38b6:
                            v37 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v42, v4, v28);
                            if v37 {
                                return v37;
                            }
                        } else {
                            v40 = *((a1 + 8) as &i64) + v39;
                            v4 = v4;
LABEL_4b3760:
                            memcpy(v40, v4, v28);
                            *((a1 + 16) as &i64) = v28 + v39;
                        }
                    } else {
                        v29 = v21 + v16;
                        v30 = "src/uu/expand/src/expand.rs";
                        v5 = v5;
LABEL_4b373b:
                        v38 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v31, v29, v5, v32, v30);
                        v28 = v23;
                        v39 = *((a1 + 16) as &i64);
                        if v23 < *(a1 as &i64) - v39 {
                            v40 = *((a1 + 8) as &i64) + v39;
                            goto LABEL_4b3760;
                        } else {
                            goto LABEL_4b38b6;
                        }
                    }
                } else {
                    v22 = (-0x100 | v17 != 8) * 2;
LABEL_4b3813:
                    v21 = 1;
                    if v22 == 1 {
                        goto LABEL_4b38f0;
                    }
                    goto LABEL_4b3822;
                }
            }
        } while ((v16 += v43, v16 < v13));
    }
    v37 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a1, v14, v15);
    if !v37 {
        alloc::vec::Vec<T,A>::truncate(a0, 0);
        return 0;
    }
    return v37;
}
