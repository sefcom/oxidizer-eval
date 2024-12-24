fn uu_ptx::WordFilter::new(a0: void*, a1: u32, a2: void*) -> u64 {
    let v0: i384;  // [sp-0x188], Other Possible Types: struct48, Result<struct48, struct16>, struct24, struct40
    let v1: i384;  // [sp-0x148], Other Possible Types: Result<struct48, struct24>, struct48
    let v2: i128;  // [bp-0x140]
    let v3: i128;  // [bp-0x138]
    let v4: i128;  // [bp-0x130]
    let v5: i128;  // [bp-0x128]
    let v6: i64;  // [sp-0x120]
    let v7: i128;  // [bp-0x108], Other Possible Types: struct24
    let v9: i64;  // [sp-0xf8]
    let v10: i128;  // [sp-0xd8]
    let v11: i384;  // [bp-0xc8]
    let v12: i64;  // [sp-0x98]
    let v13: i64;  // [sp-0x90]
    let v14: i64;  // [sp-0x88]
    let v15: i128;  // [sp-0x80]
    let v16: i64;  // [sp-0x70]
    let v17: i64;  // [sp-0x68]
    let v18: i64;  // [sp-0x60]
    let v19: i64;  // [sp-0x58]
    let v20: i128;  // [sp-0x50]
    let v21: i64;  // [sp-0x40]
    let v23: i8;  // al
    let v24: i64;  // rsi
    let v25: i64;  // rdx
    let v26: i64;  // rcx
    let v27: i64;  // rax
    let v28: i64;  // rdx
    let v29: i8;  // al
    let v30: i64;  // rcx
    let v31: i64;  // rax
    let v32: i64;  // rdx
    let v33: i64;  // rsi
    let v34: i128;  // xmm0
    let v35: i128;  // xmm1
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i128;  // xmm1
    let v43: i128;  // xmm1
    let v44: i128;  // xmm2

    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "only-file") as i8;
    if !v23 {
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v24, v25);
        v7 = *((&v0 as &char + 24) as &i128);
        v9 = *((&v0 as &char + 40) as &i64);
    } else {
        v0 = uu_ptx::read_word_filter_file(a1, "only-file");
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v26 = v1;
        v27 = *((&v1 as &char + 8) as &i64);
        v28 = *((&v1 as &char + 16) as &i64);
        if !v26 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v27
                field_16: v28
            };
        }
        v9 = v6;
        v7 = *((&v1 as &char + 24) as &i128);
    }
    v12 = v26;
    v13 = v27;
    v14 = v28;
    v15 = v7;
    v16 = v9;
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "ignore-file") as i8;
    if !v29 {
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v24, v25);
        v7 = *((&v0 as &char + 24) as &i128);
        v9 = *((&v0 as &char + 40) as &i64);
    } else {
        v0 = uu_ptx::read_word_filter_file(a1, "ignore-file");
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
    v17 = v30;
    v18 = v31;
    v19 = v32;
    v20 = v7;
    v21 = v9;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "break-file") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "word-regexp") as i8 {
        v11 = 0;
    } else {
        v0 = uu_ptx::read_char_filter_file(a1);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        if !v7 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v27
                field_16: v28
            };
        }
        v33 = v6;
        v7 = v1;
        if !*((a2 + 88) as &i8) {
            v1 = <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(v33, v7);
        } else {
            v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v33, v7);
            v34 = v0;
            v35 = *((&v0 as &char + 16) as &i128);
            v5 = *((&v0 as &char + 32) as &i128);
            v3 = v35;
            v1 = v34;
        }
        *(&v0.field_0 as &struct48) = struct48 {
            field_0: v36
            field_16: v37
            field_32: *((&v7 as &char + 32) as &i128)
        };
        <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v1, &v0);
        v11 = v1;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "word-regexp") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "word-regexp");
        v38 = clap_builder::parser::error::MatchesError::unwrap("word-regexp", &v0);
        if v38 && *((v38 + 16) as &i64) {
            v0 = <alloc::string::String as core::clone::Clone>::clone(v38);
            vvar_600{stack -216} = *((&v0 as &char + 8) as &i128);
            vvar_601{stack -392} = v0;
            vvar_605{reg 224} = v12;
            vvar_606{reg 256} = v14;
            vvar_607{reg 256} = v19;
            vvar_608{reg 288} = *((&v20 as &char + 8) as &i128);
            return struct122 {
                field_0: v0
                field_8: v10
                field_24: v41
                field_40: v42
                field_56: *((&v15 as &char + 8) as &i128)
                field_72: v17
                field_88: v43
                field_104: v44
                field_120: v23
                field_121: v29
            };
        }
    }
    v39 = v11;
    if v1 {
        v1.40 = (stack_base)[160] as i64;
        v40 = *((&v11 as &char + 8) as &i128);
        v4 = *((&v11 as &char + 24) as &i128);
        v2 = v40;
        v1 = v39;
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
        v1 = v0;
        v7 = <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v1, v25);
        v1 = format!("[^{:?}]+", &v7);
        v10 = *((&v1 as &char + 8) as &i128);
        v0 = v1;
        vvar_590{reg 224} = v12;
        vvar_591{reg 256} = v14;
        vvar_592{reg 256} = v19;
        vvar_593{reg 288} = *((&v20 as &char + 8) as &i128);
        return struct122 {
            field_0: v0
            field_8: v10
            field_24: v41
            field_40: v42
            field_56: *((&v15 as &char + 8) as &i128)
            field_72: v17
            field_88: v43
            field_104: v44
            field_120: v23
            field_121: v29
        };
    }
    if !*((a2 + 88) as &i8) {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_45ecd8, 7);
    } else {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("\\w+");
    }
    v10 = *((&v0 as &char + 8) as &i128);
    v0 = v0;
    v41 = v12;
    v42 = v14;
    v43 = v19;
    v44 = *((&v20 as &char + 8) as &i128);
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v27
        field_16: v28
    };
}
