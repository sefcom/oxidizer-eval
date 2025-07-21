fn uu_printf::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct32;  // [bp-0x4a8]
    let v1: struct24;  // [bp-0x480]
    let v4: u64;  // [bp-0x468]
    let v5: u64;  // [bp-0x460]
    let v6: struct32;  // [bp-0x458]
    let v7: struct32;  // [bp-0x458]
    let v8: u8;  // [bp-0x454]
    let v9: u128;  // [bp-0x448]
    let v10: u64;  // [bp-0x438]
    let v11: u64;  // [bp-0x430]
    let v12: void*;  // [bp-0x428]
    let v13: u64;  // [bp-0x418]
    let v14: u64;  // [bp-0x410]
    let v15: struct24;  // [bp-0x408], Other Possible Types: struct64, struct40
    let v16: struct64;  // [bp-0x408]
    let v17: u128;  // [bp-0x3c8]
    let v18: struct32;  // [bp-0x3c1]
    let v19: u128;  // [bp-0x3b8]
    let v20: u64;  // [bp-0x3a9]
    let v21: u128;  // [bp-0x398]
    let v22: u128;  // [bp-0x388]
    let v23: u64;  // [bp-0x379]
    let v24: struct56;  // [bp-0x370]
    let v25: struct64;  // [bp-0x338]
    let v26: Result<struct40, struct16>;  // [bp-0x2f8], Other Possible Types: u8
    let v27: struct56;  // [bp-0x2f8]
    let v28: u128;  // [bp-0x2f8]
    let v29: u128;  // [bp-0x2f7]
    let v30: u64;  // [bp-0x2e8]
    let v31: u128;  // [bp-0x2e7]
    let v32: u32;  // [bp-0x2e0]
    let v33: u64;  // [bp-0x2d8]
    let v35: i64;  // rbx
    let v36: void*;  // rbx
    let v39: u64;  // rax
    let v40: void*;  // rcx
    let v41: u8;  // bpl
    let v42: u128;  // xmm0
    let v44: u128;  // xmm0
    let v47: u64;  // rax
    let v49: u128;  // xmm0
    let v50: u128;  // xmm0
    let v55: u120;  // [bp-0x3f7]

    uu_printf::uu_app(&v26);
    v24 = clap_builder::builder::command::Command::get_matches_from(&v26, a0, a1);
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, "FORMAT");
    v35 = clap_builder::parser::error::MatchesError::unwrap("FORMAT", &v26);
    if !v35 {
        v15 = <T as alloc::slice::hack::ConvertVec>::to_vec("missing operand");
        v30 = v15.field_16;
        v28 = *(&v15.field_0 as &i128);
        v32 = 1;
        alloc::boxed::Box<T>::new(&v26);
        return v36;
    }
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v24, "ARGUMENT");
    v16 = clap_builder::parser::error::MatchesError::unwrap("ARGUMENT", &v27);
    if v16.field_0 as i64 {
        v25 = v15;
        v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v25);
    }
    v13 = v39;
    v14 = v40 * 32 + v39;
    v12 = 0;
    v11 = *((v35 + 8) as &i64);
    v4 = *((v35 + 8) as &i64);
    v10 = *((v35 + 16) as &i64);
    v5 = *((v35 + 16) as &i64);
    loop {
        v15 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v4);
        if &v15 == "\t" {
            break;
        }
        v23 = v15.field_32;
        v42 = *((&v15.field_0 as &char + 1) as &i128);
        v22 = *(&v55 as &i128);
        v21 = v42;
        if v15.field_0 as i8 - 7 < 2 && v15.field_0 as i8 == 8 {
            v0 = struct32 {
                field_0: *((&v21 as &char + 7) as &i128)
                field_16: *((&v22 as &char + 7) as &i128)
            };
            alloc::boxed::Box<T>::new(&v0);
            return v47;
        }
        v33 = v15.field_32;
        v44 = *((&v15.field_0 as &char + 1) as &i128);
        v31 = *(&v55 as &i128);
        v29 = v44;
        v26 = v15.field_0;
        v6 = uucore::features::format::FormatItem<C>::write(&v26, std::io::stdio::stdout(), &v12);
        if v6.field_0 as i32 != 14 {
            v0 = struct32 {
                field_0: v6.field_0 as i32
                field_16: v9
            };
            alloc::boxed::Box<T>::new(&v0);
            return v47;
        } else if v8 {
            return v36;
        }
    }
    if !(v41 & 1) {
        return v36;
    }
    if !*(core::option::Option<T>::get_or_insert_with(&v12, &v13) as &i64) {
        return 0;
    }
    do {
        v4 = v11;
        v5 = v10;
        loop {
            v15 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v4);
            if &v15 == "\t" {
                break;
            }
            v20 = v15.field_32;
            v49 = *((&v15.field_0 as &char + 1) as &i128);
            v19 = *(&v55 as &i128);
            v17 = v49;
            if v15.field_0 as i8 == 8 {
                v0 = v18;
                alloc::boxed::Box<T>::new(&v0);
                return v47;
            }
            v33 = v15.field_32;
            v50 = *((&v15.field_0 as &char + 1) as &i128);
            v31 = *(&v55 as &i128);
            v29 = v50;
            v26 = v15.field_0;
            v7 = uucore::features::format::FormatItem<C>::write(&v26, std::io::stdio::stdout(), &v12);
            if v7.field_0 as i32 != 14 {
                v0 = struct32 {
                    field_0: v7.field_0 as i32
                    field_16: v9
                };
                alloc::boxed::Box<T>::new(&v0);
                return v47;
            } else if v8 {
                return v36;
            }
        }
    } while (*(core::option::Option<T>::get_or_insert_with(&v12, &v13) as &i64));
    return 0;
}
