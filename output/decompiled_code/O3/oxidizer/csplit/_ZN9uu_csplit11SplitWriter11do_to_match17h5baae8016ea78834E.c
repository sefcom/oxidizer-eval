fn uu_csplit::SplitWriter::do_to_match(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x160], Other Possible Types: struct32, Option<struct24>
    let v1: i128;  // [sp-0x158]
    let v2: i64;  // [sp-0x140]
    let v3: i128;  // [bp-0x138], Other Possible Types: struct24, struct40, struct32
    let v4: i64;  // [sp-0x130]
    let v5: i64;  // [bp-0x128]
    let v6: i64;  // [sp-0x118]
    let v7: i64;  // [sp-0x108], Other Possible Types: struct24, struct32, Option<struct24>
    let v8: i64;  // [sp-0x100]
    let v9: i64;  // [sp-0xf8]
    let v10: i192;  // [bp-0xe8], Other Possible Types: struct24
    let v11: i64;  // [sp-0xe0]
    let v12: i64;  // [sp-0xd8]
    let v13: i64;  // [sp-0xd0]
    let v14: i64;  // [sp-0xb0]
    let v15: i64;  // [sp-0xa8]
    let v16: i64;  // [sp-0xa0]
    let v17: i128;  // [sp-0x98]
    let v18: struct40;  // [sp-0x80], Other Possible Types: i320
    let v19: struct40;  // [sp-0x58], Other Possible Types: i320
    let v20: i64;  // [bp+0x8]
    let v21: i8;  // [bp+0x10]
    let v22: i64;  // rdx
    let v23: i64;  // rbp
    let v24: i32;  // eax
    let v25: i128;  // xmm0
    let v26: i256;  // ymm0
    let v27: i256;  // ymm0
    let v28: struct8;  // rax
    let v29: i64;  // rax
    let v30: i256;  // ymm0
    let v31: i64;  // rdx
    let v32: i64;  // r12
    let v33: i128;  // xmm0
    let v34: i256;  // ymm0
    let v35: i128;  // xmm0
    let v36: i64;  // rax
    let v37: i64;  // rdx
    let v38: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i64;  // rax
    let v43: i64;  // rbp
    let v44: i64;  // rbp
    let v45: i64;  // rcx
    let v46: i64;  // rcx
    let v47: i64;  // rdx
    let v48: i128;  // xmm0
    let v49: i256;  // ymm0
    let v50: struct8;  // rax
    let v51: i64;  // rsi
    let v52: i64;  // rdx
    let v53: struct8;  // rax
    let v54: i64;  // rax
    let v55: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i128;  // xmm0
    let v59: i64;  // rax
    let v60: i64;  // rax
    let v61: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i128;  // xmm0
    let v65: i64;  // rax
    let v66: i64;  // rcx
    let v67: i64;  // rax
    let v68: i64;  // rcx
    let v69: i8;  // bpl
    let v70: i64;  // r13
    let v71: i64;  // rsi
    let v72: i64;  // rsi
    let v73: i64;  // rdx
    let v74: i64;  // rbx
    let v75: i64;  // rsi
    let v76: i64;  // rdx
    let v77: i32;  // r13d
    let v78: i64;  // rcx
    let v79: i64;  // rsi
    let v80: i64;  // rdx
    let v81: i32;  // r13d
    let v82: i8;  // bl
    let v83: i64;  // rax
    let v84: i64;  // rax
    let v85: i64;  // rax
    let v86: i64;  // rsi
    let v87: i64;  // rax
    let v88: i64;  // rcx
    let v89: i64;  // rcx
    let v90: i64;  // rax
    let v91: i64;  // rcx
    let v92: i64;  // rax

    v22 = a2;
    v13 = a2;
    v23 = v21;
    v24 = v20;
    if v24 < 0 {
        v2 = -(v24);
        *((v23 + 48) as &i64) = v2;
        v7 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v23, v22);
        v29 = v8;
        if v29 == 9223372036854775809 {
LABEL_55fce5:
            v43 = a1;
            v3 = alloc::vec::Vec<T,A>::drain(v23, v47);
            v53 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if v53 {
                while (v1 != 9223372036854775809 && (v61 = *((v53 + 16) as &i128), *(&v0.field_0 as &struct32) = struct32 {
    field_0: *(v53 as &i64)
    field_8: v62
    field_16: v61
}, v7 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v0), v63 = *((&v7 as &char + 8) as &i128), v10 = v63, v0 != 0x8000000000000000)) {
                    v0 = v7;
                    v64 = v10;
                    v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
                    v1 = v64;
                    v65 = uu_csplit::SplitWriter::writeln(v43, v1, *((&v1 as &char + 8) as &i64));
                    if v65 {
                        v68 = a0;
                        *(v68 as &i64) = 0;
                        *((v68 + 8) as &i64) = v65;
                        return v67;
                    }
                    v53 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v53 {
                        break;
                    }
                }
            }
            uu_csplit::SplitWriter::finish_split(v43, v72, v73);
            v74 = a0;
            v67 = <T as alloc::slice::hack::ConvertVec>::to_vec(v74 + 8, v13, a3);
            *(v74 as &i64) = 3;
            return v67;
        }
        loop {
            v31 = v9;
            if v14 == 0x8000000000000000 {
                break;
            }
            v32 = v7;
            v14 = v29;
            v15 = v31;
            v16 = *((&v7 as &char + 24) as &i64);
            if !regex::regex::string::Regex::is_match_at(a4, a5, v15, v16) as i8 {
                v5 = v16;
                v33 = v14;
                v34 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
                v3 = v33;
                v0 = uu_csplit::InputSplitter<I>::add_line_to_buffer(v23, v32, &v3);
                if v0 != 0x8000000000000000 {
                    v35 = v0;
                    v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
                    v3 = v35;
                    v5 = *((&v0 as &char + 16) as &i64);
                    v36 = uu_csplit::SplitWriter::writeln(a1, v4, *((&v0 as &char + 16) as &i64));
                    if v36 {
                        v45 = a0;
                        *(v45 as &i64) = 0;
                        *((v45 + 8) as &i64) = v36;
                        return v67;
                    }
                }
                v7 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v23, v37);
                v29 = v8;
                if v29 == 9223372036854775809 {
                    goto LABEL_55fce5;
                }
            } else {
                v44 = a1;
                v19 = uu_csplit::InputSplitter<I>::shrink_buffer_to_size(v23);
                v6 = *((&v19 as &char + 32) as &i64);
                v48 = v19;
                v49 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
                v5 = *((&v19 as &char + 16) as &i128);
                v3 = v48;
                v50 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v50 {
LABEL_560183:
                    v69 = *((*((v44 + 32) as &i64) + 99) as &i8);
                    v70 = v2;
                    v5 = v5;
                    if !v69 {
                        v71 = v21;
                        *((v21 + 48) as &i64) = v70 + 1;
                        v3 = v14;
                        v0 = uu_csplit::InputSplitter<I>::add_line_to_buffer(v71, v32, &v3);
                        v5 = v5;
                        if v0 != 0x8000000000000000 {
                            panic!("should be big enough to hold every lines");
                        }
                    }
                    uu_csplit::SplitWriter::finish_split(v44, v79, v80);
                    v83 = 12;
                    if *((v21 + 16) as &i64) < v70 {
                        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(v13, a3);
                        v89 = a0;
                        *((v89 + 24) as &i64) = v5;
                        *((v89 + 8) as &i192) = v3;
                        v83 = 1;
                    }
                    *(a0 as &i64) = v83;
                    if !v69 {
                        return v67;
                    }
                    goto LABEL_560388;
                }
                loop {
                    v0 = v0;
                    if !(v1 != 9223372036854775809) || !((v55 = *((v50 + 16) as &i128), *(&v0.field_0 as &struct32) = struct32 {
    field_0: *(v50 as &i64)
    field_8: v56
    field_16: v55
}, v10 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v0), v57 = *((&v10 as &char + 8) as &i128), v17 = v57, v0 = v0, v0 != 0x8000000000000000)) {
                        goto LABEL_560183;
                    }
                    v0 = v10;
                    v58 = v17;
                    v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
                    v1 = v58;
                    v59 = uu_csplit::SplitWriter::writeln(v44, v1, *((&v1 as &char + 8) as &i64));
                    if v59 {
                        v66 = a0;
                        *(v66 as &i64) = 0;
                        *((v66 + 8) as &i64) = v59;
LABEL_560388:
                    }
                    v50 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    v0 = v0;
                    v0 = v0;
                    goto LABEL_560183;
                }
            }
        }
    }
    v2 = a1;
    v18 = alloc::vec::Vec<T,A>::drain(v23, v22);
    v6 = *((&v18 as &char + 32) as &i64);
    v25 = v18;
    v27 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
    v5 = *((&v18 as &char + 16) as &i128);
    v3 = v25;
    v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v28 {
        loop {
            v0 = v0;
            v1 = v1;
            if !(v1 != 9223372036854775809) || !((v38 = *((v28 + 16) as &i128), *(&v0.field_0 as &struct32) = struct32 {
    field_0: *(v28 as &i64)
    field_8: v39
    field_16: v38
}, v7 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v0), v40 = *((&v7 as &char + 8) as &i128), v10 = v40, v0 = v0, v1 = v1, v0 != 0x8000000000000000)) {
                break;
            }
            v0 = v7;
            v41 = v10;
            v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
            v1 = v41;
            v42 = uu_csplit::SplitWriter::writeln(v2, v1, *((&v1 as &char + 8) as &i64));
            if v42 {
                v46 = a0;
                *(v46 as &i64) = 0;
                *((v46 + 8) as &i64) = v42;
                return v67;
            }
            v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v0 = v0;
            v1 = v1;
            v0 = v0;
            v1 = v1;
            if !v28 {
                break;
            }
        }
    }
    v51 = v21;
    *((v21 + 48) as &i64) = 1;
    v0 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v51, v52);
    v54 = v1;
    v43 = v2;
    if v54 != 9223372036854775809 {
        do {
            v31 = *((&v0 as &char + 16) as &i64);
            if v10 == 0x8000000000000000 {
                v67 = a0;
                *(v67 as &i64) = 0;
                *((v67 + 8) as &i64) = v31;
                return v67;
            }
            v10 = v54;
            v11 = v31;
            v12 = *((&v0 as &char + 24) as &i64);
            if regex::regex::string::Regex::is_match_at(a4, a5, v11, v12) as i8 {
                if *((*((v43 + 32) as &i64) + 99) as &i8) {
LABEL_55ffe9:
                    v77 = v20;
                    if v77 < 2 {
                        v82 = 0;
                        goto LABEL_560342;
                    } else {
                        v81 = v77 + 1;
                        do {
                            v3 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v21, v76);
                            v84 = v4;
                            if v84 == 9223372036854775809 {
                                uu_csplit::SplitWriter::finish_split(v2, v86, v52);
                                v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(v13, a3);
                                v91 = a0;
                                *((v91 + 24) as &i64) = v9;
                                *((v91 + 8) as &i192) = v7;
                                *(v91 as &i64) = 1;
                                goto LABEL_560406;
                            }
                            if v84 == 0x8000000000000000 {
                                v87 = a0;
                                *(v87 as &i64) = 0;
                                *((v87 + 8) as &i64) = v8;
                                goto LABEL_560406;
                            }
                            v7 = v84;
                            v8 = v5;
                            v9 = *((&v3 as &char + 24) as &i64);
                            v85 = uu_csplit::SplitWriter::writeln(v2, v8, v9);
                            if v85 {
                                v88 = a0;
                                *(v88 as &i64) = 0;
                                *((v88 + 8) as &i64) = v85;
                                goto LABEL_560406;
                            }
                        } while (!(v1 != 9223372036854775809) || !((v55 = *((v50 + 16) as &i128), *(&v0.field_0 as &struct32) = struct32 {
    field_0: *(v50 as &i64)
    field_8: v56
    field_16: v55
}, v10 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v0), v57 = *((&v10 as &char + 8) as &i128), v17 = v57, v0 = v0, v0 != 0x8000000000000000)));
                        v82 = 0;
                        goto LABEL_560342;
                    }
                } else if !v20 {
                    v3 = v10;
                    v7 = uu_csplit::InputSplitter<I>::add_line_to_buffer(v21, v0, &v3);
                    if v7 != 0x8000000000000000 {
                        panic!("the buffer is big enough to contain 1 line");
                    }
                    v82 = 1;
LABEL_560342:
                    uu_csplit::SplitWriter::finish_split(v2, v75, v76);
                    v90 = a0;
                    *(v90 as &i64) = 12;
                    if v82 {
                        return v67;
                    }
LABEL_560406:
                } else {
                    v60 = uu_csplit::SplitWriter::writeln(v2, v11, v12);
                    if !(v1 != 9223372036854775809) || !((v55 = *((v50 + 16) as &i128), *(&v0.field_0 as &struct32) = struct32 {
    field_0: *(v50 as &i64)
    field_8: v56
    field_16: v55
}, v10 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v0), v57 = *((&v10 as &char + 8) as &i128), v17 = v57, v0 = v0, v0 != 0x8000000000000000)) {
                        goto LABEL_5602d9;
                    }
                    goto LABEL_55ffe9;
                }
                v67 = v92;
                return v67;
            }
            v60 = uu_csplit::SplitWriter::writeln(v43, v11, v12);
            if v60 {
LABEL_5602d9:
                v78 = a0;
                *(v78 as &i64) = 0;
                *((v78 + 8) as &i64) = v60;
                goto LABEL_560406;
            }
            v0 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v21, v52);
            v54 = v1;
        } while (v54 != 9223372036854775809);
    }
    uu_csplit::SplitWriter::finish_split(v43, v72, v73);
    <T as alloc::slice::hack::ConvertVec>::to_vec(v74 + 8, v13, a3);
    return struct8 {
        field_0: 3
    };
}
