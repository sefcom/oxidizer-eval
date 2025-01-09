fn uu_printf::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i256;  // [sp-0x4a8], Other Possible Types: struct32
    let v1: i8;  // [sp-0x4a4]
    let v2: i128;  // [bp-0x498]
    let v3: i64;  // [sp-0x480], Other Possible Types: struct24
    let v4: i64;  // [sp-0x478]
    let v5: i64;  // [sp-0x470]
    let v6: struct16;  // [bp-0x468]
    let v7: struct32;  // [sp-0x458], Other Possible Types: i256
    let v8: i64;  // [sp-0x438]
    let v9: i64;  // [sp-0x430]
    let v10: i64;  // [sp-0x428]
    let v11: i64;  // [sp-0x418]
    let v12: i64;  // [sp-0x410]
    let v13: i320;  // [sp-0x408], Other Possible Types: struct40, struct64, struct24
    let v14: i128;  // [sp-0x3c8]
    let v15: i128;  // [bp-0x3b8]
    let v16: i64;  // [sp-0x3a9]
    let v17: i128;  // [sp-0x398]
    let v18: i128;  // [bp-0x388]
    let v19: i64;  // [sp-0x379]
    let v20: i8;  // [bp-0x370]
    let v21: struct64;  // [bp-0x338]
    let v22: i8;  // [sp-0x2f8], Other Possible Types: struct712, struct56, Result<struct40, struct8>
    let v23: i128;  // [bp-0x2f7]
    let v24: i128;  // [bp-0x2e7]
    let v25: i64;  // [sp-0x2d8]
    let v27: i64;  // rbx
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v32: i256;  // ymm1
    let v33: i256;  // ymm1
    let v36: i64;  // rbp
    let v37: i64;  // rax
    let v38: i128;  // xmm0
    let v39: i128;  // xmm1
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v46: i8;  // al
    let v47: i128;  // xmm0
    let v48: i128;  // xmm1
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v53: i64;  // rbx

    v22 = uu_printf::uu_app();
    clap_builder::builder::command::Command::get_matches_from(&v20, &v22, a0, a1);
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, "FORMAT");
    v27 = clap_builder::parser::error::MatchesError::unwrap("FORMAT", &v22);
    if !v27 {
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("missing operand");
        alloc::boxed::Box<T>::new(&v22);
        return v53;
    }
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20, "ARGUMENT");
    v13 = clap_builder::parser::error::MatchesError::unwrap("ARGUMENT", &v22);
    if !v13 {
        v3 = 0;
        v4 = 8;
        v5 = 0;
    } else {
        v30 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13;
        v33 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v13 as &char + 16) as &i128);
        v21 = struct64 {
            field_0: v28
            field_16: v31
            field_32: *((&v13 as &char + 32) as &i128)
            field_48: *((&v13 as &char + 48) as &i128)
        };
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21);
    }
    v11 = 8;
    v12 = 0 * 32 + v11;
    v10 = 0;
    v9 = *((v27 + 8) as &i64);
    v6 = struct16 {
        field_0: v9
        field_8: v8
    };
    v8 = *((v27 + 16) as &i64);
    v36 = 0;
    loop {
        v13 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v6);
        v37 = v13;
        if v37 == 9 {
            if !(v36 & 1) {
                goto LABEL_46cc5f;
            }
            if !*(core::option::Option<T>::get_or_insert_with(&v11) as &i64) {
                goto LABEL_46cdaf;
            }
            break;
        } else {
            v19 = *((&v13 as &char + 32) as &i64);
            v38 = *((&v13 as &char + 1) as &i128);
            v39 = *((&v13 as &char + 17) as &i128);
            v18 = v39;
            v17 = v38;
            if (v37 - 7 & 255) >= 2 {
                v36 = v36 & -0x100 | 1;
            } else if v37 == 8 {
                v0 = struct32 {
                    field_0: v45
                    field_16: *((&v18 as &char + 7) as &i128)
                };
                alloc::boxed::Box<T>::new(&v0);
                goto LABEL_46cdd4;
            }
            v25 = *((&v13 as &char + 32) as &i64);
            v40 = *((&v13 as &char + 1) as &i128);
            v30 = (v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
            v41 = *((&v13 as &char + 17) as &i128);
            v33 = (v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
            v24 = v41;
            v23 = v40;
            v22 = v37;
            v7 = uucore::features::format::FormatItem<C>::write(&v22, std::io::stdio::stdout(), &v10);
            if v0 != 14 {
                v2 = *((&v7 as &char + 16) as &i128);
                v0 = struct32 {
                    field_0: v42
                    field_16: <UNKNOWN>
                };
                alloc::boxed::Box<T>::new(&v0);
                goto LABEL_46cdd4;
            } else if v1 {
                goto LABEL_46cc5f;
            }
        }
    }
    loop {
        v6 = struct16 {
            field_0: v9
            field_8: v8
        };
        v13 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v6);
        v46 = v13;
        if v46 != 9 {
            v16 = *((&v13 as &char + 32) as &i64);
            v47 = *((&v13 as &char + 1) as &i128);
            v48 = *((&v13 as &char + 17) as &i128);
            v15 = v48;
            v14 = v47;
            if v46 == 8 {
                v0 = *((&v14 as &char + 7) as &i256);
                alloc::boxed::Box<T>::new(&v0);
                goto LABEL_46cdd4;
            }
            v25 = *((&v13 as &char + 32) as &i64);
            v49 = *((&v13 as &char + 1) as &i128);
            v30 = (v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
            v50 = *((&v13 as &char + 17) as &i128);
            v33 = (v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
            v24 = v50;
            v23 = v49;
            v22 = v46;
            v7 = uucore::features::format::FormatItem<C>::write(&v22, std::io::stdio::stdout(), &v10);
            if v0 != 14 {
                v2 = *((&v7 as &char + 16) as &i128);
                v0 = struct32 {
                    field_0: v51
                    field_16: <UNKNOWN>
                };
                alloc::boxed::Box<T>::new(&v0);
LABEL_46cdd4:
                break;
            } else {
                if !v1 {
                    continue;
                }
LABEL_46cc5f:
                break;
            }
        } else if !*(core::option::Option<T>::get_or_insert_with(&v11) as &i64) {
LABEL_46cdaf:
            return 0;
        }
    }
    return v53;
}
