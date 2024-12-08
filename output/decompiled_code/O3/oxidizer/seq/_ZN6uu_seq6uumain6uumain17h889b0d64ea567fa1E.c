fn uu_seq::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x578]
    let v1: i192;  // [sp-0x550], Other Possible Types: struct24
    let v2: i128;  // [bp-0x538], Other Possible Types: struct24
    let v3: i128;  // [bp-0x530]
    let v4: i64;  // [bp-0x528]
    let v5: i8;  // [bp-0x520]
    let v7: i128;  // [sp-0x510]
    let v9: i128;  // [sp-0x500]
    let v10: i192;  // [sp-0x4e8], Other Possible Types: struct24
    let v11: i64;  // [bp-0x4d8]
    let v12: i128;  // [sp-0x4c8]
    let v13: i64;  // [sp-0x4b8]
    let v14: i192;  // [sp-0x4a8], Other Possible Types: struct24
    let v15: i128;  // [sp-0x498]
    let v16: i128;  // [sp-0x488], Other Possible Types: struct16
    let v17: i128;  // [sp-0x478]
    let v18: i128;  // [sp-0x468]
    let v19: i64;  // [sp-0x458]
    let v20: i128;  // [sp-0x448]
    let v21: i64;  // [sp-0x438]
    let v22: i128;  // [sp-0x430]
    let v23: i64;  // [sp-0x420]
    let v24: i64;  // [sp-0x418]
    let v25: i64;  // [sp-0x410]
    let v26: i8;  // [sp-0x408]
    let v27: i64;  // [sp-0x400], Other Possible Types: struct56
    let v28: i64;  // [sp-0x3f8]
    let v29: i128;  // [sp-0x3c8], Other Possible Types: struct16
    let v30: i128;  // [sp-0x3b8]
    let v31: i128;  // [sp-0x3a8]
    let v32: i64;  // [sp-0x398]
    let v33: struct64;  // [sp-0x388], Other Possible Types: i512
    let v34: i64;  // [sp-0x348], Other Possible Types: Result<struct40, struct16>, struct9, struct8, struct24, struct32, struct72, struct56, struct712
    let v35: i128;  // [bp-0x340]
    let v36: i128;  // [bp-0x338]
    let v37: i64;  // [sp-0x330]
    let v38: i64;  // [sp-0x328]
    let v39: struct64;  // [bp-0x78]
    let v41: i64;  // rdx
    let v42: i64;  // rax
    let v44: i64;  // rax
    let v45: i64;  // rsi
    let v46: i64;  // rax
    let v47: i64;  // rcx
    let v49: i64;  // rax
    let v50: i64;  // rcx
    let v51: i64;  // rax
    let v52: i8;  // bl
    let v53: i64;  // rax
    let v54: i8;  // bl
    let v56: i64;  // rcx
    let v57: i64;  // r14
    let v58: i64;  // r14
    let v59: i64;  // rax
    let v60: i128;  // xmm0
    let v61: i8;  // bl
    let v62: i64;  // rax
    let v64: i64;  // rax
    let v65: i64;  // rbx

    v34 = uu_seq::uu_app(a1, v41);
    clap_builder::builder::command::Command::try_get_matches_from(&v2, &v34, a0, a1);
    if v27 == 0x8000000000000000 {
        v42 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
        return v42;
    }
    v27 = struct56 {
        field_0: v2
        field_8: v43
        field_16: v4
        field_32: v6
        field_48: v8
    };
    v34 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v27, "numbers");
    v33 = clap_builder::parser::error::MatchesError::unwrap("numbers", &v34);
    if !v33 {
        v34 = struct8 {
            field_0: 9223372036854775809
        };
        alloc::boxed::Box<T>::new(&v34);
        return v42;
    }
    v39 = struct64 {
        field_0: v33
        field_16: *((&v33 as &char + 16) as &i128)
        field_32: *((&v33 as &char + 32) as &i128)
        field_48: *((&v33 as &char + 48) as &i128)
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v39, v41);
    v34 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, "separator");
    v44 = clap_builder::parser::error::MatchesError::unwrap("separator", &v34);
    if v44 {
        v45 = *((v44 + 8) as &i64);
        v44 = *((v44 + 16) as &i64);
    } else {
        v45 = 0;
    }
    if !v45 {
        v44 = 1;
    }
    if !v45 {
        v45 = &g_417de2;
    }
    v34 = <T as alloc::slice::hack::ConvertVec>::to_vec(v45, v44);
    v11 = *((&v34 as &char + 16) as &i64);
    v10 = v34;
    v34 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, "terminator");
    v46 = clap_builder::parser::error::MatchesError::unwrap("terminator", &v34);
    if v46 {
        v47 = *((v46 + 8) as &i64);
        v46 = *((v46 + 16) as &i64);
    } else {
        v47 = 0;
    }
    if !v47 {
        v46 = 1;
    }
    if !v47 {
        v47 = &g_417de2;
    }
    v34 = <T as alloc::slice::hack::ConvertVec>::to_vec(v47, v46);
    v4 = *((&v34 as &char + 16) as &i64);
    v2 = v34;
    v34 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, "format");
    v49 = clap_builder::parser::error::MatchesError::unwrap("format", &v34);
    if v49 {
        v50 = *((v49 + 8) as &i64);
        v49 = *((v49 + 16) as &i64);
    } else {
        v50 = 0;
    }
    v21 = v11;
    v20 = v10;
    v22 = v2;
    v23 = v4;
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, "equal-width") as i32;
    v24 = v50;
    v25 = v49;
    if *((&v1 as &char + 16) as &i64) <= 1 {
        v29 = uu_seq::number::PreciseNumber::one();
        if *((&v1 as &char + 16) as &i64) <= 2 {
            goto LABEL_47aa2d;
        }
    } else {
        v51 = *(*((&v1 as &char + 8) as &i64) as &i64);
        v34 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v51 + 8) as &i64), *((v51 + 16) as &i64));
        if v34 == 9223372036854775812 {
            v52 = *((&v34 as &char + 8) as &i8);
            v10 = <alloc::string::String as core::clone::Clone>::clone(*(*((&v1 as &char + 8) as &i64) as &i64));
            v4 = *((&v10 as &char + 16) as &i64);
            v2 = v10;
            v5 = v52;
            v42 = alloc::boxed::Box<T>::new(&v2);
            return v42;
        }
        v32 = *((&v34 as &char + 48) as &i64);
        v31 = *((&v34 as &char + 32) as &i128);
        v30 = *((&v34 as &char + 16) as &i128);
        v29 = v34;
        if *((&v1 as &char + 16) as &i64) <= 2 {
LABEL_47aa2d:
            v16 = uu_seq::number::PreciseNumber::one();
            goto LABEL_47aa7d;
        }
    }
    v53 = *((*((&v1 as &char + 8) as &i64) + 8) as &i64);
    v34 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v53 + 8) as &i64), *((v53 + 16) as &i64));
    if v34 == 9223372036854775812 {
        v54 = *((&v34 as &char + 8) as &i8);
        v10 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + 8) as &i64));
        v4 = *((&v10 as &char + 16) as &i64);
        v2 = v10;
        v5 = v54;
        alloc::boxed::Box<T>::new(&v2);
        return v42;
    }
    v19 = *((&v34 as &char + 48) as &i64);
    v18 = *((&v34 as &char + 32) as &i128);
    v17 = *((&v34 as &char + 16) as &i128);
    v16 = v34;
LABEL_47aa7d:
    switch (v56) {
    case 0:
        if *((&v17 as &char + 8) as &i8) == 1 {
            goto LABEL_47aaa2;
        } else {
            goto LABEL_47ab03;
        }
    case 3:
LABEL_47aaa2:
        if *((&v1 as &char + 16) as &i64) >= 2 {
            v2 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + 8) as &i64));
            v37 = v2.field_16;
            v35 = v2;
            v34 = struct8 {
                field_0: 0x8000000000000000
            };
            alloc::boxed::Box<T>::new(&v34);
            goto LABEL_47ab94;
        }
    default:
LABEL_47ab03:
        v57 = *((&v1 as &char + 16) as &i64);
        v58 = v57 - 1;
        if v57 >= 1 {
            v59 = *((*((&v1 as &char + 8) as &i64) + v58 * 8) as &i64);
            v34 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v59 + 8) as &i64), *((v59 + 16) as &i64));
            if v34 != 9223372036854775812 {
                v13 = *((&v34 as &char + 48) as &i64);
                v60 = v34;
                v12 = *((&v34 as &char + 32) as &i128);
                v11 = *((&v34 as &char + 16) as &i128);
                v10 = v60;
                v62 = core::cmp::max_by(core::cmp::max_by(*((&v31 as &char + 8) as &i64), *((&v18 as &char + 8) as &i64)), *((&v12 as &char + 8) as &i64));
                if !v24 {
                    v64 = 0x8000000000000000;
                } else {
                    v34 = uucore::features::format::Format<F>::parse(v24, v25);
                    v64 = v34;
                    v14 = *((&v34 as &char + 8) as &i128);
                    v15 = *((&v34 as &char + 24) as &i128);
                    if v64 == 0x8000000000000000 {
                        v34 = struct32 {
                            field_0: v14
                            field_16: v15
                        };
                        v42 = alloc::boxed::Box<T>::new(&v34);
                        return v42;
                    }
                    v9 = v34.56;
                    v7 = v34.field_40;
                    v3 = v14;
                    v5 = v15;
                }
                v2 = v64;
                v38 = v31;
                v36 = v30;
                v34 = v29;
                v34.field_40 = vvar_879{stack -1160};
                v34.56 = vvar_878{stack -1144};
                v34.72 = (stack_base)[1128] as i64;
                v34.80 = vvar_956{stack -1256};
                v34.96 = (stack_base)[1240] as i128;
                v34.112 = (stack_base)[1224] as i64;
                v65 = uu_seq::print_seq(&v34, core::cmp::max_by(v32, v19), *((&v20 as &char + 8) as &i64), v21, *((&v22 as &char + 8) as &i64), v23, v0, v62, &v2);
                if !v65 {
LABEL_47ae36:
                    v42 = 0;
                    break;
                } else {
                    if std::io::error::Error::kind(v65) as i8 != 11 {
                        v42 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v65);
                        break;
                    } else {
                        goto LABEL_47ae36;
                    }
                }
                return v42;
            } else if v58 < *((&v1 as &char + 16) as &i64) {
                v61 = *((&v34 as &char + 8) as &i8);
                v14 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v1 as &char + 8) as &i64) + v58 * 8) as &i64));
                v4 = *((&v14 as &char + 16) as &i64);
                v2 = v14;
                v5 = v61;
                alloc::boxed::Box<T>::new(&v2);
            }
        }
    }
LABEL_47ab94:
    return v42;
}
