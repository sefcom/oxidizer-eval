fn uu_basename::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x411]
    let v1: struct24;  // [sp-0x410], Other Possible Types: i64
    let v2: i64;  // [sp-0x408]
    let v3: i64;  // [sp-0x400]
    let v4: i456;  // [sp-0x3f8], Other Possible Types: Result<struct56, struct8>, struct64, struct24
    let v5: i128;  // [sp-0x3f0]
    let v7: i8;  // [bp-0x3e0]
    let v8: i192;  // [sp-0x3b0], Other Possible Types: struct24
    let v9: i64;  // [sp-0x3a0]
    let v10: i64;  // [bp-0x398], Other Possible Types: struct24, struct32
    let v11: i64;  // [sp-0x390]
    let v12: i64;  // [sp-0x378]
    let v13: i64;  // [sp-0x370]
    let v14: i128;  // [sp-0x368]
    let v15: i128;  // [sp-0x358]
    let v16: i64;  // [sp-0x348]
    let v17: struct24;  // [sp-0x340]
    let v20: struct24;  // [sp-0x310]
    let v21: i5696;  // [sp-0x2f8], Other Possible Types: struct28, Result<struct40, struct8>, struct64, struct24, struct712, struct56
    let v22: i64;  // [sp-0x2f0]
    let v23: i64;  // [sp-0x2e8]
    let v24: i64;  // [bp-0x2e0]
    let v25: i64;  // [bp-0x2d8]
    let v27: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: struct8;  // rax

    v17 = uucore::Args::collect_lossy(a0, a1);
    v21 = uu_basename::uu_app();
    v10 = struct24 {
        field_0: v17
        field_16: *((&v17 as &char + 16) as &i64)
    };
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v21, &v10);
    if v12 == 0x8000000000000000 {
        v27 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v27;
    }
    v16 = *((&v4 as &char + 48) as &i64);
    v15 = *((&v4 as &char + 32) as &i128);
    v14 = *((&v4 as &char + 16) as &i128);
    v12 = v4;
    v13 = v5;
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN11uu_basename7options4ZERO17h4ed660ca995a2601E, g_50eae8) as i8 ? 0 : 10);
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, _ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E, g_50eac8);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E, g_50eac8, &v21);
    *(&v21.field_0 as &struct64) = struct64 {
        field_0: v29
        field_8: v30
        field_16: v31
        field_32: v32
        field_48: v33
        field_56: v34
    };
    v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21);
    if !v9 {
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v21 = struct28 {
            field_0: v4
            field_16: v6
            field_24: 1
        };
        v27 = alloc::boxed::Box<T>::new(&v21);
        return v27;
    }
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8);
    if !clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8, &v21) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN11uu_basename7options8MULTIPLE17h83f341c200c46a09E, g_50eab8) as i8 {
        v35 = v9;
        if v35 != 1 {
            if v35 == 2 {
                v9 = 1;
                v1 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v8 as &char + 8) as &i64) + 8) as &i64));
            } else if !v35 {
                panic!("already checked");
            } else {
                v4 = 0;
                v5 = *((*((*((&v8 as &char + 8) as &i64) + 16) as &i64) + 8) as &i128);
                v7 = 1;
                v10 = &v4;
                v11 = <os_display::Quoted as core::fmt::Display>::fmt;
                v21 = "extra operand ";
                v22 = 1;
                v25 = 0;
                v23 = &v10;
                v24 = 1;
                core::option::Option<T>::map_or_else();
                v21 = struct28 {
                    field_0: v18
                    field_16: v19
                    field_24: 1
                };
                v27 = alloc::boxed::Box<T>::new(&v21);
                return v27;
            }
LABEL_463589:
            v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
            v37 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            if !v37 {
                return 0;
            }
            do {
                v20 = uu_basename::basename(*((v37 + 8) as &i64), *((v37 + 16) as &i64), v2, v3);
                print!("{:?}{:?}", &v20, &v0);
                v37 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            } while (v37);
        }
    } else {
        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8);
        v36 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8, &v21);
        if v36 && (v21 = <alloc::string::String as core::clone::Clone>::clone(v36), v4 = *((&v21 as &char + 8) as &i128), v1 != 0x8000000000000000) {
            v1 = v21;
            goto LABEL_463589;
        }
    }
    v1 = 0;
    v2 = 1;
    v3 = 0;
    goto LABEL_463589;
}
