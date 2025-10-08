fn uu_chcon::parse_command_line(a0: i64, a1: u64, a2: u64) -> int {
    let v0: u8;  // [bp-0x23d]
    let v1: u32;  // [bp-0x23c]
    let v2: struct16;  // [bp-0x238], Other Possible Types: u128
    let v3: struct56;  // [bp-0x238], Other Possible Types: Result<struct40, struct16>
    let v4: struct24;  // [bp-0x238]
    let v5: struct24;  // [bp-0x238]
    let v7: struct24;  // [bp-0x238]
    let v8: struct24;  // [bp-0x238]
    let v9: struct24;  // [bp-0x238]
    let v10: Result<struct40, struct16>;  // [bp-0x238]
    let v11: struct24;  // [bp-0x238]
    let v12: u128;  // [bp-0x234]
    let v13: i8;  // [bp-0x228], Other Possible Types: u64
    let v14: u64;  // [bp-0x224]
    let v15: iNone;  // [bp-0x220], Other Possible Types: u64
    let v16: i8;  // [bp-0x218]
    let v17: u128;  // [bp-0x210]
    let v18: u64;  // [bp-0x208]
    let v19: iNone;  // [bp-0x200]
    let v20: u128;  // [bp-0x1f0]
    let v21: u128;  // [bp-0x1e0]
    let v22: iNone;  // [bp-0x1d0]
    let v23: u64;  // [bp-0x1c8]
    let v24: u64;  // [bp-0x1c0]
    let v25: u64;  // [bp-0x1b8]
    let v26: iNone;  // [bp-0x1b0]
    let v27: iNone;  // [bp-0x1a0]
    let v28: u64;  // [bp-0x190]
    let v29: u128;  // [bp-0x188]
    let v31: struct24;  // [bp-0x188]
    let v32: u64;  // [bp-0x178]
    let v33: u64;  // [bp-0x178]
    let v34: iNone;  // [bp-0x168], Other Possible Types: struct64
    let v35: u64;  // [bp-0x168]
    let v36: iNone;  // [bp-0x160], Other Possible Types: u128
    let v37: u64;  // [bp-0x158]
    let v38: iNone;  // [bp-0x150]
    let v39: u64;  // [bp-0x140]
    let v40: u128;  // [bp-0x138]
    let v41: u64;  // [bp-0x128]
    let v42: u64;  // [bp-0x120]
    let v43: iNone;  // [bp-0x118]
    let v44: iNone;  // [bp-0x108]
    let v46: u64;  // [bp-0xf8]
    let v47: iNone;  // [bp-0xe8]
    let v49: u64;  // [bp-0xd8]
    let v50: iNone;  // [bp-0xc8]
    let v53: u128;  // [bp-0xb8]
    let v55: iNone;  // [bp-0xa8]
    let v57: u128;  // [bp-0x98]
    let v59: iNone;  // [bp-0x88]
    let v60: alloc::string::String;  // [bp-0x78]
    let v61: u64;  // [bp-0x68]
    let v62: alloc::string::String;  // [bp-0x60]
    let v63: u64;  // [bp-0x50]
    let v64: alloc::string::String;  // [bp-0x48]
    let v66: u64;  // rcx
    let v68: u64;  // rax
    let v69: u8;  // r14b
    let v74: u8;  // al
    let v75: iNone;  // xmm0
    let v76: u128;  // xmm1
    let v77: iNone;  // xmm2
    let v78: i64;  // rax
    let v79: u64;  // rax
    let v80: i64;  // rax
    let v81: i64;  // rax
    let v82: i64;  // rax
    let v83: i64;  // rax
    let v84: i64;  // rax
    let v85: u64;  // rcx
    let v86: iNone;  // xmm0
    let v87: u128;  // xmm1
    let v88: iNone;  // xmm2
    let v91: u64;  // [bp-0x150]

    v2 = clap_builder::builder::command::Command::try_get_matches_from(a1, a2, v66);
    if (((0 ^ v2.field_0) & (0 ^ -(v2.field_0))) >> 63) as char {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: 14
            field_16: v25
        };
    }
    v28 = v18;
    v27 = *(&v16 as &i128);
    v26 = *(&v13 as &i128);
    v24 = v2.field_0;
    v25 = v2.field_8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN8uu_chcon7options7VERBOSE17hdb57e67b80c894f3E.field_0, g_4f0360.field_0);
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN8uu_chcon7options9RECURSIVE17h433a04139793bdf7E.field_0, g_4f03c0.field_0) {
        v69 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E.field_0, g_4f0400.field_0) ^ 1;
        v1 = 0;
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN8uu_chcon7options9sym_links20FOLLOW_DIR_SYM_LINKS17h95a2c6febd631cb3E.field_0, g_4f03e0.field_0) {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E.field_0, g_4f0400.field_0) {
            v60 = format!("'--{}' with '--{}' require '-P'", "recursive", "no-dereference");
            v12 = *(&v60.vec.buf.inner.cap as &i128);
            v68 = v61;
            v14 = v68;
            return struct48 {
                field_0: 0x8000000000000000
                field_8: 13
                field_12: <UNKNOWN>
                field_24: v14
                field_32: <UNKNOWN>
            };
        }
    } else {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN8uu_chcon7options9sym_links23FOLLOW_ARG_DIR_SYM_LINK17h3f112273255ac430E.field_0, g_4f03d0.field_0) {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E.field_0, g_4f0400.field_0) {
                v62 = format!("'--{}' with '--{}' require '-P'", "recursive", "no-dereference");
                v12 = *(&v62.vec.buf.inner.cap as &i128);
                v68 = v63;
                v14 = v68;
                return struct48 {
                    field_0: 0x8000000000000000
                    field_8: 13
                    field_12: <UNKNOWN>
                    field_24: v14
                    field_32: <UNKNOWN>
                };
            }
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN8uu_chcon7options11dereference11DEREFERENCE17h91753ff18563b15fE.field_0, g_4f03f0.field_0) {
                v64 = format!("'--{}' with '--{}' require either '-H' or '-L'", "recursive", "dereference");
                v12 = *(&v64.vec.buf.inner.cap as &i128);
                v14 = v68;
                return struct48 {
                    field_0: 0x8000000000000000
                    field_8: 13
                    field_12: <UNKNOWN>
                    field_24: v14
                    field_32: <UNKNOWN>
                };
            }
        }
    }
    v74 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, _ZN8uu_chcon7options13preserve_root13PRESERVE_ROOT17hed149f8ad63239c9E.field_0, g_4f0410.field_0);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v24);
    v34 = clap_builder::parser::error::MatchesError::unwrap(&v3);
    if v34.field_0 as i64 {
        v75 = v34.field_0;
        v76 = v34.field_16;
        v77 = v34.field_32;
        v57 = v40;
        v55 = v77;
        v53 = v76;
        v50 = v75;
    }
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, _ZN8uu_chcon7options9REFERENCE17h0672fdda11d64845E.field_0, g_4f0370.field_0);
    v78 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_chcon7options9REFERENCE17h0672fdda11d64845E.field_0, g_4f0370.field_0, &v3);
    if v78 {
        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v78 + 8) as &i64), *((v78 + 16) as &i64));
        v91 = v4.field_16;
        v36 = *(&v4.field_0 as &i128);
        goto LABEL_45c807;
    } else {
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v24, _ZN8uu_chcon7options4USER17h4d0d2bc056c6cdccE.field_0, g_4f0380.field_0) || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v24, _ZN8uu_chcon7options4ROLE17h7d7e94c698023b65E.field_0, g_4f0390.field_0) || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v24, _ZN8uu_chcon7options4TYPE17hfd1961fc61e3d8d1E.field_0, g_4f03a0.field_0) || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v24, _ZN8uu_chcon7options5RANGE17hcdb017c1bd75f344E.field_0, g_4f03b0.field_0) {
            v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, _ZN8uu_chcon7options4USER17h4d0d2bc056c6cdccE.field_0, g_4f0380.field_0);
            v81 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_chcon7options4USER17h4d0d2bc056c6cdccE.field_0, g_4f0380.field_0, &v3);
            if v81 {
                v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v81 + 8) as &i64), *((v81 + 16) as &i64));
            }
            v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, _ZN8uu_chcon7options4ROLE17h7d7e94c698023b65E.field_0, g_4f0390.field_0);
            v82 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_chcon7options4ROLE17h7d7e94c698023b65E.field_0, g_4f0390.field_0, &v3);
            if v82 {
                v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v82 + 8) as &i64), *((v82 + 16) as &i64));
            }
            v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, _ZN8uu_chcon7options4TYPE17hfd1961fc61e3d8d1E.field_0, g_4f03a0.field_0);
            v83 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_chcon7options4TYPE17hfd1961fc61e3d8d1E.field_0, g_4f03a0.field_0, &v3);
            if v83 {
                v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v83 + 8) as &i64), *((v83 + 16) as &i64));
            }
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, _ZN8uu_chcon7options5RANGE17hcdb017c1bd75f344E.field_0, g_4f03b0.field_0);
            v84 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_chcon7options5RANGE17hcdb017c1bd75f344E.field_0, g_4f03b0.field_0, &v10);
            if v84 {
                v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v84 + 8) as &i64), *((v84 + 16) as &i64));
            }
            v37 = v46;
            v34 = v44;
            v38 = v47;
            v39 = v49;
            v40 = v29;
            v41 = v32;
            v42 = v85;
            v43 = v59;
        } else {
            v80 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v50 as u8);
            if !v80 {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: 10
                };
            }
            v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v80 + 8) as &i64), *((v80 + 16) as &i64));
            v91 = v5.field_16;
            *(&v36 as &i128) = *(&v5.field_0 as &i128);
LABEL_45c807:
            v35 = v79;
        }
        vvar_915{stack -392} = struct24 OrderedDict([(0, 𝜙@128b [((4573191, None), None), ((4574209, None), vvar_736{stack -392})]), (16, 𝜙@64b [((4573191, None), None), ((4574209, None), vvar_735{stack -376})])])
        core::iter::traits::iterator::Iterator::collect(&v31, &v50 as u8);
        if !v33 {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: 11
            };
        }
        v22 = v43;
        v21 = *(&v41 as &i128);
        v86 = v34 as i128;
        v87 = (&v36)[8] as i128;
        v88 = v34.field_32;
        v20 = v40;
        v19 = v88;
        v17 = v87;
        v15 = v86;
        v13 = v33;
        v2 = *(&v31.field_0 as &i128);
        return struct128 {
            field_0: *(&v31.field_0 as &i128)
            field_16: v13
            field_24: v15
            field_32: (&v15)[8] as i128
            field_48: *((&v17 as &char + 8) as &i128)
            field_64: (&v19)[8] as i128
            field_80: *((&v20 as &char + 8) as &i128)
            field_96: *((&v21 as &char + 8) as &i128)
            field_112: v23
            field_120: v0
            field_121: v74
            field_122: v69
            field_123: v1 as u8
        };
    }
}
