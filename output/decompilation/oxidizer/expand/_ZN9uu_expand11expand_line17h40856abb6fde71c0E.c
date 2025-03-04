fn uu_expand::expand_line(a0: &struct8, a1: &u64, a2: u32, a3: u64, a4: void*) -> u64 {
    let v0: i8;  // [sp-0x9e]
    let v1: i8;  // [sp-0x9d]
    let v2: i32;  // [sp-0x9c]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: i64;  // [sp-0x80]
    let v7: i32;  // [sp-0x74]
    let v8: Result<struct16, struct10>;  // [sp-0x70], Other Possible Types: struct24
    let v9: i64;  // [sp-0x40]
    let v10: i64;  // [sp-0x38]
    let v12: i64;  // r14
    let v13: i64;  // rbp
    let v14: i8;  // cl
    let v15: i64;  // r13
    let v16: i64;  // rax
    let v17: i32;  // r12d
    let v18: i32;  // edx
    let v19: i64;  // r12
    let v20: i64;  // rcx
    let v21: i64;  // rcx
    let v22: i64;  // r13
    let v23: i64;  // rsi
    let v24: i64;  // rdi
    let v25: i64;  // rdx
    let v26: i64;  // rcx
    let v27: i64;  // r8
    let v28: i32;  // eax
    let v29: i64;  // rsi
    let v30: i64;  // r13
    let v31: i64;  // r12
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // r12
    let v35: i32;  // rdx, Other Possible Types: unsigned long
    let v36: i64;  // rdi
    let v37: i64;  // rsi
    let v38: i64;  // rdi
    let v39: i64;  // rsi
    let v40: i64;  // rbx

    v12 = *((a0 + 16) as &i64);
    if v12 {
        v1 = *((a4 + 73) as &i8);
        v0 = *((a4 + 72) as &i8);
        v4 = *((a4 + 56) as &i64);
        v6 = *((a4 + 64) as &i64);
        v5 = *((a0 + 8) as &i64);
        v2 = (v5 & -0x100 | 1) as u32;
        v7 = *((a4 + 74) as &i8);
        v3 = 0;
        v13 = 0;
        do {
            v14 = *((v5 + v13) as &i8);
            if v1 {
                v15 = v14 < 0;
                v40 = 1;
                v16 = 1;
                if !(v13 + 1 + v15 <= v12) {
                    goto LABEL_4b2bf0;
                }
                v8 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v13, v13 + 1 + v15, v5, v12, "src/uu/expand/src/expand.rs"), a2);
                match v8 {
                    Err(_) => {
                        v16 = 1;
                        v17 = 2;
                        goto LABEL_4b2d03;
                    },
                    Ok(_) => {
                        v9 = *((&v8 as &char + 8) as &i64);
                        v10 = *((&v8 as &char + 16) as &i64) + v9;
                        v18 = (!core::str::validations::next_code_point(&v9) as i32 ? 0x110000 : v35);
                        if v18 == 8 {
                            v17 = 0;
LABEL_4b2dc7:
                            v16 = 0;
                            goto LABEL_4b2dc9;
                        } else if v18 == 9 {
                            v17 = 1;
                            goto LABEL_4b2dc7;
                        } else {
                            v16 = 1;
                            v17 = 2;
                            if v18 != 0x110000 {
                                if v18 < 127 {
                                    if !(v18 <= 31) {
                                        goto LABEL_4b2dc9;
                                    }
                                    goto LABEL_4b2dc7;
                                } else if v18 >= 160 {
                                    v16 = unicode_width::tables::charwidth::lookup_width(v18 as u64);
LABEL_4b2dc9:
                                    v40 = v15 + 1;
                                    if v17 == 1 {
                                        goto LABEL_4b2de0;
                                    }
LABEL_4b2d12:
                                    if v17 != 2 {
                                        v20 = v3;
                                        v21 = v20 - 1;
                                        if v20 < 1 {
                                            v21 = 0;
                                        }
                                        v3 = v21;
LABEL_4b2bfe:
                                        v25 = v5;
                                        v28 = v2;
                                        if *((v25 + v13) as &i8) != 32 {
                                            v28 = 0;
                                        }
                                        v2 = v28;
                                        v23 = v40 + v13;
                                        v24 = v13;
                                        v26 = v12;
                                        v27 = "src/uu/expand/src/expand.rs";
                                        goto LABEL_4b2c2b;
                                    }
LABEL_4b2bf0:
                                    v3 += v16;
                                    goto LABEL_4b2bfe;
                                }
                            }
                        }
                    },
                }
            } else {
                v16 = 1;
                if v14 == 9 {
                    v40 = 1;
LABEL_4b2de0:
                    v19 = v3;
                    v22 = uu_expand::next_tabstop(a2, a3, v19, v7 as u64);
                    v3 = v19 + v22;
                    if !(!(v2 as i8 & 1)) || !(v0) {
                        if v22 > v6 {
                            v8 = alloc::str::<impl str>::repeat(" ", v22);
                            v29 = v8.field_8;
                            v30 = v8.field_16;
                            v31 = *((a1 + 16) as &i64);
                            if v30 < *(a1 as &i64) - v31 {
                                memcpy(*((a1 + 8) as &i64) + v31, v29, v30);
                                *((a1 + 16) as &unsigned long) = v31 + v30;
                            } else {
                                v32 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v29, v30);
                                if v32 {
                                    return v32;
                                }
                            }
                            continue;
                        }
                        v34 = *((a1 + 16) as &i64);
                        if v22 >= *(a1 as &i64) - v34 {
                            v38 = a1;
                            v39 = v4;
LABEL_4b2da6:
                            v32 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v38, v39, v22);
                            if v32 {
                                return v32;
                            }
                        } else {
                            v36 = *((a1 + 8) as &i64) + v34;
                            v37 = v4;
LABEL_4b2c50:
                            memcpy(v36, v37, v22);
                            *((a1 + 16) as &unsigned long) = v22 + v34;
                        }
                    } else {
                        v23 = v40 + v13;
                        v24 = v13;
                        v25 = v5;
                        v26 = v12;
                        v27 = "src/uu/expand/src/expand.rs";
LABEL_4b2c2b:
                        v33 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v24, v23, v25, v26, v27);
                        v22 = v35;
                        v34 = *((a1 + 16) as &i64);
                        if v35 >= *(a1 as &i64) - v34 {
                            v38 = a1;
                            v39 = v33;
                            goto LABEL_4b2da6;
                        } else {
                            v36 = *((a1 + 8) as &i64) + v34;
                            v37 = v33;
                            goto LABEL_4b2c50;
                        }
                    }
                } else {
                    v17 = (v14 != 8) * 2;
LABEL_4b2d03:
                    v40 = 1;
                    if v17 == 1 {
                        goto LABEL_4b2de0;
                    }
                    goto LABEL_4b2d12;
                }
            }
        } while ((v13 += v40, v13 < v12));
    }
    v32 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a1);
    if !v32 {
        alloc::vec::Vec<T,A>::truncate(a0, 0);
        return 0;
    }
    return v32;
}
