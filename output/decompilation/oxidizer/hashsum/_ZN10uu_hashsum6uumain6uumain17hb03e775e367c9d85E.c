fn uu_hashsum::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: i8;  // [bp-0x72b]
    let v1: i8;  // [bp-0x72b]
    let v2: i8;  // [bp-0x72a]
    let v3: i8;  // [bp-0x729]
    let v4: i64;  // [bp-0x728]
    let v5: i64;  // [bp-0x720]
    let v6: i64;  // [bp-0x718]
    let v7: i8;  // [bp-0x710]
    let v8: i8;  // [bp-0x700]
    let v9: i64;  // [bp-0x6f0]
    let v10: iNone;  // [bp-0x6e8]
    let v11: i64;  // [bp-0x6e0]
    let v12: i64;  // [bp-0x6d8]
    let v13: iNone;  // [bp-0x6c8]
    let v14: i64;  // [bp-0x6c0]
    let v15: i64;  // [bp-0x6b8]
    let v16: i64;  // [bp-0x6b0]
    let v17: i64;  // [bp-0x6a8]
    let v18: i64;  // [bp-0x6a0]
    let v19: iNone;  // [bp-0x698]
    let v20: i64;  // [bp-0x690]
    let v21: iNone;  // [bp-0x688]
    let v22: iNone;  // [bp-0x678], Other Possible Types: unsigned long
    let v23: i64;  // [bp-0x668]
    let v24: iNone;  // [bp-0x630]
    let v25: iNone;  // [bp-0x630]
    let v26: iNone;  // [bp-0x608]
    let v27: iNone;  // [bp-0x608]
    let v28: iNone;  // [bp-0x608]
    let v29: iNone;  // [bp-0x608]
    let v30: i64;  // [bp-0x600]
    let v31: i64;  // [bp-0x5f8]
    let v32: i8;  // [bp-0x340]
    let v33: iNone;  // [bp-0x338]
    let v34: i8;  // [bp-0x2f8]
    let v37: iNone;  // xmm0
    let v38: i64;  // rax
    let v39: i64;  // rdx
    let v40: i64;  // rax
    let v41: i8;  // bpl
    let v42: i64;  // r12
    let v43: i8;  // al
    let v44: i64;  // rax
    let v45: i8;  // r13b
    let v46: i8;  // al
    let v47: i8;  // al
    let v48: i64;  // rax
    let v49: i8;  // bpl
    let v50: i64;  // r15
    let v51: i64;  // r13
    let v52: i8;  // r12b
    let v53: i64;  // rdx
    let v55: i64;  // rdx
    let v57: i64;  // rbx

    v21 = struct16 {
        field_0: a0
        field_8: a1
    };
    v22 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v21);
    if v22 == 0x8000000000000000 {
        v26 = std::sys::os_str::bytes::Slice::to_owned("hashsum");
        v12 = v31;
    } else {
        v12 = v23;
    }
    v10 = v37;
    v38 = std::path::Path::file_stem(v11, v12) as u64;
    v13 = std::sys::os_str::bytes::Slice::to_string_lossy((v38 ? v38 : &g_465e49), v39);
    v26 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v10 as u8);
    v22 = core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>> {
        inner: core::iter::adapters::flatten::FlattenCompat<core::option::IntoIter<core::char::EscapeDebug>, core::char::EscapeDebug> {
            iter: core::iter::adapters::fuse::Fuse<core::option::IntoIter<core::char::EscapeDebug>> {
                iter: <UNKNOWN>
            }
            frontiter: <UNKNOWN>
            backiter: <UNKNOWN>
        }
    };
    memcpy(&v22, &v26, 16);
    v24 = core::iter::traits::iterator::Iterator::chain(&v22, v21 as i64);
    v26 = uu_hashsum::uu_app(v14, v15);
    memcpy(&v34, &v26, 712);
    v22 = v25;
    v27 = clap_builder::builder::command::Command::try_get_matches_from(&v34, &v22);
    match v27 {
        Err(_) => {
            uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        },
        Ok(_) => {
            v9 = (&v27)[48] as i64;
            memcpy(&v8, &v27, 16);
            memcpy(&v7, &v27, 16);
            v5 = v27 as i64;
            v6 = v30;
            if alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(v14, v15) as i8 {
                v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "length");
                v40 = clap_builder::parser::error::MatchesError::unwrap("length", &v26);
                if !v40 {
                    goto LABEL_5774be;
                }
                v26 = uucore::features::checksum::calculate_blake2b_length(*(v40 as &i64));
                if v26 as i64 {
                    return v30;
                }
                if !v32 {
                    goto LABEL_5774c5;
                }
LABEL_5774a9:
                v28 = uu_hashsum::create_algorithm_from_flags(&v5);
            } else {
LABEL_5774be:
                if !(!v32) {
                    goto LABEL_5774a9;
                }
LABEL_5774c5:
                v29 = uucore::features::checksum::detect_algo(v14, v15, v57, v31);
            }
            if let Ok(_) = v28 {
                *(&v19 as &i128) = (&v28)[24] as i128;
                v4 = v28 as i64;
                v16 = v4;
                v17 = v30;
                v18 = v31;
                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "binary") as i8;
                if !v2 {
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "text");
                }
                v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "check") as i32 as i8;
                v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "status") as i32 as u32 as u64;
                v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "quiet") as i32 as i8;
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "strict") as i8;
                v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "warn") as i8;
                v44 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "ignore-missing");
                v45 = v43 | v42 as u8;
                if v44 as u8 {
                    if !(!v41) {
                        goto LABEL_577626;
                    }
LABEL_577759:
                    alloc::boxed::Box<T>::new(v46 as u64);
                } else if v41 {
LABEL_577626:
                    v47 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "text") as i32 as i8;
                    if (v47 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "binary") as i8) == 1 {
                        goto LABEL_577759;
                    }
                    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, "file");
                    v22 = clap_builder::parser::error::MatchesError::unwrap("file", &v26);
                    core::option::Option<T>::map_or_else(&v26, &v22);
                    uucore::features::checksum::perform_checksum_validation(v30, v31 * 16 + v30, v4, v57, 1, v20, (v42 as u32 * 0x1000000 | v45 as u32 * 0x10000) as u64 | v0 as u64 * 0x100000000 | (v3 & (v42 as u8 ^ 1)) as u64 * 0x10000000000 | (v44 as u32 * 0x100) as u64);
                } else {
                    v1 = v0 | v45;
                    if !(!v0 && !v45) {
                        goto LABEL_577759;
                    }
                    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "no-names");
                    v48 = (v26 as i32 == 2 ? v30 : 0);
                    v0 = *((v48 ? v48 : &g_469030) as &i8);
                    v49 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "zero") as i32 as i8;
                    v50 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v18, a1) as u64;
                    v51 = v20;
                    v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "tag") as i32 as i8;
                    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, "file");
                    v33 = clap_builder::parser::error::MatchesError::unwrap("file", &v26);
                    if v33 as i64 {
                        v26 = struct44 {
                            field_0: v4
                            field_8: v57
                            field_16: v50
                            field_24: v53
                            field_32: v51
                            field_40: v2
                            field_41: v52
                            field_42: v0
                            field_43: v49
                        };
                        uu_hashsum::hashsum(&v26, &v33);
                    } else {
                        v26 = struct44 {
                            field_0: v4
                            field_8: v57
                            field_16: v50
                            field_24: v55
                            field_32: v51
                            field_40: v2
                            field_41: v52
                            field_42: v0
                            field_43: v49
                        };
                        uu_hashsum::hashsum(&v26);
                    }
                }
            }
        },
    }
    return v30;
}
