fn uu_truncate::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x660]
    let v1: i64;  // [sp-0x658]
    let v2: i64;  // [sp-0x650]
    let v3: i192;  // [sp-0x648], Other Possible Types: Result<struct56, struct16>, struct24
    let v4: i64;  // [sp-0x610]
    let v5: i32;  // [sp-0x608]
    let v6: i128;  // [sp-0x604]
    let v7: i128;  // [bp-0x5f4]
    let v8: i128;  // [sp-0x5e8]
    let v9: i128;  // [sp-0x5d8]
    let v10: i64;  // [sp-0x5c8], Other Possible Types: struct24, Result<struct40, struct16>, struct712, struct56
    let v11: i128;  // [bp-0x5c0]
    let v12: i192;  // [sp-0x2f8], Other Possible Types: struct24, struct64, struct712
    let v15: i64;  // r8
    let v16: i64;  // r9
    let v17: i64;  // rax
    let v18: i32;  // ecx
    let v19: i64;  // rax
    let v20: i64;  // rdx
    let v21: i64;  // rax
    let v22: i32;  // eax
    let v23: i32;  // eax
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // r13

    v10 = uu_truncate::uu_app(a1, a2);
    v12 = clap_builder::builder::command::Command::after_help(&v10, &g_413c9f, 638);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v12, a0, a1, v15, v16);
    v17 = v3;
    match v3 {
        Err(_) => {
            v19 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(uu_truncate::uumain::uumain::{{closure}}(*((&v3 as &char + 8) as &i64)) as i32 as u32 as u64);
            return v19;
        },
        Ok(_) => {
            v18 = *((&v3 as &char + 8) as &i32);
            v6 = *((&v3 as &char + 12) as &i128);
            v7 = *((&v3 as &char + 28) as &i128);
            v8 = *((&v3 as &char + 40) as &i128);
            v4 = v17;
            v5 = v18;
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, _ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E, g_516900);
            v12 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E, g_516900, &v10);
            if !v12 {
                v0 = 0;
                v1 = 8;
                v2 = 0;
                goto LABEL_46566a;
            } else {
                v10 = v12;
                v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v10, v20);
                v21 = v3;
                v1 = *((&v3 as &char + 8) as &i128);
                v0 = v21;
                if !v2 {
LABEL_46566a:
                    v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v10 = v12;
                    v19 = alloc::boxed::Box<T>::new(&v10);
                } else {
                    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN11uu_truncate7options9IO_BLOCKS17ha2b1febcfcfbcee0E, g_5168c0) as i32;
                    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN11uu_truncate7options9NO_CREATE17hb6d5a1980fdf49e5E, g_5168d0) as i32;
                    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, _ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE, g_5168e0);
                    v24 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE, g_5168e0, &v10);
                    if !v24 {
                        v3 = 0x8000000000000000;
                    } else {
                        v10 = core::ops::function::FnOnce::call_once(v24);
                        v3 = v10;
                    }
                    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, _ZN11uu_truncate7options4SIZE17h8592621bba85a515E, g_5168f0);
                    v25 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options4SIZE17h8592621bba85a515E, g_5168f0, &v10);
                    v26 = 0x8000000000000000;
                    if v25 {
                        v10 = core::ops::function::FnOnce::call_once(v25);
                        v9 = *((&v10 as &char + 8) as &i128);
                        v26 = v10;
                    }
                    v12 = v3;
                    v10 = v26;
                    v11 = v9;
                    v19 = uu_truncate::truncate(v23 as u32 as u64, v22 as u32 as u64, &v12, &v10, v1, v2);
                }
            }
            return v19;
        },
    }
}
