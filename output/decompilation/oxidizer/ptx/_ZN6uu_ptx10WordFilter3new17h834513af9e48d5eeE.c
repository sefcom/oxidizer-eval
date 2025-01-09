fn uu_ptx::WordFilter::new(a0: &Result<struct122, struct16>, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x188], Other Possible Types: struct48, struct24, Result<struct40, struct8>, struct40, struct16
    let v1: i64;  // [sp-0x180]
    let v2: i64;  // [sp-0x178]
    let v3: i64;  // [sp-0x170]
    let v4: i64;  // [bp-0x168]
    let v6: i512;  // [sp-0x148], Other Possible Types: Result<struct48, struct16>, struct48, struct64
    let v7: i128;  // [bp-0x138]
    let v8: i128;  // [bp-0x128]
    let v9: i64;  // [sp-0x120]
    let v10: i128;  // [bp-0x108], Other Possible Types: Result<struct48, struct16>, struct24
    let v11: i64;  // [sp-0xf8]
    let v12: i128;  // [sp-0xd8]
    let v13: i64;  // [bp-0xc8], Other Possible Types: struct48
    let v14: i64;  // [sp-0x98]
    let v15: i64;  // [sp-0x90]
    let v16: i64;  // [sp-0x88]
    let v17: i128;  // [sp-0x80]
    let v18: i64;  // [sp-0x70]
    let v19: i64;  // [sp-0x68]
    let v20: i64;  // [sp-0x60]
    let v21: i64;  // [sp-0x58]
    let v22: i128;  // [sp-0x50]
    let v23: i64;  // [sp-0x40]
    let v24: i64;  // [sp-0x38]
    let v25: i64;  // [sp-0x30]
    let v27: i8;  // al
    let v28: i64;  // rcx
    let v29: i64;  // rax
    let v30: i64;  // rdx
    let v31: i8;  // al
    let v32: i64;  // rcx
    let v33: i64;  // rax
    let v34: i64;  // rdx
    let v37: i64;  // rdx
    let v38: i128;  // xmm0
    let v39: i128;  // xmm1
    let v44: i64;  // rax
    let v50: i128;  // xmm0
    let v51: i128;  // xmm1
    let v52: i128;  // xmm1
    let v53: i128;  // xmm2

    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "only-file") as i8;
    if !v27 {
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
        v10 = *((&v0 as &char + 24) as &i128);
        v11 = *((&v0 as &char + 40) as &i64);
    } else {
        uu_ptx::read_word_filter_file();
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v28 = v6;
        v29 = *((&v6 as &char + 8) as &i64);
        v30 = *((&v6 as &char + 16) as &i64);
        if !v28 {
            return Err(struct16 {
                field_0: v29
                field_8: v30
            });
        }
        v11 = v9;
        v10 = *((&v6 as &char + 24) as &i128);
    }
    v14 = v28;
    v15 = v29;
    v16 = v30;
    v17 = v10;
    v18 = v11;
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "ignore-file") as i8;
    if !v31 {
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
        v10 = *((&v0 as &char + 24) as &i128);
        v11 = *((&v0 as &char + 40) as &i64);
    } else {
        uu_ptx::read_word_filter_file();
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v32 = v6;
        v33 = *((&v6 as &char + 8) as &i64);
        v34 = *((&v6 as &char + 16) as &i64);
        if !v32 {
            return Err(struct16 {
                field_0: v33
                field_8: v34
            });
        }
        v11 = v9;
        v10 = *((&v6 as &char + 24) as &i128);
    }
    v19 = v32;
    v20 = v33;
    v21 = v34;
    v22 = v10;
    v23 = v11;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "break-file") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "word-regexp") as i8 {
        v13 = 0;
    } else {
        v0 = uu_ptx::read_char_filter_file(a1);
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v10 = v6;
        if !*((v37 + 88) as &i8) {
            v6 = <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter();
        } else {
            v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
            v38 = v0;
            v39 = *((&v0 as &char + 16) as &i128);
            v8 = *((&v0 as &char + 32) as &i128);
            v7 = v39;
            v6 = v38;
        }
        *(&v0.field_0 as &struct48) = struct48 {
            field_0: v40
            field_16: v41
            field_32: *((&v10 as &char + 32) as &i128)
        };
        <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v6, &v0);
        v13 = v6;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "word-regexp") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "word-regexp");
        v44 = clap_builder::parser::error::MatchesError::unwrap("word-regexp", &v0);
        if v44 && *((v44 + 16) as &i64) {
            v0 = <alloc::string::String as core::clone::Clone>::clone(v44);
            goto LABEL_5b5f3b;
        }
    }
    if v6 {
        v6 = struct64 {
            field_0: v45
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
        };
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
        v6 = v0;
        v10 = <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v6);
        v24 = &v10;
        v25 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = "[^";
        v1 = 2;
        v4 = 0;
        v2 = &v24;
        v3 = 1;
        core::option::Option<T>::map_or_else();
        v12 = *((&v6 as &char + 8) as &i128);
        v6 = v6;
    } else {
        if !*((v37 + 88) as &i8) {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("[^ \t\n]+");
        } else {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("\\w+");
        }
LABEL_5b5f3b:
        v12 = *((&v0 as &char + 8) as &i128);
        v6 = v0;
    }
    v50 = v14;
    v51 = v16;
    *((a0 + 56) as &i128) = *((&v17 as &char + 8) as &i128);
    *((a0 + 40) as &i128) = v51;
    *((a0 + 24) as &i128) = v50;
    v52 = v21;
    v53 = *((&v22 as &char + 8) as &i128);
    *((a0 + 72) as &i64) = v19;
    *((a0 + 88) as &i128) = v52;
    *((a0 + 104) as &i128) = v53;
    *(a0 as &i64) = v6;
    *((a0 + 8) as &i128) = v12;
    *((a0 + 120) as &i8) = v27;
    *((a0 + 121) as &i8) = v31;
}
