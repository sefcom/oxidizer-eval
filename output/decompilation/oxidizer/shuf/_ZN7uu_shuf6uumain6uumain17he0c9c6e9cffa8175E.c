fn uu_shuf::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u128;  // [bp-0x4d8], Other Possible Types: Result<struct16, struct12>
    let v1: u64;  // [bp-0x4d8]
    let v2: u64;  // [bp-0x4d8]
    let v3: core::fmt::rt::Argument;  // [bp-0x4d0]
    let v4: u64;  // [bp-0x4c8]
    let v5: struct24;  // [bp-0x4b8], Other Possible Types: u128, struct8, struct64, core::result::Result<std::fs::File, std::io::error::Error>, struct_0 *
    let v6: u64;  // [bp-0x4b8]
    let v7: u64;  // [bp-0x4b8]
    let v8: Result<struct56, struct16>;  // [bp-0x4b8]
    let v9: Result<struct17, struct24>;  // [bp-0x4b8]
    let v10: struct64;  // [bp-0x4b8]
    let v11: struct64;  // [bp-0x4b8]
    let v12: u64;  // [bp-0x4b0]
    let v13: u64;  // [bp-0x4b0]
    let v14: u64;  // [bp-0x4a8]
    let v15: u64;  // [bp-0x4a0]
    let v16: u128;  // [bp-0x498]
    let v17: u128;  // [bp-0x498]
    let v18: u64;  // [bp-0x488]
    let v19: void*;  // [bp-0x480]
    let v20: u64;  // [bp-0x480]
    let v21: u128;  // [bp-0x478]
    let v22: u128;  // [bp-0x478]
    let v23: u64;  // [bp-0x470]
    let v24: u64;  // [bp-0x468]
    let v25: u64;  // [bp-0x468]
    let v26: u64;  // [bp-0x458]
    let v27: struct24;  // [bp-0x450]
    let v28: u128;  // [bp-0x450]
    let v29: u64;  // [bp-0x440]
    let v30: u64;  // [bp-0x438]
    let v31: u64;  // [bp-0x438]
    let v32: u64;  // [bp-0x430]
    let v33: u128;  // [bp-0x428]
    let v34: u128;  // [bp-0x420]
    let v35: void*;  // [bp-0x420]
    let v36: u128;  // [bp-0x418]
    let v37: u64;  // [bp-0x410], Other Possible Types: void*
    let v38: u64;  // [bp-0x408]
    let v39: void*;  // [bp-0x400], Other Possible Types: u8
    let v40: u8;  // [bp-0x3ff]
    let v42: u64;  // [bp-0x3e8]
    let v43: u64;  // [bp-0x3e0]
    let v44: u128;  // [bp-0x3d8]
    let v45: u128;  // [bp-0x3c8]
    let v46: u64;  // [bp-0x3b8]
    let v47: u128;  // [bp-0x3b0]
    let v48: u64;  // [bp-0x3a0]
    let v49: struct64;  // [bp-0x398]
    let v50: struct64;  // [bp-0x358]
    let v51: struct64;  // [bp-0x318], Other Possible Types: u128, struct24
    let v52: struct24;  // [bp-0x318], Other Possible Types: struct56, Result<struct40, struct16>, alloc::string::String, u128
    let v53: u128;  // [bp-0x318]
    let v54: u64;  // [bp-0x318]
    let v55: Result<struct40, struct16>;  // [bp-0x318]
    let v56: struct24;  // [bp-0x318]
    let v57: u64;  // [bp-0x310]
    let v58: u64;  // [bp-0x308], Other Possible Types: struct_0 *
    let v59: u32;  // [bp-0x300]
    let v60: void*;  // [bp-0x2f8]
    let v61: Result<struct24, struct24>;  // [bp-0x48]
    let v63: u128;  // xmm1
    let v64: i64;  // rax
    let v68: core::fmt::rt::Argument;  // r14
    let v69: u128;  // xmm0
    let v70: u64;  // rax
    let v71: u64;  // rax
    let v72: u64;  // rdx
    let v73: u64;  // rcx
    let v74: u128;  // xmm0
    let v75: void*;  // rdx
    let v77: u64;  // rsi
    let v78: u64;  // rax
    let v79: u64;  // rax
    let v80: u8;  // al
    let v81: u8;  // al
    let v83: u128;  // xmm0
    let v84: u64;  // rdx
    let v85: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v86: u128;  // xmm0
    let v88: u128;  // xmm0
    let v90: u64;  // [bp-0x4d0]

    uu_shuf::uu_app(&v54);
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v54, a0, a1);
    match v8 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v43);
        },
        Ok(_) => {
            v46 = v77;
            v63 = v17;
            v45 = v63;
            v44 = *((&v8 as &char + 16) as &i128);
            v42 = v8 as i64;
            v43 = v13;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v42, _ZN7uu_shuf7options4ECHO17h4d6a54735092e1a8E.field_16, g_537f88.field_16) as i8 {
                v52 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v42, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E.field_16, g_537ff8.field_16);
                v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E.field_16, g_537ff8.field_16, &v52);
                if v5.field_0 as i64 {
                    v63 = v5.field_16;
                    v20 = v19;
                    v7 = v6;
                    v18 = v77;
                    v12 = v13;
                    v16 = v17;
                } else {
                    v19 = 0;
                    v7 = core::ops::function::FnOnce::call_once;
                    v12 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                    v16 = 0;
                }
                v49 = struct64 {
                    field_0: v7
                    field_8: v12
                    field_16: v63
                    field_32: v16
                    field_48: v18
                    field_56: v19
                };
                v52 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v49);
                v29 = v58;
                v28 = v52.field_0;
                v26 = 1;
                goto LABEL_47015c;
            }
            v53 as u640 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, _ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E.field_16, g_537f98.field_16);
            v64 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E.field_16, g_537f98.field_16, &v53 as u640);
            if v64 {
                v9 = uu_shuf::parse_range(*((v64 + 8) as &i64), *((v64 + 16) as &i64));
                match v9 {
                    Err(_) => {
                        v58 = v15;
                        *(&v53 as &i32) = vvar_1102{stack -1200};
                        v59 = 1;
                        v68 = alloc::boxed::Box<T>::new(&v53 as u640);
                    },
                    Ok(_) => {
                        v29 = v15;
                        v28 = *((&v9 as &char + 8) as &i128);
                        v26 = 2;
                        goto LABEL_47015c;
                    },
                }
            } else {
                v52 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v42, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E.field_16, g_537ff8.field_16);
                v10 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E.field_16, g_537ff8.field_16, &v52);
                if v10.field_0 as i64 {
                    v69 = v10.field_0;
                    v63 = v10.field_16;
                    *(&v38 as &i32) = vvar_85{stack -1160};
                    v36 = v17;
                    v33 = v63;
                    v30 = v69;
                } else {
                    v31 = core::ops::function::FnOnce::call_once;
                    v32 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                    v33 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                    v35 = 0;
                    v37 = 0;
                    v39 = 0 as void*;
                }
                v70 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v31 as u8);
                if v70 {
                    v52 = <alloc::string::String as core::clone::Clone>::clone(v70);
                    v4 = v58;
                    v0 = *(&v52.vec.buf.cap as &i128) as u128;
                }
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v54 as u8, "-");
                v14 = v58;
                v5 = *(&v54 as &i128) as u128;
                if v2 == 0x8000000000000000 {
                    v25 = v14;
                    v22 = v8 as i128 as u128;
                } else {
                    v25 = v4;
                    v22 = *(&v2 as &i128) as u128;
                }
                v71 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v31 as u8);
                if v71 {
                    v0 = v71;
                    v5 = &v0;
                    v12 = <&T as core::fmt::Display>::fmt;
                    v51 = "unexpected argument '";
                    v57 = 2;
                    v60 = 0;
                    v58 = &v5;
                    v59 = 1;
                    v52 as u192 = core::option::Option<T>::map_or_else(v72);
                    v59 = 1;
                    v52 = v47;
                    v58 = v48;
                    v68 = alloc::boxed::Box<T>::new(&v52 as u192);
                } else {
                    v29 = v25;
                    v28 = v22;
                    v26 = 0;
LABEL_47015c:
                    v53 as u448 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v42, _ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE.field_16, g_537fa8.field_16);
                    v11 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE.field_16, g_537fa8.field_16, &v53 as u448);
                    if v11.field_0 as i64 {
                        v73 = v13;
                        v63 = v11.field_16;
                        v7 = v6;
                    } else {
                        v74 = 0;
                        v73 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                        v75 = 0;
                        v7 = core::ops::function::FnOnce::call_once;
                    }
                    v50 = struct64 {
                        field_0: v7
                        field_8: v73
                        field_16: v63
                        field_32: v17
                        field_48: v77
                        field_56: v20
                    };
                    v61 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v50);
                    uu_shuf::parse_head_count(&v21, &v61);
                    if *((&v8 as &char + 64) as &i64) == 0x8000000000000000 {
                        v52 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, _ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE.field_16, g_537fb8.field_16);
                        v78 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE.field_16, g_537fb8.field_16, &v52);
                        if v78 {
                            v52 = core::ops::function::FnOnce::call_once(v78);
                            v4 = v58;
                            v0 = v52.field_0;
                        }
                        v55 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE.field_16, g_537fc8.field_16);
                        v79 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE.field_16, g_537fc8.field_16, &v55);
                        if v79 {
                            v51 as u192 = core::ops::function::FnOnce::call_once(v79);
                            v14 = v58;
                            v5 = v56.field_0;
                        }
                        v80 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v42, _ZN7uu_shuf7options6REPEAT17h860841fa9720eb58E.field_16, g_537fd8.field_16) as i32 as i8;
                        v81 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v42, _ZN7uu_shuf7options15ZERO_TERMINATED17haef6daedf12df78fE.field_16, g_537fe8.field_16) as i8 ? 0 : 10);
                        v38 = v23;
                        *(&v30 as &i128) = *(&v2 as &i128);
                        v33 = v4;
                        v34 = v11.field_0;
                        v37 = v14;
                        v39 = v80;
                        v40 = v81;
                        if v23 {
                            if !v26 {
                                v24 = v29;
                                v21 = v28;
                                v51 = uu_shuf::read_input_file(v23, v29);
                                v68 = v57;
                                if v51.field_0 as i64 != 0x8000000000000000 {
                                    v1 = v51.field_0 as i64;
                                    v3 = v68;
                                    v4 = v58;
                                    v85 = alloc::alloc::Global::alloc_impl(0x8, 16, v84) as u64;
                                    *(v85 as &core::fmt::rt::ArgumentType) = v3.ty;
                                    v5 = alloc::slice::hack::into_vec(v85, 1);
                                    v5 = uu_shuf::find_seps(v40 as u64);
                                    v88 = *(&v30 as &i128);
                                    v51 = struct64 {
                                        field_0: v88
                                        field_16: *(&v33 as &i128)
                                        field_32: *((&v34 as &char + 8) as &i128)
                                        field_48: v38
                                    };
                                    v68 = uu_shuf::shuf_exec(&v5, &v51);
                                    return 0;
                                }
                            } else if v26 as u32 == 1 {
                                v4 = v29;
                                v0 = v28;
                                v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v90, v90 + v29 * 24);
                                v5 = uu_shuf::find_seps(v40 as u64);
                                v86 = *(&v30 as &i128);
                                v51 = struct64 {
                                    field_0: v86
                                    field_16: *(&v33 as &i128)
                                    field_32: *((&v34 as &char + 8) as &i128)
                                    field_48: v38
                                };
                                v68 = uu_shuf::shuf_exec(&v5, &v51);
                            } else {
                                v5 = v27;
                                v83 = *(&v30 as &i128);
                                v51 = struct64 {
                                    field_0: v83
                                    field_16: *(&v33 as &i128)
                                    field_32: *((&v34 as &char + 8) as &i128)
                                    field_48: v38
                                };
                                v68 = uu_shuf::shuf_exec(&v5, &v51);
                            }
                        } else {
                            if v31 != 0x8000000000000000 {
                                v58 = v33;
                                v51 = *(&v31 as &i128) as u128;
                                v5 = std::fs::File::create(v57, v33);
                                v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v5, &v51 as u192);
                            }
                        }
                    } else {
                        v58 = v25;
                        v53 = *((&v8 as &char + 64) as &i128) as u128;
                        v59 = 1;
                        v68 = alloc::boxed::Box<T>::new(&v53 as u448);
                    }
                }
            }
            return v68;
        },
    }
}
