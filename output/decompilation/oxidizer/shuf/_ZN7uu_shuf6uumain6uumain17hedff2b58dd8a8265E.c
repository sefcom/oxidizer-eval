fn uu_shuf::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: Result<struct24, struct24>;  // [bp-0x438], Other Possible Types: struct64, struct24, u64
    let v1: Result<struct4, struct8>;  // [bp-0x438], Other Possible Types: struct16, u64
    let v2: Result<struct4, struct8>;  // [bp-0x438], Other Possible Types: u128
    let v3: u64;  // [bp-0x438]
    let v4: struct64;  // [bp-0x438]
    let v5: struct64;  // [bp-0x438]
    let v6: u64;  // [bp-0x430]
    let v8: u64;  // [bp-0x428]
    let v9: i8;  // [bp-0x428]
    let v10: u8;  // [bp-0x420]
    let v12: iNone;  // [bp-0x418]
    let v14: void*;  // [bp-0x3f0], Other Possible Types: u64
    let v15: struct24;  // [bp-0x3e8], Other Possible Types: u128
    let v16: u64;  // [bp-0x3e8]
    let v17: u64;  // [bp-0x3e0]
    let v18: u64;  // [bp-0x3d8]
    let v19: u32;  // [bp-0x3d7]
    let v20: u32;  // [bp-0x3d4]
    let v21: u64;  // [bp-0x3d0]
    let v22: u64;  // [bp-0x3c8]
    let v23: u32;  // [bp-0x3c5]
    let v24: u64;  // [bp-0x3c0]
    let v25: iNone;  // [bp-0x3b8], Other Possible Types: u64
    let v26: void*;  // [bp-0x3b0], Other Possible Types: u64
    let v27: iNone;  // [bp-0x3a8], Other Possible Types: u64
    let v28: void*;  // [bp-0x3a0], Other Possible Types: u64
    let v29: u128;  // [bp-0x398]
    let v30: void*;  // [bp-0x390], Other Possible Types: u8
    let v31: u8;  // [bp-0x38f]
    let v32: struct16;  // [bp-0x380], Other Possible Types: struct8
    let v33: u32;  // [bp-0x380]
    let v34: Result<struct16, struct12>;  // [bp-0x370], Other Possible Types: struct16
    let v35: u64;  // [bp-0x368]
    let v36: u64;  // [bp-0x360]
    let v37: u64;  // [bp-0x358]
    let v38: u64;  // [bp-0x350]
    let v39: u64;  // [bp-0x348]
    let v40: iNone;  // [bp-0x340]
    let v41: iNone;  // [bp-0x330]
    let v42: u64;  // [bp-0x320]
    let v43: u64;  // [bp-0x318]
    let v44: alloc::string::String;  // [bp-0x310]
    let v45: u64;  // [bp-0x300]
    let v46: struct28;  // [bp-0x2f8], Other Possible Types: struct41, struct712, struct56, struct64, Result<struct40, struct16>, u64
    let v47: struct17;  // [bp-0x2f8], Other Possible Types: struct56
    let v48: struct24;  // [bp-0x2f8]
    let v49: struct24;  // [bp-0x2f8]
    let v50: struct24;  // [bp-0x2f8]
    let v51: struct24;  // [bp-0x2f8]
    let v52: u64;  // [bp-0x2f0]
    let v53: u64;  // [bp-0x2f0]
    let v54: u32;  // [bp-0x2e4]
    let v56: iNone;  // xmm1
    let v57: u64;  // rdx
    let v61: u64;  // rax
    let v62: void*;  // rax
    let v63: u8;  // al
    let v64: u64;  // r14
    let v65: iNone;  // xmm0
    let v66: i64;  // rax
    let v67: u64;  // rbp
    let v71: i64;  // rax
    let v74: u64;  // rdx
    let v75: u64;  // rsi
    let v76: u8;  // al
    let v77: u64;  // r15
    let v78: i64;  // rax
    let v79: u64;  // rbp
    let v80: i64;  // rax
    let v81: u64;  // r13
    let v82: u8;  // al
    let v83: u8;  // al
    let v84: u64;  // rdx
    let v85: u64;  // r12
    let v86: u64;  // rax
    let v87: u64;  // rdx
    let v88: u8;  // r15b
    let v89: u64;  // rax

    v46 = uu_shuf::uu_app();
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v46, a0, a1);
    if (((0 ^ v1.field_0) & (0 ^ -(v3))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v39);
    }
    v42 = v75;
    v56 = v12;
    v41 = v56;
    v40 = *(&v9 as &i128);
    v38 = v1.field_0;
    v39 = v6;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v38, _ZN7uu_shuf7options4ECHO17h84a9804fc6ebf4b3E.field_0, g_4fa008.field_0) {
        v46 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v38, _ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E.field_0, g_4fa078.field_0);
        v1 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E.field_0, g_4fa078.field_0, &v46);
        v46 = struct64 {
            field_0: core::ops::function::FnOnce::call_once
            field_8: &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17he135a60093c36a3aE
            field_16: v56
            field_32: 0
            field_48: v75
            field_56: v57
        };
        core::iter::traits::iterator::Iterator::collect(&v1, &v46);
        v15 = v0.field_0;
        v18 = v8;
        v14 = 1;
    } else {
        v46 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v38, _ZN7uu_shuf7options11INPUT_RANGE17hc5e4b6a6169a5654E.field_0, g_4fa018.field_0);
        v62 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options11INPUT_RANGE17hc5e4b6a6169a5654E.field_0, g_4fa018.field_0, &v46);
        if v62 {
            v47 = <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v62);
            v2 = v47.field_0;
            v63 = v47.field_16;
            v22 = *(&(&v47.field_16)[1] as &i32);
            v23 = v54;
            if v63 == 2 {
                goto LABEL_45ef3f;
            }
            v15 = v2;
            v19 = v22;
            v20 = v23;
            v18 = v63;
            v14 = 2;
        } else {
LABEL_45ef3f:
            v46 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v38, _ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E.field_0, g_4fa078.field_0);
            v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E.field_0, g_4fa078.field_0, &v46);
            if v4.field_0 as i64 {
                v65 = v4.field_0;
                *(&v29 as &i32) = vvar_70{stack -1032};
                v27 = v12;
                v25 = v56;
                *(&v22 as void*) = v65;
            } else {
                v22 = core::ops::function::FnOnce::call_once;
                v24 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17he135a60093c36a3aE;
                v25 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17he135a60093c36a3aE;
                v26 = 0;
                v28 = 0;
                v30 = 0;
            }
            v66 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v22);
            if v66 {
                v48 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v66 + 8) as &i64), *((v66 + 16) as &i64));
            }
            v49 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
            if v67 == 0x8000000000000000 {
                v46 = v47;
            } else {
                v46 = v67;
            }
            v71 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v22);
            if v71 {
                v0 = 1;
                v6 = *((v71 + 8) as &i64);
                v8 = *((v71 + 16) as &i64);
                v10 = 1;
                v44 = format!("unexpected argument {} found", &v0);
                v46 = struct28 {
                    field_0: *(&v44.vec.buf.inner.cap as &i128)
                    field_16: v45
                    field_24: 1
                };
                alloc::boxed::Box<T>::new(&v46);
                goto LABEL_0x45f82f;
            } else {
                v16 = v46;
                v17 = v52;
                v18 = v64;
                v14 = 0;
            }
        }
    }
    v21 = v61;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v47, &v38, _ZN7uu_shuf7options10HEAD_COUNT17hc89376d679544dccE.field_0, g_4fa028.field_0);
    v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options10HEAD_COUNT17hc89376d679544dccE.field_0, g_4fa028.field_0, &v47);
    v46 = struct64 {
        field_0: v3
        field_8: v6
        field_16: v56
        field_32: v12
        field_48: v75
        field_56: v74
    };
    v76 = core::iter::traits::iterator::Iterator::reduce(&v46);
    v46 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v38, _ZN7uu_shuf7options6OUTPUT17hffb8654906b4b6f3E.field_0, g_4fa038.field_0);
    v78 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options6OUTPUT17hffb8654906b4b6f3E.field_0, g_4fa038.field_0, &v46);
    if v78 {
        v50 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v78 + 8) as &i64), *((v78 + 16) as &i64));
        v37 = v53;
        v43 = v50.field_16;
    }
    v46 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v38, _ZN7uu_shuf7options13RANDOM_SOURCE17h53a9ecde3a1f65d4E.field_0, g_4fa048.field_0);
    v80 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_shuf7options13RANDOM_SOURCE17h53a9ecde3a1f65d4E.field_0, g_4fa048.field_0, &v46);
    if v80 {
        v51 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v80 + 8) as &i64), *((v80 + 16) as &i64));
        v36 = v53;
    }
    v82 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v38, _ZN7uu_shuf7options6REPEAT17h176627c809f00ff4E.field_0, g_4fa058.field_0);
    v83 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v38, _ZN7uu_shuf7options15ZERO_TERMINATED17h959e083b84248a6cE.field_0, g_4fa068.field_0) ? 0 : 10);
    v29 = -((v76 & 1) < 1) | v84;
    v22 = v79;
    v24 = v37;
    v25 = v43;
    v26 = v81;
    v27 = v36;
    v28 = v77;
    v30 = v82;
    v31 = v83;
    if v79 == 0x8000000000000000 {
        alloc::boxed::Box<T>::new(std::io::stdio::stdout());
    } else {
        v85 = v21;
        v1 = std::fs::File::create(&v22);
        v34 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, v24, v25);
        if let Ok(_) = v34 {
            goto LABEL_45f7f1;
        }
        alloc::boxed::Box<T>::new(v35 & 4294967295);
    }
    v46 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v86, v87);
    if v29 {
        if v26 == 0x8000000000000000 {
            v32 = struct16 {
                field_0: 1
                padding_4: <UNKNOWN>
                field_8: rand::rngs::thread::rng()
            };
            if !v85 {
                goto LABEL_45f720;
            }
            goto LABEL_45f5e1;
        } else {
            v2 = std::fs::File::open(&v26);
            v34 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, v27, v28);
            if !v34.field_0 {
                v32 = struct8 {
                    field_0: 0
                    field_4: v35 as u32
                };
                if v85 {
LABEL_45f5e1:
                    if v85 == 1 {
                        core::iter::traits::iterator::Iterator::collect(&v5, v17, v17 + v18 * 24);
                        uu_shuf::shuf_exec(&v5, &v22, &v33, &v46);
                        if !v6 {
                            return 0;
                        }
                    } else {
                        v0 = v15;
                        uu_shuf::shuf_exec(&v0, &v22, &v33, &v46);
                        if !v6 {
                            return 0;
                        }
                    }
                } else {
LABEL_45f720:
                    v0 = uu_shuf::read_input_file(v17, v18);
                    if let Ok(_) = v0 {
                        v0 = uu_shuf::split_seps(v6, v8);
                        v89 = uu_shuf::shuf_exec(&v0, &v22 as u8, &v33, &v46);
                        if !v89 {
                            core::mem::drop(v16, v17);
                            return 0;
                        }
                        v6 = v89;
                    }
                    core::mem::drop(v16, v17);
                    v85 = v21;
                }
            }
        }
    }
LABEL_45f7f1:
    if v85 == 2 || v85 == 1 || !v88 {
        return v6;
    }
    core::mem::drop(v16, v17);
    return v6;
}
