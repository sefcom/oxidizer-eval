fn uu_ptx::WordFilter::new(a0: &Result<struct122, struct16>, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x188], Other Possible Types: struct48, Result<struct40, struct8>, struct40, struct16
    let v1: struct48;  // [sp-0x188], Other Possible Types: int, Result<struct48, struct8>
    let v2: struct24;  // [sp-0x188], Other Possible Types: int
    let v3: i64;  // [sp-0x180]
    let v4: i64;  // [sp-0x178]
    let v6: Result<struct48, struct16>;  // [sp-0x148], Other Possible Types: unsigned long, struct48, int, String
    let v7: iNone;  // [sp-0x148], Other Possible Types: struct48
    let v8: i64;  // [sp-0x120]
    let v9: struct24;  // [bp-0x108], Other Possible Types: Result<struct48, struct16>
    let v10: iNone;  // [bp-0x108]
    let v11: iNone;  // [bp-0x108]
    let v12: i64;  // [sp-0xf8]
    let v13: iNone;  // [sp-0xd8]
    let v14: Result<struct48, struct16>;  // [bp-0xc8], Other Possible Types: unsigned long
    let v15: i64;  // [sp-0x98]
    let v16: i64;  // [sp-0x90]
    let v17: i64;  // [sp-0x88]
    let v18: iNone;  // [sp-0x80]
    let v19: i64;  // [sp-0x70]
    let v20: i64;  // [sp-0x68]
    let v21: i64;  // [sp-0x60]
    let v22: i64;  // [sp-0x58]
    let v23: iNone;  // [sp-0x50]
    let v24: i64;  // [sp-0x40]
    let v26: i8;  // al
    let v27: i64;  // rcx
    let v28: i64;  // rax
    let v29: i64;  // rdx
    let v30: i8;  // al
    let v31: i64;  // rcx
    let v32: i64;  // rax
    let v33: i64;  // rdx
    let v36: i64;  // rdx
    let v37: iNone;  // xmm0
    let v38: iNone;  // xmm1
    let v43: i64;  // rax
    let v49: i64;  // rax
    let v50: iNone;  // xmm0
    let v51: iNone;  // xmm1
    let v52: iNone;  // xmm1
    let v53: iNone;  // xmm2

    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "only-file") as i8;
    if !v26 {
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
        v27 = v0;
        v28 = v3;
        v29 = v4;
        *(&v10 as &i128) = *((&v0.field_16 as &char + 8) as &i128);
        v12 = v0.field_40;
    } else {
        v0 = uu_ptx::read_word_filter_file(a1, "only-file");
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v27 = v6;
        v28 = *((&v6 as &char + 8) as &i64);
        v29 = *((&v6 as &char + 16) as &i64);
        if !v27 {
            return Err(struct16 {
                field_0: v28
                field_8: v29
            });
        }
        v12 = v8;
        *(&v10 as &i128) = *((&v6 as &char + 24) as &i128);
    }
    v15 = v27;
    v16 = v28;
    v17 = v29;
    v18 = v10 as i128;
    v19 = v12;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "ignore-file") as i8;
    if !v30 {
        v1 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
        v31 = v0;
        v32 = v3;
        v33 = v4;
        *(&v11 as &i128) = *((&v1.field_16 as &char + 8) as &i128);
        v12 = v1.field_40;
    } else {
        v1 = uu_ptx::read_word_filter_file(a1, "ignore-file");
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1);
        v31 = v6;
        v32 = *((&v6 as &char + 8) as &i64);
        v33 = *((&v6 as &char + 16) as &i64);
        if !v31 {
            return Err(struct16 {
                field_0: v32
                field_8: v33
            });
        }
        v12 = v8;
        *(&v11 as &i128) = *((&v6 as &char + 24) as &i128);
    }
    v20 = v31;
    v21 = v32;
    v22 = v33;
    v23 = v11 as i128;
    v24 = v12;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "break-file") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "word-regexp") as i8 {
        *(&v14 as &i64) = 0;
    } else {
        v0 = uu_ptx::read_char_filter_file(a1);
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v9 = v6;
        if !*((v36 + 88) as &i8) {
            v7 = <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter();
        } else {
            v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
            v37 = v0.field_0;
            v38 = v0.field_16;
            *(&v7 as &i128) = *(&v0.field_32 as &i128);
            v7 = v38;
            v7 = v37;
        }
        *(&v1.field_0 as &struct48) = struct48 {
            field_0: v39
            field_16: v40
            field_32: *((&v9 as &char + 32) as &i128)
        };
        <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v7, &v1);
        v14 = v6;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "word-regexp") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "word-regexp");
        v43 = clap_builder::parser::error::MatchesError::unwrap("word-regexp", &v0);
        if v43 && *((v43 + 16) as &i64) {
            v2 = <alloc::string::String as core::clone::Clone>::clone(v43);
            goto LABEL_5b5f3b;
        }
    }
    if v6 {
        *(&v6.field_0 as &struct48) = struct48 {
            field_0: v44
            field_8: v45
            field_24: *((&v14 as &char + 24) as &i128)
            field_40: *((&v14 as &char + 40) as &i64)
        };
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
        v6 = v1 as i512;
        v9 = <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v6);
        v6 = format!("[^{}]+", &v9);
        v49 = v6;
        v13 = *(&v6.cap as &i128);
    } else {
        if !*((v36 + 88) as &i8) {
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("[^ 	
]+");
        } else {
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("\w+");
        }
LABEL_5b5f3b:
        v49 = v0;
        v13 = (&v2)[8] as i128;
    }
    v50 = *(&v15 as &i128);
    v51 = *(&v17 as &i128);
    *((a0 + 56) as &i128) = (&v18)[8] as i128;
    *((a0 + 40) as void*) = v51;
    *((a0 + 24) as void*) = v50;
    v52 = *(&v22 as &i128);
    v53 = (&v23)[8] as i128;
    *((a0 + 72) as &i128) = *(&v20 as &i128);
    *((a0 + 88) as void*) = v52;
    *((a0 + 104) as void*) = v53;
    *(a0 as &unsigned long) = v49;
    *((a0 + 8) as void*) = v13;
    *((a0 + 120) as &char) = v26;
    *((a0 + 121) as &char) = v30;
}
