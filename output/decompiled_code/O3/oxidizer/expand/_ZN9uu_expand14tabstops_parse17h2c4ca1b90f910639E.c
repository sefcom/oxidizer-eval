fn uu_expand::tabstops_parse(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x130]
    let v1: i192;  // [sp-0x128], Other Possible Types: struct16
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i192;  // [sp-0x108], Other Possible Types: struct24, Result<struct16, struct10>
    let v5: i192;  // [bp-0xf0]
    let v6: i64;  // [sp-0xe0]
    let v7: i192;  // [bp-0xd8], Other Possible Types: struct24, struct16
    let v8: i192;  // [bp-0xd1]
    let v9: struct40;  // [sp-0xc8]
    let v10: i64;  // [sp-0xc1]
    let v11: i16;  // [sp-0xa0]
    let v12: i192;  // [bp-0x98]
    let v13: i64;  // [sp-0x88]
    let v14: Result<struct8, struct1>;  // [sp-0x78], Other Possible Types: i64
    let v15: i8;  // [bp-0x70]
    let v16: i192;  // [bp-0x68]
    let v17: i192;  // [sp-0x48], Other Possible Types: struct24
    let v19: i64;  // rbx
    let v21: i64;  // rdx
    let v22: i64;  // rax
    let v23: i64;  // rsi
    let v24: i64;  // rax
    let v25: i64;  // r15
    let v26: i64;  // rbx
    let v29: i64;  // r13
    let v30: i64;  // rdx
    let v31: i64;  // rsi
    let v32: i64;  // r13
    let v34: i64;  // r12
    let v35: i64;  // rax
    let v36: i64;  // rcx
    let v37: i64;  // rcx
    let v38: i64;  // rbp
    let v39: i64;  // rsi
    let v40: i64;  // rax
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

    v19 = a0;
    if v21 {
        v1 = 0;
        v2 = 8;
        v3 = 0;
        v9 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(core::str::<impl str>::trim_start_matches(a1, a2), v21);
        v7 = struct16 {
            field_0: 0
            field_8: v21
        };
        v11 = 1;
        v24 = core::str::iter::SplitInternal<P>::next(&v7, v23, v21);
        if !v24 {
            v25 = 0;
            goto LABEL_4b2479;
        } else {
            v0 = a0;
            v25 = 0;
            v26 = 0;
            do {
                v29 = v32;
                if v29 {
                    v34 = 0;
                    v35 = <usize as core::iter::range::Step>::forward_unchecked(v34);
                    v30 = *((v24 + v34) as &i8);
                    v37 = v36 | -0x100 | 2;
                    switch (v30) {
                    case 43:
                        v25 = v37 & 4294967295;
                        if v35 >= v29 {
                            v25 = v37 & 4294967295;
                            continue;
                        }
                    case 47:
                        v37 = v37 | -0x100 | 1;
                    default:
                        v4 = core::str::converts::from_utf8(v24 + v34, v29 - v34);
                        v38 = core::result::Result<T,E>::unwrap(&v4);
                        v14 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v38, v21);
                        switch (v14) {
                        case 0:
                            v39 = v15;
                            if !v39 {
                                v42 = 9223372036854775811;
                                goto LABEL_4b25b0;
                            } else {
                                v40 = v3;
                                if !(!(v40) || !(*((v2 + (v40 << 3) - 8) as &i64) >= v39)) {
                                    v42 = 9223372036854775813;
LABEL_4b25b0:
                                    break;
                                } else if (v26 & 1) {
                                    if v25 != 1 {
                                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("+");
                                    } else {
                                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("/");
                                    }
                                    v12 = v4;
                                    *((v0 + 24) as &i64) = v13;
                                    *((v0 + 8) as &i128) = v12;
                                    v42 = 9223372036854775810;
                                    break;
                                } else {
                                    v1 = alloc::vec::Vec<T,A>::push(v39, v21);
                                    v26 = ((v25 & 255 & 255) ? 1 : v26 & 4294967295 & 4294967295);
                                    continue;
                                }
                                *((v0 + 32) as &i64) = v42;
                                *(v0 as &i64) = 1;
                                break;
                            }
                        case 2:
                            v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v38, v21);
                            v0 = v0;
                            *((v0 + 24) as &struct24) = v4.field_16;
                            *((v0 + 8) as &i192) = v4;
                            v42 = 9223372036854775812;
                            break;
                        default:
                            v44 = v0;
                            v45 = core::str::<impl str>::trim_start_matches(v38, v21);
                            v4 = 0;
                            if core::slice::<impl [T]>::starts_with(v45, v21, core::char::methods::encode_utf8_raw(47, &v4), 1) as i8 {
LABEL_4b2630:
                                v49 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v45, v21);
                                if !v49 {
                                    core::str::slice_error_fail(); /* do not return */
                                }
                                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v49, 1);
                                v16 = v4;
                                v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(v45, v21);
                                v5 = v17;
                                v4.field_16 = vvar_635{stack -88};
                                v50 = v16;
                                v4 = v50;
                                *((v44 + 40) as &i64) = *((&v5 as &char + 8) as &i64);
                                *((v44 + 48) as &i64) = v6;
                                *((v44 + 24) as &struct24) = v4.field_16;
                                *((v44 + 32) as &i192) = v5;
                                *((v44 + 8) as &i128) = v50;
                                *(v44 as &i64) = 1;
                                break;
                            } else {
                                v4 = 0;
                                if (v24 = core::str::iter::SplitInternal<P>::next(&v7, v31, v30), v24) {
                                    goto LABEL_4b2630;
                                }
                                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v45, v21);
                                *((v44 + 24) as &struct24) = v4.field_16;
                                *((v44 + 8) as &i192) = v4;
                                *((v44 + 32) as &i64) = 0x8000000000000000;
                                *(v44 as &i64) = 1;
                                break;
                            }
                            return v48;
                        }
                    }
                }
            } while ((v24 = core::str::iter::SplitInternal<P>::next(&v7, v31, v30), v24));
            v41 = v3;
            v19 = v0;
            v3 = v3;
            if !v41 {
LABEL_4b2479:
                v43 = alloc::alloc::Global::alloc_impl(8, 8);
                *(v43 as &i64) = 8;
                v7 = alloc::slice::hack::into_vec(v43, 1);
                v41 = *((&v7 as &char + 16) as &i64);
                v1 = v7;
                v3 = v3;
            }
        }
        v47 = (v41 < 2 ? 0 : v46 & 4294967295 & 4294967295);
        v9.7 = vvar_585{stack -280};
        v8 = v1;
        *((v19 + 8) as &i8) = v47;
    } else {
        v22 = alloc::alloc::Global::alloc_impl(8, 8);
        *(v22 as &i64) = 8;
        v4 = alloc::slice::hack::into_vec(v22, 1);
        v8 = v4;
        *((a0 + 8) as &i8) = 0;
    }
    v48 = *((&v8 as &char + 8) as &i64);
    *((v19 + 9) as &i192) = v7;
    *((v19 + 24) as &i64) = v48;
    *((v19 + 32) as &i64) = v10;
    *(v19 as &i64) = 0;
    return v48;
}
