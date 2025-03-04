fn uu_expand::tabstops_parse(a0: &struct56, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x130]
    let v1: i64;  // [sp-0x128], Other Possible Types: int, struct16
    let v2: Vec<u64>;  // [sp-0x118]
    let v3: struct24;  // [sp-0x108], Other Possible Types: unsigned int, Result<struct16, struct10>, Vec<u64>, int
    let v4: i64;  // [sp-0xf8]
    let v5: struct24;  // [sp-0xf0]
    let v7: struct16;  // [sp-0xd8], Other Possible Types: Vec<u64>
    let v8: iNone;  // [sp-0xd1], Other Possible Types: Vec<u64>
    let v9: struct40;  // [sp-0xc8]
    let v10: Vec<u64>;  // [sp-0xc1]
    let v11: i16;  // [sp-0xa0]
    let v12: iNone;  // [sp-0x98], Other Possible Types: struct24
    let v13: i64;  // [sp-0x88]
    let v14: Result<struct8, struct1>;  // [sp-0x78]
    let v15: iNone;  // [sp-0x68], Other Possible Types: struct24
    let v16: i64;  // [sp-0x58]
    let v17: struct24;  // [sp-0x48]
    let v21: i64;  // rdx
    let v22: i64;  // rax
    let v23: i64;  // rbp
    let v24: i64;  // r13
    let v25: i64;  // rbx
    let v26: i64;  // r12
    let v27: i64;  // rax
    let v28: i32;  // edx
    let v29: i64;  // rcx
    let v30: i64;  // rcx
    let v31: i64;  // rbp
    let v32: i64;  // rsi
    let v33: i64;  // rax
    let v36: i64;  // rcx
    let v38: i64;  // r15
    let v39: i64;  // r15

    if !v21 {
        v3 = vec![8];
        v8 = v3;
        *((a0 + 8) as &i8) = 0;
    }
    v1 = 0;
    v1 = 8;
    v2 = 0;
    v9 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(core::str::<impl str>::trim_start_matches(a1, a2), a2);
    v7 = struct16 {
        field_0: 0
        field_8: v21
    };
    v11 = 1;
    v22 = core::str::iter::SplitInternal<P>::next(&v7);
    if !v22 {
        goto LABEL_4b1969;
    } else {
        v23 = v22;
        v24 = v21;
        v0 = a0;
        v25 = 0;
        v39 = 0;
        do {
            if v24 {
                v26 = 0;
                v27 = <usize as core::iter::range::Step>::forward_unchecked(v26);
                v30 = v29 & -0x100 | 2;
                match (v28) {
                    43 => {
                        v26 = v27;
                        v39 = v30 & 4294967295;
                        if v27 >= v24 {
                            v39 = v30 & 4294967295;
                            break;
                        }
                    }
                    47 => {
                        v30 = v30 & -0x100 | 1;
                    }
                    _ => {
                        v3 = core::str::converts::from_utf8(v23 + v26, v24 - v26);
                        v31 = core::result::Result<T,E>::unwrap(&v3);
                        v14 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v31, a2);
                        match (v14 as i8) {
                            0 => {
                                v32 = v14 as i64;
                                if !v32 {
                                    goto LABEL_4b1a92;
                                } else {
                                    v33 = v2;
                                    if !(!(v33) || !(*((v1 + v33 * 8 - 8) as &i64) >= v32)) {
LABEL_4b1a92:
                                        break;
                                    } else if (v25 as u8 & 1) {
                                        if v39 as u8 == 1 {
                                            v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("/");
                                            v36 = v0;
                                        } else {
                                            v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("+");
                                            v36 = v0;
                                        }
                                        v12 = v3;
                                        *((v36 + 24) as &unsigned long) = v13;
                                        *((v36 + 8) as void*) = v12;
                                        break;
                                    } else {
                                        v1 = alloc::vec::Vec<T,A>::push(v32);
                                        v25 = ((v39 & 255 & 255) ? v25 & 4294967295 & 4294967295 : 1);
                                        break;
                                    }
                                    return struct16 {
                                        field_0: 1
                                        field_32: <UNKNOWN>
                                    };
                                }
                            }
                            2 => {
                                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(v31, v21);
                                v36 = v0;
                                *((v36 + 24) as &unsigned long) = v4;
                                *((v36 + 8) as &i128) = *(&v3.field_0 as &i128);
                                break;
                            }
                            _ => {
                                v38 = core::str::<impl str>::trim_start_matches(v31, v21);
                                *(&v3 as &i32) = 0;
                                if core::slice::<impl [T]>::starts_with(v38, v21, core::char::methods::encode_utf8_raw(47, &v3), 1) as i8 {
                                    v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v38, v21), 1);
                                    v15 = v3;
                                    v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(v38, v21);
                                    v5 = v17;
                                    v4 = v16;
                                    v3 = v15;
                                    return struct56 {
                                        field_0: 1
                                        field_8: v42
                                        field_24: v4
                                        field_32: v5.field_0
                                        field_40: v5.field_8
                                        field_48: v6
                                    };
                                }
                                *(&v3 as &i32) = 0;
                                if !core::slice::<impl [T]>::starts_with(v38, v21, core::char::methods::encode_utf8_raw(43, &v3), 1) as i8 {
                                    v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(v38, v21);
                                    return struct40 {
                                        field_0: 1
                                        field_8: *(&v3.field_0 as &i128)
                                        field_24: v4
                                        field_32: 0x8000000000000000
                                    };
                                }
                            }
                        }
                    }
                }
            }
        } while ((v23 = core::str::iter::SplitInternal<P>::next(&v7), v24 = v21, v23));
        if !v2 {
LABEL_4b1969:
            v7 = vec![8];
            v2 as u192 = v7;
        }
    }
    v10 = v2;
    *(&v8 as &i128) = v1 as i128;
    return struct41 {
        field_0: 0
        field_8: v40
        field_9: v7 as i128
        field_24: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
