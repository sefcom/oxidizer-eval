fn uu_csplit::do_csplit(a0: void*, a1: void*, a2: u32, a3: u64) -> u64 {
    let v0: i64;  // [sp-0x198]
    let v1: i64;  // [sp-0x190]
    let v2: i32;  // [sp-0x188]
    let v3: i32;  // [sp-0x184]
    let v4: i64;  // [sp-0x180]
    let v5: i8;  // [bp-0x170]
    let v6: i8;  // [bp-0x168]
    let v7: i8;  // [bp-0x160]
    let v8: i64;  // [sp-0x130]
    let v9: i64;  // [sp-0x128]
    let v10: i64;  // [sp-0x118]
    let v11: i8;  // [bp-0x110], Other Possible Types: struct24
    let v12: i8;  // [bp-0x100]
    let v13: i8;  // [bp-0xf0]
    let v14: i128;  // [sp-0xe8]
    let v15: i128;  // [sp-0xd8]
    let v16: i128;  // [sp-0xc8]
    let v17: i64;  // [sp-0xb8]
    let v18: i128;  // [sp-0xa8]
    let v19: i128;  // [sp-0x98]
    let v20: i256;  // [sp-0x88], Other Possible Types: struct32
    let v21: i448;  // [sp-0x68], Other Possible Types: Option<struct56>
    let v23: i64;  // r14
    let v24: i256;  // ymm0
    let v25: i256;  // ymm1
    let v26: i256;  // ymm2
    let v27: i128;  // xmm0
    let v29: i128;  // xmm1
    let v31: i128;  // xmm2
    let v32: i64;  // rax
    let v33: i32;  // ebp
    let v34: i64;  // r15
    let v35: i64;  // rax
    let v36: i64;  // rbx
    let v37: i128;  // xmm0
    let v38: i256;  // ymm0
    let v39: i128;  // xmm1
    let v40: i256;  // ymm1
    let v41: i64;  // r13
    let v42: i64;  // r14
    let v43: i64;  // rbx
    let v44: i64;  // r14
    let v45: i64;  // r14
    let v46: i64;  // r15
    let v47: i64;  // rax
    let v48: i64;  // r13
    let v49: i64;  // rax
    let v50: i64;  // rax
    let v52: i64;  // rbx
    let v53: i128;  // xmm0
    let v54: i128;  // xmm1
    let v55: i64;  // rax
    let v56: i64;  // r15
    let v57: i64;  // rbx
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i64;  // rcx
    let v61: i64;  // r15
    let v62: i64;  // r14
    let v63: i64;  // r15
    let v64: i64;  // r13
    let v66: i64;  // r12
    let v67: i64;  // rcx
    let v68: i64;  // r14
    let v69: i64;  // rbx
    let v70: i64;  // rax
    let v71: i128;  // [sp-0x158], Other Possible Types: Result<struct40, struct16>
    let v72: i128;  // [sp-0x148]
    let v73: i64;  // [sp-0x138]

    v23 = a0;
    v20 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v21 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v20);
    match v21 {
        None => {
            *(v23 as &i64) = 12;
            return v70;
        },
        Some(_) => {
            v4 = a0;
            loop {
                v17 = *((&v21 as &char + 48) as &i64);
                v27 = v21;
                v29 = *((&v21 as &char + 16) as &i128);
                v31 = *((&v21 as &char + 32) as &i128);
                v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 as u128 as u256;
                v16 = v31;
                v15 = v29;
                v14 = v27;
                v32 = <T as alloc::string::ToString>::to_string(&v5, &v14);
                v33 = v14;
                if v33 == 2 {
                    v2 = (v32 | -0x100 | 1) as i32;
                    v3 = 0;
                    goto LABEL_561c4d;
                }
                if v33 != 1 {
                    v34 = *((&v14 as &char + 8) as &i64);
                    v35 = v15;
                    v36 = *((&v15 as &char + 8) as &i64);
                    if v35 && !v36 {
                        goto LABEL_561e69;
                    }
                    if !v35 {
                        v62 = 0;
                        loop {
                            v64 = v63;
                            v49 = uu_csplit::SplitWriter::new_writer(a1);
                            if v49 {
                                v67 = v4;
                                *(v67 as &i64) = 0;
                                *((v67 + 8) as &i64) = v49;
                                return v70;
                            }
                            v71 = uu_csplit::SplitWriter::do_to_line(a1, v6, v7, v64, a3);
                            v50 = v71;
                            if v50 != 12 {
                                break;
                            }
                            v62 += 1;
                        }
                        goto LABEL_562042;
                    } else {
                        v45 = 0;
                        v48 = v46;
                        v49 = uu_csplit::SplitWriter::new_writer(a1);
                        if v49 {
                            vvar_1011{reg 24} = v4;
                            *(v67 as &i64) = 0;
                            *((v67 + 8) as &i64) = v49;
                            return v70;
                        }
                        v71 = uu_csplit::SplitWriter::do_to_line(a1, v6, v7, v48, a3);
                        v50 = v71;
                        if v50 != 12 {
LABEL_562042:
                            v69 = v4;
                            if !v68 || v50 as i32 != 1 {
                                *((v69 + 32) as &i64) = v73;
                                *((v69 + 16) as &i128) = v72;
                                *(v69 as &i128) = v71;
                            } else {
                                v11 = <alloc::string::String as core::clone::Clone>::clone(&v5);
                                *((v69 + 32) as &i64) = *((&v11 as &char + 16) as &i64);
                                *((v69 + 16) as &i192) = v11;
                                *(v69 as &i64) = 2;
                                *((v69 + 8) as &i64) = v68;
                            }
                            return v70;
                        }
                        v45 += 1;
                        if !(v36 == v45) {
                            continue;
                        }
                        v44 = v4;
                        goto LABEL_561e69;
                    }
                }
                v3 = (v32 | -0x100 | 1) as i32;
                v2 = 0;
LABEL_561c4d:
                v37 = *((&v14 as &char + 8) as &i128);
                v38 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u128 as u256;
                v39 = *((&v15 as &char + 8) as &i128);
                v40 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 as u128 as u256;
                v19 = v39;
                v18 = v37;
                v10 = *((&v14 as &char + 4) as &i32) as u32 as u64;
                v41 = *((&v16 as &char + 8) as &i64);
                v42 = v17;
                if !v41 {
                    v43 = 0;
                    if v33 == 2 {
                        goto LABEL_561ca0;
                    }
                    goto LABEL_561cf7;
                }
                v43 = 1;
                if !v42 {
                    goto LABEL_561e50;
                }
                if v33 == 2 {
LABEL_561ca0:
                    *((a1 + 56) as &i8) = 1;
                } else {
LABEL_561cf7:
                    v47 = uu_csplit::SplitWriter::new_writer(a1);
                    if v47 {
                        vvar_1002{reg 24} = v4;
                        *(v60 as &i64) = 0;
                        *((v60 + 8) as &i64) = v47;
                        return v70;
                    }
                }
                v1 = a3;
                v0 = v10;
                uu_csplit::SplitWriter::do_to_match(&v11, a1, v6, v7, v18, *((&v18 as &char + 8) as &i64));
                v73 = v13;
                v53 = v11;
                v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u128 as u256;
                v54 = v12;
                v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u128 as u256;
                v72 = v54;
                v71 = v53;
                v8 = v52;
                v9 = v42;
                v55 = v71;
                if v55 != 12 {
                    v61 = 0;
                    break;
                }
                v56 = 1;
                if !v41 {
LABEL_561db0:
                    v57 = 0;
                    if !(v36 == v45) {
                        continue;
                    }
                    goto LABEL_561da3;
                } else {
                    v57 = 1;
                    if v42 == v56 {
LABEL_561e50:
                        v44 = v4;
LABEL_561e69:
                        v23 = v44;
                        v21 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v20);
                        if v21 == 3 {
                            *(v23 as &i64) = 12;
                            return v70;
                        }
                    } else {
                        if v33 == 2 {
LABEL_561da3:
                            *((a1 + 56) as &i8) = 1;
                            continue;
                        } else {
                            v47 = uu_csplit::SplitWriter::new_writer(a1);
                            if v47 {
                                v60 = v4;
                                *(v60 as &i64) = 0;
                                *((v60 + 8) as &i64) = v47;
                                return v70;
                            }
                            v1 = a3;
                            v0 = v10;
                            uu_csplit::SplitWriter::do_to_match(&v11, a1, v6, v7, v18, *((&v18 as &char + 8) as &i64));
                            v73 = v13;
                            v58 = v11;
                            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 as u128 as u256;
                            v59 = v12;
                            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 as u128 as u256;
                            v72 = v59;
                            v71 = v58;
                            v8 = v57;
                            v9 = v42;
                            v55 = v71;
                            if v55 != 12 {
                                break;
                            }
                            v56 += 1;
                            if !(v36 == v45) {
                                continue;
                            }
                        }
                        goto LABEL_561db0;
                    }
                }
            }
            if !v41 {
                v66 = v4;
                if v55 as i32 != 3 {
                    *((v66 + 32) as &i64) = v73;
                    *((v66 + 16) as &i128) = v72;
                    *(v66 as &i128) = v71;
                    return v70;
                }
                *(v66 as &i64) = 12;
            } else {
                v66 = v4;
                if !(v61) || !(v55 as i32 == 3) || !(v42 != 1) {
                    *((v66 + 32) as &i64) = v73;
                    *((v66 + 16) as &i128) = v72;
                    *(v66 as &i128) = v71;
                    return v70;
                }
                v11 = <alloc::string::String as core::clone::Clone>::clone(&v5);
                *((v66 + 32) as &i64) = *((&v11 as &char + 16) as &i64);
                *((v66 + 16) as &i192) = v11;
                *(v66 as &i64) = 4;
                *((v66 + 8) as &i64) = v61;
                if v71 == 12 {
                    return v70;
                }
            }
            return v70;
        },
    }
}
