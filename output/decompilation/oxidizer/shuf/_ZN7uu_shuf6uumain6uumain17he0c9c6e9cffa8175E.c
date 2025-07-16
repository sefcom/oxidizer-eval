fn uu_shuf::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u128;  // [bp-0x4d8], Other Possible Types: Result<struct16, struct12>
    let v1: u64;  // [bp-0x4d8]
    let v2: u64;  // [bp-0x4d8]
    let v3: u64;  // [bp-0x4d0]
    let v4: u64;  // [bp-0x4c8]
    let v5: u128;  // [bp-0x4b8], Other Possible Types: struct24, struct8, struct_0 *, struct64, core::result::Result<std::fs::File, std::io::error::Error>
    let v6: u64;  // [bp-0x4b8]
    let v7: u64;  // [bp-0x4b8], Other Possible Types: Result<struct56, struct16>
    let v8: Result<struct17, struct24>;  // [bp-0x4b8]
    let v9: struct64;  // [bp-0x4b8]
    let v10: struct64;  // [bp-0x4b8]
    let v11: u64;  // [bp-0x4b0]
    let v12: u64;  // [bp-0x4b0]
    let v13: u64;  // [bp-0x4a8]
    let v14: u64;  // [bp-0x4a0]
    let v15: u128;  // [bp-0x498]
    let v16: u128;  // [bp-0x498]
    let v17: u64;  // [bp-0x488]
    let v18: void*;  // [bp-0x480]
    let v19: u64;  // [bp-0x480]
    let v20: u32;  // [bp-0x478]
    let v21: u64;  // [bp-0x470]
    let v22: u64;  // [bp-0x468]
    let v23: u64;  // [bp-0x468]
    let v24: u64;  // [bp-0x458]
    let v25: u8;  // [bp-0x450]
    let v26: u128;  // [bp-0x450]
    let v27: u64;  // [bp-0x440]
    let v28: u64;  // [bp-0x438]
    let v29: u64;  // [bp-0x438]
    let v30: u64;  // [bp-0x430]
    let v31: u64;  // [bp-0x428]
    let v32: u128;  // [bp-0x420]
    let v33: void*;  // [bp-0x420]
    let v34: u128;  // [bp-0x418]
    let v35: void*;  // [bp-0x410], Other Possible Types: u64
    let v36: u64;  // [bp-0x408]
    let v37: u8;  // [bp-0x400], Other Possible Types: void*
    let v38: u8;  // [bp-0x3ff]
    let v40: u64;  // [bp-0x3e8]
    let v41: u64;  // [bp-0x3e0]
    let v42: u8;  // [bp-0x3d8]
    let v43: u128;  // [bp-0x3c8]
    let v44: u64;  // [bp-0x3b8]
    let v45: u128;  // [bp-0x3b0]
    let v46: u64;  // [bp-0x3a0]
    let v47: u512;  // [bp-0x398]
    let v48: u512;  // [bp-0x358]
    let v49: u256;  // [bp-0x318], Other Possible Types: Result<struct24, struct24>
    let v50: struct24;  // [bp-0x318], Other Possible Types: struct56, u128, alloc::string::String, Result<struct40, struct16>
    let v51: u128;  // [bp-0x318]
    let v52: u64;  // [bp-0x318]
    let v53: Result<struct40, struct16>;  // [bp-0x318]
    let v54: struct24;  // [bp-0x318]
    let v55: u64;  // [bp-0x310]
    let v56: u64;  // [bp-0x308], Other Possible Types: struct_0 *
    let v57: u32;  // [bp-0x300]
    let v58: void*;  // [bp-0x2f8]
    let v59: struct24;  // [bp-0x48]
    let v61: u128;  // xmm1
    let v62: i64;  // rax
    let v66: u64;  // r14
    let v67: u128;  // xmm0
    let v68: u64;  // rax
    let v69: u64;  // rax
    let v70: u64;  // rdx
    let v71: u64;  // rcx
    let v72: u128;  // xmm0
    let v73: void*;  // rdx
    let v75: u64;  // rsi
    let v76: u64;  // rax
    let v77: u64;  // rax
    let v78: u8;  // al
    let v79: u8;  // al
    let v81: u128;  // xmm0
    let v82: u64;  // rdx
    let v83: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v84: u128;  // xmm0
    let v86: u128;  // xmm0
    let v88: u64;  // [bp-0x4d0]

    uu_shuf::uu_app(&v52);
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v52, a0, a1);
    match v7 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41);
        },
        Ok(_) => {
            v44 = v75;
            v61 = v16;
            v43 = v61;
            memcpy(&v42, &v7, 16);
            v40 = v7 as i64;
            v41 = v12;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, _ZN7uu_shuf7options4ECHO17h4d6a54735092e1a8E.field_16, g_537f88.field_16) as i8 {
                v50 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v40, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E.field_16, g_537ff8.field_16);
                v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E.field_16, g_537ff8.field_16, &v50);
                if v5.field_0 as i64 {
                    v61 = v5.field_16;
                    v19 = v18;
                    v7 = v6;
                    v17 = v75;
                    v11 = v12;
                    v15 = v16;
                } else {
                    v18 = 0;
                    v7 = core::ops::function::FnOnce::call_once;
                    v11 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                    v15 = 0;
                }
                v47 = struct64 {
                    field_0: v7
                    field_8: v11
                    field_16: v61
                    field_32: v15
                    field_48: v17
                    field_56: v18
                };
                v50 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v47);
                v27 = v56;
                memcpy(&v25, &v50, 16);
                v24 = 1;
                goto LABEL_47015c;
            }
            v51 as u640 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v40, _ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E.field_16, g_537f98.field_16);
            v62 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E.field_16, g_537f98.field_16, &v51 as u640);
            if v62 {
                v8 = uu_shuf::parse_range(*((v62 + 8) as &i64), *((v62 + 16) as &i64));
                match v8 {
                    Err(_) => {
                        v56 = v14;
                        *(&v51 as &i32) = vvar_1102{stack -1200};
                        v57 = 1;
                        v66 = alloc::boxed::Box<T>::new(&v51 as u640);
                    },
                    Ok(_) => {
                        v27 = v14;
                        memcpy(&v25, &v8, 16);
                        v24 = 2;
                        goto LABEL_47015c;
                    },
                }
            } else {
                v50 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v40, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E.field_16, g_537ff8.field_16);
                v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E.field_16, g_537ff8.field_16, &v50);
                if v9.field_0 as i64 {
                    v67 = v9.field_0;
                    v61 = v9.field_16;
                    *(&v36 as &i32) = vvar_85{stack -1160};
                    v34 = v16;
                    v31 = v61;
                    v28 = v67;
                } else {
                    v29 = core::ops::function::FnOnce::call_once;
                    v30 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                    v31 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                    v33 = 0;
                    v35 = 0;
                    v37 = 0 as void*;
                }
                v68 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v29 as u8);
                if v68 {
                    v50 = <alloc::string::String as core::clone::Clone>::clone(v68);
                    v4 = v56;
                    v0 = *(&v50.vec.buf.cap as &i128) as u128;
                }
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v52 as u8, "-");
                v13 = v56;
                memcpy(&v6 as u8, &v52 as u8, 16);
                if v2 == 0x8000000000000000 {
                    v23 = v13;
                    v20 = v7 as i128 as u128;
                } else {
                    v23 = v4;
                    v20 = *(&v2 as &i128) as u128;
                }
                v69 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v29 as u8);
                if v69 {
                    v0 = v69;
                    v5 = &v0;
                    v11 = <&T as core::fmt::Display>::fmt;
                    v49 = "unexpected argument '";
                    v55 = 2;
                    v58 = 0;
                    v56 = &v5;
                    v57 = 1;
                    v50 as u192 = core::option::Option<T>::map_or_else(v70);
                    v57 = 1;
                    v50 = v45;
                    v56 = v46;
                    v66 = alloc::boxed::Box<T>::new(&v50 as u192);
                } else {
                    v27 = v23;
                    memcpy(&v25, &v20, 16);
                    v24 = 0;
LABEL_47015c:
                    v51 as u448 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v40, _ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE.field_16, g_537fa8.field_16);
                    v10 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE.field_16, g_537fa8.field_16, &v51 as u448);
                    if v10.field_0 as i64 {
                        v71 = v12;
                        v61 = v10.field_16;
                        v7 = v6;
                    } else {
                        v72 = 0;
                        v71 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
                        v73 = 0;
                        v7 = core::ops::function::FnOnce::call_once;
                    }
                    v48 = struct64 {
                        field_0: v7
                        field_8: v71
                        field_16: v61
                        field_32: v16
                        field_48: v75
                        field_56: v19
                    };
                    v59 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v48);
                    uu_shuf::parse_head_count(&v20, &v59);
                    if *((&v7 as &char + 64) as &i64) == 0x8000000000000000 {
                        v50 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v40, _ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE.field_16, g_537fb8.field_16);
                        v76 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE.field_16, g_537fb8.field_16, &v50);
                        if v76 {
                            v50 = core::ops::function::FnOnce::call_once(v76);
                            v4 = v56;
                            v0 = v50.field_0;
                        }
                        v53 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v40, _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE.field_16, g_537fc8.field_16);
                        v77 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE.field_16, g_537fc8.field_16, &v53);
                        if v77 {
                            v49 as u192 = core::ops::function::FnOnce::call_once(v77);
                            v13 = v56;
                            v5 = v54.field_0;
                        }
                        v78 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, _ZN7uu_shuf7options6REPEAT17h860841fa9720eb58E.field_16, g_537fd8.field_16) as i32 as i8;
                        v79 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, _ZN7uu_shuf7options15ZERO_TERMINATED17haef6daedf12df78fE.field_16, g_537fe8.field_16) as i8 ? 0 : 10);
                        v36 = v21;
                        *(&v28 as &i128) = *(&v2 as &i128);
                        v31 = v4;
                        v32 = v10.field_0;
                        v35 = v13;
                        v37 = v78;
                        v38 = v79;
                        if v21 {
                            if !v24 {
                                v22 = v27;
                                v20 = v26;
                                v49 = uu_shuf::read_input_file(v21, v27);
                                v66 = v55;
                                if let Ok(_) = v49 {
                                    v1 = v49 as i64;
                                    v3 = v66;
                                    v4 = v56;
                                    v83 = alloc::alloc::Global::alloc_impl(0x8, 16, v82) as u64;
                                    *(v83 as &i128) = *(&v3 as &i128);
                                    v5 = alloc::slice::hack::into_vec(v83, 1);
                                    v5 = uu_shuf::find_seps(v38 as u64);
                                    v86 = *(&v28 as &i128);
                                    memcpy(&v49, &v36, 16);
                                    memcpy(&v49, &v32, 16);
                                    v49 = struct32 {
                                        field_0: v86
                                        field_16: *(&v31 as &i128)
                                    };
                                    v66 = uu_shuf::shuf_exec(&v5, &v49);
                                    return 0;
                                }
                            } else if v24 as u32 == 1 {
                                v4 = v27;
                                v0 = v26;
                                v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v88, v88 + v27 * 24);
                                v5 = uu_shuf::find_seps(v38 as u64);
                                v84 = *(&v28 as &i128);
                                memcpy(&v53, &v36, 16);
                                memcpy(&v53, &v32, 16);
                                v49 = struct32 {
                                    field_0: v84
                                    field_16: *(&v31 as &i128)
                                };
                                v66 = uu_shuf::shuf_exec(&v5, &v49);
                            } else {
                                v5 = v25;
                                v81 = *(&v28 as &i128);
                                memcpy(&v53, &v36, 16);
                                memcpy(&v53, &v32, 16);
                                v49 = struct32 {
                                    field_0: v81
                                    field_16: *(&v31 as &i128)
                                };
                                v66 = uu_shuf::shuf_exec(&v5, &v49);
                            }
                        } else {
                            if v29 != 0x8000000000000000 {
                                v56 = v31;
                                v49 = *(&v29 as &i128) as u128;
                                v5 = std::fs::File::create(v55, v31);
                                v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v5, &v49 as u192);
                            }
                        }
                    } else {
                        v56 = v23;
                        v51 = *((&v7 as &char + 64) as &i128) as u128;
                        v57 = 1;
                        v66 = alloc::boxed::Box<T>::new(&v51 as u448);
                    }
                }
            }
            return v66;
        },
    }
}
