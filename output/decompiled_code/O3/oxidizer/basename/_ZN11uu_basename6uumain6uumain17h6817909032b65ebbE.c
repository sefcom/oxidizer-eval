fn uu_basename::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x411]
    let v1: i64;  // [sp-0x410], Other Possible Types: struct24
    let v2: i128;  // [sp-0x408]
    let v3: i64;  // [sp-0x400]
    let v4: i448;  // [sp-0x3f8], Other Possible Types: struct64, struct24, Argument, Result<struct56, struct16>
    let v5: i128;  // [sp-0x3f0]
    let v6: Argument;  // [bp-0x3e8]
    let v7: i8;  // [bp-0x3e0]
    let v8: struct24;  // [sp-0x3b0], Other Possible Types: i192
    let v9: struct32;  // [bp-0x398], Other Possible Types: i192
    let v10: i64;  // [sp-0x378]
    let v11: i64;  // [sp-0x370]
    let v12: i128;  // [sp-0x368]
    let v13: i128;  // [sp-0x358]
    let v14: i64;  // [sp-0x348]
    let v15: i192;  // [sp-0x340], Other Possible Types: struct24
    let v16: i192;  // [sp-0x328]
    let v17: struct24;  // [sp-0x310]
    let v18: i320;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct16>, struct24, struct56, Arguments, struct712, struct64
    let v20: i64;  // rsi
    let v21: i64;  // rdx
    let v22: i64;  // rcx
    let v23: i64;  // rax
    let v28: i64;  // rax
    let v29: i64;  // rax
    let v30: struct8;  // rax
    let v31: i64;  // r9

    v15 = uucore::Args::collect_lossy(a0, a1);
    v18 = uu_basename::uu_app(v20, v21);
    v9 = v15;
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v18, &v9, v22);
    if v10 == 0x8000000000000000 {
        v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
        return v23;
    }
    v14 = *((&v4 as &char + 48) as &i64);
    v13 = *((&v4 as &char + 32) as &i128);
    v12 = *((&v4 as &char + 16) as &i128);
    v10 = v4;
    v11 = v5;
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN11uu_basename7options4ZERO17h1fd2dc99c0bea167E, g_50f098) as i8 ? 0 : 10);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10, _ZN11uu_basename7options4NAME17hffa80714624b78eeE, g_50f078);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options4NAME17hffa80714624b78eeE, g_50f078, &v18);
    *(&v18.field_0 as &struct64) = struct64 {
        field_0: v25
        field_8: v22
        field_16: v26
        field_32: v27
        field_48: v20
        field_56: v21
    };
    v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18, v18.56);
    if !v8.field_16 {
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v18 = v4;
        v23 = alloc::boxed::Box<T>::new(&v18);
        return v23;
    }
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, _ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088);
    if !clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088, &v18) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN11uu_basename7options8MULTIPLE17h365b7b01c1c22105E, g_50f068) as i8 {
        v28 = v8.field_16;
        if v28 != 1 {
            if v28 == 2 {
                v8.field_16 = 1;
                v1 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v8 as &char + 8) as &i64) + 8) as &i64));
            } else if !v28 {
                panic!("already checked");
            } else {
                v4 = 0;
                v5 = *((*((*((&v8 as &char + 8) as &i64) + 16) as &i64) + 8) as &i128);
                v7 = 1;
                v16 = format!("extra operand {:?}", &v4);
                v18 = v16;
                v23 = alloc::boxed::Box<T>::new(&v18);
                return v23;
            }
LABEL_4635d9:
            v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
            v30 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            if !v30 {
                return 0;
            }
            do {
                v17 = uu_basename::basename(*((v30 + 8) as &i64), *((v30 + 16) as &i64), v2, v3, v31);
                v4 = Argument {
                    value: &v17
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v6 = Argument {
                    value: &v0
                    formatter: <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt
                };
                v18 = Arguments {
                    pieces: ["", ""]
                    args: [&v4, &v6]
                    fmt: 0
                };
                std::io::stdio::_print(&v18, v20, v21);
                v30 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            } while (v30);
        }
    } else {
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, _ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088);
        v29 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088, &v18);
        if v29 && (v18 = <alloc::string::String as core::clone::Clone>::clone(v29), v4 = *((&v18 as &char + 8) as &i128), v1 != 0x8000000000000000) {
            v2 = v4;
            v1 = v18;
            goto LABEL_4635d9;
        }
    }
    v1 = 0;
    v2 = 1;
    v3 = 0;
    goto LABEL_4635d9;
}
