fn uu_seq::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x578]
    let v1: struct24;  // [sp-0x550]
    let v2: struct24;  // [sp-0x538], Other Possible Types: int, unsigned long, char
    let v3: iNone;  // [bp-0x530]
    let v4: i64;  // [sp-0x528]
    let v5: i8;  // [bp-0x520], Other Possible Types: int
    let v6: iNone;  // [sp-0x510]
    let v7: iNone;  // [sp-0x500]
    let v8: struct24;  // [sp-0x4e8], Other Possible Types: int
    let v9: iNone;  // [bp-0x4d8]
    let v10: iNone;  // [sp-0x4c8]
    let v11: i64;  // [sp-0x4b8]
    let v12: iNone;  // [sp-0x4a8], Other Possible Types: struct24
    let v13: iNone;  // [sp-0x498]
    let v14: iNone;  // [sp-0x488], Other Possible Types: struct16, Result<struct56, struct1>
    let v15: iNone;  // [sp-0x478]
    let v16: i64;  // [sp-0x458]
    let v17: iNone;  // [sp-0x448]
    let v18: i64;  // [sp-0x438]
    let v19: iNone;  // [sp-0x430]
    let v20: i64;  // [sp-0x420]
    let v21: i64;  // [sp-0x418]
    let v22: i64;  // [sp-0x410]
    let v23: i8;  // [sp-0x408]
    let v24: i64;  // [sp-0x400], Other Possible Types: int
    let v25: i64;  // [sp-0x3f8]
    let v26: struct16;  // [sp-0x3c8], Other Possible Types: Result<struct56, struct1>
    let v27: struct64;  // [sp-0x388]
    let v28: i64;  // [sp-0x348], Other Possible Types: Result<struct56, struct1>, struct24, int, struct712, struct72, struct56
    let v29: struct24;  // [sp-0x340]
    let v30: iNone;  // [bp-0x338]
    let v31: i64;  // [sp-0x328]
    let v32: iNone;  // [sp-0x320]
    let v33: iNone;  // [sp-0x310]
    let v34: i64;  // [sp-0x300]
    let v35: iNone;  // [sp-0x2f8]
    let v36: iNone;  // [sp-0x2e8]
    let v37: i64;  // [sp-0x2d8]
    let v38: struct64;  // [sp-0x78]
    let v41: i64;  // rbx
    let v42: i64;  // rax
    let v43: i64;  // rsi
    let v45: i64;  // rsi
    let v47: i64;  // rdx
    let v48: i64;  // rax
    let v49: i64;  // rcx
    let v50: i64;  // r14
    let v51: i64;  // rdx
    let v53: i64;  // rax
    let v54: i64;  // rcx
    let v55: i64;  // rax
    let v57: i64;  // rax
    let v60: i64;  // rax
    let v61: i64;  // r14
    let v62: i64;  // r14
    let v63: i64;  // rax
    let v65: iNone;  // xmm0
    let v66: i8;  // bl
    let v67: i64;  // rax
    let v69: i64;  // rax
    let v70: i64;  // rbx
    let v71: iNone;  // [sp-0x3c8]
    let v72: iNone;  // [sp-0x3b8]
    let v73: i64;  // [sp-0x398]

    v28 = uu_seq::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v2, &v28, a0, a1);
    if v24 == 0x8000000000000000 {
        v41 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
        return v41;
    }
    v24 = *(&v2 as &i448);
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v24, "numbers");
    v27 = clap_builder::parser::error::MatchesError::unwrap("numbers", &v28);
    if !v27.field_0 as i64 {
        v28 = 9223372036854775809;
        v41 = alloc::boxed::Box<T>::new(&v28);
        return v41;
    }
    v38 = v27;
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v38);
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, "separator");
    v42 = clap_builder::parser::error::MatchesError::unwrap("separator", &v28);
    if v42 {
        v43 = *((v42 + 8) as &i64);
        v42 = *((v42 + 16) as &i64);
    } else {
        v43 = 0;
    }
    if !v43 {
        v45 = &g_4178e2;
    }
    v47 = (v43 ? 1 : v42);
    v28 = <T as alloc::slice::hack::ConvertVec>::to_vec(v45, v47);
    v8 = v28;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, "terminator");
    v48 = clap_builder::parser::error::MatchesError::unwrap("terminator", &v28);
    if v48 {
        v49 = *((v48 + 8) as &i64);
        v48 = *((v48 + 16) as &i64);
    } else {
        v49 = 0;
    }
    if v49 {
        v50 = v49;
    } else {
        v50 = &g_4178e2;
    }
    v51 = (v49 ? v48 : 1);
    v28 = <T as alloc::slice::hack::ConvertVec>::to_vec(v50, v51);
    v2 = v28;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, "format");
    v53 = clap_builder::parser::error::MatchesError::unwrap("format", &v28);
    if v53 {
        v54 = *((v53 + 8) as &i64);
        v53 = *((v53 + 16) as &i64);
    } else {
        v54 = 0;
    }
    v18 = v8.field_16;
    v17 = v8;
    v19 = *(&v2.field_0 as &i128);
    v20 = v4;
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, "equal-width");
    v21 = v54;
    v22 = v53;
    if v1.field_16 <= 1 {
        v26 = uu_seq::number::PreciseNumber::one();
        if v1.field_16 <= 2 {
            goto LABEL_479a6d;
        }
    } else {
        v55 = *(v1.field_8 as &i64);
        v28 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v55 + 8) as &i64), *((v55 + 16) as &i64));
        if v28 == 9223372036854775812 {
            v8 = <alloc::string::String as core::clone::Clone>::clone(*(v1.field_8 as &i64));
            v2 = v8;
            *(&v5 as &i8) = *((&v28 as &char + 8) as &i8);
            v41 = alloc::boxed::Box<T>::new(&v2);
            return v41;
        }
        v26 = v28;
        if v1.field_16 <= 2 {
LABEL_479a6d:
            v14 = uu_seq::number::PreciseNumber::one();
            goto LABEL_479abd;
        }
    }
    v57 = *((v1.field_8 + 8) as &i64);
    v28 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v57 + 8) as &i64), *((v57 + 16) as &i64));
    if v28 == 9223372036854775812 {
        v8 = <alloc::string::String as core::clone::Clone>::clone(*((v1.field_8 + 8) as &i64));
        v2 = v8;
        *(&v5 as &i8) = *((&v28 as &char + 8) as &i8);
        v41 = alloc::boxed::Box<T>::new(&v2);
        return v41;
    }
    v14 = v28;
LABEL_479abd:
    match (v60) {
        0 => {
            if (&v15)[8] as i8 == 1 {
                goto LABEL_479ae2;
            } else {
                goto LABEL_479b43;
            }
        }
        3 => {
LABEL_479ae2:
            if v1.field_16 >= 2 {
                v2 = <alloc::string::String as core::clone::Clone>::clone(*((v1.field_8 + 8) as &i64));
                v29 = v2;
                v28 = 0x8000000000000000;
                alloc::boxed::Box<T>::new(&v28);
                return v41;
            }
        }
        _ => {
LABEL_479b43:
            v61 = v1.field_16;
            v62 = v61 - 1;
            if v61 >= 1 {
                v63 = *((v1.field_8 + v62 * 8) as &i64);
                v28 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v63 + 8) as &i64), *((v63 + 16) as &i64));
                if v28 != 9223372036854775812 {
                    v11 = *((&v28 as &char + 48) as &i64);
                    v65 = v28 as i128;
                    v10 = *((&v28 as &char + 32) as &i128);
                    *(&v9 as &i128) = *((&v28 as &char + 16) as &i128);
                    v8 = v65;
                    v67 = core::cmp::max_by(core::cmp::max_by(*((&v26 as &char + 40) as &i64), *((&v14 as &char + 40) as &i64)), (&v10)[8] as i64);
                    if !v21 {
                        v69 = 0x8000000000000000;
                    } else {
                        v28 = uucore::features::format::Format<F>::parse(v21, v22);
                        v69 = v28;
                        v12 = *((&v28.field_0 as &char + 8) as &i128);
                        v13 = *((&v28.field_16 as &char + 8) as &i128);
                        if v69 == 0x8000000000000000 {
                            v30 = v13;
                            v28 = v12;
                            return v41;
                        }
                        v7 = v33;
                        v6 = v32;
                        v3 = v12;
                        v5 = v13;
                    }
                    v2 = v69;
                    v31 = *((&v26 as &char + 32) as &i64);
                    v30 = v72;
                    v28 = v71;
                    v32 = v14;
                    v33 = v15;
                    v34 = *((&v14 as &char + 32) as &i64);
                    v35 = v8;
                    v36 = v9 as i128;
                    v37 = v10 as i64;
                    v70 = uu_seq::print_seq(&v28, core::cmp::max_by(v73, v16), (&v17)[8] as i64, v18, (&v19)[8] as i64, v20, v0, v67, &v2);
                    if !v70 || std::io::error::Error::kind(v70) as i8 == 11 {
                        break;
                    } else {
                        <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v70);
                        break;
                    }
                    return v41;
                } else if v62 < v1.field_16 {
                    v66 = *((&v28 as &char + 8) as &i8);
                    v12 = <alloc::string::String as core::clone::Clone>::clone(*((v1.field_8 + v62 * 8) as &i64));
                    v4 = v12.field_16;
                    v2 = v12;
                    v5 = v66;
                    v41 = alloc::boxed::Box<T>::new(&v2);
                    return v41;
                }
            }
        }
    }
}
