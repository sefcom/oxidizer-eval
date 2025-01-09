fn uu_expand::tabstops_parse(a0: &struct56, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x130]
    let v1: Vec<u64>;  // [sp-0x128], Other Possible Types: struct16, i64
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i128;  // [sp-0x108], Other Possible Types: struct24, Vec<u64>, Result<struct16, struct10>
    let v5: i64;  // [sp-0xf8]
    let v6: struct24;  // [sp-0xf0]
    let v8: struct16;  // [bp-0xd8], Other Possible Types: Vec<u64>
    let v9: struct16;  // [sp-0xd1], Other Possible Types: Vec<u64>
    let v10: struct40;  // [sp-0xc8]
    let v11: i64;  // [sp-0xc1]
    let v12: i16;  // [sp-0xa0]
    let v13: i128;  // [sp-0x98], Other Possible Types: struct24
    let v14: i64;  // [sp-0x88]
    let v15: i64;  // [sp-0x78], Other Possible Types: Result<struct8, struct1>
    let v16: i8;  // [bp-0x70]
    let v17: i128;  // [sp-0x68], Other Possible Types: struct24
    let v18: i64;  // [sp-0x58]
    let v19: struct24;  // [sp-0x48]
    let v23: i64;  // rdx
    let v24: i64;  // rax
    let v25: i64;  // rbx
    let v26: i64;  // r15
    let v29: i64;  // r13
    let v30: i64;  // r13
    let v32: i64;  // r12
    let v33: i64;  // rax
    let v34: i32;  // edx
    let v35: i64;  // rcx
    let v36: i64;  // rcx
    let v37: i64;  // rbp
    let v38: i64;  // rsi
    let v39: i64;  // rax
    let v43: i64;  // r15
    let v47: i64;  // rax

    if !v23 {
        v4 = vec![8];
        v9 = v4;
        return struct41 {
            field_0: 0
            field_8: 0
            field_9: v8
            field_24: <UNKNOWN>
            field_32: <UNKNOWN>
        };
    }
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v10 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(core::str::<impl str>::trim_start_matches(a1, a2), v23);
    v8 = struct16 {
        field_0: 0
        field_8: v23
    };
    v12 = 1;
    v24 = core::str::iter::SplitInternal<P>::next(&v8);
    if !v24 {
        goto LABEL_4b1969;
    } else {
        v0 = a0;
        v25 = 0;
        v26 = 0;
        do {
            v29 = v30;
            if v29 {
                v32 = 0;
                v33 = <usize as core::iter::range::Step>::forward_unchecked(v32);
                v36 = v35 | -0x100 | 2;
                switch (v34) {
                case 43:
                    v26 = v36 & 4294967295;
                    if v33 >= v29 {
                        v26 = v36 & 4294967295;
                        break;
                    }
                case 47:
                    v36 = v36 | -0x100 | 1;
                default:
                    v4 = core::str::converts::from_utf8(v24 + v32, v29 - v32);
                    v37 = core::result::Result<T,E>::unwrap(&v4);
                    v15 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v37, v23) as u64;
                    switch (v15) {
                    case 0:
                        v38 = v16;
                        if !v38 {
                            goto LABEL_4b1a92;
                        } else {
                            v39 = v3;
                            if !(!(v39) || !(*((v2 + v39 * 8 - 8) as &i64) >= v38)) {
LABEL_4b1a92:
                                break;
                            } else if (v25 & 1) {
                                if v26 == 1 {
                                    v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("/");
                                } else {
                                    v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("+");
                                }
                                v13 = v4;
                                *((v0 + 24) as &i64) = v14;
                                *((v0 + 8) as &i128) = v13;
                                break;
                            } else {
                                v1 = alloc::vec::Vec<T,A>::push(v38);
                                v25 = ((v26 & 255 & 255) ? 1 : v25 & 4294967295 & 4294967295);
                                break;
                            }
                            return struct16 {
                                field_0: 1
                                field_32: <UNKNOWN>
                            };
                        }
                    case 2:
                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v37, v23);
                        v0 = v0;
                        *((v0 + 24) as &i64) = v5;
                        *((v0 + 8) as &i192) = v4;
                        break;
                    default:
                        v43 = core::str::<impl str>::trim_start_matches(v37, v23);
                        v4 = 0;
                        if !core::slice::<impl [T]>::starts_with(v43, v23, core::char::methods::encode_utf8_raw(47, &v4), 1) as i8 {
                            v4 = 0;
                            if !core::slice::<impl [T]>::starts_with(v43, v23, core::char::methods::encode_utf8_raw(43, &v4), 1) as i8 {
                                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v43, v23);
                                return struct40 {
                                    field_0: 1
                                    field_8: v4
                                    field_24: v5
                                    field_32: 0x8000000000000000
                                };
                            }
                        }
                        v47 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v43, v23);
                        if !v47 {
                            core::str::slice_error_fail(v43, v23, 0, 1, "src/uu/expand/src/expand.rs"); /* do not return */
                        }
                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v47, 1);
                        v17 = v4;
                        v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(v43, v23);
                        v6 = v19;
                        v5 = v18;
                        v4 = v17;
                        return struct56 {
                            field_0: 1
                            field_8: v48
                            field_24: v5
                            field_32: v6
                            field_40: *((&v6 as &char + 8) as &i64)
                            field_48: v7
                        };
                    }
                }
            }
        } while ((v24 = core::str::iter::SplitInternal<P>::next(&v8), v24));
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
        field_8: v45
        field_9: v8
        field_24: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
