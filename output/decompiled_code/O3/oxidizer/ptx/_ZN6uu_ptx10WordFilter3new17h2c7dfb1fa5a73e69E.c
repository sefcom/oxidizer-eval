fn uu_ptx::WordFilter::new(a0: void*, a1: u32, a2: void*) -> u64 {
    let v0: i64;  // [sp-0x188], Other Possible Types: Result<struct40, struct16>, struct48, struct24, struct40
    let v1: i192;  // [sp-0x148], Other Possible Types: Result<struct48, struct24>, struct64, struct48
    let v2: i128;  // [bp-0x140]
    let v3: i128;  // [bp-0x138]
    let v4: i128;  // [bp-0x130]
    let v5: i128;  // [bp-0x128]
    let v6: i64;  // [sp-0x120]
    let v7: i128;  // [bp-0x108], Other Possible Types: struct24
    let v8: i64;  // [sp-0x100]
    let v9: i64;  // [sp-0xf8]
    let v10: i128;  // [sp-0xf0]
    let v11: i64;  // [sp-0xe0]
    let v12: i128;  // [sp-0xd8]
    let v13: i128;  // [bp-0xc8]
    let v14: i128;  // [sp-0xb8]
    let v15: i128;  // [sp-0xa8]
    let v16: i64;  // [sp-0x98]
    let v17: i64;  // [sp-0x90]
    let v18: i64;  // [sp-0x88]
    let v19: i128;  // [sp-0x80]
    let v20: i64;  // [sp-0x70]
    let v21: i64;  // [sp-0x68]
    let v22: i64;  // [sp-0x60]
    let v23: i64;  // [sp-0x58]
    let v24: i128;  // [sp-0x50]
    let v25: i64;  // [sp-0x40]
    let v27: i8;  // al
    let v28: i64;  // rsi
    let v29: i64;  // rdx
    let v30: i64;  // rcx
    let v31: i64;  // rax
    let v32: i64;  // rdx
    let v33: i8;  // al
    let v34: i64;  // rcx
    let v35: i64;  // rax
    let v36: i64;  // rdx
    let v39: i64;  // rsi
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v44: i128;  // xmm1
    let v45: i128;  // xmm2
    let v46: i64;  // rax
    let v47: i64;  // rax
    let v48: i128;  // xmm0
    let v51: i128;  // xmm0
    let v52: i128;  // xmm1
    let v53: i128;  // xmm1
    let v54: i128;  // xmm2

    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "only-file") as i8;
    if !v27 {
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v28, v29);
        v7 = *((&v0 as &char + 24) as &i128);
        v9 = *((&v0 as &char + 40) as &i64);
    } else {
        v0 = uu_ptx::read_word_filter_file(a1, "only-file");
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v30 = v1;
        v31 = *((&v1 as &char + 8) as &i64);
        v32 = *((&v1 as &char + 16) as &i64);
        if !v30 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v31
                field_16: v32
            };
        }
        v9 = v6;
        v7 = *((&v1 as &char + 24) as &i128);
    }
    v16 = v30;
    v17 = v31;
    v18 = v32;
    v19 = v7;
    v20 = v9;
    v33 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "ignore-file") as i8;
    if !v33 {
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v28, v29);
        v7 = *((&v0 as &char + 24) as &i128);
        v9 = *((&v0 as &char + 40) as &i64);
    } else {
        v0 = uu_ptx::read_word_filter_file(a1, "ignore-file");
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v34 = v1;
        v35 = *((&v1 as &char + 8) as &i64);
        v36 = *((&v1 as &char + 16) as &i64);
        if !v34 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v35
                field_16: v36
            };
        }
        v9 = v6;
        v7 = *((&v1 as &char + 24) as &i128);
    }
    v21 = v34;
    v22 = v35;
    v23 = v36;
    v24 = v7;
    v25 = v9;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "break-file") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "word-regexp") as i8 {
        v13 = 0;
    } else {
        v0 = uu_ptx::read_char_filter_file(a1);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        if !v7 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v31
                field_16: v32
            };
        }
        v39 = v6;
        v11 = v6;
        v10 = *((&v1 as &char + 24) as &i128);
        v7 = v1;
        v8 = *((&v1 as &char + 8) as &i64);
        v9 = *((&v1 as &char + 16) as &i64);
        if !*((a2 + 88) as &i8) {
            v1 = <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(v39, v7);
        } else {
            v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v39, v7);
            v40 = v0;
            v41 = *((&v0 as &char + 16) as &i128);
            v5 = *((&v0 as &char + 32) as &i128);
            v3 = v41;
            v1 = v40;
        }
        *(&v0.field_0 as &struct48) = struct48 {
            field_0: v42
            field_16: v43
            field_32: *((&v10 as &char + 8) as &i128)
        };
        <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v1, &v0);
        v44 = *((&v1 as &char + 16) as &i128);
        v45 = *((&v1 as &char + 32) as &i128);
        v13 = v1;
        v14 = v44;
        v15 = v45;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "word-regexp") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "word-regexp");
        v46 = clap_builder::parser::error::MatchesError::unwrap("word-regexp", &v0);
        if v46 && *((v46 + 16) as &i64) {
            v0 = <alloc::string::String as core::clone::Clone>::clone(v46);
            vvar_600{stack -216} = *((&v0 as &char + 8) as &i128);
            vvar_601{stack -392} = v0;
            vvar_605{reg 224} = v16;
            vvar_606{reg 256} = v18;
            vvar_607{reg 256} = v23;
            vvar_608{reg 288} = *((&v24 as &char + 8) as &i128);
            return struct122 {
                field_0: v0
                field_8: v12
                field_24: v51
                field_40: v52
                field_56: *((&v19 as &char + 8) as &i128)
                field_72: v21
                field_88: v53
                field_104: v54
                field_120: v27
                field_121: v33
            };
        }
    }
    v47 = v13;
    if v1 {
        v1.40 = (stack_base)[160] as i64;
        v48 = *((&v13 as &char + 8) as &i128);
        v4 = *((&v14 as &char + 8) as &i128);
        v2 = v48;
        v1 = v47;
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
        v1 = struct64 {
            field_0: v0
            field_16: v43
            field_32: v49
            field_48: v50
        };
        v7 = <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v1, v29);
        v1 = format!("[^{:?}]+", &v7);
        v12 = *((&v1 as &char + 8) as &i128);
        v0 = v1;
        vvar_590{reg 224} = v16;
        vvar_591{reg 256} = v18;
        vvar_592{reg 256} = v23;
        vvar_593{reg 288} = *((&v24 as &char + 8) as &i128);
        return struct122 {
            field_0: v0
            field_8: v12
            field_24: v51
            field_40: v52
            field_56: *((&v19 as &char + 8) as &i128)
            field_72: v21
            field_88: v53
            field_104: v54
            field_120: v27
            field_121: v33
        };
    }
    if !*((a2 + 88) as &i8) {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_45ecd8, 7);
    } else {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("\\w+");
    }
    v12 = *((&v0 as &char + 8) as &i128);
    v0 = v0;
    v51 = v16;
    v52 = v18;
    v53 = v23;
    v54 = *((&v24 as &char + 8) as &i128);
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v31
        field_16: v32
    };
}
