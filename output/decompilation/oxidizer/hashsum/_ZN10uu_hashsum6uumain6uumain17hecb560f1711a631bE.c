fn uu_hashsum::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x70b]
    let v1: u8;  // [bp-0x70b]
    let v2: u8;  // [bp-0x70a]
    let v3: u8;  // [bp-0x709]
    let v4: u8;  // [bp-0x708]
    let v5: u8;  // [bp-0x708]
    let v6: i64;  // [bp-0x700]
    let v7: u64;  // [bp-0x6f8]
    let v8: u64;  // [bp-0x6f0]
    let v9: void*;  // [bp-0x6e8]
    let v10: core::fmt::rt::Argument;  // [bp-0x6e0]
    let v11: u64;  // [bp-0x6d8]
    let v12: void*;  // [bp-0x6d0]
    let v13: iNone;  // [bp-0x6c8]
    let v14: iNone;  // [bp-0x6b8]
    let v15: u64;  // [bp-0x6a8]
    let v16: struct16;  // [bp-0x6a0]
    let v17: struct24;  // [bp-0x690]
    let v18: u64;  // [bp-0x688]
    let v19: u64;  // [bp-0x680]
    let v20: Option<struct24>;  // [bp-0x678], Other Possible Types: core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, struct64
    let v21: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x630]
    let v22: core::fmt::rt::Argument;  // [bp-0x608], Other Possible Types: struct16, Result<struct40, struct16>, struct44, struct56, struct24
    let v23: Result<struct40, struct24>;  // [bp-0x608], Other Possible Types: core::fmt::rt::Argument, core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>
    let v24: struct712;  // [bp-0x608]
    let v25: struct40;  // [bp-0x608]
    let v26: core::fmt::rt::Argument;  // [bp-0x608]
    let v27: void*;  // [bp-0x600]
    let v28: void*;  // [bp-0x600]
    let v29: u64;  // [bp-0x5f8]
    let v30: u64;  // [bp-0x5f8]
    let v31: i64;  // [bp-0x5f0]
    let v32: u64;  // [bp-0x5e8]
    let v33: u8;  // [bp-0x340]
    let v34: struct64;  // [bp-0x338]
    let v35: u8;  // [bp-0x2f8]
    let v37: core::fmt::rt::Argument;  // r14
    let v38: u64;  // rax
    let v39: u64;  // rdx
    let v40: void*;  // r13
    let v41: i64;  // rax
    let v42: u64;  // r12
    let v43: u8;  // bl
    let v44: u8;  // r14b
    let v45: u8;  // al
    let v46: u8;  // bpl
    let v47: u8;  // al
    let v48: u8;  // al
    let v49: u64;  // rax
    let v50: i64;  // rcx
    let v51: u64;  // rdx
    let v52: u64;  // rbx
    let v53: u8;  // bpl
    let v54: u64;  // rax

    v16 = struct16 {
        field_0: a0
        field_8: a1
    };
    v20 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v16);
    v37 = v20 as i64;
    if (((0 ^ v20 as i64) & (0 ^ -(v20 as i64))) >> 63) as char {
        v22 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("hashsum");
        v26 = v23;
        v27 = v28;
        v29 = v30;
        v22 = v23;
    } else {
        v22 = v37;
    }
    v10 = v22;
    v9 = v28;
    v38 = std::path::Path::file_stem(v28, v30);
    v17 = alloc::string::String::from_utf8_lossy(v38, v39);
    v22 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v28, v30);
    v20 = v23;
    v21 = core::iter::traits::iterator::Iterator::chain(&v20, v16.field_0);
    v24 = uu_hashsum::uu_app(v18, v19);
    memcpy(&v35, &v24, 712);
    v22 = clap_builder::builder::command::Command::try_get_matches_from(&v35, &v21);
    if v22.field_0 == 0x8000000000000000 {
        v40 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
    } else {
        v15 = (&v24)[6].field_0;
        v14 = *(&(&v24)[4] as &i128);
        v13 = *(&(&v24)[2] as &i128);
        v11 = v22.field_0;
        v12 = v27;
        if alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(v18, v19) {
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11);
            v41 = clap_builder::parser::error::MatchesError::unwrap(&v22);
            if !v41 {
                goto LABEL_476c53;
            }
            v22 = uucore::features::checksum::calculate_blake2b_length(*(v41 as &i64));
            v40 = v27;
            v42 = v29;
            if !(v22.field_0 as i8 & 1) {
                if !v33 {
                    goto LABEL_476c5b;
                }
                goto LABEL_476c3e;
            }
        } else {
LABEL_476c53:
            v40 = 0;
            if v33 {
LABEL_476c3e:
                v23 = uu_hashsum::create_algorithm_from_flags(&v11);
                goto LABEL_476c75;
            }
LABEL_476c5b:
            v25 = uucore::features::checksum::detect_algo(v18, v19, v40, v42);
LABEL_476c75:
            v40 = v27;
            if v23 as i64 {
                v7 = v23 as i64;
                v6 = v31;
                v8 = v32;
                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "binary");
                if !v2 {
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "text");
                }
                v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "check");
                v44 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "status");
                v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "quiet");
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "strict");
                v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "warn");
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "ignore-missing");
                v46 = v45 | v44;
                if v5 {
                    v47 = 1;
                    if v43 {
                        goto LABEL_476da8;
                    }
                    goto LABEL_476eb9;
                } else if v43 {
LABEL_476da8:
                    v48 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "text");
                    v47 = 11;
                    if (v48 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "binary")) == 1 {
                        goto LABEL_476eb9;
                    }
                    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11);
                    v20 = clap_builder::parser::error::MatchesError::unwrap(&v22);
                    core::option::Option<T>::map_or_else(&v22, &v20);
                    v40 = uucore::features::checksum::perform_checksum_validation(v27, v29 * 16 + v27, v7, v40, v8, v5 * 0x100 | v0 * 0x10000 | (!v44 ? (!v46 ? (v3 & (v44 ^ 1) | 2) * 0x1000000 : 0x1000000) : 0));
                } else {
                    v1 = v0 | v46;
                    if !v0 && !v46 {
                        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11);
                        v49 = (v22 as i32 == 2 ? v27 : 0);
                        v50 = (v49 ? v49 : &g_411cc8);
                        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "zero");
                        v4 = v51;
                        v52 = *((v6 + 40) as &i64)(v29) as i64;
                        v53 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "tag");
                        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11);
                        v34 = clap_builder::parser::error::MatchesError::unwrap(&v22);
                        if v34.field_0 as i64 {
                            v22 = struct44 {
                                field_0: v7
                                field_8: v40
                                field_16: v52
                                field_24: v4
                                field_32: v8
                                field_40: v2
                                field_41: v53
                                field_42: *(v50 as &i8)
                                field_43: v0
                            };
                            v54 = uu_hashsum::hashsum(&v22, &v34);
                        } else {
                            v22 = struct44 {
                                field_0: v7
                                field_8: v40
                                field_16: v52
                                field_24: v4
                                field_32: v8
                                field_40: v2
                                field_41: v53
                                field_42: *(v50 as &i8)
                                field_43: v0
                            };
                            v54 = uu_hashsum::hashsum(&v22);
                        }
                        return v54;
                    }
LABEL_476eb9:
                    v40 = alloc::boxed::Box<T>::new(v47);
                }
            }
        }
    }
    return v40;
}
