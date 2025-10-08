fn uu_csplit::do_csplit(a0: void*, a1: i64, a2: &u64, a3: u64) -> void {
    let v0: struct8;  // [bp-0x180], Other Possible Types: u32
    let v1: u32;  // [bp-0x180]
    let v2: u32;  // [bp-0x17c]
    let v3: i64;  // [bp-0x178]
    let v4: void*;  // [bp-0x170]
    let v5: struct64;  // [bp-0x160]
    let v6: u64;  // [sp-0x158]
    let v7: u64;  // [bp-0x158]
    let v8: u64;  // [bp-0x158]
    let v9: u64;  // [bp-0x158]
    let v10: u64;  // [sp-0x150]
    let v11: u64;  // [bp-0x150]
    let v12: u64;  // [bp-0x150]
    let v13: u64;  // [bp-0x150]
    let v14: u128;  // [sp-0x148]
    let v15: u128;  // [bp-0x148]
    let v16: iNone;  // [sp-0x138]
    let v17: iNone;  // [bp-0x138]
    let v18: i64;  // [sp-0x128]
    let v19: i64;  // [bp-0x128]
    let v20: void*;  // [bp-0x120]
    let v21: u64;  // [bp-0x118]
    let v22: u128;  // [bp-0x108]
    let v24: u32;  // [bp-0x104]
    let v25: u64;  // [bp-0x100]
    let v26: u128;  // [bp-0xf8]
    let v27: u64;  // [bp-0xf0]
    let v28: u128;  // [bp-0xe8]
    let v29: void*;  // [bp-0xe0]
    let v30: u64;  // [bp-0xd8]
    let v31: alloc::string::String;  // [bp-0xd0]
    let v32: iNone;  // [bp-0xd0]
    let v33: iNone;  // [bp-0xd0]
    let v34: struct40;  // [bp-0xd0]
    let v35: iNone;  // [bp-0xd0], Other Possible Types: alloc::string::String
    let v36: iNone;  // [bp-0xc0]
    let v37: iNone;  // [bp-0xc0]
    let v38: iNone;  // [bp-0xc0]
    let v39: i64;  // [bp-0xb0]
    let v40: i64;  // [bp-0xb0]
    let v41: i64;  // [bp-0xb0]
    let v42: u128;  // [bp-0xa8]
    let v43: u64;  // [bp-0xa0]
    let v44: iNone;  // [bp-0x98]
    let v45: struct32;  // [bp-0x88]
    let v46: u128;  // [sp-0x68]
    let v47: Option<struct56>;  // [bp-0x68], Other Possible Types: u448
    let v48: iNone;  // [bp-0x58]
    let v49: iNone;  // [bp-0x48]
    let v51: i64;  // rbp
    let v52: void*;  // r12
    let v53: i64;  // rsi
    let v54: u32;  // r13d
    let v55: void*;  // r14
    let v56: void*;  // r15
    let v58: u64;  // rax
    let v59: void*;  // rax
    let v60: u64;  // rbx
    let v61: void*;  // r14
    let v62: u64;  // rbx
    let v63: u64;  // r13
    let v64: void*;  // rax
    let v65: u64;  // rax
    let v67: u64;  // rbx
    let v68: u64;  // r13
    let v70: i64;  // rax

    v51 = a1;
    v52 = a0;
    v45 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v47 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v45);
    if let Some(_) = v47 {
        v3 = a1;
        v4 = a0;
        do {
            vvar_892{stack -352} = struct64 OrderedDict([(0, 𝜙@64b [((5348065, None), vvar_821{stack -352}), ((5347443, None), None)]), (8, 𝜙@64b [((5348065, None), vvar_641{stack -344}), ((5347443, None), None)]), (16, 𝜙@64b [((5348065, None), vvar_642{stack -336}), ((5347443, None), None)]), (24, 𝜙@128b [((5348065, None), vvar_643{stack -328}), ((5347443, None), None)]), (40, 𝜙@128b [((5348065, None), vvar_834{stack -312}), ((5347443, None), None)]), (56, 𝜙@64b [((5348065, None), vvar_831{stack -296}), ((5347443, None), None)])])
            v30 = *((&v47 as &char + 48) as &i64);
            *(&v28 as void*) = v49;
            *(&v26 as void*) = v48;
            v22 = v46;
            <T as alloc::string::SpecToString>::spec_to_string(&v5, v53);
            v54 = v22 as i32;
            if v54 {
                if v54 == 1 {
                    v0 = struct8 {
                        field_0: v2
                        field_4: 0
                    };
                } else {
                    v2 = v0.field_0;
                    v1 = 0;
                }
                v44 = *((&v26 as &char + 8) as &i128);
                v42 = *(&v25 as &i128) as u128;
                v6 = v7;
                v10 = v11;
                v33 = v32;
                v40 = v39;
                v37 = v36;
                v8 = v7;
                v12 = v11;
                v18 = v19;
                v16 = v17;
                v14 = v15;
                if !(v29 & 255) {
                    goto LABEL_5199e0;
                }
                loop {
                    v13 = v12;
                    v9 = v8;
                    v56 = v29;
                    if v30 == v55 {
                        break;
                    }
                    if v54 == 2 {
                        goto LABEL_519a22;
                    } else {
                        goto LABEL_5199e9;
                    }
                    do {
LABEL_5199e0:
                        v13 = v10;
                        v9 = v6;
                        if v54 != 2 {
LABEL_5199e9:
                            v59 = uu_csplit::SplitWriter::new_writer(v3) as u64;
                            if v59 {
                                *(v4 as &i64) = 0;
                                *(&v4[8] as &void*) = v59;
                                return;
                            }
                        } else {
LABEL_519a22:
                            *((v3 + 56) as &i8) = 1;
                        }
                        vvar_891{stack -208} = struct40 OrderedDict([(0, 𝜙@128b [((5347828, None), vvar_900{stack -208}), ((5347874, None), vvar_753{stack -208})]), (16, 𝜙@128b [((5347828, None), vvar_906{stack -192}), ((5347874, None), vvar_758{stack -192})]), (32, 𝜙@64b [((5347828, None), vvar_903{stack -176}), ((5347874, None), vvar_757{stack -176})])])
                        uu_csplit::SplitWriter::do_to_match(&v34, v3, v9, v13 as u32, v42 as i64, v43, v24, a3);
                        v18 = v41;
                        v16 = v38;
                        v14 = v34.field_0;
                        v20 = v56;
                        v21 = v30;
                        v58 = v14 as i64;
                        if v58 != 13 {
                            if v56 {
                                if v58 as u32 == 3 && !!v55 && !v30 == 1 {
                                    v35 = <alloc::string::String as core::clone::Clone>::clone(&v5);
                                    *(&v4[32] as &u64) = v35.vec.len;
                                    *(&v4[16] as &i128) = *(&v35.vec.buf.inner.cap as &i128);
                                    *(v4 as &i64) = 4;
                                    *(&v4[8] as &void*) = v55;
                                    return;
                                }
                            } else {
                                if v58 as u32 == 3 {
                                    *(v4 as &i64) = 13;
                                    return;
                                }
                            }
                            *(&v4[32] as &unsigned long) = v18;
                            v4[16] = v16;
                            *(v4 as &u128) = v14;
                            return;
                        }
                        v6 = v9;
                        v10 = v13;
                        v33 = v35;
                        v40 = v41;
                        v37 = v38;
                        v8 = v9;
                        v12 = v13;
                        v32 = v35;
                        v39 = v41;
                        v36 = v38;
                    } while (!v29 as u8);
                }
                v52 = v4;
                v51 = v3;
                goto LABEL_519acc;
            }
            if !((!v27) as u8 as u8 & v26 as i8) {
                v60 = v25;
                if (v26 as i8 & 1) {
                    v8 = v7;
                    v12 = v11;
                    v62 = v60;
                    loop {
                        v63 += v60;
                        uu_csplit::SplitWriter::new_writer(v51);
                        if v64 {
                            break;
                        }
                        uu_csplit::SplitWriter::do_to_line(&v15, v51, v8, v12, v63, a3);
                        if v65 != 13 {
LABEL_519c35:
                            if !!v61 && !v65 as u32 != 1 {
                                v31 = <alloc::string::String as core::clone::Clone>::clone(&v5);
                                v70 = v31.vec.len;
                                *(&v52[32] as &unsigned long) = v70;
                                *(&v52[16] as &i128) = *(&v31.vec.buf.inner.cap as &i128);
                                *(v52 as &i64) = 2;
                                *(&v52[8] as &void*) = v61;
                                v2 = v70 as u32 & -0x100 | 1;
                                v0 = v2 & -0x100 | 1;
                                return;
                            }
                            *(&v52[32] as &unsigned long) = v19;
                            v52[16] = v17;
                            *(v52 as &u128) = v15;
                            return;
                        } else if v27 == v61 {
                            goto LABEL_519acc;
                        }
                    }
                } else {
                    v67 = v60;
                    loop {
                        v68 += v60;
                        uu_csplit::SplitWriter::new_writer(v3);
                        if v64 {
                            break;
                        }
                        uu_csplit::SplitWriter::do_to_line(&v15, v3, v7, v11, v68, a3);
                        if v65 != 13 {
                            goto LABEL_519c35;
                        }
                    }
                    goto LABEL_519c35;
                }
                *(v52 as &i64) = 0;
                *(&v52[8] as &void*) = v64;
                return;
            }
LABEL_519acc:
            v47 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v45);
        } while (v47 as i32 != 3);
    }
    *(v52 as &i64) = 13;
    return;
}
