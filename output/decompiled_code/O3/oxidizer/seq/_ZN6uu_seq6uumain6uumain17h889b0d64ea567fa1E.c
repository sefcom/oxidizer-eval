fn uu_seq::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x578]
    let v1: struct24;  // [sp-0x550], Other Possible Types: i192
    let v2: i448;  // [sp-0x538], Other Possible Types: Result<struct56, struct16>, struct24
    let v3: i128;  // [bp-0x530]
    let v4: i64;  // [sp-0x528]
    let v5: i8;  // [bp-0x520]
    let v6: i128;  // [sp-0x510]
    let v7: i128;  // [sp-0x500]
    let v8: i128;  // [bp-0x4e8], Other Possible Types: struct24
    let v9: i128;  // [bp-0x4d8]
    let v10: i128;  // [sp-0x4c8]
    let v11: i64;  // [sp-0x4b8]
    let v12: i128;  // [sp-0x4a8], Other Possible Types: struct24
    let v13: i128;  // [sp-0x498]
    let v14: struct16;  // [sp-0x488], Other Possible Types: i128
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
    let v27: i128;  // [sp-0x3c8], Other Possible Types: struct16
    let v28: i128;  // [sp-0x3b8]
    let v29: i128;  // [sp-0x3a8]
    let v30: i64;  // [sp-0x398]
    let v31: struct64;  // [sp-0x388], Other Possible Types: i512
    let v32: i64;  // [sp-0x348], Other Possible Types: Result<struct40, struct16>, struct9, struct24, struct8, struct56, struct72, struct712
    let v33: i192;  // [bp-0x340]
    let v34: i128;  // [bp-0x338]
    let v35: i64;  // [sp-0x328]
    let v36: i512;  // [bp-0x78]
    let v38: i64;  // rdx
    let v39: i64;  // rax
    let v40: i64;  // rax
    let v41: i64;  // rsi
    let v42: i64;  // rax
    let v43: i64;  // rcx
    let v45: i64;  // rax
    let v46: i64;  // rcx
    let v47: i64;  // rax
    let v48: i8;  // bl
    let v49: i64;  // rax
    let v50: i8;  // bl
    let v52: i64;  // rcx
    let v53: i64;  // r14
    let v54: i64;  // r14
    let v55: i64;  // rax
    let v56: i128;  // xmm0
    let v57: i8;  // bl
    let v58: i64;  // rax
    let v60: i64;  // rax
    let v61: i64;  // rbx

    v32 = uu_seq::uu_app(a1, v38);
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v32, a0, a1);
    if v25 == 0x8000000000000000 {
        v39 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
        return v39;
    }
    v25 = v2;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v25, "numbers");
    v31 = clap_builder::parser::error::MatchesError::unwrap("numbers", &v32);
    if !v31 {
        v32 = struct8 {
            field_0: 9223372036854775809
        };
        alloc::boxed::Box<T>::new(&v32);
        return v39;
    }
    v36 = v31;
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v36, v38);
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, "separator");
    v40 = clap_builder::parser::error::MatchesError::unwrap("separator", &v32);
    if v40 {
        v41 = *((v40 + 8) as &i64);
        v40 = *((v40 + 16) as &i64);
    } else {
        v41 = 0;
    }
    if !v41 {
        v40 = 1;
    }
    if !v41 {
        v41 = &g_417de2;
    }
    v32 = <T as alloc::slice::hack::ConvertVec>::to_vec(v41, v40);
    v8 = v32;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, "terminator");
    v42 = clap_builder::parser::error::MatchesError::unwrap("terminator", &v32);
    if v42 {
        v43 = *((v42 + 8) as &i64);
        v42 = *((v42 + 16) as &i64);
    } else {
        v43 = 0;
    }
    if !v43 {
        v42 = 1;
    }
    if !v43 {
        v43 = &g_417de2;
    }
    v32 = <T as alloc::slice::hack::ConvertVec>::to_vec(v43, v42);
    v2 = v32;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, "format");
    v45 = clap_builder::parser::error::MatchesError::unwrap("format", &v32);
    if v45 {
        v46 = *((v45 + 8) as &i64);
        v45 = *((v45 + 16) as &i64);
    } else {
        v46 = 0;
    }
    v19 = *((&v8 as &char + 16) as &i64);
    v18 = v8;
    v20 = v2;
    v21 = v4;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, "equal-width") as i32;
    v22 = v46;
    v23 = v45;
    if *((&v1 as &char + 16) as &i64) <= 1 {
        v27 = uu_seq::number::PreciseNumber::one();
        if *((&v1 as &char + 16) as &i64) <= 2 {
            goto LABEL_47aa2d;
        }
    } else {
        v47 = *(*((&v1 as &char + 8) as &i64) as &i64);
        v32 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v47 + 8) as &i64), *((v47 + 16) as &i64));
        if v32 == 9223372036854775812 {
            v48 = *((&v32 as &char + 8) as &i8);
            v8 = <alloc::string::String as core::clone::Clone>::clone(*(*((&v1 as &char + 8) as &i64) as &i64));
            v4 = *((&v8 as &char + 16) as &i64);
            v2 = v8;
            v5 = v48;
            v39 = alloc::boxed::Box<T>::new(&v2);
            return v39;
        }
        v30 = *((&v32 as &char + 48) as &i64);
        v29 = *((&v32 as &char + 32) as &i128);
        v28 = *((&v32 as &char + 16) as &i128);
        v27 = v32;
        if *((&v1 as &char + 16) as &i64) <= 2 {
LABEL_47aa2d:
            v14 = uu_seq::number::PreciseNumber::one();
            goto LABEL_47aa7d;
        }
    }
    v49 = *((*((&v1 as &char + 8) as &i64) + 8) as &i64);
    v32 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v49 + 8) as &i64), *((v49 + 16) as &i64));
    if v32 == 9223372036854775812 {
        v50 = *((&v32 as &char + 8) as &i8);
        v8 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + 8) as &i64));
        v4 = *((&v8 as &char + 16) as &i64);
        v2 = v8;
        v5 = v50;
        alloc::boxed::Box<T>::new(&v2);
        return v39;
    }
    v17 = *((&v32 as &char + 48) as &i64);
    v16 = *((&v32 as &char + 32) as &i128);
    v15 = *((&v32 as &char + 16) as &i128);
    v14 = v32;
LABEL_47aa7d:
    switch (v52) {
    case 0:
        if *((&v15 as &char + 8) as &i8) == 1 {
            goto LABEL_47aaa2;
        } else {
            goto LABEL_47ab03;
        }
    case 3:
LABEL_47aaa2:
        if *((&v1 as &char + 16) as &i64) >= 2 {
            v2 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + 8) as &i64));
            v33 = v2;
            v32 = 0x8000000000000000;
            alloc::boxed::Box<T>::new(&v32);
            goto LABEL_47ab94;
        }
    default:
LABEL_47ab03:
        v53 = *((&v1 as &char + 16) as &i64);
        v54 = v53 - 1;
        if v53 >= 1 {
            v55 = *((*((&v1 as &char + 8) as &i64) + v54 * 8) as &i64);
            v32 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v55 + 8) as &i64), *((v55 + 16) as &i64));
            if v32 != 9223372036854775812 {
                v11 = *((&v32 as &char + 48) as &i64);
                v56 = v32;
                v10 = *((&v32 as &char + 32) as &i128);
                v9 = *((&v32 as &char + 16) as &i128);
                v8 = v56;
                v58 = core::cmp::max_by(core::cmp::max_by(*((&v29 as &char + 8) as &i64), *((&v16 as &char + 8) as &i64)), *((&v10 as &char + 8) as &i64));
                if !v22 {
                    v60 = 0x8000000000000000;
                } else {
                    v32 = uucore::features::format::Format<F>::parse(v22, v23);
                    v60 = v32;
                    v12 = *((&v32 as &char + 8) as &i128);
                    v13 = *((&v32 as &char + 24) as &i128);
                    if v60 == 0x8000000000000000 {
                        v32 = v12;
                        v39 = alloc::boxed::Box<T>::new(&v32);
                        return v39;
                    }
                    v7 = v32.56;
                    v6 = v32.field_40;
                    v3 = v12;
                    v5 = v13;
                }
                v2 = v60;
                v35 = v29;
                v34 = v28;
                v32 = v27;
                v32.field_40 = vvar_879{stack -1160};
                v32.56 = vvar_878{stack -1144};
                v32.72 = (stack_base)[1128] as i64;
                v32.80 = vvar_956{stack -1256};
                v32.96 = (stack_base)[1240] as i128;
                v32.112 = (stack_base)[1224] as i64;
                v61 = uu_seq::print_seq(&v32, core::cmp::max_by(v30, v17), *((&v18 as &char + 8) as &i64), v19, *((&v20 as &char + 8) as &i64), v21, v0, v58, &v2);
                if !v61 {
LABEL_47ae36:
                    v39 = 0;
                    break;
                } else {
                    if std::io::error::Error::kind(v61) as i8 != 11 {
                        v39 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v61);
                        break;
                    } else {
                        goto LABEL_47ae36;
                    }
                }
                return v39;
            } else if v54 < *((&v1 as &char + 16) as &i64) {
                v57 = *((&v32 as &char + 8) as &i8);
                v12 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + v54 * 8) as &i64));
                v4 = *((&v12 as &char + 16) as &i64);
                v2 = v12;
                v5 = v57;
                alloc::boxed::Box<T>::new(&v2);
            }
        }
    }
LABEL_47ab94:
    return v39;
}
