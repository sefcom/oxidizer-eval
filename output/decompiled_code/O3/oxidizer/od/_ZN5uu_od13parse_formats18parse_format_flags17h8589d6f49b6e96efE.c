fn uu_od::parse_formats::parse_format_flags(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x2c8]
    let v1: i128;  // [sp-0x198], Other Possible Types: Option<struct32>
    let v2: i64;  // [sp-0x188]
    let v3: i64;  // [sp-0x170], Other Possible Types: struct16
    let v4: i64;  // [sp-0x168]
    let v5: i64;  // [sp-0x160]
    let v6: i128;  // [bp-0x158], Other Possible Types: struct24, struct33
    let v7: i8;  // [bp-0x150]
    let v8: i128;  // [sp-0x148]
    let v9: i8;  // [sp-0x140]
    let v10: i8;  // [sp-0x138]
    let v11: i8;  // [bp-0x130]
    let v12: i64;  // [sp-0x128]
    let v13: i64;  // [sp-0x120]
    let v14: i64;  // [sp-0x118]
    let v15: i64;  // [sp-0x110]
    let v16: i64;  // [sp-0x108]
    let v17: i64;  // [sp-0x100]
    let v18: i64;  // [sp-0xf8]
    let v19: i64;  // [sp-0xf0]
    let v20: i128;  // [sp-0xe8]
    let v21: i64;  // [sp-0xd8]
    let v22: i128;  // [sp-0xc8]
    let v23: i64;  // [sp-0xb8]
    let v24: i128;  // [sp-0xa8]
    let v25: i64;  // [sp-0x98]
    let v26: i256;  // [sp-0x90], Other Possible Types: struct32
    let v27: struct32;  // [sp-0x70], Other Possible Types: i256
    let v28: i256;  // [sp-0x50], Other Possible Types: struct32
    let v30: i64;  // r15
    let v31: i64;  // rsi
    let v32: i64;  // r14
    let v33: i64;  // r13
    let v34: i64;  // rbp
    let v35: i256;  // ymm0
    let v36: i256;  // ymm1
    let v37: struct8;  // rax
    let v38: i64;  // rbx
    let v39: i64;  // r12
    let v40: i64;  // 4098
    let v41: i128;  // xmm0
    let v42: i128;  // xmm0
    let v43: i64;  // rdx
    let v44: i64;  // rsi
    let v45: i64;  // rdx
    let v46: i64;  // rax
    let v47: i64;  // rdx
    let v48: i64;  // rdx
    let v49: i64;  // rdx
    let v50: i64;  // rcx
    let v51: i32;  // eax
    let v52: i128;  // xmm0
    let v53: i256;  // ymm0
    let v54: i128;  // xmm1
    let v55: i64;  // 4098
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i64;  // 4098
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i64;  // rcx
    let v62: i64;  // rcx
    let v63: i64;  // rcx

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v17 = a1;
    v18 = a1 + a2 * 24;
    v19 = 1;
    v30 = &v7;
    v31 = 1;
    v32 = 0;
    v33 = &v11;
    v34 = &v6;
    if !(!1) {
        goto LABEL_4ca960;
    }
    loop {
        v37 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v37 {
            loop {
                if (v32 & 1) {
                    uu_od::parse_formats::parse_type_string(v34, *((v37 + 8) as &i64), *((v37 + 16) as &i64));
                    v40 = v6;
                    v41 = *(v30 as &i128);
                    v1 = v41;
                    v2 = *((v30 + 16) as &i64);
                    if v40 {
                        v62 = a0;
                        *((v62 + 24) as &i64) = v2;
                        *((v62 + 8) as &i128) = v1;
                        *(v62 as &i64) = 1;
                        return a0;
                    }
                    v21 = v2;
                    v42 = v1;
                    v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42;
                    v20 = v42;
                    v26 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v20);
                    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v3, &v26, v43);
                    v32 = 0;
                    v1 = v1;
                } else {
                    v38 = *((v37 + 8) as &i64);
                    v39 = *((v37 + 16) as &i64);
                    if !core::slice::<impl [T]>::starts_with(v38, v39, "--") as i8 {
                        v6 = 0;
                        v1 = v1;
                        if core::slice::<impl [T]>::starts_with(v38, v39, core::char::methods::encode_utf8_raw(45, v34), v43) as i8 {
                            v14 = 0;
                            v15 = 1;
                            v16 = 0;
                            v11 = v38;
                            v12 = v39 + v38;
                            v13 = 1;
                            v44 = 1;
                            loop {
                                v13 = v13;
                                if v44 {
                                    v13 = 0;
                                    if !(!<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(v33, v44, v45)) || !(v46) || !(v43 != 0x110000) {
                                        break;
                                    }
                                } else {
                                    v46 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::next(v33, v44, v45);
                                    v47 = v46 & 4294967295;
                                    v13 = v13;
                                    v13 = v13;
                                    if v47 == 0x110000 {
                                        break;
                                    }
                                }
                                v49 = v48;
                                v44 = v13;
                                if (v32 & 1) {
                                    v51 = alloc::string::String::push(&v14, v49 & 4294967295, v49) | -0x100 | v32 & 255;
                                    goto LABEL_4cabf2;
                                }
                                v50 = v49 - 65 & 4294967295;
                                if v50 <= 54 {
                                    v51 = v46 | -0x100 | 1;
                                    if v50 == 51 {
                                        goto LABEL_4cabf2;
                                    }
                                    v0 = 18016597533007873;
                                    v13 = v44;
                                    if (*((&v0 as &u8 + ((v50 & 63) >> 3)) as &i8) >> (v50 & 63 & 7) & 1) {
                                        break;
                                    }
                                }
                                v1 = uu_od::parse_formats::od_argument_traditional_format(v49 & 4294967295);
                                match v1 {
                                    Some(_) => {
                                        v52 = v1;
                                        v53 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u128 as u256;
                                        v54 = *((&v1 as &char + 16) as &i128);
                                        v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u128 as u256;
                                        v8 = v54;
                                        v6 = v52;
                                        v10 = 0;
                                        v3 = alloc::vec::Vec<T,A>::push(v34);
                                    },
                                    None => {
                                        v51 = v32 as i32;
                                    },
                                }
LABEL_4cabf2:
                                v32 = v51;
                                v13 = v44;
                            }
                            if v16 {
                                uu_od::parse_formats::parse_type_string(v34, v15, v16);
                                v58 = v6;
                                v59 = *(v30 as &i128);
                                v1 = v59;
                                v2 = *((v30 + 16) as &i64);
                                if v58 {
                                    v63 = a0;
                                    *((v63 + 24) as &i64) = v2;
                                    *((v63 + 8) as &i128) = v1;
                                    *(v63 as &i64) = 1;
                                    return a0;
                                }
                                v25 = v2;
                                v60 = v1;
                                v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
                                v24 = v60;
                                v28 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v24);
                                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v3, &v28, v43);
                                v32 = 0;
                            }
                            v1 = v1;
                        }
                    } else {
                        if v39 == 2 {
                            goto LABEL_4cad6c;
                        }
                        if core::slice::<impl [T]>::starts_with(v38, v39, "--format=") as i8 {
                            v7 = v38;
                            v8 = v38 + v39;
                            v9 = 0;
                            v6 = 1;
                            <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(v33, v34);
                            uu_od::parse_formats::parse_type_string(v34, v12, v13);
                            v55 = v6;
                            v56 = *(v30 as &i128);
                            v1 = v56;
                            v2 = *((v30 + 16) as &i64);
                            if v55 {
                                v61 = a0;
                                *((v61 + 24) as &i64) = v2;
                                *((v61 + 8) as &i128) = v1;
                                *(v61 as &i64) = 1;
                                return a0;
                            }
                            v23 = v2;
                            v57 = v1;
                            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
                            v22 = v57;
                            v27 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v22);
                            v33 = &v11;
                            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v3, &v27, v43);
                        }
                        v32 = (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v38, v39, "--format") as i8 ? v32 & 4294967295 & 4294967295 : 1);
                        v1 = v1;
                    }
                }
                v1 = v1;
                v31 = v19;
                if !v31 {
                    break;
                }
LABEL_4ca960:
                v19 = 0;
                v37 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(v31);
                if !v37 {
                    goto LABEL_4cad66;
                }
            }
        } else {
LABEL_4cad66:
            if (v32 & 1) {
                v6 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v62 = a0;
                *((v62 + 24) as &struct24) = v6.field_16;
                *((v62 + 8) as &i128) = v1;
                *(v62 as &i64) = 1;
                return a0;
            }
LABEL_4cad6c:
            if !v5 {
                v6 = struct33 {
                    field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h8807753078f1410eE
                    field_16: g_541808
                    field_32: 0
                };
                v3 = alloc::vec::Vec<T,A>::push(&v6);
                break;
            }
        }
    }
    vvar_927{reg 24} = a0;
    *((a0 + 24) as &i64) = v5;
    *((a0 + 8) as &i128) = v3;
    *(a0 as &i64) = 0;
    return a0;
}
