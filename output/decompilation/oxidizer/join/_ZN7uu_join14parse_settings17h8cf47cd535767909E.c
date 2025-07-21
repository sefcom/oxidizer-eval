fn uu_join::parse_settings(a1: &struct56) -> Result<struct96, struct24> {
    let a0: u64;  // rsi
    let v0: void*;  // [bp-0x178], Other Possible Types: struct16, u64
    let v1: u8;  // [bp-0x170]
    let v2: u128;  // [bp-0x168]
    let v3: u64;  // [bp-0x168]
    let v4: u128;  // [bp-0x160]
    let v5: u64;  // [bp-0x158]
    let v6: void*;  // [bp-0x150], Other Possible Types: u64
    let v7: u64;  // [bp-0x148]
    let v8: u64;  // [bp-0x140]
    let v9: u64;  // [bp-0x138]
    let v10: u128;  // [bp-0x130]
    let v11: u64;  // [bp-0x128]
    let v12: u8;  // [bp-0x120]
    let v13: u8;  // [bp-0x11f]
    let v14: u8;  // [bp-0x11e]
    let v15: u8;  // [bp-0x11d]
    let v16: u8;  // [bp-0x11c]
    let v18: u8;  // [bp-0x11a]
    let v19: u8;  // [bp-0x119]
    let v20: Result<struct16, struct16>;  // [bp-0x118]
    let v21: struct12;  // [bp-0x118], Other Possible Types: struct80, u64
    let v22: struct16;  // [bp-0x118]
    let v23: u64;  // [bp-0x110]
    let v24: void*;  // [bp-0x108], Other Possible Types: u64
    let v26: u64;  // [bp-0x108]
    let v27: void*;  // [bp-0xc8]
    let v28: struct16;  // [bp-0xc8]
    let v29: u64;  // [bp-0xc0]
    let v30: void*;  // [bp-0xb8]
    let v31: u64;  // [bp-0xb0]
    let v32: u64;  // [bp-0xa8]
    let v33: u64;  // [bp-0xa0]
    let v34: u64;  // [bp-0x98]
    let v35: struct16;  // [bp-0x90]
    let v36: u64;  // [bp-0x80]
    let v37: u64;  // [bp-0x78]
    let v38: struct16;  // [bp-0x78]
    let v39: u64;  // [bp-0x70]
    let v40: struct52;  // [bp-0x68]
    let v41: u128;  // [bp-0x58]
    let v42: u128;  // [bp-0x48]
    let v44: u64;  // rcx
    let v45: u64;  // r15
    let v46: i64;  // rdi
    let v47: i64;  // rdi
    let v48: core::slice::iter::Iter<u8>;  // rcx
    let v49: u32;  // ecx
    let v50: u64;  // rax
    let v51: i64;  // rax
    let v52: i64;  // rdi
    let v53: u64;  // r8
    let v54: struct40;  // rax
    let v55: u64;  // r12
    let v56: core::option::Option<&str>;  // rax
    let v57: i64;  // rdi
    let v59: i64;  // rax
    let v61: i64;  // rdi
    let v62: u128;  // xmm0
    let v63: u128;  // xmm1
    let v64: u128;  // xmm2

    uu_join::get_and_parse_field_number(a0, &g_4149f6, v44);
    if !v0 {
        v45 = *(&v1 as &i64);
        uu_join::get_and_parse_field_number(a0, &g_4149f7, v44);
        if !v0 {
            uu_join::get_and_parse_field_number(a0, &g_4149f8, v44);
            if v0 {
                *((v47 + 8) as &i128) = *(&v1 as &i128);
            } else {
                v33 = v3;
                v34 = *(&v1 as &i64);
                uu_join::parse_print_settings(a0, a1);
                if v0 {
                    v48 = *(&v1 as &i64);
                    *((v47 + 8) as &u64) = v0;
                    *((v47 + 16) as &core::slice::iter::Iter<u8>) = v48;
                } else {
                    v32 = v3;
                    v31 = *(&v1 as &i64);
                    v49 = *(&v1 as &i16) | (&v1)[2] * 0x10000;
                    v10 = 0;
                    v15 = 0;
                    v19 = 10;
                    v7 = 9223372036854775811;
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
                    v5 = 1;
                    v6 = 0;
                    v14 = v49 & 1;
                    v12 = v49 >> 8 & 1;
                    v13 = v49 >> 16 & 1;
                    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "i") as i8;
                    v20 = uu_join::get_field_number(v45, v3, v34, v33);
                    v50 = v23;
                    if v20 as i64 || (v10 = v50, v20 = uu_join::get_field_number(v45, v3, v31, v32), v50 = v23, v20 as i64) {
                        *((v52 + 8) as &u64) = v21;
                        *((v52 + 16) as &u64) = v50;
                    } else {
                        v11 = v50;
                        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "t");
                        v51 = clap_builder::parser::error::MatchesError::unwrap("t", &v20);
                        if v51 {
                            uu_join::parse_separator(*((v51 + 8) as &i64), *((v51 + 16) as &i64), v44);
                            if v20 as i64 == 9223372036854775812 {
                                *((v52 + 8) as &u64) = v23;
                                *((v52 + 16) as &u64) = v24;
                            } else {
                                v7 = v20 as i64;
                                v8 = v23;
                                v9 = v24;
                                goto LABEL_4c429c;
                            }
                        } else {
LABEL_4c429c:
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "o", v53);
                            v54 = clap_builder::parser::error::MatchesError::unwrap("o", &v20);
                            if v54 {
                                v55 = *((v54 + 16) as &i64);
                                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v54 + 8) as &i64), v55, "auto") as i8 {
                                    v16 = 1;
                                } else {
                                    v27 = 0;
                                    v29 = 8;
                                    v30 = 0;
                                    v21 = struct12 {
                                        field_0: 188978561056
                                        field_8: 9
                                    };
                                    v40 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&v21, *((v54 + 8) as &i64), v55);
                                    v21 = struct80 {
                                        field_0: 0
                                        field_8: v55
                                        field_16: *(&v40.field_0 as &i128)
                                        field_32: v41
                                        field_48: v42
                                        field_64: *(&v40.field_48 as &i64)
                                        field_72: 1
                                    };
                                    loop {
                                        v56 = core::str::iter::SplitInternal<P>::next(&v21) as u64;
                                        if let None = v56 {
                                            break;
                                        }
                                        uu_join::Spec::parse(v56, a1, v44);
                                        if v36 {
                                            *((v57 + 8) as &u64) = v37;
                                            *((v57 + 16) as &u64) = v39;
                                            *(v57 as &i64) = 0x8000000000000000;
                                            return;
                                        }
                                        v35 = v38;
                                        v28 = alloc::vec::Vec<T,A>::push(&v35);
                                    }
                                    v24 = 0;
                                    *(&v22.field_0 as &i128) = *(&v28.field_0 as &i128);
                                    v3 = v26;
                                    *(&v0.field_0 as &i128) = *(&v22.field_0 as &i128);
                                }
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "e", v53);
                            v59 = clap_builder::parser::error::MatchesError::unwrap("e", &v20);
                            if v59 {
                                <T as alloc::slice::hack::ConvertVec>::to_vec(*((v59 + 8) as &i64), *((v59 + 16) as &i64), v44);
                                v6 = v26;
                                v4 = v20 as i128;
                            }
                            v19 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "z") as i8 ? 0 : 10);
                            *((v61 + 64) as &i128) = *(&v9 as &i128);
                            v62 = *(&v0.field_0 as &i128);
                            v63 = v2;
                            v64 = *(&v5 as &i128);
                            *((v61 + 48) as &i128) = *(&v7 as &i128);
                            *((v61 + 32) as &u128) = v64;
                            *((v61 + 16) as &u128) = v63;
                            *(v61 as &u128) = v62;
                            *((v61 + 80) as &u64) = v11;
                            *((v61 + 88) as &i32) = *(&v12 as &i32);
                            *((v61 + 92) as &i16) = *((&v15 as &char + 1) as &i16);
                            *((v61 + 94) as &u8) = v18;
                            *((v61 + 95) as &u8) = v19;
                            return;
                        }
                    }
                    *(v52 as &i64) = 0x8000000000000000;
                    return;
                }
            }
            *(v47 as &i64) = 0x8000000000000000;
            return;
        }
    }
    *((v46 + 8) as &i128) = *(&v1 as &i128);
    *(v46 as &i64) = 0x8000000000000000;
    return;
}
