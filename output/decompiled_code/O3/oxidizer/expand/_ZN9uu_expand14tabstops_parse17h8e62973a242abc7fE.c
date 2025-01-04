fn uu_expand::tabstops_parse(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x130]
    let v1: i192;  // [sp-0x128], Other Possible Types: struct16
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i128;  // [sp-0x108], Other Possible Types: struct24, Result<struct16, struct10>
    let v5: i64;  // [sp-0xf8]
    let v6: i192;  // [bp-0xf0]
    let v7: i64;  // [sp-0xe0]
    let v8: i192;  // [bp-0xd8], Other Possible Types: struct16
    let v9: i128;  // [bp-0xd1]
    let v10: struct40;  // [sp-0xc8], Other Possible Types: i320
    let v11: i64;  // [sp-0xc1]
    let v12: i16;  // [sp-0xa0]
    let v13: i128;  // [bp-0x98]
    let v14: i64;  // [sp-0x88]
    let v15: i64;  // [sp-0x78], Other Possible Types: Result<struct8, struct1>
    let v16: i8;  // [bp-0x70]
    let v17: i128;  // [bp-0x68]
    let v18: i64;  // [sp-0x58]
    let v19: struct24;  // [sp-0x48], Other Possible Types: i192
    let v21: i64;  // rbx
    let v23: i64;  // rdx
    let v24: i64;  // rsi
    let v25: i64;  // rax
    let v26: i64;  // rbx
    let v27: i64;  // r15
    let v30: i64;  // r13
    let v31: i64;  // rdx
    let v32: i64;  // rsi
    let v33: i64;  // r13
    let v35: i64;  // r12
    let v36: i64;  // rax
    let v37: i64;  // rcx
    let v38: i64;  // rcx
    let v39: i64;  // rbp
    let v40: i64;  // rsi
    let v41: i64;  // rax
    let v42: i64;  // rax
    let v43: i64;  // rax
    let v44: i64;  // rbx
    let v45: i64;  // r15
    let v46: i64;  // r15
    let v47: i8;  // al
    let v48: i64;  // rax
    let v49: i64;  // rax
    let v50: i128;  // xmm0

    v21 = a0;
    if v23 {
        v1 = 0;
        v2 = 8;
        v3 = 0;
        v10 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(core::str::<impl str>::trim_start_matches(a1, a2), v23);
        v8 = struct16 {
            field_0: 0
            field_8: v23
        };
        v12 = 1;
        v25 = core::str::iter::SplitInternal<P>::next(&v8, v24, v23);
        if !v25 {
            v27 = 0;
            goto LABEL_4b1969;
        } else {
            v0 = a0;
            v26 = 0;
            v27 = 0;
            do {
                v30 = v33;
                if v30 {
                    v35 = 0;
                    v36 = <usize as core::iter::range::Step>::forward_unchecked(v35);
                    v31 = *((v25 + v35) as &i8);
                    v38 = v37 | -0x100 | 2;
                    switch (v31) {
                    case 43:
                        v27 = v38 & 4294967295;
                        if v36 >= v30 {
                            v27 = v38 & 4294967295;
                            continue;
                        }
                    case 47:
                        v38 = v38 | -0x100 | 1;
                    default:
                        v4 = core::str::converts::from_utf8(v25 + v35, v30 - v35);
                        v39 = core::result::Result<T,E>::unwrap(&v4);
                        v15 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v39, v23);
                        switch (v15) {
                        case 0:
                            v40 = v16;
                            if !v40 {
                                v43 = 9223372036854775811;
                                goto LABEL_4b1aa0;
                            } else {
                                v41 = v3;
                                if !(!(v41) || !(*((v2 + v41 * 8 - 8) as &i64) >= v40)) {
                                    v43 = 9223372036854775813;
LABEL_4b1aa0:
                                    break;
                                } else if (v26 & 1) {
                                    if v27 == 1 {
                                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("/");
                                    } else {
                                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("+");
                                    }
                                    v13 = v4;
                                    *((v0 + 24) as &i64) = v14;
                                    *((v0 + 8) as &i128) = v13;
                                    v43 = 9223372036854775810;
                                    break;
                                } else {
                                    v1 = alloc::vec::Vec<T,A>::push(v40, v23);
                                    v26 = ((v27 & 255 & 255) ? 1 : v26 & 4294967295 & 4294967295);
                                    continue;
                                }
                                *((v0 + 32) as &i64) = v43;
                                *(v0 as &i64) = 1;
                                break;
                            }
                        case 2:
                            v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v39, v23);
                            v0 = v0;
                            *((v0 + 24) as &i64) = v5;
                            *((v0 + 8) as &i192) = v4;
                            v43 = 9223372036854775812;
                            break;
                        default:
                            v44 = v0;
                            v45 = core::str::<impl str>::trim_start_matches(v39, v23);
                            v4 = 0;
                            if core::slice::<impl [T]>::starts_with(v45, v23, core::char::methods::encode_utf8_raw(47, &v4), 1) as i8 {
LABEL_4b1b20:
                                v49 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v45, v23);
                                if !v49 {
                                    core::str::slice_error_fail(); /* do not return */
                                }
                                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v49, 1);
                                v17 = v4;
                                v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(v45, v23);
                                v6 = v19;
                                v5 = v18;
                                v50 = v17;
                                v4 = v50;
                                *((v44 + 40) as &i64) = *((&v6 as &char + 8) as &i64);
                                *((v44 + 48) as &i64) = v7;
                                *((v44 + 24) as &i64) = v5;
                                *((v44 + 32) as &i192) = v6;
                                *((v44 + 8) as &i128) = v50;
                                *(v44 as &i64) = 1;
                                break;
                            } else {
                                v4 = 0;
                                if (v25 = core::str::iter::SplitInternal<P>::next(&v8, v32, v31), v25) {
                                    goto LABEL_4b1b20;
                                }
                                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v45, v23);
                                *((v44 + 24) as &i64) = v5;
                                *((v44 + 8) as &i192) = v4;
                                *((v44 + 32) as &i64) = 0x8000000000000000;
                                *(v44 as &i64) = 1;
                                break;
                            }
                            return v48;
                        }
                    }
                }
            } while ((v25 = core::str::iter::SplitInternal<P>::next(&v8, v32, v31), v25));
            v42 = v3;
            v21 = v0;
            v3 = v3;
            if !v42 {
LABEL_4b1969:
                v8 = vec![8];
                v42 = v10;
                v1 = v8;
                v3 = v3;
            }
        }
        v47 = (v42 < 2 ? 0 : v46 & 4294967295 & 4294967295);
        v11 = v3;
        v9 = v1;
        *((v21 + 8) as &i8) = v47;
    } else {
        v4 = vec![8];
        v9 = v4;
        *((a0 + 8) as &i8) = 0;
    }
    v48 = *((&v9 as &char + 8) as &i64);
    *((v21 + 9) as &i192) = v8;
    *((v21 + 24) as &i64) = v48;
    *((v21 + 32) as &i64) = v11;
    *(v21 as &i64) = 0;
    return v48;
}
