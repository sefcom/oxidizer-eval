fn uu_truncate::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x660]
    let v1: i64;  // [sp-0x658]
    let v2: i64;  // [sp-0x650]
    let v3: i128;  // [bp-0x648], Other Possible Types: struct24
    let v4: i8;  // [bp-0x640]
    let v6: i64;  // [sp-0x638]
    let v8: i8;  // [bp-0x620]
    let v9: i64;  // [sp-0x610], Other Possible Types: struct44
    let v10: i128;  // [sp-0x5e8]
    let v11: i128;  // [sp-0x5d8]
    let v12: i512;  // [sp-0x5c8], Other Possible Types: Result<struct40, struct8>, struct56, struct712, struct24, struct64
    let v13: i64;  // [sp-0x5b8]
    let v14: i5696;  // [sp-0x2f8], Other Possible Types: struct24, struct712, struct64
    let v19: i64;  // rax
    let v20: i64;  // rax
    let v21: i32;  // eax
    let v22: i32;  // eax
    let v24: i64;  // r13

    v12 = uu_truncate::uu_app();
    v14 = clap_builder::builder::command::Command::after_help(&v12, "SIZE is an integer with an optional prefix and optional unit.\nThe available units (K, M, G, T, P, E, Z, and Y) use the following format:\n    'KB' =>           1000 (kilobytes)\n    'K'  =>           1024 (kibibytes)\n    'MB' =>      1000*1000 (megabytes)\n    'M'  =>      1024*1024 (mebibytes)\n    'GB' => 1000*1000*1000 (gigabytes)\n    'G'  => 1024*1024*1024 (gibibytes)\nSIZE may also be prefixed by one of the following to adjust the size of each\nfile based on its current size:\n    '+'  => extend by\n    '-'  => reduce by\n    '<'  => at most\n    '>'  => at least\n    '/'  => round down to multiple of\n    '%'  => round up to multiple of");
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v14, a0, a1);
    if v9 == 0x8000000000000000 {
        uu_truncate::uumain::uumain::{{closure}}(v4);
        v19 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
        return v19;
    }
    v10 = v8;
    v9 = struct44 {
        field_0: v17
        field_8: v18
        field_12: v5
        field_28: v7
    };
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E, g_516900);
    v14 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E, g_516900, &v12);
    if !v14 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    } else {
        v12 = v14;
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v12);
        v20 = v3;
        v1 = *((&v3 as &char + 8) as &i128);
        v0 = v20;
        if v2 {
            v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_truncate7options9IO_BLOCKS17ha2b1febcfcfbcee0E, g_5168c0) as i32;
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_truncate7options9NO_CREATE17hb6d5a1980fdf49e5E, g_5168d0) as i32;
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, _ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE, g_5168e0);
            if !clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE, g_5168e0, &v12) {
                v3 = 0x8000000000000000;
            } else {
                core::ops::function::FnOnce::call_once();
                v6 = v13;
                v3 = v12;
            }
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, _ZN11uu_truncate7options4SIZE17h8592621bba85a515E, g_5168f0);
            v24 = 0x8000000000000000;
            if clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options4SIZE17h8592621bba85a515E, g_5168f0, &v12) {
                core::ops::function::FnOnce::call_once();
                v11 = *((&v12 as &char + 8) as &i128);
                *(&v12.field_0 as &struct24) = struct24 {
                    field_0: v12
                    field_8: v11
                };
            }
            v14 = v3;
            v12 = v24;
            uu_truncate::truncate(v22, v21, &v14, &v12, v1, v2);
            return v19;
        }
    }
    v14 = <T as alloc::slice::hack::ConvertVec>::to_vec();
    v12 = v14;
    alloc::boxed::Box<T>::new(&v12);
    return v19;
}
