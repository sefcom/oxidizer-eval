fn uu_expand::expand_line(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct8 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x9e]
    let v1: u8;  // [bp-0x9d]
    let v2: u32;  // [bp-0x9c]
    let v4: u64;  // [bp-0x98], Other Possible Types: void*
    let v5: u64;  // [bp-0x90]
    let v6: u64;  // [bp-0x88]
    let v7: u64;  // [bp-0x80]
    let v8: u32;  // [bp-0x74]
    let v9: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x70], Other Possible Types: alloc::string::String
    let v10: u64;  // [bp-0x68]
    let v11: u64;  // [bp-0x60]
    let v12: u128;  // [bp-0x40]
    let v14: u64;  // r14
    let v15: i64;  // rbp
    let v16: u8;  // cl
    let v17: u64;  // r13
    let v18: u64;  // rbx
    let v19: u64;  // rax
    let v23: u32;  // edx
    let v24: u32;  // edx
    let v25: u32;  // edx
    let v26: u32;  // r12d
    let v27: u64;  // r12
    let v28: u64;  // rcx
    let v29: u64;  // r13
    let v30: u64;  // rsi
    let v31: i64;  // rdi
    let v32: u64;  // rcx
    let v33: u64;  // r8
    let v34: u64;  // r12
    let v35: u8;  // dl
    let v36: u64;  // rax
    let v37: core::result::Result<(), std::io::error::Error>;  // rax
    let v39: u64;  // r12
    let v40: u64;  // rdi
    let v41: u64;  // rsi
    let v42: alloc::string::String;  // rdi
    let v43: u64;  // rsi
    let v44: core::result::Result<(), std::io::error::Error>;  // rax
    let v45: core::result::Result<(), std::io::error::Error>;  // rax
    let v46: core::option::Option<u32>;  // rax:rax

    v14 = *((a0 + 16) as &i64);
    if v14 {
        v1 = *((a4 + 73) as &i8);
        v0 = *((a4 + 72) as &i8);
        v5 = *((a4 + 56) as &i64);
        v7 = *((a4 + 64) as &i64);
        v6 = *((a0 + 8) as &i64);
        v2 = *((a0 + 8) as &i64) & -0x100 | 1;
        v8 = *((a4 + 74) as &i8);
        v4 = 0;
        v15 = 0;
        do {
            v16 = *((v6 + v15) as &i8);
            if v1 {
                v17 = v16 < 0;
                v18 = 1;
                v19 = 1;
                if !(v15 + 1 + v17 <= v14) {
                    goto LABEL_4b2c16;
                }
                v9 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v15, v15 + 1 + v17, v6, v14, "src/uu/expand/src/expand.rs"), a2);
                if !(!v9 as i64) {
                    goto LABEL_4b2d03;
                }
                v12 = core::slice::iter::Iter<u8> {
                    ptr: core::ptr::non_null::NonNull<u8> {
                        pointer: v10
                    }
                    end_or_len: v11 + v10
                    _marker: core::marker::PhantomData<&u8> { }
                };
                v46 = core::str::validations::next_code_point(&v12) as u128;
                match v46 {
                    None => {
                        v23 = 0x110000;
                    },
                    Some(_) => {
                        v23 = v24;
                    },
                }
                v25 = v23;
                if v25 != 8 && v25 != 9 {
                    v19 = 1;
                    v26 = 2;
                    if v25 == 0x110000 {
LABEL_4b2d03:
                        v18 = 1;
                        if v26 == 1 {
                            goto LABEL_4b2de0;
                        }
                        goto LABEL_4b2d12;
                    } else if v25 >= 127 && v25 >= 160 {
                        v19 = unicode_width::tables::charwidth::lookup_width(v25);
                    }
                }
                v18 = v17 + 1;
                if v26 != 1 {
LABEL_4b2d12:
                    if v26 != 2 {
                        v4 = v28;
                    }
LABEL_4b2c16:
                    v2 = (*((v6 + v15) as &i8) != 32 ? 0 : v2);
                    v30 = v18 + v15;
                    v31 = v15;
                    v32 = v14;
                    v33 = "src/uu/expand/src/expand.rs";
                    goto LABEL_4b2c2b;
                } else {
LABEL_4b2de0:
                    v27 = v4;
                    v29 = uu_expand::next_tabstop(a2, a3, v27, v8);
                    v4 = v27 + v29;
                    if !(v2 as i8 & 1) && v0 {
                        v30 = v18 + v15;
                        v31 = v15;
                        v32 = v14;
                        v33 = "src/uu/expand/src/expand.rs";
LABEL_4b2c2b:
                        v36 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v31, v30, v35, v32, v33);
                        v29 = v24;
                        v39 = *((a1 + 16) as &i64);
                        if v24 < *(a1 as &i64) - v39 {
                            v40 = *((a1 + 8) as &i64) + v39;
                            v41 = v36;
                            goto LABEL_4b2c50;
                        } else {
                            v42 = a1;
                            v43 = v36;
                            goto LABEL_4b2da6;
                        }
                    } else {
                        if v29 > v7 {
                            v9 = alloc::str::<impl str>::repeat(" ", v29);
                            v34 = *((a1 + 16) as &i64);
                            if v11 < *(a1 as &i64) - v34 {
                                memcpy(*((a1 + 8) as &i64) + v34, v9);
                                *((a1 + 16) as &u64) = v34 + v11;
                            } else {
                                v37 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v9);
                                if let Err(_) = v37 {
                                    return v37;
                                }
                            }
                            continue;
                        }
                        v39 = *((a1 + 16) as &i64);
                        if v29 < *(a1 as &i64) - v39 {
                            v40 = *((a1 + 8) as &i64) + v39;
                            v41 = v5;
LABEL_4b2c50:
                            memcpy(v40, v41, v29);
                            *((a1 + 16) as &u64) = v29 + v39;
                        } else {
                            v42 = a1;
                            v43 = v5;
LABEL_4b2da6:
                            v44 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v42, v43, v29);
                            if let Err(_) = v44 {
                                return v44;
                            }
                        }
                    }
                }
            } else {
                v19 = 1;
                if v16 == 9 {
                    goto LABEL_4b2de0;
                }
                goto LABEL_4b2d03;
            }
        } while ((v15 += v18, v15 < v14));
    }
    v45 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a1);
    match v45 {
        Err(_) => {
            return v45;
        },
        Ok(_) => {
            alloc::vec::Vec<T,A>::truncate(a0, 0);
            return 0;
        },
    }
}
