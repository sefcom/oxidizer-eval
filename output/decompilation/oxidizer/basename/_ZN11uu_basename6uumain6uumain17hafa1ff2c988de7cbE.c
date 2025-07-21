fn uu_basename::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x411]
    let v1: alloc::string::String;  // [bp-0x410]
    let v2: u64;  // [bp-0x410]
    let v3: u128;  // [bp-0x408]
    let v5: struct24;  // [bp-0x3f8], Other Possible Types: struct64
    let v6: void*;  // [bp-0x3f8], Other Possible Types: u64
    let v7: Result<struct56, struct16>;  // [bp-0x3f8]
    let v8: u128;  // [bp-0x3f0]
    let v9: u64;  // [bp-0x3e8]
    let v10: u8;  // [bp-0x3e0]
    let v11: u128;  // [bp-0x3d8]
    let v12: u64;  // [bp-0x3c8]
    let v13: struct24;  // [bp-0x3b0]
    let v14: i64;  // [bp-0x3a8], Other Possible Types: struct_3 *
    let v15: u64;  // [bp-0x3a0]
    let v16: struct24;  // [bp-0x398], Other Possible Types: struct32, struct_0 *
    let v17: u64;  // [bp-0x390]
    let v18: u64;  // [bp-0x378]
    let v19: u64;  // [bp-0x370]
    let v20: u128;  // [bp-0x368]
    let v21: u128;  // [bp-0x358]
    let v22: u64;  // [bp-0x348]
    let v23: struct24;  // [bp-0x340]
    let v24: struct24;  // [bp-0x340]
    let v25: u128;  // [bp-0x328]
    let v26: u64;  // [bp-0x318]
    let v27: struct24;  // [bp-0x310]
    let v28: struct24;  // [bp-0x2f8], Other Possible Types: struct56, struct64, Result<struct40, struct16>, struct28, u8
    let v29: alloc::string::String;  // [bp-0x2f8]
    let v30: u64;  // [bp-0x2f0]
    let v31: i64;  // [bp-0x2e8]
    let v32: u64;  // [bp-0x2e0]
    let v33: void*;  // [bp-0x2d8]
    let v35: u128;  // xmm1
    let v39: u64;  // rdx
    let v40: u64;  // rax
    let v41: u64;  // rax
    let v42: u64;  // rax
    let v43: u64;  // rdx
    let v44: i64;  // rax

    v23 = uucore::Args::collect_lossy(a0, a1);
    uu_basename::uu_app(&v28);
    v16 = v24;
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v28, &v16);
    match v7 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
        },
        Ok(_) => {
            v22 = v12;
            v35 = v11;
            v21 = v35;
            v20 = *((&v7 as &char + 16) as &i128);
            v18 = v7 as i64;
            v19 = v8;
            v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v18, _ZN11uu_basename7options4ZERO17h4ed660ca995a2601E.__0, g_50eae8.__0) as i8 ? 0 : 10);
            v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v18, _ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E.__0, g_50eac8.__0);
            v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E.__0, g_50eac8.__0, &v28);
            v28 = struct64 {
                field_0: v40
                field_8: v8
                field_16: v35
                field_32: v11
                field_48: v12
                field_56: v39
            };
            v13 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v28);
            if !v15 {
                v5 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v28 = struct28 {
                    field_0: v5.field_0
                    field_16: v9
                    field_24: 1
                };
                alloc::boxed::Box<T>::new(&v28);
                return v41;
            }
            v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v18, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E.__0, g_50ead8.__0);
            if clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E.__0, g_50ead8.__0, &v28) || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v18, _ZN11uu_basename7options8MULTIPLE17h83f341c200c46a09E.__0, g_50eab8.__0) as i8 {
                v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v18, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E.__0, g_50ead8.__0);
                v42 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E.__0, g_50ead8.__0, &v28);
                if v42 {
                    v29 = <alloc::string::String as core::clone::Clone>::clone(v42);
                    *(&v6 as &i128) = *(&v29.vec.buf.ptr as &i128);
                    if v29.vec.buf.cap.__0 != 0x8000000000000000 {
                        v3 = *(&v6 as &i128) as u128;
                        v2 = v29.vec.buf.cap.__0;
                    }
                }
            } else if v15 != 1 {
                if v15 == 2 {
                    v15 = 1;
                    v1 = <alloc::string::String as core::clone::Clone>::clone(*((v14 + 8) as &i64));
                } else if v15 {
                    v6 = 0;
                    v8 = *((*((v14 + 16) as &i64) + 8) as &i128) as u128;
                    v10 = 1;
                    v16 = &v6;
                    v17 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v28 = "extra operand ";
                    v30 = 1;
                    v33 = 0;
                    v31 = &v16;
                    v32 = 1;
                    v28 = core::option::Option<T>::map_or_else(v43);
                    v28 = struct28 {
                        field_0: v25
                        field_16: v26
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v28);
                    return v41;
                } else {
                    panic!("already checked");
                }
            }
            v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16);
            if !v44 {
                return 0;
            }
            do {
                vvar_631{stack -784} = struct24 OrderedDict({0: 𝜙@192b [((4601449, None), vvar_458{stack -784}), ((4601263, None), None)]})
                uu_basename::basename(&v27, *((v44 + 8) as &i64), *((v44 + 16) as &i64), v1);
            } while ((print!("{}{}", &v27, &v0);
, <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16), v44));
            return 0;
        },
    }
}
