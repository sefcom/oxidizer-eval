fn uu_join::parse_settings(a1: &struct56) -> Result<struct96, struct24> {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x178], Other Possible Types: void*
    let v1: u64;  // [bp-0x170]
    let v2: u128;  // [bp-0x168]
    let v3: u64;  // [bp-0x168]
    let v4: u128;  // [bp-0x160]
    let v5: u64;  // [bp-0x158]
    let v6: void*;  // [bp-0x150], Other Possible Types: u64
    let v7: u64;  // [bp-0x148]
    let v8: u64;  // [bp-0x140]
    let v9: u64;  // [bp-0x138]
    let v10: u64;  // [bp-0x130]
    let v11: u64;  // [bp-0x128]
    let v12: u8;  // [bp-0x120]
    let v13: u8;  // [bp-0x11f]
    let v14: u8;  // [bp-0x11e]
    let v15: u8;  // [bp-0x11d]
    let v16: u8;  // [bp-0x11c]
    let v18: u8;  // [bp-0x11a]
    let v19: u8;  // [bp-0x119]
    let v20: Result<struct16, struct16>;  // [bp-0x118]
    let v21: u96;  // [bp-0x118]
    let v22: core::result::Result<(), std::io::error::Error>;  // [bp-0x118]
    let v23: u64;  // [bp-0x110]
    let v24: u64;  // [bp-0x108], Other Possible Types: void*
    let v26: u64;  // [bp-0x108]
    let v27: u128;  // [bp-0xf8]
    let v28: u128;  // [bp-0xe8]
    let v29: u64;  // [bp-0xd8]
    let v30: u16;  // [bp-0xd0]
    let v31: void*;  // [bp-0xc8]
    let v32: struct16;  // [bp-0xc8]
    let v33: u64;  // [bp-0xc0]
    let v34: void*;  // [bp-0xb8]
    let v35: u64;  // [bp-0xb0]
    let v36: u64;  // [bp-0xa8]
    let v37: u64;  // [bp-0xa0]
    let v38: u64;  // [bp-0x98]
    let v39: u128;  // [bp-0x90]
    let v40: u64;  // [bp-0x80]
    let v41: u64;  // [bp-0x78]
    let v42: u128;  // [bp-0x78]
    let v43: u64;  // [bp-0x70]
    let v44: struct52;  // [bp-0x68]
    let v45: u128;  // [bp-0x58]
    let v46: u128;  // [bp-0x48]
    let v48: u64;  // rcx
    let v49: u64;  // r15
    let v50: i64;  // rdi
    let v51: i64;  // rdi
    let v52: struct8;  // rcx
    let v53: u32;  // ecx
    let v54: u64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rdi
    let v57: u64;  // r8
    let v58: i64;  // rax
    let v59: u64;  // r12
    let v60: core::option::Option<&str>;  // rax
    let v61: i64;  // rdi
    let v63: i64;  // rax
    let v65: i64;  // rdi
    let v66: u128;  // xmm0
    let v67: u128;  // xmm1
    let v68: u128;  // xmm2

    uu_join::get_and_parse_field_number(a0, &g_4149f6, v48);
    if !v0 {
        v49 = *(&v1 as &i64);
        uu_join::get_and_parse_field_number(a0, &g_4149f7, v48);
        if !v0 {
            uu_join::get_and_parse_field_number(a0, &g_4149f8, v48);
            if v0 {
                *((v51 + 8) as &i128) = *(&v1 as &i128);
            } else {
                v37 = v3;
                v38 = *(&v1 as &i64);
                uu_join::parse_print_settings(a0, a1);
                if v0 {
                    v52 = *(&v1 as &i64);
                    *((v51 + 8) as &u64) = v0;
                    *((v51 + 16) as &struct8) = v52;
                } else {
                    v36 = v3;
                    v35 = *(&v1 as &i64);
                    v53 = *(&v1 as &i16) | (&v1)[2] * 0x10000;
                    v10 = 0;
                    v15 = 0;
                    v19 = 10;
                    v7 = 9223372036854775811;
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
                    v5 = 1;
                    v6 = 0;
                    v14 = v53 & 1;
                    v12 = v53 >> 8 & 1;
                    v13 = v53 >> 16 & 1;
                    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "i") as i8;
                    v20 = uu_join::get_field_number(v49, v3, v38, v37);
                    v54 = v23;
                    if v20 as i64 || (v10 = v54, v20 = uu_join::get_field_number(v49, v3, v35, v36), v54 = v23, v20 as i64) {
                        *((v56 + 8) as &u64) = v21;
                        *((v56 + 16) as &u64) = v54;
                    } else {
                        v11 = v54;
                        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "t");
                        v55 = clap_builder::parser::error::MatchesError::unwrap("t", &v20);
                        if v55 {
                            uu_join::parse_separator(*((v55 + 8) as &i64), *((v55 + 16) as &i64), v48);
                            if v20 as i64 == 9223372036854775812 {
                                *((v56 + 8) as &u64) = v23;
                                *((v56 + 16) as &u64) = v24;
                            } else {
                                v7 = v20 as i64;
                                v8 = v23;
                                v9 = v24;
                                goto LABEL_4c429c;
                            }
                        } else {
LABEL_4c429c:
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "o", v57);
                            v58 = clap_builder::parser::error::MatchesError::unwrap("o", &v20);
                            if v58 {
                                v59 = *((v58 + 16) as &i64);
                                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v58 + 8) as &i64), v59, "auto") as i8 {
                                    v16 = 1;
                                } else {
                                    v31 = 0;
                                    v33 = 8;
                                    v34 = 0;
                                    v21 = struct12 {
                                        field_0: 188978561056
                                        field_8: 9
                                    };
                                    v44 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&v21, *((v58 + 8) as &i64), v59);
                                    v22 = 0;
                                    v23 = v59;
                                    memcpy(stack_base + -264, stack_base + -104, 16);
                                    v27 = v45;
                                    v28 = v46;
                                    v29 = v46;
                                    v30 = 1;
                                    loop {
                                        v60 = core::str::iter::SplitInternal<P>::next(&v22) as u64;
                                        if let None = v60 {
                                            break;
                                        }
                                        uu_join::Spec::parse(v60, a1, v48);
                                        if v40 {
                                            *((v61 + 8) as &u64) = v41;
                                            *((v61 + 16) as &u64) = v43;
                                            *(v61 as &i64) = 0x8000000000000000;
                                            return;
                                        }
                                        v39 = v42;
                                        v32 = alloc::vec::Vec<T,A>::push(&v39);
                                    }
                                    v24 = 0;
                                    memcpy(&v22, &v32, 16);
                                    v3 = v26;
                                    v0 = *(&v22 as &i128);
                                }
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "e", v57);
                            v63 = clap_builder::parser::error::MatchesError::unwrap("e", &v20);
                            if v63 {
                                <T as alloc::slice::hack::ConvertVec>::to_vec(*((v63 + 8) as &i64), *((v63 + 16) as &i64), v48);
                                v6 = v26;
                                v4 = v20 as i128;
                            }
                            v19 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "z") as i8 ? 0 : 10);
                            *((v65 + 64) as &i128) = *(&v9 as &i128);
                            v66 = v0;
                            v67 = v2;
                            v68 = *(&v5 as &i128);
                            *((v65 + 48) as &i128) = *(&v7 as &i128);
                            *((v65 + 32) as &u128) = v68;
                            *((v65 + 16) as &u128) = v67;
                            *(v65 as &u128) = v66;
                            *((v65 + 80) as &u64) = v11;
                            *((v65 + 88) as &i32) = *(&v12 as &i32);
                            *((v65 + 92) as &i16) = *((&v15 as &char + 1) as &i16);
                            *((v65 + 94) as &u8) = v18;
                            *((v65 + 95) as &u8) = v19;
                            return;
                        }
                    }
                    *(v56 as &i64) = 0x8000000000000000;
                    return;
                }
            }
            *(v51 as &i64) = 0x8000000000000000;
            return;
        }
    }
    *((v50 + 8) as &i128) = *(&v1 as &i128);
    *(v50 as &i64) = 0x8000000000000000;
    return;
}
