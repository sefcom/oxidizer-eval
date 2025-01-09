fn uu_printf::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct32;  // [sp-0x4a8], Other Possible Types: i32
    let v1: i128;  // [bp-0x498]
    let v2: struct24;  // [sp-0x480], Other Possible Types: i64
    let v3: i64;  // [sp-0x478]
    let v4: i64;  // [sp-0x470]
    let v5: struct16;  // [bp-0x468]
    let v6: struct32;  // [sp-0x458], Other Possible Types: i256
    let v7: i64;  // [sp-0x438]
    let v8: i64;  // [sp-0x430]
    let v9: i64;  // [sp-0x428]
    let v10: i64;  // [sp-0x418]
    let v11: i64;  // [sp-0x410]
    let v12: i512;  // [sp-0x408], Other Possible Types: struct40, struct64, struct24
    let v13: i128;  // [sp-0x3c8]
    let v14: i128;  // [bp-0x3b8]
    let v15: i64;  // [sp-0x3a9]
    let v16: i128;  // [sp-0x398]
    let v17: i128;  // [bp-0x388]
    let v18: i64;  // [sp-0x379]
    let v19: struct56;  // [sp-0x370], Other Possible Types: i448
    let v20: struct64;  // [bp-0x338]
    let v21: i448;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct8>, struct56, struct28, struct712
    let v22: i128;  // [bp-0x2f7]
    let v23: i128;  // [bp-0x2e7]
    let v24: i64;  // [sp-0x2d8]
    let v26: i64;  // rbx
    let v27: i64;  // rax
    let v28: i256;  // ymm0
    let v29: i256;  // ymm0
    let v30: i256;  // ymm1
    let v31: i256;  // ymm1
    let v34: i64;  // rbp
    let v35: i64;  // rax
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1
    let v38: i128;  // xmm0
    let v39: i128;  // xmm1
    let v42: i8;  // al
    let v43: i128;  // xmm0
    let v44: i128;  // xmm1
    let v45: i128;  // xmm0
    let v46: i128;  // xmm1
    let v47: i8;  // al

    v21 = uu_printf::uu_app();
    v19 = clap_builder::builder::command::Command::get_matches_from(&v21, a0, a1);
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "FORMAT");
    v26 = clap_builder::parser::error::MatchesError::unwrap("FORMAT", &v21);
    if !v26 {
        v12 = <T as alloc::slice::hack::ConvertVec>::to_vec("missing operand");
        v21 = struct28 {
            field_0: v12
            field_16: *((&v12 as &char + 16) as &i64)
            field_24: 1
        };
        v27 = alloc::boxed::Box<T>::new(&v21);
    } else {
        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, "ARGUMENT");
        v12 = clap_builder::parser::error::MatchesError::unwrap("ARGUMENT", &v21);
        if !v12 {
            v2 = 0;
            v3 = 8;
            v4 = 0;
        } else {
            v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12;
            v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 16) as &i128);
            v20 = struct64 {
                field_0: v28 as u128
                field_16: v30 as u128
                field_32: *((&v12 as &char + 32) as &i128)
                field_48: *((&v12 as &char + 48) as &i128)
            };
            v2 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20);
        }
        v10 = 8;
        v11 = 0 * 32 + v10;
        v9 = 0;
        v8 = *((v26 + 8) as &i64);
        v5 = struct16 {
            field_0: v8
            field_8: v7
        };
        v7 = *((v26 + 16) as &i64);
        v34 = 0;
        loop {
            v12 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v5);
            v35 = v12;
            if v35 == 9 {
                if !(v34 & 1) {
                    goto LABEL_46cc5f;
                }
                if !*(core::option::Option<T>::get_or_insert_with(&v10) as &i64) {
                    goto LABEL_46cd98;
                }
                break;
            } else {
                v18 = *((&v12 as &char + 32) as &i64);
                v36 = *((&v12 as &char + 1) as &i128);
                v37 = *((&v12 as &char + 17) as &i128);
                v17 = v37;
                v16 = v36;
                if (v35 - 7 & 255) >= 2 {
                    v34 = v34 | -0x100 | 1;
                } else if v35 == 8 {
                    v0 = struct32 {
                        field_0: v28 as u128
                        field_16: *((&v17 as &char + 7) as &i128)
                    };
                    v27 = alloc::boxed::Box<T>::new(&v0);
                    goto LABEL_46cdd4;
                }
                v24 = *((&v12 as &char + 32) as &i64);
                v38 = *((&v12 as &char + 1) as &i128);
                v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38;
                v39 = *((&v12 as &char + 17) as &i128);
                v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
                v23 = v39;
                v22 = v38;
                v21 = v35;
                v6 = uucore::features::format::FormatItem<C>::write(&v21, std::io::stdio::stdout(), &v9);
                if v0 != 14 {
                    v1 = *((&v6 as &char + 16) as &i128);
                    v0 = struct32 {
                        field_0: v41 as i32
                        field_16: <UNKNOWN>
                    };
                    v27 = alloc::boxed::Box<T>::new(&v0);
                    goto LABEL_46cdd4;
                } else if *((&v6 as &char + 4) as &i8) {
                    goto LABEL_46cc5f;
                }
            }
        }
        loop {
            v5 = struct16 {
                field_0: v8
                field_8: v7
            };
            loop {
                v12 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v5);
                v42 = v12;
                if v42 == 9 {
                    break;
                }
                v15 = *((&v12 as &char + 32) as &i64);
                v43 = *((&v12 as &char + 1) as &i128);
                v44 = *((&v12 as &char + 17) as &i128);
                v14 = v44;
                v13 = v43;
                if v42 == 8 {
                    v0 = struct32 {
                        field_0: *((&v13 as &char + 7) as &i128)
                        field_16: *((&v14 as &char + 7) as &i64)
                    };
                    v27 = alloc::boxed::Box<T>::new(&v0);
                    goto LABEL_46cdd4;
                }
                v24 = *((&v12 as &char + 32) as &i64);
                v45 = *((&v12 as &char + 1) as &i128);
                v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
                v46 = *((&v12 as &char + 17) as &i128);
                v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
                v23 = v46;
                v22 = v45;
                v21 = v42;
                v6 = uucore::features::format::FormatItem<C>::write(&v21, std::io::stdio::stdout(), &v9);
                v47 = *((&v6 as &char + 4) as &i8);
                if v0 != 14 {
                    v1 = *((&v6 as &char + 16) as &i128);
                    v0 = struct32 {
                        field_0: v48 as i32
                        field_16: <UNKNOWN>
                    };
                    v27 = alloc::boxed::Box<T>::new(&v0);
LABEL_46cdd4:
                    goto LABEL_46cdd7;
                } else if v47 {
LABEL_46cc5f:
                    v27 = 0;
                    goto LABEL_46cdd7;
                }
            }
            if !*(core::option::Option<T>::get_or_insert_with(&v10) as &i64) {
LABEL_46cd98:
                return 0;
            }
        }
LABEL_46cdd7:
    }
    return v27;
}
