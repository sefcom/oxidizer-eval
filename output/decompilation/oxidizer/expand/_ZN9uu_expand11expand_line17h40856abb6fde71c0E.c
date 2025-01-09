fn uu_expand::expand_line(a0: &struct8, a1: &u64, a2: &u64, a3: u64, a4: void*) -> u64 {
    let v0: i8;  // [sp-0x9e]
    let v1: i8;  // [sp-0x9d]
    let v2: i32;  // [sp-0x9c]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: i64;  // [sp-0x80]
    let v7: i32;  // [sp-0x74]
    let v8: i192;  // [sp-0x70], Other Possible Types: struct24, Result<struct16, struct10>
    let v9: i64;  // [sp-0x40]
    let v10: i64;  // [sp-0x38]
    let v12: i64;  // r14
    let v13: i64;  // rbp
    let v14: i8;  // cl
    let v15: i64;  // r13
    let v16: i64;  // rbx
    let v17: i64;  // rax
    let v18: i32;  // r12d
    let v19: i64;  // rdx
    let v20: i32;  // edx
    let v21: i64;  // r12
    let v22: i64;  // rcx
    let v23: i64;  // rcx
    let v24: i64;  // r13
    let v25: i64;  // rsi
    let v26: i64;  // r8
    let v27: i64;  // rbp
    let v28: i64;  // r14
    let v29: i64;  // rdx
    let v30: i64;  // rsi
    let v31: i64;  // r13
    let v32: i64;  // r12
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // r12
    let v36: i64;  // rdi
    let v38: i64;  // 4096
    let v39: i64;  // rbx

    v12 = *((a0 + 16) as &i64);
    if v12 {
        v1 = *((a4 + 73) as &i8);
        v0 = *((a4 + 72) as &i8);
        v4 = *((a4 + 56) as &i64);
        v6 = *((a4 + 64) as &i64);
        v5 = *((a0 + 8) as &i64);
        v2 = v5 & -0x100 | 1;
        v7 = *((a4 + 74) as &i8);
        v3 = 0;
        v13 = 0;
        do {
            v14 = *((v5 + v13) as &i8);
            if v1 {
                v15 = v14 < 0;
                v16 = 1;
                v17 = 1;
                if (v13 += v39, v13 < v12) {
                    goto LABEL_4b2bf0;
                }
                v8 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v13, v13 + 1 + v15, v5, v12, "src/uu/expand/src/expand.rs"), v19);
                match v8 {
                    Err(_) => {
                        v17 = 1;
                        v18 = 2;
                        goto LABEL_4b2d03;
                    },
                    Ok(_) => {
                        v9 = *((&v8 as &char + 8) as &i64);
                        v10 = *((&v8 as &char + 16) as &i64) + v9;
                        v20 = (!core::str::validations::next_code_point(&v9) as i32 ? 0x110000 : v19 as u32);
                        if v20 == 8 {
                            v18 = 0;
LABEL_4b2dc7:
                            v17 = 0;
                            goto LABEL_4b2dc9;
                        } else if v20 == 9 {
                            v18 = 1;
                            goto LABEL_4b2dc7;
                        } else {
                            v17 = 1;
                            v18 = 2;
                            if v20 != 0x110000 {
                                if v20 < 127 {
                                    if (v13 += v39, v13 < v12) {
                                        goto LABEL_4b2dc9;
                                    }
                                    goto LABEL_4b2dc7;
                                } else if v20 >= 160 {
                                    v17 = unicode_width::tables::charwidth::lookup_width(v20 as u32 as u64);
LABEL_4b2dc9:
                                    v16 = v15 + 1;
                                    if v18 == 1 {
                                        goto LABEL_4b2de0;
                                    }
LABEL_4b2d12:
                                    if v18 != 2 {
                                        v22 = v3;
                                        v23 = v22 - 1;
                                        if v22 < 1 {
                                            v23 = 0;
                                        }
                                        v3 = v23;
LABEL_4b2bfe:
                                        v29 = v5;
                                        v2 = 0;
                                        v25 = v16 + v13;
                                        v26 = "src/uu/expand/src/expand.rs";
                                        v27 = v13;
                                        v5 = v29;
                                        v28 = v12;
                                        goto LABEL_4b2c2b;
                                    }
LABEL_4b2bf0:
                                    v3 += v17;
                                    goto LABEL_4b2bfe;
                                }
                            }
                        }
                    },
                }
            } else {
                v17 = 1;
                if v14 == 9 {
                    v16 = 1;
LABEL_4b2de0:
                    v21 = v3;
                    v24 = uu_expand::next_tabstop(a2, a3, v21, v7);
                    v3 = v21 + v24;
                    if !(!(v2 & 1)) || !(v0) {
                        if v24 > v6 {
                            v8 = alloc::str::<impl str>::repeat(" ", v24);
                            v30 = *((&v8 as &char + 8) as &i64);
                            v31 = *((&v8 as &char + 16) as &i64);
                            v32 = *((a1 + 16) as &i64);
                            if v31 < *(a1 as &i64) - v32 {
                                memcpy(*((a1 + 8) as &i64) + v32, v30, v31);
                                *((a1 + 16) as &i64) = v32 + v31;
                            } else {
                                v33 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v30, v31);
                                if v33 {
                                    return v33;
                                }
                            }
                            continue;
                        }
                        v35 = *((a1 + 16) as &i64);
                        if v24 >= *(a1 as &i64) - v35 {
                            v4 = v4;
LABEL_4b2da6:
                            v33 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v38, v4, v24);
                            if v33 {
                                return v33;
                            }
                        } else {
                            v36 = *((a1 + 8) as &i64) + v35;
                            v4 = v4;
LABEL_4b2c50:
                            memcpy(v36, v4, v24);
                            *((a1 + 16) as &i64) = v24 + v35;
                        }
                    } else {
                        v25 = v16 + v13;
                        v26 = "src/uu/expand/src/expand.rs";
                        v27 = v13;
                        v5 = v5;
                        v28 = v12;
LABEL_4b2c2b:
                        v34 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v27, v25, v5, v28, v26);
                        v24 = v19;
                        v35 = *((a1 + 16) as &i64);
                        if v19 < *(a1 as &i64) - v35 {
                            v36 = *((a1 + 8) as &i64) + v35;
                            v4 = v34;
                            goto LABEL_4b2c50;
                        } else {
                            v38 = a1;
                            v4 = v34;
                            goto LABEL_4b2da6;
                        }
                    }
                } else {
                    v18 = (v14 != 8) * 2;
LABEL_4b2d03:
                    v16 = 1;
                    if v18 == 1 {
                        goto LABEL_4b2de0;
                    }
                    goto LABEL_4b2d12;
                }
            }
        } while ((v13 += v39, v13 < v12));
    }
    v33 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a1);
    if !v33 {
        alloc::vec::Vec<T,A>::truncate(a0, 0);
        return 0;
    }
    return v33;
}
