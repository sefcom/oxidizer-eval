fn uu_printf::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct32;  // [sp-0x4a8], Other Possible Types: i32
    let v1: i128;  // [bp-0x498]
    let v2: struct24;  // [sp-0x480], Other Possible Types: i64
    let v3: i64;  // [sp-0x478]
    let v4: i64;  // [sp-0x470]
    let v5: i64;  // [sp-0x468], Other Possible Types: struct16
    let v6: i64;  // [sp-0x460]
    let v7: i256;  // [sp-0x458], Other Possible Types: struct32
    let v8: i64;  // [sp-0x438]
    let v9: i64;  // [sp-0x430]
    let v10: i64;  // [sp-0x428]
    let v11: i64;  // [sp-0x418]
    let v12: i64;  // [sp-0x410]
    let v13: i320;  // [sp-0x408], Other Possible Types: struct40, struct24, struct64
    let v14: i128;  // [sp-0x3c8]
    let v15: i128;  // [bp-0x3b8]
    let v16: i64;  // [sp-0x3a9]
    let v17: i128;  // [sp-0x398]
    let v18: i128;  // [bp-0x388]
    let v19: i64;  // [sp-0x379]
    let v20: struct56;  // [sp-0x370], Other Possible Types: i448
    let v21: struct64;  // [bp-0x338]
    let v22: i8;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct16>, struct56, struct712, struct28
    let v23: i128;  // [bp-0x2f7]
    let v24: i128;  // [bp-0x2e7]
    let v26: i64;  // rdx
    let v27: i64;  // rbx
    let v28: i64;  // rax
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v31: i256;  // ymm1
    let v32: i256;  // ymm1
    let v35: i64;  // rbp
    let v36: i64;  // rax
    let v37: i128;  // xmm0
    let v38: i128;  // xmm1
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1
    let v43: i8;  // al
    let v44: i128;  // xmm0
    let v45: i128;  // xmm1
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: i8;  // al

    v22 = uu_printf::uu_app(a1, v26);
    v20 = clap_builder::builder::command::Command::get_matches_from(&v22, a0, a1);
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, "FORMAT");
    v27 = clap_builder::parser::error::MatchesError::unwrap("FORMAT", &v22);
    if !v27 {
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("missing operand");
        v22 = struct28 {
            field_0: v13
            field_16: *((&v13 as &char + 16) as &i64)
            field_24: 1
        };
        v28 = alloc::boxed::Box<T>::new(&v22);
    } else {
        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20, "ARGUMENT");
        v13 = clap_builder::parser::error::MatchesError::unwrap("ARGUMENT", &v22);
        if !v13 {
            v2 = 0;
            v3 = 8;
            v4 = 0;
        } else {
            v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13;
            v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v13 as &char + 16) as &i128);
            v21 = struct64 {
                field_0: v29 as u128
                field_16: v31 as u128
                field_32: *((&v13 as &char + 32) as &i128)
                field_48: *((&v13 as &char + 48) as &i128)
            };
            v2 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21, v26);
        }
        v11 = 8;
        v12 = 0 * 32 + v11;
        v10 = 0;
        v9 = *((v27 + 8) as &i64);
        v5 = v9;
        v8 = *((v27 + 16) as &i64);
        v6 = v8;
        v35 = 0;
        loop {
            v13 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v5);
            v36 = v13;
            if v36 == 9 {
                if !(v35 & 1) {
                    goto LABEL_46b7cf;
                }
                if !*(core::option::Option<T>::get_or_insert_with(&v11) as &i64) {
                    goto LABEL_46b908;
                }
                break;
            } else {
                v19 = *((&v13 as &char + 32) as &i64);
                v37 = *((&v13 as &char + 1) as &i128);
                v38 = *((&v13 as &char + 17) as &i128);
                v18 = v38;
                v17 = v37;
                if (v36 - 7 & 255) >= 2 {
                    v35 = v35 | -0x100 | 1;
                } else if v36 == 8 {
                    v0 = struct32 {
                        field_0: v29 as u128
                        field_16: *((&v18 as &char + 7) as &i128)
                    };
                    v28 = alloc::boxed::Box<T>::new(&v0);
                    goto LABEL_46b944;
                }
                v22.field_32 = (stack_base)[1000] as i64;
                v39 = *((&v13 as &char + 1) as &i128);
                v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
                v40 = *((&v13 as &char + 17) as &i128);
                v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
                v24 = v40;
                v23 = v39;
                v22 = v36;
                v7 = uucore::features::format::FormatItem<C>::write(&v22, std::io::stdio::stdout(), &v10);
                if v0 != 14 {
                    v1 = *((&v7 as &char + 16) as &i128);
                    v0 = struct32 {
                        field_0: v42 as i32
                        field_16: <UNKNOWN>
                    };
                    v28 = alloc::boxed::Box<T>::new(&v0);
                    goto LABEL_46b944;
                } else if *((&v7 as &char + 4) as &i8) {
                    goto LABEL_46b7cf;
                }
            }
        }
        loop {
            v5 = struct16 {
                field_0: v9
                field_8: v8
            };
            v13 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v5);
            v43 = v13;
            if v43 != 9 {
                v16 = *((&v13 as &char + 32) as &i64);
                v44 = *((&v13 as &char + 1) as &i128);
                v45 = *((&v13 as &char + 17) as &i128);
                v15 = v45;
                v14 = v44;
                if v43 == 8 {
                    v0 = struct32 {
                        field_0: *((&v14 as &char + 7) as &i128)
                        field_16: *((&v15 as &char + 7) as &i64)
                    };
                    v28 = alloc::boxed::Box<T>::new(&v0);
                    goto LABEL_46b944;
                }
                v22.field_32 = (stack_base)[1000] as i64;
                v46 = *((&v13 as &char + 1) as &i128);
                v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
                v47 = *((&v13 as &char + 17) as &i128);
                v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
                v24 = v47;
                v23 = v46;
                v22 = v43;
                v7 = uucore::features::format::FormatItem<C>::write(&v22, std::io::stdio::stdout(), &v10);
                v48 = *((&v7 as &char + 4) as &i8);
                if v0 != 14 {
                    v1 = *((&v7 as &char + 16) as &i128);
                    v0 = struct32 {
                        field_0: v49 as i32
                        field_16: <UNKNOWN>
                    };
                    v28 = alloc::boxed::Box<T>::new(&v0);
LABEL_46b944:
                    break;
                } else {
                    if !v48 {
                        continue;
                    }
LABEL_46b7cf:
                    v28 = 0;
                    break;
                }
            } else if !*(core::option::Option<T>::get_or_insert_with(&v11) as &i64) {
LABEL_46b908:
                return 0;
            }
        }
    }
    return v28;
}
