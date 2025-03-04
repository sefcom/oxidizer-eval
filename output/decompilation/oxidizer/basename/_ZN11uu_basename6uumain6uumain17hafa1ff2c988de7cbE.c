fn uu_basename::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x411]
    let v1: i64;  // [sp-0x410], Other Possible Types: struct24
    let v2: i64;  // [sp-0x408]
    let v3: i64;  // [sp-0x400]
    let v4: i64;  // [sp-0x3f8], Other Possible Types: int, struct64, struct24, char
    let v5: i64;  // [sp-0x3f0], Other Possible Types: int
    let v6: i8;  // [bp-0x3e8]
    let v7: i8;  // [bp-0x3e0]
    let v8: i8;  // [bp-0x3d8]
    let v9: i8;  // [bp-0x3c8]
    let v10: struct24;  // [sp-0x3b0]
    let v11: i64;  // [sp-0x3a0]
    let v12: struct32;  // [sp-0x398], Other Possible Types: int
    let v13: i64;  // [sp-0x378]
    let v14: i64;  // [sp-0x370]
    let v15: iNone;  // [sp-0x368]
    let v16: iNone;  // [sp-0x358]
    let v17: i64;  // [sp-0x348]
    let v18: struct24;  // [sp-0x340]
    let v19: String;  // [sp-0x328]
    let v20: struct24;  // [sp-0x310]
    let v21: iNone;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct8>, struct64, struct56, struct712, struct24
    let v23: i64;  // rbx
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v35: struct8;  // rax

    v18 = uucore::Args::collect_lossy(a0, a1);
    v21 = uu_basename::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v4, &v21, &v12);
    if v13 == 0x8000000000000000 {
        v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
        return v23;
    }
    v17 = *(&v9 as &i64);
    v16 = *(&v8 as &i128);
    v15 = *(&v6 as &i128);
    v13 = v4;
    v14 = v5;
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN11uu_basename7options4ZERO17h4ed660ca995a2601E, g_50eae8) as i8 ? 0 : 10);
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, _ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E, g_50eac8);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E, g_50eac8, &v21);
    *(&v21.field_0 as &struct64) = struct64 {
        field_0: v25
        field_8: v26
        field_16: v27
        field_32: v28
        field_48: v29
        field_56: v30
    };
    v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21);
    if !v11 {
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v21 = *(&v4.field_0 as &i224);
        alloc::boxed::Box<T>::new(&v21);
        return v23;
    }
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8);
    if !clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8, &v21) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN11uu_basename7options8MULTIPLE17h83f341c200c46a09E, g_50eab8) as i8 {
        v32 = v11;
        if v32 != 1 {
            if v32 == 2 {
                v11 = 1;
                v1 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v10.field_0 as &char + 8) as &i64) + 8) as &i64));
            } else if !v32 {
                panic!("already checked");
            } else {
                v4 = 0;
                *(&v5 as &i128) = *((*((*((&v10.field_0 as &char + 8) as &i64) + 16) as &i64) + 8) as &i128);
                *(&v7 as &i8) = 1;
                v19 = format!("extra operand {}", &v4);
                v21 = *(&v19 as &i224);
                alloc::boxed::Box<T>::new(&v21);
                return v23;
            }
LABEL_463589:
            v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
            v35 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            if !v35 {
                return 0;
            }
            do {
                v20 = uu_basename::basename(*((v35 + 8) as &i64), *((v35 + 16) as &i64), v2, v3);
                print!("{}{}", &v20, &v0);
            } while ((v35 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v35));
        }
    } else {
        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8);
        v33 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8, &v21);
        if v33 && (v21 = <alloc::string::String as core::clone::Clone>::clone(v33), *(&v4 as &i128) = *((&v21.field_0 as &char + 8) as &i128), v1 != 0x8000000000000000) {
            v1 = v21;
            goto LABEL_463589;
        }
    }
    v1 = 0;
    v2 = 1;
    v3 = 0;
    goto LABEL_463589;
}
