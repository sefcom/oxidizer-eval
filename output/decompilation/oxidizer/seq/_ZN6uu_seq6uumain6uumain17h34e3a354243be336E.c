fn uu_seq::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x578]
    let v1: i192;  // [sp-0x550], Other Possible Types: struct24
    let v2: i64;  // [bp-0x538], Other Possible Types: struct24
    let v3: i128;  // [bp-0x530]
    let v4: i64;  // [sp-0x528]
    let v5: i8;  // [bp-0x520]
    let v6: i128;  // [sp-0x510]
    let v7: i128;  // [sp-0x500]
    let v8: i128;  // [sp-0x4e8], Other Possible Types: struct24
    let v9: i128;  // [bp-0x4d8]
    let v10: i128;  // [sp-0x4c8]
    let v11: i64;  // [sp-0x4b8]
    let v12: i128;  // [sp-0x4a8], Other Possible Types: struct24
    let v13: i128;  // [sp-0x498]
    let v14: i128;  // [sp-0x488], Other Possible Types: struct16, Result<struct56, struct1>
    let v15: i128;  // [sp-0x478]
    let v16: i64;  // [sp-0x458]
    let v17: i128;  // [sp-0x448]
    let v18: i64;  // [sp-0x438]
    let v19: i128;  // [sp-0x430]
    let v20: i64;  // [sp-0x420]
    let v21: i64;  // [sp-0x418]
    let v22: i64;  // [sp-0x410]
    let v23: i8;  // [sp-0x408]
    let v24: i448;  // [sp-0x400]
    let v25: i64;  // [sp-0x3f8]
    let v26: i128;  // [sp-0x3c8], Other Possible Types: Result<struct56, struct1>, struct16
    let v27: i128;  // [sp-0x3b8]
    let v28: i64;  // [sp-0x398]
    let v29: struct64;  // [sp-0x388], Other Possible Types: i512
    let v30: i320;  // [sp-0x348], Other Possible Types: Result<struct40, struct8>, struct24, struct712, struct8, struct72, struct56
    let v31: struct24;  // [sp-0x340]
    let v32: i128;  // [bp-0x338]
    let v33: i64;  // [sp-0x328]
    let v34: i128;  // [sp-0x320]
    let v35: i128;  // [sp-0x310]
    let v36: i64;  // [sp-0x300]
    let v37: i128;  // [sp-0x2f8]
    let v38: i128;  // [sp-0x2e8]
    let v39: i64;  // [sp-0x2d8]
    let v40: i512;  // [sp-0x78], Other Possible Types: struct64
    let v43: i64;  // rax
    let v44: i64;  // rax
    let v45: i64;  // rsi
    let v47: i64;  // rsi
    let v49: i64;  // rax
    let v50: i64;  // rcx
    let v51: i64;  // rcx
    let v55: i64;  // rax
    let v56: i64;  // rcx
    let v57: i64;  // rax
    let v58: i8;  // bl
    let v59: i64;  // rax
    let v60: i8;  // bl
    let v62: i64;  // rcx
    let v63: i64;  // r14
    let v64: i64;  // r14
    let v65: i64;  // rax
    let v66: i128;  // xmm0
    let v67: i8;  // bl
    let v68: i64;  // rax
    let v70: i64;  // rax
    let v71: i64;  // rbx

    v30 = uu_seq::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v2, &v30, a0, a1);
    if v24 == 0x8000000000000000 {
        v43 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
        return v43;
    }
    v24 = v2;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v24, "numbers");
    v29 = clap_builder::parser::error::MatchesError::unwrap("numbers", &v30);
    if !v29 {
        v30 = struct8 {
            field_0: 9223372036854775809
        };
        alloc::boxed::Box<T>::new(&v30);
        return v43;
    }
    v40 = v29;
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v40);
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, "separator");
    v44 = clap_builder::parser::error::MatchesError::unwrap("separator", &v30);
    if v44 {
        v45 = *((v44 + 8) as &i64);
        v44 = *((v44 + 16) as &i64);
    } else {
        v45 = 0;
    }
    if !v45 {
        v47 = &g_4178e2;
    }
    if !v45 {
        v44 = 1;
    }
    v30 = <T as alloc::slice::hack::ConvertVec>::to_vec(v47, v44);
    v8 = v30;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, "terminator");
    v49 = clap_builder::parser::error::MatchesError::unwrap("terminator", &v30);
    if v49 {
        v50 = *((v49 + 8) as &i64);
        v49 = *((v49 + 16) as &i64);
    } else {
        v50 = 0;
    }
    if !v50 {
        v51 = &g_4178e2;
    }
    if !v50 {
        v49 = 1;
    }
    v30 = <T as alloc::slice::hack::ConvertVec>::to_vec(v51, v49);
    v2 = v30;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, "format");
    v55 = clap_builder::parser::error::MatchesError::unwrap("format", &v30);
    if v55 {
        v56 = *((v55 + 8) as &i64);
        v55 = *((v55 + 16) as &i64);
    } else {
        v56 = 0;
    }
    v18 = *((&v8 as &char + 16) as &i64);
    v17 = v8;
    v19 = v2;
    v20 = v4;
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, "equal-width");
    v21 = v56;
    v22 = v55;
    if *((&v1 as &char + 16) as &i64) <= 1 {
        v26 = uu_seq::number::PreciseNumber::one();
        if *((&v1 as &char + 16) as &i64) <= 2 {
            goto LABEL_479a6d;
        }
    } else {
        v57 = *(*((&v1 as &char + 8) as &i64) as &i64);
        v30 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v57 + 8) as &i64), *((v57 + 16) as &i64));
        if v30 == 9223372036854775812 {
            v58 = *((&v30 as &char + 8) as &i8);
            v8 = <alloc::string::String as core::clone::Clone>::clone(*(*((&v1 as &char + 8) as &i64) as &i64));
            v4 = *((&v8 as &char + 16) as &i64);
            v2 = v8;
            v5 = v58;
            alloc::boxed::Box<T>::new(&v2);
            return v43;
        }
        v26 = v30;
        if *((&v1 as &char + 16) as &i64) <= 2 {
LABEL_479a6d:
            v14 = uu_seq::number::PreciseNumber::one();
            goto LABEL_479abd;
        }
    }
    v59 = *((*((&v1 as &char + 8) as &i64) + 8) as &i64);
    v30 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v59 + 8) as &i64), *((v59 + 16) as &i64));
    if v30 == 9223372036854775812 {
        v60 = *((&v30 as &char + 8) as &i8);
        v8 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + 8) as &i64));
        v4 = *((&v8 as &char + 16) as &i64);
        v2 = v8;
        v5 = v60;
        alloc::boxed::Box<T>::new(&v2);
        return v43;
    }
    v14 = v30;
LABEL_479abd:
    match (v62) {
        0 => {
            if *((&v15 as &char + 8) as &i8) == 1 {
                goto LABEL_479ae2;
            } else {
                goto LABEL_479b43;
            }
        }
        3 => {
LABEL_479ae2:
            if *((&v1 as &char + 16) as &i64) >= 2 {
                v2 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + 8) as &i64));
                v31 = v2;
                v30 = 0x8000000000000000;
                alloc::boxed::Box<T>::new(&v30);
                return v43;
            }
        }
        _ => {
LABEL_479b43:
            v63 = *((&v1 as &char + 16) as &i64);
            v64 = v63 - 1;
            if v63 >= 1 {
                v65 = *((*((&v1 as &char + 8) as &i64) + v64 * 8) as &i64);
                v30 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v65 + 8) as &i64), *((v65 + 16) as &i64));
                if v30 != 9223372036854775812 {
                    v11 = *((&v30 as &char + 48) as &i64);
                    v66 = v30;
                    v10 = *((&v30 as &char + 32) as &i128);
                    v9 = *((&v30 as &char + 16) as &i128);
                    v8 = v66;
                    v68 = core::cmp::max_by(core::cmp::max_by(*((&v26 as &char + 40) as &i64), *((&v14 as &char + 40) as &i64)), *((&v10 as &char + 8) as &i64));
                    if !v21 {
                        v70 = 0x8000000000000000;
                    } else {
                        v30 = uucore::features::format::Format<F>::parse(v21, v22);
                        v70 = v30;
                        v12 = *((&v30 as &char + 8) as &i128);
                        v13 = *((&v30 as &char + 24) as &i128);
                        if v70 == 0x8000000000000000 {
                            v30 = v12;
                            alloc::boxed::Box<T>::new(&v30);
                            return v43;
                        }
                        v7 = v35;
                        v6 = v34;
                        v3 = v12;
                        v5 = v13;
                    }
                    v2 = v70;
                    v33 = *((&v26 as &char + 32) as &i64);
                    v32 = v27;
                    v30 = v26;
                    v34 = v14;
                    v35 = v15;
                    v36 = *((&v14 as &char + 32) as &i64);
                    v37 = v8;
                    v38 = v9;
                    v39 = v10;
                    v71 = uu_seq::print_seq(&v30, core::cmp::max_by(v28, v16), *((&v17 as &char + 8) as &i64), v18, *((&v19 as &char + 8) as &i64), v20, v0, v68, &v2);
                    if !v71 || std::io::error::Error::kind(v71) as i8 == 11 {
                        break;
                    } else {
                        <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v71);
                        break;
                    }
                    return v43;
                } else if v64 < *((&v1 as &char + 16) as &i64) {
                    v67 = *((&v30 as &char + 8) as &i8);
                    v12 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + v64 * 8) as &i64));
                    v4 = *((&v12 as &char + 16) as &i64);
                    v2 = v12;
                    v5 = v67;
                    alloc::boxed::Box<T>::new(&v2);
                    return v43;
                }
            }
        }
    }
}
