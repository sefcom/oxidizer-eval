fn uu_csplit::SplitWriter::do_to_match(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i256;  // [sp-0x160], Other Possible Types: struct32, Option<struct24>
    let v1: i128;  // [sp-0x158]
    let v2: i64;  // [sp-0x140]
    let v3: i128;  // [bp-0x138], Other Possible Types: struct24, struct32, struct40
    let v4: i64;  // [sp-0x130]
    let v5: i128;  // [bp-0x128]
    let v6: i64;  // [sp-0x118]
    let v7: i192;  // [sp-0x108], Other Possible Types: struct24, struct32, Option<struct24>
    let v8: i64;  // [sp-0xf8]
    let v9: i128;  // [bp-0xe8], Other Possible Types: struct24
    let v10: i64;  // [sp-0xe0]
    let v11: i64;  // [sp-0xd8]
    let v12: i64;  // [sp-0xd0]
    let v13: i64;  // [sp-0xb0]
    let v14: i64;  // [sp-0xa8]
    let v15: i64;  // [sp-0xa0]
    let v16: i128;  // [sp-0x98]
    let v17: i320;  // [sp-0x80], Other Possible Types: struct40
    let v18: struct40;  // [sp-0x58], Other Possible Types: i320
    let v19: i64;  // [bp+0x8]
    let v20: i8;  // [bp+0x10]
    let v21: i64;  // rdx
    let v22: i64;  // rbp
    let v23: i32;  // eax
    let v24: i128;  // xmm0
    let v25: i256;  // ymm0
    let v26: i256;  // ymm0
    let v27: struct8;  // rax
    let v28: i64;  // rax
    let v29: i256;  // ymm0
    let v30: i64;  // rdx
    let v31: i64;  // r12
    let v32: i128;  // xmm0
    let v33: i128;  // xmm0
    let v34: i64;  // rax
    let v35: i64;  // rdx
    let v36: i128;  // xmm0
    let v38: i128;  // xmm0
    let v39: i128;  // xmm0
    let v40: i64;  // rax
    let v41: i64;  // rbp
    let v42: i64;  // rbp
    let v43: i64;  // rcx
    let v44: i64;  // rcx
    let v45: i64;  // rdx
    let v46: i128;  // xmm0
    let v47: i256;  // ymm0
    let v48: struct8;  // rax
    let v49: i64;  // rsi
    let v50: i64;  // rdx
    let v51: struct8;  // rax
    let v52: i64;  // rax
    let v53: i128;  // xmm0
    let v55: i128;  // xmm0
    let v56: i128;  // xmm0
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i256;  // ymm0
    let v60: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i64;  // rax
    let v65: i64;  // rcx
    let v66: i64;  // rax
    let v67: i64;  // rcx
    let v68: i8;  // bpl
    let v69: i64;  // r13
    let v70: i64;  // rsi
    let v71: i64;  // rsi
    let v72: i64;  // rdx
    let v73: i64;  // rbx
    let v74: i64;  // rsi
    let v75: i64;  // rdx
    let v76: i32;  // r13d
    let v77: i64;  // rcx
    let v78: i64;  // rsi
    let v79: i64;  // rdx
    let v80: i32;  // r13d
    let v81: i8;  // bl
    let v82: i64;  // rax
    let v83: i64;  // rax
    let v84: i64;  // rax
    let v85: i64;  // rsi
    let v86: i64;  // rax
    let v87: i64;  // rcx
    let v88: i64;  // rcx
    let v89: i64;  // rax
    let v90: i64;  // rcx

    v21 = a2;
    v12 = a2;
    v22 = v20;
    v23 = v19;
    if v23 < 0 {
        v2 = -(v23);
        *((v22 + 48) as &i64) = v2;
        v7 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v22, v21);
        v28 = v7.8;
        if v28 == 9223372036854775809 {
LABEL_55efb5:
            v41 = a1;
            v3 = alloc::vec::Vec<T,A>::drain(v22, v45);
            v51 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if v51 {
                while (v1 != 9223372036854775809 && (v60 = *((v51 + 16) as &i128), *(&v0.field_0 as &struct32) = struct32 {
    field_0: *(v51 as &i64)
    field_8: v61
    field_16: v60
}, v7 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v0), v62 = *((&v7 as &char + 8) as &i128), v9 = v62, v0 != 0x8000000000000000)) {
                    v0 = v7;
                    v63 = v9;
                    v59 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
                    v1 = v63;
                    v64 = uu_csplit::SplitWriter::writeln(v41, v1, *((&v1 as &char + 8) as &i64));
                    if v64 {
                        v67 = a0;
                        *(v67 as &i64) = 0;
                        *((v67 + 8) as &i64) = v64;
                        return v66;
                    }
                    v51 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v51 {
                        break;
                    }
                }
            }
            uu_csplit::SplitWriter::finish_split(v41, v71, v72);
            v73 = a0;
            v66 = <T as alloc::slice::hack::ConvertVec>::to_vec(v73 + 8, v12, a3);
            *(v73 as &i64) = 3;
            return v66;
        }
        loop {
            v30 = v7.field_16;
            if v13 == 0x8000000000000000 {
                break;
            }
            v31 = v7;
            v13 = v28;
            v14 = v30;
            v15 = *((&v7 as &char + 24) as &i64);
            if !regex::regex::string::Regex::is_match_at(a4, a5, v14, v15) as i8 {
                v5 = v15;
                v32 = v13;
                v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
                v3 = v32;
                v0 = uu_csplit::InputSplitter<I>::add_line_to_buffer(v22, v31, &v3);
                if v0 != 0x8000000000000000 {
                    v33 = v0;
                    v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
                    v3 = v33;
                    v5 = *((&v0 as &char + 16) as &i64);
                    v34 = uu_csplit::SplitWriter::writeln(a1, v4, *((&v0 as &char + 16) as &i64));
                    if v34 {
                        v43 = a0;
                        *(v43 as &i64) = 0;
                        *((v43 + 8) as &i64) = v34;
                        return v66;
                    }
                }
                v7 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v22, v35);
                v28 = v7.8;
                if v28 == 9223372036854775809 {
                    goto LABEL_55efb5;
                }
            } else {
                v42 = a1;
                v18 = uu_csplit::InputSplitter<I>::shrink_buffer_to_size(v22);
                v6 = *((&v18 as &char + 32) as &i64);
                v46 = v18;
                v47 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
                v5 = *((&v18 as &char + 16) as &i128);
                v3 = v46;
                v48 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v48 {
LABEL_55f453:
                    v68 = *((*((v42 + 32) as &i64) + 99) as &i8);
                    v69 = v2;
                    if !v68 {
                        v70 = v20;
                        *((v20 + 48) as &i64) = v69 + 1;
                        v3 = struct24 {
                            field_0: v13
                            field_16: v15
                        };
                        v0 = uu_csplit::InputSplitter<I>::add_line_to_buffer(v70, v31, &v3);
                        if v0 != 0x8000000000000000 {
                            panic!("should be big enough to hold every lines");
                        }
                    }
                    uu_csplit::SplitWriter::finish_split(v42, v78, v79);
                    v82 = 12;
                    if *((v20 + 16) as &i64) < v69 {
                        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(v12, a3);
                        v88 = a0;
                        *((v88 + 24) as &struct24) = v3.field_16;
                        *((v88 + 8) as &i192) = v3;
                        v82 = 1;
                    }
                    *(a0 as &i64) = v82;
                    if !v68 {
                        return v66;
                    }
                    goto LABEL_55f658;
                }
                loop {
                    v0 = v0;
                    if !(v1 != 9223372036854775809) || !((v53 = *((v48 + 16) as &i128), *(&v0.field_0 as &struct32) = struct32 {
    field_0: *(v48 as &i64)
    field_8: v54
    field_16: v53
}, v9 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v0), v55 = *((&v9 as &char + 8) as &i128), v16 = v55, v0 = v0, v0 != 0x8000000000000000)) {
                        goto LABEL_55f453;
                    }
                    v0 = v9;
                    v56 = v16;
                    v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56;
                    v1 = v56;
                    v57 = uu_csplit::SplitWriter::writeln(v42, v1, *((&v1 as &char + 8) as &i64));
                    if v57 {
                        v65 = a0;
                        *(v65 as &i64) = 0;
                        *((v65 + 8) as &i64) = v57;
LABEL_55f658:
                    }
                    v48 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    v0 = v0;
                    v0 = v0;
                    goto LABEL_55f453;
                }
            }
        }
    }
    v2 = a1;
    v17 = alloc::vec::Vec<T,A>::drain(v22, v21);
    v6 = *((&v17 as &char + 32) as &i64);
    v24 = v17;
    v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
    v5 = *((&v17 as &char + 16) as &i128);
    v3 = v24;
    v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v27 {
        loop {
            v0 = v0;
            if !(v1 != 9223372036854775809) || !((v36 = *((v27 + 16) as &i128), *(&v0.field_0 as &struct32) = struct32 {
    field_0: *(v27 as &i64)
    field_8: v37
    field_16: v36
}, v7 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v0), v38 = *((&v7 as &char + 8) as &i128), v9 = v38, v0 = v0, v0 != 0x8000000000000000)) {
                break;
            }
            v0 = v7;
            v39 = v9;
            v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
            v1 = v39;
            v40 = uu_csplit::SplitWriter::writeln(v2, v1, *((&v1 as &char + 8) as &i64));
            if v40 {
                v44 = a0;
                *(v44 as &i64) = 0;
                *((v44 + 8) as &i64) = v40;
                return v66;
            }
            v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v0 = v0;
            v0 = v0;
            if !v27 {
                break;
            }
        }
    }
    v49 = v20;
    *((v20 + 48) as &i64) = 1;
    v0 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v49, v50);
    v52 = v0.8;
    v41 = v2;
    if v52 != 9223372036854775809 {
        do {
            v30 = *((&v0 as &char + 16) as &i64);
            if v9 == 0x8000000000000000 {
                v66 = a0;
                *(v66 as &i64) = 0;
                *((v66 + 8) as &i64) = v30;
                return v66;
            }
            v9 = v52;
            v10 = v30;
            v11 = *((&v0 as &char + 24) as &i64);
            if regex::regex::string::Regex::is_match_at(a4, a5, v10, v11) as i8 {
                if *((*((v41 + 32) as &i64) + 99) as &i8) {
LABEL_55f2b9:
                    v76 = v19;
                    if v76 < 2 {
                        v81 = 0;
                        goto LABEL_55f612;
                    } else {
                        v80 = v76 + 1;
                        do {
                            v3 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v20, v75);
                            v83 = v3.8;
                            if v83 == 9223372036854775809 {
                                uu_csplit::SplitWriter::finish_split(v2, v85, v50);
                                v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(v12, a3);
                                v90 = a0;
                                *((v90 + 24) as &struct24) = v7.field_16;
                                *((v90 + 8) as &i192) = v7;
                                *(v90 as &i64) = 1;
                                goto LABEL_55f6d6;
                            }
                            if v83 == 0x8000000000000000 {
                                v86 = a0;
                                *(v86 as &i64) = 0;
                                *((v86 + 8) as &struct24) = v7.8;
                                goto LABEL_55f6d6;
                            }
                            v7 = v83;
                            v7.8 = v3.field_16;
                            v8 = *((&v3 as &char + 24) as &i64);
                            v84 = uu_csplit::SplitWriter::writeln(v2, v7.8, v8);
                            if v84 {
                                v87 = a0;
                                *(v87 as &i64) = 0;
                                *((v87 + 8) as &i64) = v84;
                                goto LABEL_55f6d6;
                            }
                        } while (!(v1 != 9223372036854775809) || !((v53 = *((v48 + 16) as &i128), *(&v0.field_0 as &struct32) = struct32 {
    field_0: *(v48 as &i64)
    field_8: v54
    field_16: v53
}, v9 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v0), v55 = *((&v9 as &char + 8) as &i128), v16 = v55, v0 = v0, v0 != 0x8000000000000000)));
                        v81 = 0;
                        goto LABEL_55f612;
                    }
                } else if !v19 {
                    v3 = struct24 {
                        field_0: v9
                        field_16: v11
                    };
                    v7 = uu_csplit::InputSplitter<I>::add_line_to_buffer(v20, v0, &v3);
                    if v7 != 0x8000000000000000 {
                        panic!("the buffer is big enough to contain 1 line");
                    }
                    v81 = 1;
LABEL_55f612:
                    uu_csplit::SplitWriter::finish_split(v2, v74, v75);
                    v89 = a0;
                    *(v89 as &i64) = 12;
                    if v81 {
                        return v66;
                    }
LABEL_55f6d6:
                } else {
                    v58 = uu_csplit::SplitWriter::writeln(v2, v10, v11);
                    if !(v1 != 9223372036854775809) || !((v53 = *((v48 + 16) as &i128), *(&v0.field_0 as &struct32) = struct32 {
    field_0: *(v48 as &i64)
    field_8: v54
    field_16: v53
}, v9 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v0), v55 = *((&v9 as &char + 8) as &i128), v16 = v55, v0 = v0, v0 != 0x8000000000000000)) {
                        goto LABEL_55f5a9;
                    }
                    goto LABEL_55f2b9;
                }
                return v66;
            }
            v58 = uu_csplit::SplitWriter::writeln(v41, v10, v11);
            if v58 {
LABEL_55f5a9:
                v77 = a0;
                *(v77 as &i64) = 0;
                *((v77 + 8) as &i64) = v58;
                goto LABEL_55f6d6;
            }
            v0 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v20, v50);
            v52 = v0.8;
        } while (v52 != 9223372036854775809);
    }
    uu_csplit::SplitWriter::finish_split(v41, v71, v72);
    <T as alloc::slice::hack::ConvertVec>::to_vec(v73 + 8, v12, a3);
    return struct8 {
        field_0: 3
    };
}
