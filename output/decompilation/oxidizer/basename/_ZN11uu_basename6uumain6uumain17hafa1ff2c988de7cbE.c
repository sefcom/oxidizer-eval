fn uu_basename::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x411]
    let v1: i64;  // [sp-0x410], Other Possible Types: struct24
    let v2: i64;  // [sp-0x408]
    let v3: i64;  // [sp-0x400]
    let v4: i64;  // [bp-0x3f8], Other Possible Types: struct24, struct64
    let v5: i128;  // [sp-0x3f0]
    let v6: i8;  // [bp-0x3e8]
    let v7: i8;  // [bp-0x3e0]
    let v8: i8;  // [bp-0x3d8]
    let v9: i8;  // [bp-0x3c8]
    let v10: struct24;  // [sp-0x3b0], Other Possible Types: i192
    let v11: i64;  // [sp-0x3a0]
    let v12: i64;  // [sp-0x398], Other Possible Types: struct32
    let v13: i64;  // [sp-0x390]
    let v14: i64;  // [sp-0x378]
    let v15: i64;  // [sp-0x370]
    let v16: i128;  // [sp-0x368]
    let v17: i128;  // [sp-0x358]
    let v18: i64;  // [sp-0x348]
    let v19: struct24;  // [sp-0x340]
    let v20: i8;  // [bp-0x328]
    let v21: struct24;  // [sp-0x310]
    let v22: i448;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct8>, struct24, struct64, struct56, struct712, struct28
    let v23: i64;  // [bp-0x2e0]
    let v24: i64;  // [bp-0x2d8]
    let v26: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v38: struct8;  // rax

    v19 = uucore::Args::collect_lossy(a0, a1);
    v22 = uu_basename::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v4, &v22, &v12);
    if v14 == 0x8000000000000000 {
        v26 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        return v26;
    }
    v18 = v9;
    v17 = v8;
    v16 = v6;
    v14 = v4;
    v15 = v5;
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN11uu_basename7options4ZERO17h4ed660ca995a2601E, g_50eae8) as i8 ? 0 : 10);
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, _ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E, g_50eac8);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E, g_50eac8, &v22);
    *(&v22.field_0 as &struct64) = struct64 {
        field_0: v28
        field_8: v33
        field_16: v29
        field_32: v30
        field_48: v31
        field_56: v32
    };
    v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v22);
    if !v11 {
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v22 = v4;
        alloc::boxed::Box<T>::new(&v22);
        return v26;
    }
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8);
    if !clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8, &v22) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN11uu_basename7options8MULTIPLE17h83f341c200c46a09E, g_50eab8) as i8 {
        v35 = v11;
        if v35 != 1 {
            if v35 == 2 {
                v11 = 1;
                v1 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v10 as &char + 8) as &i64) + 8) as &i64));
            } else if !v35 {
                panic!("already checked");
            } else {
                v4 = 0;
                v5 = *((*((*((&v10 as &char + 8) as &i64) + 16) as &i64) + 8) as &i128);
                v7 = 1;
                v12 = &v4;
                v13 = <os_display::Quoted as core::fmt::Display>::fmt;
                v22 = struct28 {
                    field_0: "extra operand "
                    field_16: &v12
                    field_24: <UNKNOWN>
                };
                v24 = 0;
                v23 = 1;
                core::option::Option<T>::map_or_else();
                v22 = v20;
                alloc::boxed::Box<T>::new(&v22);
                return v26;
            }
LABEL_463589:
            v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
            v38 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            if !v38 {
                return 0;
            }
            do {
                v21 = uu_basename::basename(*((v38 + 8) as &i64), *((v38 + 16) as &i64), v2, v3);
                print!("{}{}", &v21, &v0);
            } while ((v38 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v38));
        }
    } else {
        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8);
        v36 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8, &v22);
        if v36 && (v22 = <alloc::string::String as core::clone::Clone>::clone(v36), v4 = *((&v22 as &char + 8) as &i128), v1 != 0x8000000000000000) {
            v1 = v22;
            goto LABEL_463589;
        }
    }
    v1 = 0;
    v2 = 1;
    v3 = 0;
    goto LABEL_463589;
}
