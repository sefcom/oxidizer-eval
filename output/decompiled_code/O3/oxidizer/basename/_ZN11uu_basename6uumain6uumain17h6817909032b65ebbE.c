fn uu_basename::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x411]
    let v1: i64;  // [sp-0x410], Other Possible Types: struct24
    let v2: i128;  // [sp-0x408]
    let v3: i64;  // [sp-0x400]
    let v4: i64;  // [bp-0x3f8], Other Possible Types: Argument, struct24, struct64
    let v5: i64;  // [sp-0x3f0]
    let v6: i8;  // [bp-0x3e8], Other Possible Types: Argument
    let v7: i8;  // [bp-0x3e0]
    let v8: i8;  // [bp-0x3d8]
    let v9: i8;  // [bp-0x3c8]
    let v10: i192;  // [sp-0x3b0], Other Possible Types: struct24
    let v11: struct24;  // [bp-0x398], Other Possible Types: struct32
    let v12: i64;  // [sp-0x378]
    let v13: i64;  // [sp-0x370]
    let v14: i128;  // [sp-0x368]
    let v15: i128;  // [sp-0x358]
    let v16: i64;  // [sp-0x348]
    let v17: struct24;  // [sp-0x340]
    let v18: i192;  // [sp-0x328]
    let v19: struct24;  // [sp-0x310]
    let v20: i192;  // [sp-0x2f8], Other Possible Types: struct28, Result<struct40, struct16>, Arguments, struct712, struct56, struct64, struct24
    let v22: i64;  // rsi
    let v23: i64;  // rdx
    let v24: i64;  // rcx
    let v25: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: struct8;  // rax
    let v33: i64;  // r9

    v17 = uucore::Args::collect_lossy(a0, a1);
    v20 = uu_basename::uu_app(v22, v23);
    *(&v11.field_0 as &struct24) = struct24 {
        field_0: v17
        field_16: *((&v17 as &char + 16) as &i64)
    };
    clap_builder::builder::command::Command::try_get_matches_from(&v4, &v20, &v11, v24);
    if v12 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v25;
    }
    v16 = v9;
    v15 = v8;
    v14 = v6;
    v12 = v4;
    v13 = v5;
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN11uu_basename7options4ZERO17h1fd2dc99c0bea167E, g_50f098) as i8 ? 0 : 10);
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, _ZN11uu_basename7options4NAME17hffa80714624b78eeE, g_50f078);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options4NAME17hffa80714624b78eeE, g_50f078, &v20);
    *(&v20.field_0 as &struct64) = struct64 {
        field_0: v27
        field_8: v24
        field_16: v28
        field_32: v29
        field_48: v22
        field_56: v23
    };
    v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20, v20.56);
    if !v10.field_16 {
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v20 = struct28 {
            field_0: v4
            field_16: v6
            field_24: 1
        };
        v25 = alloc::boxed::Box<T>::new(&v20);
        return v25;
    }
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, _ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088);
    if !clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088, &v20) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN11uu_basename7options8MULTIPLE17h365b7b01c1c22105E, g_50f068) as i8 {
        v30 = v10.field_16;
        if v30 != 1 {
            if v30 == 2 {
                v10.field_16 = 1;
                v1 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v10 as &char + 8) as &i64) + 8) as &i64));
            } else if !v30 {
                panic!("already checked");
            } else {
                v4 = 0;
                v5 = *((*((*((&v10 as &char + 8) as &i64) + 16) as &i64) + 8) as &i128);
                v7 = 1;
                v18 = format!("extra operand {:?}", &v4);
                v20 = struct28 {
                    field_0: v18
                    field_16: *((&v18 as &char + 16) as &i64)
                    field_24: 1
                };
                v25 = alloc::boxed::Box<T>::new(&v20);
                return v25;
            }
LABEL_4635d9:
            v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
            v32 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            if !v32 {
                return 0;
            }
            do {
                v19 = uu_basename::basename(*((v32 + 8) as &i64), *((v32 + 16) as &i64), v2, v3, v33);
                v4 = Argument {
                    value: &v19
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v6 = Argument {
                    value: &v0
                    formatter: <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt
                };
                v20 = Arguments {
                    pieces: ["", ""]
                    args: [&v4, &v6]
                    fmt: 0
                };
                std::io::stdio::_print(&v20, v22, v23);
                v32 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            } while (v32);
        }
    } else {
        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, _ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088);
        v31 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088, &v20);
        if v31 && (v20 = <alloc::string::String as core::clone::Clone>::clone(v31), v4 = *((&v20 as &char + 8) as &i128), v1 != 0x8000000000000000) {
            v2 = v4;
            v1 = v20;
            goto LABEL_4635d9;
        }
    }
    v1 = 0;
    v2 = 1;
    v3 = 0;
    goto LABEL_4635d9;
}
