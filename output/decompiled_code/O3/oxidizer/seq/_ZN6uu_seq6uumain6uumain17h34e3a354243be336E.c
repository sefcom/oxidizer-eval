fn uu_seq::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x578]
    let v1: i192;  // [sp-0x550], Other Possible Types: struct24
    let v2: i192;  // [sp-0x538], Other Possible Types: struct24, Result<struct56, struct16>
    let v3: i128;  // [bp-0x530]
    let v4: i64;  // [sp-0x528]
    let v5: i128;  // [bp-0x520]
    let v6: i128;  // [sp-0x510]
    let v7: i128;  // [sp-0x500]
    let v8: i128;  // [bp-0x4e8], Other Possible Types: struct24
    let v9: i128;  // [bp-0x4d8]
    let v10: i128;  // [sp-0x4c8]
    let v11: i64;  // [sp-0x4b8]
    let v12: i128;  // [sp-0x4a8], Other Possible Types: struct24
    let v13: i128;  // [sp-0x498]
    let v14: i128;  // [sp-0x488], Other Possible Types: struct16
    let v15: i128;  // [sp-0x478]
    let v16: i128;  // [sp-0x468]
    let v17: i64;  // [sp-0x458]
    let v18: i128;  // [sp-0x448]
    let v19: i64;  // [sp-0x438]
    let v20: i128;  // [sp-0x430]
    let v21: i64;  // [sp-0x420]
    let v22: i64;  // [sp-0x418]
    let v23: i64;  // [sp-0x410]
    let v24: i8;  // [sp-0x408]
    let v25: i448;  // [sp-0x400]
    let v26: i64;  // [sp-0x3f8]
    let v27: struct16;  // [sp-0x3c8], Other Possible Types: i128
    let v28: i128;  // [sp-0x3b8]
    let v29: i128;  // [sp-0x3a8]
    let v30: i64;  // [sp-0x398]
    let v31: i512;  // [sp-0x388], Other Possible Types: struct64
    let v32: i5696;  // [sp-0x348], Other Possible Types: Result<struct40, struct16>, struct9, struct24, struct8, struct56, struct72, struct712
    let v33: i192;  // [bp-0x340]
    let v34: i128;  // [bp-0x338]
    let v35: i64;  // [sp-0x328]
    let v36: i128;  // [sp-0x320]
    let v37: i128;  // [sp-0x310]
    let v38: i64;  // [sp-0x300]
    let v39: i128;  // [sp-0x2f8]
    let v40: i128;  // [sp-0x2e8]
    let v41: i64;  // [sp-0x2d8]
    let v42: i512;  // [bp-0x78]
    let v44: i64;  // rdx
    let v45: i64;  // rax
    let v46: i64;  // rax
    let v47: i64;  // rsi
    let v49: i64;  // rsi
    let v51: i64;  // rax
    let v52: i64;  // rcx
    let v53: i64;  // rcx
    let v57: i64;  // rax
    let v58: i64;  // rcx
    let v59: i64;  // rax
    let v60: i8;  // bl
    let v61: i64;  // rax
    let v62: i8;  // bl
    let v64: i64;  // rcx
    let v65: i64;  // r14
    let v66: i64;  // r14
    let v67: i64;  // rax
    let v68: i128;  // xmm0
    let v69: i8;  // bl
    let v70: i64;  // rax
    let v72: i64;  // rax
    let v73: i64;  // rbx

    v32 = uu_seq::uu_app(a1, v44);
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v32, a0, a1);
    if v25 == 0x8000000000000000 {
        v45 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
        return v45;
    }
    v25 = v2;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v25, "numbers");
    v31 = clap_builder::parser::error::MatchesError::unwrap("numbers", &v32);
    if !v31 {
        v32 = struct8 {
            field_0: 9223372036854775809
        };
        alloc::boxed::Box<T>::new(&v32);
        return v45;
    }
    v42 = v31;
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v42, v44);
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, "separator");
    v46 = clap_builder::parser::error::MatchesError::unwrap("separator", &v32);
    if v46 {
        v47 = *((v46 + 8) as &i64);
        v46 = *((v46 + 16) as &i64);
    } else {
        v47 = 0;
    }
    if !v47 {
        v49 = &g_4178e2;
    }
    if !v47 {
        v46 = 1;
    }
    v32 = <T as alloc::slice::hack::ConvertVec>::to_vec(v49, v46);
    v8 = v32;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, "terminator");
    v51 = clap_builder::parser::error::MatchesError::unwrap("terminator", &v32);
    if v51 {
        v52 = *((v51 + 8) as &i64);
        v51 = *((v51 + 16) as &i64);
    } else {
        v52 = 0;
    }
    if !v52 {
        v53 = &g_4178e2;
    }
    if !v52 {
        v51 = 1;
    }
    v32 = <T as alloc::slice::hack::ConvertVec>::to_vec(v53, v51);
    v2 = v32;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, "format");
    v57 = clap_builder::parser::error::MatchesError::unwrap("format", &v32);
    if v57 {
        v58 = *((v57 + 8) as &i64);
        v57 = *((v57 + 16) as &i64);
    } else {
        v58 = 0;
    }
    v19 = *((&v8 as &char + 16) as &i64);
    v18 = v8;
    v20 = v2;
    v21 = v4;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, "equal-width");
    v22 = v58;
    v23 = v57;
    if *((&v1 as &char + 16) as &i64) <= 1 {
        v27 = uu_seq::number::PreciseNumber::one();
        if *((&v1 as &char + 16) as &i64) <= 2 {
            goto LABEL_479a6d;
        }
    } else {
        v59 = *(*((&v1 as &char + 8) as &i64) as &i64);
        v32 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v59 + 8) as &i64), *((v59 + 16) as &i64));
        if v32 == 9223372036854775812 {
            v60 = *((&v32 as &char + 8) as &i8);
            v8 = <alloc::string::String as core::clone::Clone>::clone(*(*((&v1 as &char + 8) as &i64) as &i64));
            v4 = *((&v8 as &char + 16) as &i64);
            v2 = v8;
            v5 = v60;
            v45 = alloc::boxed::Box<T>::new(&v2);
            return v45;
        }
        v30 = *((&v32 as &char + 48) as &i64);
        v29 = *((&v32 as &char + 32) as &i128);
        v28 = *((&v32 as &char + 16) as &i128);
        v27 = v32;
        if *((&v1 as &char + 16) as &i64) <= 2 {
LABEL_479a6d:
            v14 = uu_seq::number::PreciseNumber::one();
            goto LABEL_479abd;
        }
    }
    v61 = *((*((&v1 as &char + 8) as &i64) + 8) as &i64);
    v32 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v61 + 8) as &i64), *((v61 + 16) as &i64));
    if v32 == 9223372036854775812 {
        v62 = *((&v32 as &char + 8) as &i8);
        v8 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + 8) as &i64));
        v4 = *((&v8 as &char + 16) as &i64);
        v2 = v8;
        v5 = v62;
        alloc::boxed::Box<T>::new(&v2);
        return v45;
    }
    v17 = *((&v32 as &char + 48) as &i64);
    v16 = *((&v32 as &char + 32) as &i128);
    v15 = *((&v32 as &char + 16) as &i128);
    v14 = v32;
LABEL_479abd:
    switch (v64) {
    case 0:
        if *((&v15 as &char + 8) as &i8) == 1 {
            goto LABEL_479ae2;
        } else {
            goto LABEL_479b43;
        }
    case 3:
LABEL_479ae2:
        if *((&v1 as &char + 16) as &i64) >= 2 {
            v2 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + 8) as &i64));
            v33 = v2;
            v32 = 0x8000000000000000;
            alloc::boxed::Box<T>::new(&v32);
            goto LABEL_479bd4;
        }
    default:
LABEL_479b43:
        v65 = *((&v1 as &char + 16) as &i64);
        v66 = v65 - 1;
        if v65 >= 1 {
            v67 = *((*((&v1 as &char + 8) as &i64) + v66 * 8) as &i64);
            v32 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v67 + 8) as &i64), *((v67 + 16) as &i64));
            if v32 != 9223372036854775812 {
                v11 = *((&v32 as &char + 48) as &i64);
                v68 = v32;
                v10 = *((&v32 as &char + 32) as &i128);
                v9 = *((&v32 as &char + 16) as &i128);
                v8 = v68;
                v70 = core::cmp::max_by(core::cmp::max_by(*((&v29 as &char + 8) as &i64), *((&v16 as &char + 8) as &i64)), *((&v10 as &char + 8) as &i64));
                if !v22 {
                    v72 = 0x8000000000000000;
                } else {
                    v32 = uucore::features::format::Format<F>::parse(v22, v23);
                    v72 = v32;
                    v12 = *((&v32 as &char + 8) as &i128);
                    v13 = *((&v32 as &char + 24) as &i128);
                    if v72 == 0x8000000000000000 {
                        v32 = v12;
                        v45 = alloc::boxed::Box<T>::new(&v32);
                        return v45;
                    }
                    v7 = v37;
                    v6 = v36;
                    v3 = v12;
                    v5 = v13;
                }
                v2 = v72;
                v35 = v29;
                v34 = v28;
                v32 = v27;
                v36 = v14;
                v37 = v15;
                v38 = v16;
                v39 = v8;
                v40 = v9;
                v41 = v10;
                v73 = uu_seq::print_seq(&v32, core::cmp::max_by(v30, v17), *((&v18 as &char + 8) as &i64), v19, *((&v20 as &char + 8) as &i64), v21, v0, v70, &v2);
                if !v73 {
LABEL_479e76:
                    v45 = 0;
                    break;
                } else {
                    if std::io::error::Error::kind(v73) as i8 != 11 {
                        v45 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v73);
                        break;
                    } else {
                        goto LABEL_479e76;
                    }
                }
                return v45;
            } else if v66 < *((&v1 as &char + 16) as &i64) {
                v69 = *((&v32 as &char + 8) as &i8);
                v12 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + v66 * 8) as &i64));
                v4 = *((&v12 as &char + 16) as &i64);
                v2 = v12;
                v5 = v69;
                alloc::boxed::Box<T>::new(&v2);
            }
        }
    }
LABEL_479bd4:
    return v45;
}
