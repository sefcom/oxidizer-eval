fn uu_shuf::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [bp-0x4d8], Other Possible Types: unsigned long, struct8, int, Result<struct16, struct4>
    let v1: i64;  // [sp-0x4d0]
    let v2: i64;  // [sp-0x4c8]
    let v3: struct24;  // [sp-0x4b8], Other Possible Types: unsigned long, struct8, struct64, Result<struct4, struct8>, char, int, Option<Result<struct17, struct24>>
    let v4: struct24;  // [sp-0x4b8], Other Possible Types: struct64, int, unsigned long
    let v5: i64;  // [sp-0x4b0]
    let v6: i64;  // [sp-0x4a8], Other Possible Types: char
    let v7: i8;  // [bp-0x498]
    let v8: i8;  // [bp-0x488]
    let v9: iNone;  // [bp-0x478], Other Possible Types: struct16
    let v10: i64;  // [sp-0x468]
    let v11: i64;  // [sp-0x458]
    let v12: iNone;  // [sp-0x450], Other Possible Types: struct24
    let v13: i64;  // [sp-0x440]
    let v14: iNone;  // [bp-0x438], Other Possible Types: unsigned long
    let v15: i64;  // [sp-0x430]
    let v16: i64;  // [bp-0x428], Other Possible Types: int
    let v17: iNone;  // [sp-0x420], Other Possible Types: unsigned long
    let v18: iNone;  // [bp-0x418]
    let v19: i64;  // [sp-0x410]
    let v20: iNone;  // [bp-0x408], Other Possible Types: unsigned long
    let v21: i64;  // [sp-0x400], Other Possible Types: char
    let v22: i8;  // [sp-0x3ff]
    let v23: i64;  // [sp-0x3f0]
    let v24: i64;  // [sp-0x3e8]
    let v25: i64;  // [sp-0x3e0]
    let v26: iNone;  // [sp-0x3d8]
    let v27: iNone;  // [sp-0x3c8]
    let v28: i64;  // [sp-0x3b8]
    let v29: String;  // [sp-0x3b0]
    let v30: struct64;  // [bp-0x398]
    let v31: struct64;  // [bp-0x358]
    let v32: struct24;  // [sp-0x318], Other Possible Types: int, Result<struct40, struct8>, struct56, struct712, String
    let v33: i64;  // [sp-0x310]
    let v34: i64;  // [sp-0x308], Other Possible Types: int
    let v35: i32;  // [bp-0x300]
    let v36: iNone;  // [bp-0x2f8]
    let v37: iNone;  // [sp-0x2e8]
    let v38: struct24;  // [sp-0x48]
    let v40: i64;  // r14
    let v41: i64;  // rax
    let v48: iNone;  // xmm0
    let v49: iNone;  // xmm1
    let v50: iNone;  // xmm2
    let v51: struct8;  // rax
    let v52: struct8;  // rax
    let v59: i64;  // r15
    let v60: i64;  // rax
    let v61: i64;  // rax
    let v62: i8;  // al
    let v63: i64;  // rax
    let v64: i8;  // al
    let v65: iNone;  // xmm0
    let v66: iNone;  // xmm1
    let v68: i64;  // rax
    let v69: iNone;  // xmm0
    let v70: iNone;  // xmm1
    let v71: iNone;  // xmm0
    let v72: iNone;  // xmm1

    v32 = uu_shuf::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v32, a0, a1);
    if v24 == 0x8000000000000000 {
        v40 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
        return v40;
    }
    v28 = *(&v8 as &i64);
    v27 = *(&v7 as &i128);
    v26 = *(&v6 as &i128);
    v24 = v3;
    v25 = v5;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN7uu_shuf7options4ECHO17h4d6a54735092e1a8E, g_537f88) as i8 {
        v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v24, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8);
        v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8, &v32);
        *(&v30.field_0 as &struct64) = struct64 {
            field_0: v42
            field_8: v43
            field_16: v44
            field_32: v45
            field_48: v46
            field_56: v47
        };
        v32 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v30);
        v12 = v32;
        v11 = 1;
    } else {
        v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, _ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E, g_537f98);
        v41 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E, g_537f98, &v32);
        if !v41 {
            v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v24, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8);
            v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8, &v32);
            if !v3 {
                v14 = core::ops::function::FnOnce::call_once;
                v15 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                v16 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                v17 = 0;
                v19 = 0;
                *(&v21 as &i64) = 0;
            } else {
                v48 = v3.field_0;
                v49 = v3.field_16;
                v50 = v3.field_32;
                *(&v20 as &u128) = v3.field_48;
                v18 = v50;
                v16 = v49;
                v14 = v48;
            }
            v51 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
            if !v51 {
                v0 = 0x8000000000000000;
            } else {
                v32 = <alloc::string::String as core::clone::Clone>::clone(v51);
                v0 = v32;
            }
            v32 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
            v3 = v32;
            if v0 == 0x8000000000000000 {
                v10 = v6;
                *(&v9 as &i128) = *(&v3.field_0 as &i128);
            }
            v52 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
            if v52 {
                v0 = v52;
                v29 = format!("unexpected argument '{}' found", &v0);
                *(&v35 as &i32) = 1;
                v32 = v29;
                return v40;
            }
            v13 = v10;
            v12 = v9 as i128;
            v11 = 0;
        } else {
            v3 = uu_shuf::parse_range(*((v41 + 8) as &i64), *((v41 + 16) as &i64));
            if v3 {
                v34 = *((&v3 as &char + 24) as &i64);
                *(&v32 as &i128) = *((&v3 as &char + 8) as &i128);
                *(&v35 as &i32) = 1;
                v40 = alloc::boxed::Box<T>::new(&v32);
                return v40;
            }
            v13 = *((&v3 as &char + 24) as &i64);
            v12 = *((&v3 as &char + 8) as &i128);
            v11 = 2;
        }
    }
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v24, _ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE, g_537fa8);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE, g_537fa8, &v32);
    *(&v31.field_0 as &struct64) = struct64 {
        field_0: v53
        field_8: v54
        field_16: v55
        field_32: v56
        field_48: v57
        field_56: v58
    };
    v38 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v31);
    v9 = uu_shuf::parse_head_count(&v38);
    if v9.field_0 != 0x8000000000000000 {
        v34 = v10;
        *(&v35 as &i32) = 1;
        v40 = alloc::boxed::Box<T>::new(&v32);
        goto LABEL_470abd;
    }
    v59 = v9.field_8;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, _ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE, g_537fb8);
    v60 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE, g_537fb8, &v32);
    if !v60 {
        v0 = 0x8000000000000000;
    } else {
        v32 = core::ops::function::FnOnce::call_once(v60);
        v0 = v32;
    }
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE, g_537fc8);
    v61 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE, g_537fc8, &v32);
    if !v61 {
        v4 = 0x8000000000000000;
    } else {
        v32 = core::ops::function::FnOnce::call_once(v61);
        v4 = v32;
    }
    v62 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN7uu_shuf7options15ZERO_TERMINATED17haef6daedf12df78fE, g_537fe8) as i8 ? 0 : 10);
    v20 = v59;
    *(&v14 as &i128) = *(&v0 as &i128);
    v16 = v2;
    *(&v17 as &i128) = v4 as i128;
    v19 = v6;
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN7uu_shuf7options6REPEAT17h860841fa9720eb58E, g_537fd8) as i32;
    v22 = v62;
    if v59 {
        v63 = v11;
        if v63 {
            if v63 as u32 != 1 {
                v6 = v13;
                v3 = v12;
                v65 = v14 as i128;
                v66 = *(&v16 as &i128);
                v37 = *(&v20 as &i128);
                *(&v36 as &i128) = (&v17)[8] as i128;
                v34 = v66;
                v32 = v65;
                v40 = uu_shuf::shuf_exec(&v3, &v32);
                if !v40 {
                    return 0;
                }
            } else {
                v2 = v13;
                v0 = v12;
                v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v1, v1 + v2 * 24);
                v3 = uu_shuf::find_seps(v22);
                v69 = v14 as i128;
                v70 = *(&v16 as &i128);
                v37 = *(&v20 as &i128);
                *(&v36 as &i128) = (&v17)[8] as i128;
                v34 = v70;
                v32 = v69;
                v40 = uu_shuf::shuf_exec(&v3, &v32);
                if !v40 {
                    return 0;
                }
LABEL_470590:
                if !v11 {
                    return v40;
                }
                return v40;
            }
        } else {
            v10 = v13;
            v9 = v12;
            v32 = uu_shuf::read_input_file((&v9)[8] as i64, v13);
            if v0 == 0x8000000000000000 {
                v23 = _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE & -0x100 | v0 != 0x8000000000000000;
            } else {
                v0 = v32;
                v68 = alloc::alloc::Global::alloc_impl(8, 16);
                *(v68 as &i128) = *(&v0.field_8 as &i128);
                v3 = alloc::slice::hack::into_vec(v68, 1);
                v3 = uu_shuf::find_seps(v22);
                v71 = v14 as i128;
                v72 = *(&v16 as &i128);
                v37 = *(&v20 as &i128);
                *(&v36 as &i128) = (&v17)[8] as i128;
                v34 = v72;
                v32 = v71;
                if !uu_shuf::shuf_exec(&v3, &v32) {
                    return 0;
                }
                v23 = v23;
            }
            v64 = v23 as u8;
LABEL_470a3a:
        }
    } else if v14 == 0x8000000000000000 {
        v40 = 0;
        v64 = 0;
        goto LABEL_470a3a;
    } else {
        v34 = v16;
        *(&v32 as &i128) = v14 as i128;
        v3 = std::fs::File::create(v33, v16);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, &v32);
        v40 = v0;
        if !v40 {
            v40 = 0;
        }
    }
LABEL_470abd:
    goto LABEL_470590;
}
