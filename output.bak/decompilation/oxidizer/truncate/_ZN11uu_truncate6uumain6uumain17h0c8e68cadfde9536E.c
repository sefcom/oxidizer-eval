fn uu_truncate::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x660]
    let v1: i128;  // [sp-0x658]
    let v2: i64;  // [sp-0x650]
    let v3: i456;  // [sp-0x648], Other Possible Types: struct24, Result<struct56, struct8>
    let v4: i64;  // [sp-0x638]
    let v5: struct44;  // [sp-0x610]
    let v6: i128;  // [sp-0x5e8]
    let v7: i128;  // [sp-0x5d8]
    let v8: i328;  // [sp-0x5c8], Other Possible Types: Result<struct40, struct8>, struct24, struct56, struct64, struct712, struct28
    let v9: i64;  // [sp-0x5b8]
    let v10: struct24;  // [sp-0x2f8], Other Possible Types: i5696, struct64, struct712
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i32;  // eax
    let v18: i32;  // eax

    v8 = uu_truncate::uu_app();
    v10 = clap_builder::builder::command::Command::after_help(&v8, &g_413c9f, 638);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v10, a0, a1);
    match v3 {
        Err(_) => {
            uu_truncate::uumain::uumain::{{closure}}(*((&v3 as &char + 8) as &i64));
            v15 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
            return v15;
        },
        Ok(_) => {
            v6 = *((&v3 as &char + 40) as &i128);
            v5 = struct44 {
                field_0: v13
                field_8: v14
                field_12: *((&v3 as &char + 12) as &i128)
                field_28: *((&v3 as &char + 28) as &i128)
            };
            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E, g_516900);
            v10 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E, g_516900, &v8);
            if !v10 {
                v0 = 0;
                v1 = 8;
                v2 = 0;
                goto LABEL_46566a;
            } else {
                v8 = struct64 {
                    field_0: v10
                    field_16: *((&v10 as &char + 16) as &i128)
                    field_32: *((&v10 as &char + 32) as &i128)
                    field_48: *((&v10 as &char + 48) as &i128)
                };
                v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v8);
                v16 = v3;
                v1 = *((&v3 as &char + 8) as &i128);
                v0 = v16;
                if !v2 {
LABEL_46566a:
                    v10 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v8 = struct28 {
                        field_0: v10
                        field_16: v11
                        field_24: 1
                    };
                    v15 = alloc::boxed::Box<T>::new(&v8);
                } else {
                    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN11uu_truncate7options9IO_BLOCKS17ha2b1febcfcfbcee0E, g_5168c0) as i32;
                    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN11uu_truncate7options9NO_CREATE17hb6d5a1980fdf49e5E, g_5168d0) as i32;
                    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE, g_5168e0);
                    if !clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE, g_5168e0, &v8) {
                        v3 = 0x8000000000000000;
                    } else {
                        core::ops::function::FnOnce::call_once();
                        v4 = v9;
                        v3 = v8;
                    }
                    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN11uu_truncate7options4SIZE17h8592621bba85a515E, g_5168f0);
                    if clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options4SIZE17h8592621bba85a515E, g_5168f0, &v8) {
                        core::ops::function::FnOnce::call_once();
                        v7 = *((&v8 as &char + 8) as &i128);
                    }
                    *(&v10.field_0 as &struct24) = struct24 {
                        field_0: v3
                        field_16: v4
                    };
                    *(&v8.field_0 as &struct24) = struct24 {
                        field_0: v19
                        field_8: v7
                    };
                    v15 = uu_truncate::truncate(v18 as u32 as u64, v17 as u32 as u64, &v10, &v8, v1, v2);
                }
            }
            return v15;
        },
    }
}
