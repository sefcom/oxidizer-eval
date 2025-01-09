fn uu_expand::tabstops_parse(a0: &struct56, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x130]
    let v1: i64;  // [sp-0x128], Other Possible Types: struct16, Vec<u64>
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i192;  // [sp-0x108], Other Possible Types: struct24, Vec<u64>, Result<struct16, struct10>
    let v5: i64;  // [sp-0xf8]
    let v6: struct24;  // [sp-0xf0]
    let v8: struct16;  // [bp-0xd8], Other Possible Types: Vec<u64>
    let v9: Vec<u64>;  // [sp-0xd1], Other Possible Types: struct16
    let v10: struct40;  // [sp-0xc8]
    let v11: i64;  // [sp-0xc1]
    let v12: i16;  // [sp-0xa0]
    let v13: struct24;  // [sp-0x98], Other Possible Types: i128
    let v14: i64;  // [sp-0x88]
    let v15: Result<struct8, struct1>;  // [sp-0x78], Other Possible Types: i72
    let v16: i128;  // [sp-0x68], Other Possible Types: struct24
    let v17: i64;  // [sp-0x58]
    let v18: struct24;  // [sp-0x48]
    let v22: i64;  // rdx
    let v23: i64;  // rax
    let v24: i64;  // rbx
    let v25: i64;  // r15
    let v27: i64;  // r13
    let v28: i64;  // r13
    let v30: i64;  // r12
    let v31: i64;  // rax
    let v32: i32;  // edx
    let v33: i64;  // rcx
    let v34: i64;  // rcx
    let v35: i64;  // rbp
    let v36: i64;  // rsi
    let v37: i64;  // rax
    let v41: i64;  // r15

    if !v22 {
        v4 = vec![8];
        v9 = v4;
        *((a0 + 8) as &i8) = 0;
    }
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v10 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(core::str::<impl str>::trim_start_matches(a1, a2), v22);
    v8 = struct16 {
        field_0: 0
        field_8: v22
    };
    v12 = 1;
    v23 = core::str::iter::SplitInternal<P>::next(&v8);
    if !v23 {
        goto LABEL_4b1969;
    } else {
        v0 = a0;
        v24 = 0;
        v25 = 0;
        do {
            v27 = v28;
            if v27 {
                v30 = 0;
                v31 = <usize as core::iter::range::Step>::forward_unchecked(v30);
                v34 = v33 & -0x100 | 2;
                match (v32) {
                    43 => {
                        v25 = v34 & 4294967295;
                        if v31 >= v27 {
                            v25 = v34 & 4294967295;
                            break;
                        }
                    }
                    47 => {
                        v34 = v34 & -0x100 | 1;
                    }
                    _ => {
                        v4 = core::str::converts::from_utf8(v23 + v30, v27 - v30);
                        v35 = core::result::Result<T,E>::unwrap(&v4);
                        v15 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v35, v22);
                        match (v15) {
                            0 => {
                                v36 = v15;
                                if !v36 {
                                    goto LABEL_4b1a92;
                                } else {
                                    v37 = v3;
                                    if !(!(v37) || !(*((v2 + v37 * 8 - 8) as &i64) >= v36)) {
LABEL_4b1a92:
                                        break;
                                    } else if (v24 & 1) {
                                        if v25 != 1 {
                                            v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("+");
                                        } else {
                                            v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("/");
                                        }
                                        v13 = v4;
                                        *((v0 + 24) as &i64) = v14;
                                        *((v0 + 8) as &i128) = v13;
                                        break;
                                    } else {
                                        v1 = alloc::vec::Vec<T,A>::push(v36);
                                        v24 = ((v25 & 255 & 255) ? 1 : v24 & 4294967295 & 4294967295);
                                        break;
                                    }
                                    return struct16 {
                                        field_0: 1
                                        field_32: <UNKNOWN>
                                    };
                                }
                            }
                            2 => {
                                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v35, v22);
                                v0 = v0;
                                *((v0 + 24) as &i64) = v5;
                                *((v0 + 8) as &i192) = v4;
                                break;
                            }
                            _ => {
                                v41 = core::str::<impl str>::trim_start_matches(v35, v22);
                                v4 = 0;
                                if core::slice::<impl [T]>::starts_with(v41, v22, core::char::methods::encode_utf8_raw(47, &v4), 1) as i8 {
                                    v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v41, v22), 1);
                                    v16 = v4;
                                    v18 = <T as alloc::slice::hack::ConvertVec>::to_vec(v41, v22);
                                    v6 = v18;
                                    v5 = v17;
                                    v4 = v16;
                                    return struct56 {
                                        field_0: 1
                                        field_8: v45
                                        field_24: v5
                                        field_32: v6
                                        field_40: *((&v6 as &char + 8) as &i64)
                                        field_48: v7
                                    };
                                }
                                v4 = 0;
                                if !core::slice::<impl [T]>::starts_with(v41, v22, core::char::methods::encode_utf8_raw(43, &v4), 1) as i8 {
                                    v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v41, v22);
                                    return struct40 {
                                        field_0: 1
                                        field_8: v4
                                        field_24: v5
                                        field_32: 0x8000000000000000
                                    };
                                }
                            }
                        }
                    }
                }
            }
        } while ((v23 = core::str::iter::SplitInternal<P>::next(&v8), v23));
        if !v3 {
LABEL_4b1969:
            v8 = vec![8];
            v1 = v8;
        }
    }
    v11 = v3;
    v9 = v1;
    return struct41 {
        field_0: 0
        field_8: v43
        field_9: v8
        field_24: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
