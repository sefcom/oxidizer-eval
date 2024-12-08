fn uu_expand::tabstops_parse(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x130]
    let v1: i128;  // [sp-0x128], Other Possible Types: struct16
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i192;  // [sp-0x108], Other Possible Types: struct24, Result<struct16, struct10>
    let v5: i128;  // [sp-0xf0]
    let v6: i64;  // [sp-0xe0]
    let v7: i192;  // [bp-0xd8], Other Possible Types: struct16, struct24
    let v8: i128;  // [bp-0xd1]
    let v9: struct40;  // [sp-0xc8]
    let v10: i64;  // [sp-0xc1]
    let v11: i16;  // [sp-0xa0]
    let v12: i128;  // [sp-0x98]
    let v13: i64;  // [sp-0x88]
    let v14: i64;  // [sp-0x78], Other Possible Types: Result<struct8, struct1>
    let v15: i8;  // [bp-0x70]
    let v16: i128;  // [sp-0x68]
    let v17: i64;  // [sp-0x58]
    let v18: i192;  // [sp-0x48], Other Possible Types: struct24
    let v20: i64;  // rbx
    let v22: i64;  // rdx
    let v23: i64;  // rax
    let v24: i64;  // rsi
    let v25: i64;  // rax
    let v26: i64;  // r15
    let v27: i64;  // rbx
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
    let v44: i64;  // rax
    let v45: i64;  // rbx
    let v46: i64;  // r15
    let v47: i64;  // r15
    let v48: i8;  // al
    let v49: i64;  // rax
    let v50: i64;  // rax
    let v51: i128;  // xmm0

    v20 = a0;
    if v22 {
        v1 = 0;
        v2 = 8;
        v3 = 0;
        v9 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(core::str::<impl str>::trim_start_matches(a1, a2), v22);
        v7 = struct16 {
            field_0: 0
            field_8: v22
        };
        v11 = 1;
        v25 = core::str::iter::SplitInternal<P>::next(&v7, v24, v22);
        if !v25 {
            v26 = 0;
            goto LABEL_4b2479;
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
                        v26 = v38 & 4294967295;
                        if v36 >= v30 {
                            v26 = v38 & 4294967295;
                            continue;
                        }
                    case 47:
                        v38 = v38 | -0x100 | 1;
                    default:
                        v4 = core::str::converts::from_utf8(v25 + v35, v30 - v35);
                        v39 = core::result::Result<T,E>::unwrap(&v4);
                        v14 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v39, v22);
                        switch (v14) {
                        case 0:
                            v40 = v15;
                            if !v40 {
                                v43 = 9223372036854775811;
                                goto LABEL_4b25b0;
                            } else {
                                v41 = v3;
                                if !(!(v41) || !(*((v2 + (v41 << 3) - 8) as &i64) >= v40)) {
                                    v43 = 9223372036854775813;
LABEL_4b25b0:
                                    break;
                                } else if (v27 & 1) {
                                    if v26 == 1 {
                                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("/");
                                    } else {
                                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("+");
                                    }
                                    v13 = v4.field_16;
                                    v12 = v4;
                                    *((v0 + 24) as &i64) = v13;
                                    *((v0 + 8) as &i128) = v12;
                                    v43 = 9223372036854775810;
                                    break;
                                } else {
                                    v1 = alloc::vec::Vec<T,A>::push(v40, v22);
                                    v27 = ((v26 & 255 & 255) ? 1 : v27 & 4294967295 & 4294967295);
                                    continue;
                                }
                                *((v0 + 32) as &i64) = v43;
                                *(v0 as &i64) = 1;
                                break;
                            }
                        case 2:
                            v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v39, v22);
                            v0 = v0;
                            *((v0 + 24) as &struct24) = v4.field_16;
                            *((v0 + 8) as &i192) = v4;
                            v43 = 9223372036854775812;
                            break;
                        default:
                            v45 = v0;
                            v46 = core::str::<impl str>::trim_start_matches(v39, v22);
                            v4 = 0;
                            if core::slice::<impl [T]>::starts_with(v46, v22, core::char::methods::encode_utf8_raw(47, &v4), 1) as i8 {
LABEL_4b2630:
                                v50 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v46, v22);
                                if !v50 {
                                    core::str::slice_error_fail(); /* do not return */
                                }
                                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v50, 1);
                                v17 = v4.field_16;
                                v16 = v4;
                                v18 = <T as alloc::slice::hack::ConvertVec>::to_vec(v46, v22);
                                v6 = *((&v18 as &char + 16) as &i64);
                                v5 = v18;
                                v4.field_16 = vvar_635{stack -88};
                                v51 = v16;
                                v4 = v51;
                                *((v45 + 40) as &i64) = *((&v5 as &char + 8) as &i64);
                                *((v45 + 48) as &i64) = v6;
                                *((v45 + 24) as &struct24) = v4.field_16;
                                *((v45 + 32) as &i128) = v5;
                                *((v45 + 8) as &i128) = v51;
                                *(v45 as &i64) = 1;
                                break;
                            } else {
                                v4 = 0;
                                if (v25 = core::str::iter::SplitInternal<P>::next(&v7, v32, v31), v25) {
                                    goto LABEL_4b2630;
                                }
                                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v46, v22);
                                *((v45 + 24) as &struct24) = v4.field_16;
                                *((v45 + 8) as &i192) = v4;
                                *((v45 + 32) as &i64) = 0x8000000000000000;
                                *(v45 as &i64) = 1;
                                break;
                            }
                            return v49;
                        }
                    }
                }
            } while ((v25 = core::str::iter::SplitInternal<P>::next(&v7, v32, v31), v25));
            v42 = v3;
            v20 = v0;
            if !v42 {
LABEL_4b2479:
                v44 = alloc::alloc::Global::alloc_impl(8, 8);
                *(v44 as &i64) = 8;
                v7 = alloc::slice::hack::into_vec(v44, 1);
                v42 = *((&v7 as &char + 16) as &i64);
                v3 = v42;
                v1 = v7;
            }
        }
        v48 = (v42 < 2 ? 0 : v47 & 4294967295 & 4294967295);
        v9.7 = vvar_585{stack -280};
        v8 = v1;
        *((v20 + 8) as &i8) = v48;
    } else {
        v23 = alloc::alloc::Global::alloc_impl(8, 8);
        *(v23 as &i64) = 8;
        v4 = alloc::slice::hack::into_vec(v23, 1);
        v10 = v4.field_16;
        v8 = v4;
        *((a0 + 8) as &i8) = 0;
    }
    v49 = *((&v8 as &char + 8) as &i64);
    *((v20 + 9) as &i192) = v7;
    *((v20 + 24) as &i64) = v49;
    *((v20 + 32) as &i64) = v10;
    *(v20 as &i64) = 0;
    return v49;
}
