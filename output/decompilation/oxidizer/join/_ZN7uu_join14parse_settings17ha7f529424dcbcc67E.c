fn uu_join::parse_settings(a1: &struct56) -> Result<struct96, struct24> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x148], Other Possible Types: u192
    let v1: void*;  // [bp-0x148], Other Possible Types: u128
    let v2: struct24;  // [bp-0x148]
    let v3: u64;  // [bp-0x140]
    let v4: u64;  // [bp-0x140]
    let v5: u128;  // [bp-0x138]
    let v6: void*;  // [bp-0x138]
    let v7: u128;  // [bp-0x130]
    let v8: u64;  // [bp-0x128]
    let v9: void*;  // [bp-0x120], Other Possible Types: u64
    let v10: u64;  // [bp-0x118]
    let v11: u64;  // [bp-0x110]
    let v12: u64;  // [bp-0x108]
    let v13: u64;  // [bp-0x100]
    let v14: u64;  // [bp-0xf8]
    let v15: u8;  // [bp-0xf0]
    let v16: u8;  // [bp-0xef]
    let v17: u8;  // [bp-0xee]
    let v18: u32;  // [bp-0xed]
    let v21: u8;  // [bp-0xea]
    let v22: u8;  // [bp-0xe9]
    let v23: void*;  // [bp-0xe8]
    let v24: struct16;  // [bp-0xe8]
    let v25: u64;  // [bp-0xe0]
    let v26: void*;  // [bp-0xd8]
    let v27: void*;  // [bp-0xd0], Other Possible Types: Result<struct40, struct16>
    let v28: struct24;  // [bp-0xd0], Other Possible Types: u64
    let v29: core::slice::iter::Iter<u8>;  // [bp-0xc8], Other Possible Types: u64
    let v30: struct52;  // [bp-0xc0]
    let v31: u16;  // [bp-0x88]
    let v32: u64;  // [bp-0x80]
    let v33: u64;  // [bp-0x78]
    let v34: void*;  // [bp-0x70]
    let v35: void*;  // [bp-0x68]
    let v36: u64;  // [bp-0x60]
    let v37: struct24;  // [bp-0x58], Other Possible Types: u64
    let v38: u32;  // [bp-0x50]
    let v39: struct16;  // [bp-0x50]
    let v40: u64;  // [bp-0x48]
    let v41: struct16;  // [bp-0x40]
    let v43: u64;  // rax
    let v44: u64;  // rax
    let v45: i64;  // rax
    let v46: u64;  // r12
    let v47: i64;  // rax
    let v48: core::slice::iter::Iter<u8>;  // r12
    let v49: u64;  // rax
    let v50: u64;  // rdx
    let v51: i64;  // rax
    let v53: iNone;  // xmm0
    let v54: iNone;  // xmm1
    let v55: iNone;  // xmm2

    v0 = uu_join::get_and_parse_field_number(a1, &g_41b034);
    if v0.field_0 as i32 == 1 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: *((&v0 as &char + 8) as &i128)
        };
    }
    v0 = uu_join::get_and_parse_field_number(a1, &g_41b035);
    if v0.field_0 as i32 != 1 {
        v2 = uu_join::get_and_parse_field_number(a1, &g_41b036);
        if v2.field_0 as i32 == 1 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: *(&v2.field_8 as &i128)
            };
        }
        v35 = v6;
        v36 = v4;
        uu_join::parse_print_settings(&v2, a1);
        v43 = v4;
        if v2.field_0 {
            *((a0 + 8) as &u64) = v2.field_0;
            *((a0 + 16) as &u64) = v43;
        }
        v34 = v6;
        v33 = v4;
        v13 = 0;
        v22 = 10;
        v32 = 9223372036854775811;
        v10 = 9223372036854775811;
        v1 = 0;
        v3 = 8;
        v5 = 0;
        v8 = 1;
        v9 = 0;
        v18 = 0;
        v17 = v43 & 1;
        v15 = (v43 & 4294967295) >> 8 & 1;
        v16 = (v43 & 4294967295) >> 16 & 1;
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "i");
        v27 = uu_join::get_field_number(v4, v6, v36, v35);
        v44 = v29;
        if let Ok(_) = v27 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v28
                field_16: v44
            };
        }
        v13 = v44;
        v27 = uu_join::get_field_number(v4, v6, v33, v34);
        v44 = v29;
        if let Err(_) = v27 {
            v14 = v44;
            v27 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
            v45 = clap_builder::parser::error::MatchesError::unwrap(&v27);
            if v45 {
                v28 = uu_join::parse_separator(*((v45 + 8) as &i64), *((v45 + 16) as &i64));
                v46 = v28.field_16;
                if v28.field_0 == 9223372036854775812 {
                    return struct24 {
                        field_0: 0x8000000000000000
                        field_8: v29
                        field_16: v46
                    };
                }
                v10 = v28.field_0;
                v11 = v29;
                v12 = v46;
            }
            v27 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, &g_41b039);
            v47 = clap_builder::parser::error::MatchesError::unwrap(&g_41b039, &v27);
            if v47 {
                v48 = *((v47 + 16) as &i64);
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v47 + 8) as &i64), v48, "auto") as u8 {
                    v23 = 0;
                    v25 = 8;
                    v26 = 0;
                    v37 = 188978561056;
                    v38 = 9;
                    v30 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&v37, *((v47 + 8) as &i64), v48);
                    v27 = 0;
                    v29 = v48;
                    v31 = 1;
                    loop {
                        v49 = core::str::iter::SplitInternal<P>::next(&v27);
                        if !v49 {
                            break;
                        }
                        v37 = uu_join::Spec::parse(v49, v50);
                        if v37.field_0 as i32 == 1 {
                            return struct24 {
                                field_0: 0x8000000000000000
                                field_8: v37.field_8
                                field_16: v40
                            };
                        }
                        v41 = v39;
                        v24 = alloc::vec::Vec<T,A>::push(&v41);
                    }
                    v1 = *(&v24.field_0 as &i128) as u128;
                    v6 = 0;
                }
            }
            v27 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, &g_41b03a);
            v51 = clap_builder::parser::error::MatchesError::unwrap(&g_41b03a, &v27);
            if v51 {
                v28 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v51 + 8) as &i64), *((v51 + 16) as &i64));
                v9 = v28.field_16;
                v7 = *(&v28.field_0 as &i128) as u128;
            }
            v22 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "z") as u8 ? 0 : 10);
            v53 = v1;
            v54 = v5;
            v55 = *(&v8 as &i128);
            return Ok(struct96 {
                field_0: v53
                field_16: v54
                field_32: v55
                field_48: *(&v10 as &i128)
                field_64: *(&v12 as &i128)
                field_80: v14
                field_88: *(&v15 as &i32)
                field_92: *((&v18 as &char + 1) as &i16)
                field_94: v21
                field_95: v22
            });
        }
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v28
            field_16: v44
        };
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: *((&v0 as &char + 8) as &i128)
    };
}
