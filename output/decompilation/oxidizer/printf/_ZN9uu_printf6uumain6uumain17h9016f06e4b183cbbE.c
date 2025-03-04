fn uu_printf::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct32;  // [sp-0x4a8], Other Possible Types: unsigned int, int
    let v1: i8;  // [sp-0x4a4]
    let v2: iNone;  // [bp-0x498]
    let v3: i64;  // [sp-0x480], Other Possible Types: struct24
    let v4: i64;  // [sp-0x478]
    let v5: i64;  // [sp-0x470]
    let v6: struct16;  // [bp-0x468]
    let v7: struct32;  // [sp-0x458]
    let v8: i64;  // [sp-0x438]
    let v9: i64;  // [sp-0x430]
    let v10: i64;  // [sp-0x428]
    let v11: i64;  // [sp-0x418]
    let v12: i64;  // [sp-0x410]
    let v13: struct40;  // [sp-0x408], Other Possible Types: struct24, struct64
    let v14: iNone;  // [sp-0x3c8]
    let v15: iNone;  // [bp-0x3b8]
    let v16: i64;  // [sp-0x3a9]
    let v17: iNone;  // [sp-0x398]
    let v18: iNone;  // [bp-0x388]
    let v19: i64;  // [sp-0x379]
    let v20: i8;  // [bp-0x370]
    let v21: struct64;  // [bp-0x338]
    let v22: i8;  // [sp-0x2f8], Other Possible Types: struct24, Result<struct40, struct8>, struct56, struct712
    let v23: iNone;  // [bp-0x2f7]
    let v24: iNone;  // [bp-0x2e7]
    let v25: i32;  // [sp-0x2e0]
    let v26: i64;  // [sp-0x2d8]
    let v28: i64;  // rbx
    let v29: i64;  // rbx
    let v31: iNone;  // ymm0
    let v32: iNone;  // ymm0
    let v34: iNone;  // ymm1
    let v35: iNone;  // ymm1
    let v36: i64;  // rax
    let v37: i64;  // rcx
    let v38: i64;  // rbp
    let v39: i64;  // rax
    let v40: iNone;  // xmm0
    let v41: iNone;  // xmm1
    let v42: iNone;  // xmm0
    let v43: iNone;  // xmm1
    let v50: i8;  // al
    let v51: iNone;  // xmm0
    let v52: iNone;  // xmm1
    let v53: iNone;  // xmm0
    let v54: iNone;  // xmm1

    v22 = uu_printf::uu_app();
    clap_builder::builder::command::Command::get_matches_from(&v20, &v22, a0, a1);
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, "FORMAT");
    v28 = clap_builder::parser::error::MatchesError::unwrap("FORMAT", &v22);
    if !v28 {
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("missing operand");
        v22 = v13;
        v25 = 1;
        v29 = alloc::boxed::Box<T>::new(&v22);
        return v29;
    }
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20, "ARGUMENT");
    v13 = clap_builder::parser::error::MatchesError::unwrap("ARGUMENT", &v22);
    if !v13.field_0 as i64 {
        v3 = 0;
        v4 = 8;
        v5 = 0;
        v36 = 8;
        v37 = 0;
    } else {
        v32 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13.field_0;
        v35 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13.field_16;
        v21 = struct64 {
            field_0: v30
            field_16: v33
            field_32: v13.field_32
            field_48: v13.field_48
        };
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21);
        v36 = v4;
        v37 = v5;
    }
    v11 = v36;
    v12 = v37 * 32 + v36;
    v10 = 0;
    v9 = *((v28 + 8) as &i64);
    v6 = struct16 {
        field_0: v9
        field_8: v8
    };
    v8 = *((v28 + 16) as &i64);
    v38 = 0;
    loop {
        v13 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v6);
        v39 = v13.field_0;
        if v39 as u8 == 9 {
            break;
        }
        v19 = v13.field_32;
        v40 = *((&v13.field_0 as &char + 1) as &i128);
        v41 = *((&v13.field_16 as &char + 1) as &i128);
        v18 = v41;
        v17 = v40;
        if (v39 - 7 & 255) >= 2 {
            v38 = v38 & -0x100 | 1;
        } else if v39 as u8 == 8 {
            v0 = struct32 {
                field_0: v48
                field_16: (&v18)[7] as i128
            };
            alloc::boxed::Box<T>::new(&v0);
            return v29;
        }
        v26 = v13.field_32;
        v42 = *((&v13.field_0 as &char + 1) as &i128);
        v32 = (v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u256;
        v43 = *((&v13.field_16 as &char + 1) as &i128);
        v35 = (v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u256;
        v24 = v43;
        v23 = v42;
        v22 = v39 as u8;
        v7 = uucore::features::format::FormatItem<C>::write(&v22, std::io::stdio::stdout(), &v10);
        if v0 != 14 {
            *(&v2 as &u128) = v7.field_16;
            v0 = struct32 {
                field_0: v44
                field_16: <UNKNOWN>
            };
            alloc::boxed::Box<T>::new(&v0);
            return v29;
        } else if v1 {
            return v29;
        }
    }
    if !(v38 as u8 & 1) {
        return v29;
    } else if !*(core::option::Option<T>::get_or_insert_with(&v11) as &i64) {
        return 0;
    } else {
        do {
            v6 = struct16 {
                field_0: v9
                field_8: v8
            };
            loop {
                v13 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v6);
                v50 = v13.field_0;
                if v50 == 9 {
                    break;
                }
                v16 = v13.field_32;
                v51 = *((&v13.field_0 as &char + 1) as &i128);
                v52 = *((&v13.field_16 as &char + 1) as &i128);
                v15 = v52;
                v14 = v51;
                if v50 == 8 {
                    alloc::boxed::Box<T>::new(&v0);
                    return v29;
                }
                v26 = v13.field_32;
                v53 = *((&v13.field_0 as &char + 1) as &i128);
                v32 = (v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u256;
                v54 = *((&v13.field_16 as &char + 1) as &i128);
                v35 = (v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256;
                v24 = v54;
                v23 = v53;
                v22 = v50;
                v7 = uucore::features::format::FormatItem<C>::write(&v22, std::io::stdio::stdout(), &v10);
                if v0 != 14 {
                    *(&v2 as &u128) = v7.field_16;
                    v0 = struct32 {
                        field_0: v55
                        field_16: <UNKNOWN>
                    };
                    alloc::boxed::Box<T>::new(&v0);
                    return v29;
                } else if v1 {
                    return v29;
                }
            }
        } while (*(core::option::Option<T>::get_or_insert_with(&v11) as &i64));
        return 0;
    }
}
