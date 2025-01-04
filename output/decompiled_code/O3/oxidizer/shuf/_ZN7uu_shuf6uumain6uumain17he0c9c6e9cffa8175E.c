fn uu_shuf::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x4d8], Other Possible Types: Result<struct16, struct12>
    let v1: i64;  // [sp-0x4d0]
    let v2: i64;  // [sp-0x4c8]
    let v3: i64;  // [sp-0x4b8], Other Possible Types: struct64, struct24, Result<struct56, struct16>, struct8, Option<Result<struct17, struct24>>
    let v4: i64;  // [sp-0x4b0]
    let v5: i64;  // [sp-0x4a8]
    let v6: i128;  // [bp-0x478], Other Possible Types: Result<struct24, struct16>
    let v7: i64;  // [sp-0x468]
    let v8: i64;  // [sp-0x458]
    let v9: i192;  // [bp-0x450]
    let v10: i64;  // [sp-0x440]
    let v11: i128;  // [bp-0x438]
    let v12: i64;  // [sp-0x430]
    let v13: i64;  // [bp-0x428]
    let v14: i128;  // [sp-0x420]
    let v15: i128;  // [bp-0x418]
    let v16: i64;  // [sp-0x410]
    let v17: i64;  // [bp-0x408]
    let v18: i8;  // [bp-0x400]
    let v19: i8;  // [sp-0x3ff]
    let v20: i64;  // [sp-0x3f0]
    let v21: i64;  // [sp-0x3e8]
    let v22: i64;  // [sp-0x3e0]
    let v23: i128;  // [sp-0x3d8]
    let v24: i128;  // [sp-0x3c8]
    let v25: i64;  // [sp-0x3b8]
    let v26: i192;  // [sp-0x3b0]
    let v27: struct64;  // [bp-0x398]
    let v28: i64;  // [sp-0x360]
    let v29: struct64;  // [bp-0x358]
    let v30: i64;  // [sp-0x320]
    let v31: i128;  // [sp-0x318], Other Possible Types: struct24, struct56, Result<struct40, struct16>, struct64, struct712
    let v32: i64;  // [sp-0x310]
    let v33: i64;  // [sp-0x308]
    let v34: i128;  // [sp-0x2e8]
    let v35: i192;  // [sp-0x48], Other Possible Types: struct24
    let v37: i64;  // r8
    let v38: i64;  // r9
    let v39: i64;  // rax
    let v40: i64;  // rax
    let v45: i128;  // xmm0
    let v46: i128;  // xmm1
    let v47: i128;  // xmm2
    let v48: i64;  // rsi
    let v49: i64;  // rdx
    let v50: struct8;  // rax
    let v51: struct8;  // rax
    let v52: i64;  // r15
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v55: i8;  // al
    let v56: i64;  // rax
    let v57: i8;  // al
    let v59: i64;  // rax
    let v60: i64;  // rcx

    v31 = uu_shuf::uu_app(a1, a2);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v31, a0, a1, v37, v38);
    if v21 == 0x8000000000000000 {
        v39 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
        return v39;
    }
    v25 = *((&v3 as &char + 48) as &i64);
    v24 = *((&v3 as &char + 32) as &i128);
    v23 = *((&v3 as &char + 16) as &i128);
    v21 = v3;
    v22 = v4;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, _ZN7uu_shuf7options4ECHO17h4d6a54735092e1a8E, g_537f88) as i8 {
        v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21, _ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E, g_537f98);
        v40 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E, g_537f98, &v31);
        if !v40 {
            v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v21, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8);
            v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8, &v31);
            if !v3 {
                v11 = core::ops::function::FnOnce::call_once;
                v12 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                v13 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                v14 = 0;
                v16 = 0;
                v18 = 0;
            } else {
                v45 = v3;
                v46 = *((&v3 as &char + 16) as &i128);
                v47 = *((&v3 as &char + 32) as &i128);
                v17 = *((&v3 as &char + 48) as &i128);
                v15 = v47;
                v13 = v46;
                v11 = v45;
            }
            v50 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v48, v49);
            if !v50 {
                v0 = 0x8000000000000000;
            } else {
                v31 = <alloc::string::String as core::clone::Clone>::clone(v50);
                v0 = v31;
            }
            v31 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
            v3 = v31;
            if v0 == 0x8000000000000000 {
                v7 = v5;
                v6 = v3;
            } else {
                v7 = v2;
                v6 = v0;
            }
            v51 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v48, v49);
            if !v51 {
                v10 = v7;
                v9 = v6;
                v8 = 0;
                goto LABEL_47015c;
            } else {
                v0 = v51;
                v26 = format!("unexpected argument '{:?}' found", &v0);
                v31 = v26;
                v39 = alloc::boxed::Box<T>::new(&v31);
            }
        } else {
            v3 = uu_shuf::parse_range(*((v40 + 8) as &i64), *((v40 + 16) as &i64));
            if !v3 {
                v10 = *((&v3 as &char + 24) as &i64);
                v9 = *((&v3 as &char + 8) as &i128);
                v8 = 2;
                goto LABEL_47015c;
            } else {
                v31 = *((&v3 as &char + 8) as &i224);
                v39 = alloc::boxed::Box<T>::new(&v31);
            }
        }
    } else {
        v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v21, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8);
        v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8, &v31);
        *(&v27.field_0 as &struct64) = struct64 {
            field_0: v41
            field_8: v42
            field_16: v43
            field_32: v44
            field_48: v48
            field_56: v49
        };
        v31 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v27, v28);
        v9 = v31;
        v8 = 1;
LABEL_47015c:
        v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v21, _ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE, g_537fa8);
        v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE, g_537fa8, &v31);
        *(&v29.field_0 as &struct64) = struct64 {
            field_0: v41
            field_8: v42
            field_16: v43
            field_32: v44
            field_48: v48
            field_56: v49
        };
        v35 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v29, v30);
        v6 = uu_shuf::parse_head_count(&v35);
        match v6 {
            Ok(_) => {
                v31 = v6;
                v39 = alloc::boxed::Box<T>::new(&v31);
                goto LABEL_470792;
            },
            Err(_) => {
                v52 = *((&v6 as &char + 8) as &i64);
                v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21, _ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE, g_537fb8);
                v53 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE, g_537fb8, &v31);
            },
        }
        if !v53 {
            v0 = 0x8000000000000000;
            v2 = v2;
        } else {
            v31 = core::ops::function::FnOnce::call_once(v53);
            v0 = v31;
            v2 = v2;
        }
        v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21, _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE, g_537fc8);
        v54 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE, g_537fc8, &v31);
        if !v54 {
            v3 = 0x8000000000000000;
            v5 = v5;
        } else {
            v31 = core::ops::function::FnOnce::call_once(v54);
            v3 = v31;
            v5 = v5;
        }
        v55 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, _ZN7uu_shuf7options15ZERO_TERMINATED17haef6daedf12df78fE, g_537fe8) as i8 ? 0 : 10);
        v17 = v52;
        v11 = v0;
        v13 = v2;
        v14 = v3;
        v16 = v5;
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, _ZN7uu_shuf7options6REPEAT17h860841fa9720eb58E, g_537fd8) as i32;
        v19 = v55;
        if !v52 {
            if v11 == 0x8000000000000000 {
                v39 = 0;
                v57 = 0;
            } else {
                v33 = v13;
                v31 = v11;
                v3 = std::fs::File::create(v32, v13);
                v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, &v31);
                if !v0 {
                    v6 = *((&v0 as &char + 8) as &i32);
                }
            }
LABEL_470a3a:
            goto LABEL_470792;
        } else {
            v56 = v8;
            if !v56 {
                v7 = v10;
                v6 = v9;
                v31 = uu_shuf::read_input_file(*((&v6 as &char + 8) as &i64), v10);
                if v0 == 0x8000000000000000 {
                    v20 = _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE | -0x100 | v0 != 0x8000000000000000;
                } else {
                    v0 = v31;
                    v59 = alloc::alloc::Global::alloc_impl(8, 16);
                    *(v59 as &i128) = *((&v0 as &char + 8) as &i128);
                    v3 = alloc::slice::hack::into_vec(v59, 1);
                    v3 = uu_shuf::find_seps(v19);
                    v31 = struct64 {
                        field_0: v44
                        field_16: v43
                        field_32: *((&v14 as &char + 8) as &i128)
                        field_48: v17
                    };
                    v39 = uu_shuf::shuf_exec(&v3, &v31);
                    if !v39 {
                        return 0;
                    }
                    v20 = v20;
                }
                v57 = v20;
                goto LABEL_470a3a;
            } else if v56 == 1 {
                v2 = v10;
                v0 = v9;
                v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v1, v1 + v2 * 24);
                v3 = uu_shuf::find_seps(v19);
                v31 = struct64 {
                    field_0: v44
                    field_16: v43
                    field_32: *((&v14 as &char + 8) as &i128)
                    field_48: v17
                };
                v39 = uu_shuf::shuf_exec(&v3, &v31);
                if !v39 {
                    return 0;
                }
LABEL_470abf:
                v60 = v8;
            } else {
                v3 = v9;
                v34 = v17;
                v31 = struct64 {
                    field_0: v44
                    field_16: v43
                    field_32: *((&v14 as &char + 8) as &i128)
                    field_48: <UNKNOWN>
                };
                v39 = uu_shuf::shuf_exec(&v3, &v31);
                if !v39 {
                    return 0;
                }
LABEL_470792:
                goto LABEL_470abf;
            }
        }
    }
    return v39;
}
