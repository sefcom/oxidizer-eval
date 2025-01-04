fn uu_basename::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x411]
    let v1: i64;  // [sp-0x410], Other Possible Types: struct24
    let v2: i64;  // [sp-0x408]
    let v3: i64;  // [sp-0x400]
    let v4: i64;  // [sp-0x3f8], Other Possible Types: Argument, Result<struct56, struct16>, struct64, struct24
    let v5: i64;  // [sp-0x3f0]
    let v6: Argument;  // [bp-0x3e8]
    let v7: i8;  // [bp-0x3e0]
    let v8: struct24;  // [sp-0x3b0], Other Possible Types: i192
    let v9: i64;  // [sp-0x3a0]
    let v10: struct32;  // [bp-0x398], Other Possible Types: i192
    let v11: i64;  // [sp-0x378]
    let v12: i64;  // [sp-0x370]
    let v13: i128;  // [sp-0x368]
    let v14: i128;  // [sp-0x358]
    let v15: i64;  // [sp-0x348]
    let v16: i192;  // [sp-0x340], Other Possible Types: struct24
    let v17: i192;  // [sp-0x328]
    let v18: struct24;  // [sp-0x310]
    let v19: i224;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct16>, struct64, struct712, Arguments, struct56, struct24
    let v20: i64;  // [sp-0x2c0]
    let v22: i64;  // rsi
    let v23: i64;  // rdx
    let v24: i64;  // rcx
    let v25: i64;  // r8
    let v26: i64;  // r9
    let v27: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: struct8;  // rax

    v16 = uucore::Args::collect_lossy(a0, a1);
    v19 = uu_basename::uu_app(v22, v23);
    v10 = v16;
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v19, &v10, v24, v25, v26);
    if v11 == 0x8000000000000000 {
        v27 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        return v27;
    }
    v15 = *((&v4 as &char + 48) as &i64);
    v14 = *((&v4 as &char + 32) as &i128);
    v13 = *((&v4 as &char + 16) as &i128);
    v11 = v4;
    v12 = v5;
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN11uu_basename7options4ZERO17h4ed660ca995a2601E, g_50eae8) as i8 ? 0 : 10);
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, _ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E, g_50eac8);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E, g_50eac8, &v19);
    *(&v19.field_0 as &struct64) = struct64 {
        field_0: v29
        field_8: v24
        field_16: v30
        field_32: v31
        field_48: v22
        field_56: v23
    };
    v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v19, v20);
    if !v9 {
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v19 = v4;
        v27 = alloc::boxed::Box<T>::new(&v19);
        return v27;
    }
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8);
    if !clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8, &v19) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN11uu_basename7options8MULTIPLE17h83f341c200c46a09E, g_50eab8) as i8 {
        v32 = v9;
        if v32 != 1 {
            if v32 == 2 {
                v9 = 1;
                v1 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v8 as &char + 8) as &i64) + 8) as &i64));
            } else if !v32 {
                panic!("already checked");
            } else {
                v4 = 0;
                v5 = *((*((*((&v8 as &char + 8) as &i64) + 16) as &i64) + 8) as &i128);
                v7 = 1;
                v17 = format!("extra operand {:?}", &v4);
                v19 = v17;
                v27 = alloc::boxed::Box<T>::new(&v19);
                return v27;
            }
LABEL_463589:
            v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
            v34 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            if !v34 {
                return 0;
            }
            do {
                v18 = uu_basename::basename(*((v34 + 8) as &i64), *((v34 + 16) as &i64), v2, v3, v26);
                v4 = Argument {
                    value: &v18
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v6 = Argument {
                    value: &v0
                    formatter: <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt
                };
                v19 = Arguments {
                    pieces: ["", ""]
                    args: [&v4, &v6]
                    fmt: 0
                };
                std::io::stdio::_print(&v19, v22, v23);
                v34 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            } while (v34);
        }
    } else {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8);
        v33 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8, &v19);
        if v33 && (v19 = <alloc::string::String as core::clone::Clone>::clone(v33), v4 = *((&v19 as &char + 8) as &i128), v1 != 0x8000000000000000) {
            v2 = v4;
            v1 = v19;
            goto LABEL_463589;
        }
    }
    v1 = 0;
    v2 = 1;
    v3 = 0;
    goto LABEL_463589;
}
