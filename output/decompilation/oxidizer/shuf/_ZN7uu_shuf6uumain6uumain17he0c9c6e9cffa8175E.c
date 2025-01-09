fn uu_shuf::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x4d8], Other Possible Types: struct24, Result<struct16, struct4>, struct8
    let v1: i64;  // [sp-0x4d0]
    let v2: i64;  // [sp-0x4c8]
    let v3: i64;  // [bp-0x4b8], Other Possible Types: struct64, struct24, struct8, Result<struct4, struct8>, Option<Result<struct17, struct24>>
    let v4: i64;  // [sp-0x4b0]
    let v5: i64;  // [bp-0x4a8]
    let v6: i8;  // [bp-0x498]
    let v7: i8;  // [bp-0x488]
    let v8: i128;  // [bp-0x478], Other Possible Types: struct16
    let v9: i64;  // [sp-0x468]
    let v10: i64;  // [sp-0x458]
    let v11: i128;  // [sp-0x450], Other Possible Types: struct24
    let v12: i64;  // [sp-0x440]
    let v13: i64;  // [bp-0x438]
    let v14: i64;  // [sp-0x430]
    let v15: i64;  // [bp-0x428]
    let v16: i64;  // [sp-0x420]
    let v17: i128;  // [bp-0x418]
    let v18: i64;  // [sp-0x410]
    let v19: i128;  // [bp-0x408]
    let v20: i8;  // [bp-0x400]
    let v21: i8;  // [sp-0x3ff]
    let v22: i64;  // [sp-0x3f0]
    let v23: i64;  // [sp-0x3e8]
    let v24: i64;  // [sp-0x3e0]
    let v25: i128;  // [sp-0x3d8]
    let v26: i128;  // [sp-0x3c8]
    let v27: i64;  // [sp-0x3b8]
    let v28: i8;  // [bp-0x3b0]
    let v29: struct64;  // [bp-0x398]
    let v30: struct64;  // [bp-0x358]
    let v31: i5696;  // [sp-0x318], Other Possible Types: struct24, Result<struct40, struct8>, struct56, struct28, struct712
    let v32: i64;  // [sp-0x310]
    let v33: i64;  // [sp-0x308]
    let v34: i64;  // [bp-0x300]
    let v35: i64;  // [bp-0x2f8]
    let v36: i128;  // [sp-0x2e8]
    let v37: struct24;  // [sp-0x48], Other Possible Types: i192
    let v39: i64;  // rax
    let v40: i64;  // rax
    let v47: i128;  // xmm0
    let v48: i128;  // xmm1
    let v49: i128;  // xmm2
    let v50: struct8;  // rax
    let v51: struct8;  // rax
    let v57: i64;  // r15
    let v58: i8;  // al
    let v59: i64;  // rax
    let v60: i8;  // al
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v64: i64;  // rax
    let v65: i128;  // xmm0
    let v66: i128;  // xmm1
    let v67: i128;  // xmm0
    let v68: i128;  // xmm1

    v31 = uu_shuf::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v31, a0, a1);
    if v23 == 0x8000000000000000 {
        v39 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
        return v39;
    }
    v27 = v7;
    v26 = v6;
    v25 = v5;
    v23 = v3;
    v24 = v4;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v23, _ZN7uu_shuf7options4ECHO17h4d6a54735092e1a8E, g_537f88) as i8 {
        v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v23, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8);
        v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8, &v31);
        *(&v29.field_0 as &struct64) = struct64 {
            field_0: v41
            field_8: v46
            field_16: v42
            field_32: v43
            field_48: v44
            field_56: v45
        };
        v31 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v29);
        v11 = v31;
        v10 = 1;
    } else {
        v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v23, _ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E, g_537f98);
        v40 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E, g_537f98, &v31);
        if !v40 {
            v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v23, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8);
            v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8, &v31);
            if !v3 {
                v13 = core::ops::function::FnOnce::call_once;
                v14 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                v15 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                v16 = 0;
                v18 = 0;
                v20 = 0;
            } else {
                v47 = v3;
                v48 = *((&v3 as &char + 16) as &i128);
                v49 = *((&v3 as &char + 32) as &i128);
                v19 = *((&v3 as &char + 48) as &i128);
                v17 = v49;
                v15 = v48;
                v13 = v47;
            }
            v50 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
            if !v50 {
                v0 = 0x8000000000000000;
            } else {
                v31 = <alloc::string::String as core::clone::Clone>::clone(v50);
                v0 = v31;
            }
            v31 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
            if v0 == 0x8000000000000000 {
                v9 = v5;
                v8 = v3;
            }
            v51 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
            if v51 {
                v0 = v51;
                v3 = &v0;
                v4 = <&T as core::fmt::Display>::fmt;
                v31 = struct28 {
                    field_0: "unexpected argument '"
                    field_16: &v3
                    field_24: <UNKNOWN>
                };
                v35 = 0;
                v34 = 1;
                core::option::Option<T>::map_or_else();
                v31 = v28;
                alloc::boxed::Box<T>::new(&v31);
                return v39;
            }
            v12 = v9;
            v11 = v8;
            v10 = 0;
        } else {
            v3 = uu_shuf::parse_range(*((v40 + 8) as &i64), *((v40 + 16) as &i64));
            if v3 {
                v31 = *((&v3 as &char + 8) as &i224);
                alloc::boxed::Box<T>::new(&v31);
                return v39;
            }
            v12 = *((&v3 as &char + 24) as &i64);
            v11 = *((&v3 as &char + 8) as &i128);
            v10 = 2;
        }
    }
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v23, _ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE, g_537fa8);
    v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE, g_537fa8, &v31);
    *(&v30.field_0 as &struct64) = struct64 {
        field_0: v52
        field_8: v4
        field_16: v53
        field_32: v54
        field_48: v55
        field_56: v56
    };
    v37 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v30);
    v8 = uu_shuf::parse_head_count(&v37);
    if v8 != 0x8000000000000000 {
        v31 = v8;
        alloc::boxed::Box<T>::new(&v31);
        goto LABEL_470792;
    }
    v57 = *((&v8 as &char + 8) as &i64);
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v23, _ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE, g_537fb8);
    if !clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE, g_537fb8, &v31) {
        v0 = 0x8000000000000000;
    } else {
        core::ops::function::FnOnce::call_once();
        v2 = v33;
        v0 = v31;
    }
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v23, _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE, g_537fc8);
    if !clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE, g_537fc8, &v31) {
        v3 = 0x8000000000000000;
    } else {
        core::ops::function::FnOnce::call_once();
        v5 = v33;
        v3 = v31;
    }
    v58 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v23, _ZN7uu_shuf7options15ZERO_TERMINATED17haef6daedf12df78fE, g_537fe8) as i8 ? 0 : 10);
    v19 = v57;
    v13 = v0;
    v15 = v2;
    v16 = v3;
    v18 = v5;
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v23, _ZN7uu_shuf7options6REPEAT17h860841fa9720eb58E, g_537fd8) as i32;
    v21 = v58;
    if v57 {
        v59 = v10;
        if v59 {
            if v59 == 1 {
                v2 = v12;
                v0 = v11;
                v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v1, v1 + v2 * 24);
                v3 = uu_shuf::find_seps(v21);
                v65 = v13;
                v66 = v15;
                v36 = v19;
                v35 = *((&v16 as &char + 8) as &i128);
                v33 = v66;
                v31 = v65;
                if uu_shuf::shuf_exec(&v3, &v31) {
LABEL_470590:
                    if !v10 {
                        return v39;
                    }
                    return v39;
                }
            } else {
                v5 = v12;
                v3 = v11;
                v61 = v13;
                v62 = v15;
                v36 = v19;
                v35 = *((&v16 as &char + 8) as &i128);
                v33 = v62;
                v31 = v61;
                if !uu_shuf::shuf_exec(&v3, &v31) {
                    return 0;
                }
LABEL_470792:
                goto LABEL_470590;
            }
        } else {
            v9 = v12;
            v8 = v11;
            v31 = uu_shuf::read_input_file(*((&v8 as &char + 8) as &i64), v12);
            if v0 == 0x8000000000000000 {
                v22 = _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE & -0x100 | v0 != 0x8000000000000000;
                goto LABEL_470a25;
            }
            v0 = v31;
            v64 = alloc::alloc::Global::alloc_impl(8, 16);
            *(v64 as &i128) = *((&v0 as &char + 8) as &i128);
            v3 = alloc::slice::hack::into_vec(v64, 1);
            v3 = uu_shuf::find_seps(v21);
            v67 = v13;
            v68 = v15;
            v36 = v19;
            v35 = *((&v16 as &char + 8) as &i128);
            v33 = v68;
            v31 = v67;
            if uu_shuf::shuf_exec(&v3, &v31) {
                v22 = v22;
LABEL_470a25:
                v60 = v22;
LABEL_470a3a:
                goto LABEL_470792;
            }
        }
        v39 = 0;
        return 0;
    } else if v13 == 0x8000000000000000 {
        v60 = 0;
        goto LABEL_470a3a;
    } else {
        v33 = v15;
        v31 = v13;
        v3 = std::fs::File::create(v32, v15);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, &v31);
    }
}
