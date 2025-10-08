fn uu_ptx::WordFilter::new(a0: &struct122, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x1a0]
    let v1: struct48;  // [bp-0x198], Other Possible Types: u128
    let v2: Result<struct48, struct24>;  // [bp-0x198]
    let v3: Result<struct48, struct24>;  // [bp-0x198]
    let v4: Result<struct48, struct24>;  // [bp-0x198]
    let v5: struct48;  // [bp-0x198]
    let v6: struct16;  // [bp-0x198]
    let v7: struct24;  // [bp-0x198]
    let v8: u64;  // [bp-0x190]
    let v9: u64;  // [bp-0x190]
    let v10: u128;  // [bp-0x188]
    let v12: u128;  // [bp-0x178]
    let v13: Result<struct48, struct16>;  // [bp-0x160], Other Possible Types: u640
    let v14: struct40;  // [bp-0x160], Other Possible Types: struct48, u64
    let v15: struct24;  // [bp-0x160], Other Possible Types: struct48
    let v16: struct48;  // [bp-0x160]
    let v17: u64;  // [bp-0x160]
    let v18: struct24;  // [bp-0x160]
    let v19: u64;  // [bp-0x158]
    let v20: u64;  // [bp-0x158]
    let v21: u64;  // [bp-0x150]
    let v22: struct24;  // [bp-0x148]
    let v23: u64;  // [bp-0x138]
    let v24: i64;  // [bp-0x120]
    let v25: u128;  // [sp-0x118]
    let v26: u64;  // [bp-0x118]
    let v27: u64;  // [bp-0x110]
    let v28: u64;  // [bp-0x108]
    let v29: iNone;  // [bp-0x100]
    let v30: u64;  // [bp-0xf0]
    let v31: struct24;  // [bp-0xe8]
    let v32: iNone;  // [bp-0xe8]
    let v33: iNone;  // [bp-0xd8]
    let v34: u64;  // [bp-0xd8]
    let v35: Result<struct48, struct24>;  // [bp-0xc8]
    let v36: iNone;  // [bp-0xb8], Other Possible Types: struct24
    let v37: u64;  // [bp-0xa8]
    let v38: u64;  // [bp-0x98]
    let v39: struct48;  // [bp-0x90]
    let v40: struct24;  // [bp-0x88]
    let v41: u128;  // [bp-0x80]
    let v42: u64;  // [bp-0x70]
    let v43: iNone;  // [bp-0x58]
    let v44: alloc::string::String;  // [bp-0x48]
    let v46: i64;  // r15
    let v47: u8;  // al
    let v48: Result<struct40, struct16>;  // rcx
    let v49: struct48;  // rax
    let v50: struct24;  // rdx
    let v51: u8;  // al
    let v52: u64;  // rcx
    let v53: u64;  // rax
    let v54: u64;  // rdx
    let v55: u64;  // r13
    let v56: iNone;  // xmm0
    let v57: iNone;  // xmm1
    let v58: struct24;  // r13
    let v59: i64;  // rax
    let v60: u64;  // rax
    let v61: iNone;  // xmm0
    let v62: iNone;  // xmm0
    let v63: iNone;  // xmm1
    let v64: iNone;  // xmm1
    let v65: iNone;  // xmm2

    v46 = a2;
    v47 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "only-file");
    if v47 {
        v13 = uu_ptx::read_word_filter_file(a1, "only-file");
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v13);
        v48 = v2 as i64;
        v49 = v8;
        v50 = *((&v2 as &char + 16) as &i64);
        match v2 {
            Err(_) => {
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: v8
                    field_16: v50
                };
            },
            Ok(_) => {
                v28 = *((&v2 as &char + 40) as &i64);
                v25 = *((&v2 as &char + 24) as &i128) as u128;
            },
        }
    } else {
        v15 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
        v48 = v15.field_0 as i64;
        v49 = v20;
        v50 = v21;
        v25 = *((&v15.field_16 as &char + 8) as &i128);
        v28 = v23;
    }
    v38 = v48;
    v39 = v49;
    v40 = v50;
    v41 = v25;
    v42 = v28;
    v51 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "ignore-file");
    if v51 {
        v13 = uu_ptx::read_word_filter_file(a1, "ignore-file");
        v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v13);
        v52 = v3 as i64;
        v53 = v8;
        v54 = *((&v3 as &char + 16) as &i64);
        if let Err(_) = v3 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v8
                field_16: v54
            };
        }
    } else {
        v15 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
        v52 = v15.field_0;
        v53 = v20;
        v31 = v22;
    }
    v26 = v52;
    v27 = v53;
    v28 = v21;
    v29 = v32;
    v30 = v34;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "break-file") || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "word-regexp") {
        v58 = 0;
        v19 = v20;
    } else {
        v13 = uu_ptx::read_char_filter_file(a1);
        v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v13);
        v24 = a2;
        v55 = *((&v4 as &char + 16) as &i64);
        match v4 {
            Err(_) => {
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: v8
                    field_16: v55
                };
            },
            Ok(_) => {
                v0 = v8;
                v37 = *((&v4 as &char + 40) as &i64);
                v36 = *((&v4 as &char + 24) as &i128);
                if *((v24 + 88) as &i8) {
                    v16 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
                    v56 = v16.field_0;
                    v57 = v16.field_16;
                    v12 = v16.field_32;
                    *(&v10 as void*) = v57;
                    *(&v1 as void*) = v56;
                } else {
                    v5 = core::iter::traits::iterator::Iterator::collect();
                }
                vvar_698{stack -408} = struct16 OrderedDict([(0, 𝜙@64b [((5419407, None), vvar_500{stack -408}), ((5419708, None), vvar_500{stack -408})]), (8, 𝜙@64b [((5419407, None), vvar_501{stack -400}), ((5419708, None), vvar_501{stack -400})])])
                v14 = struct48 {
                    field_0: v6.field_0
                    field_8: v0
                    field_16: v55
                    field_24: v36
                    field_40: v37
                };
                <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v6, &v14);
                v58 = v6.field_0;
                v0 = v9;
                v32 = v5.field_16;
                v33 = v5.field_32;
                v46 = v24;
                v14 = v17;
            },
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "word-regexp") {
        v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "word-regexp");
        v59 = clap_builder::parser::error::MatchesError::unwrap("word-regexp", &v13);
        if v59 && *((v59 + 16) as &i64) {
            v15 = <alloc::string::String as core::clone::Clone>::clone(v59);
            v60 = v15.field_0;
            v43 = *(&v15.field_8 as &i128);
            if !((((0 ^ v15.field_0) & (0 ^ -(v14))) >> 63) as char) {
                v61 = v43;
                goto LABEL_52b227;
            }
        }
    }
    if v58 {
        v1 = struct48 {
            field_0: v58
            field_8: v0
            field_16: v32
            field_32: v33
        };
        v14 = <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
        v7 = core::iter::traits::iterator::Iterator::collect(&v14);
        v36 = regex::escape(v9, v7.field_16);
        v44 = format!("[^{}]+", &v36);
    } else {
        if *((v46 + 88) as &i8) {
            v18 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("\\w+");
        } else {
            v18 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("[^ \t\n]+");
        }
LABEL_52b227:
        v35 = v61;
    }
    v62 = *(&v38 as &i128);
    v63 = *(&v40.field_0 as &i128);
    v64 = *(&v28 as &i128);
    v65 = (&v29)[8] as i128;
    return struct128 {
        field_0: v60
        field_8: v35
        field_24: v62
        field_40: v63
        field_56: *((&v41 as &char + 8) as &i128)
        field_72: *((&v13 as &char + 72) as &i128)
        field_88: v64
        field_104: v65
        field_120: v47
        field_121: v51
    };
}
