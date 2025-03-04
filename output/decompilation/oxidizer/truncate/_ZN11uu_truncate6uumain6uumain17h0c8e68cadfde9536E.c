fn uu_truncate::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x660]
    let v1: i64;  // [sp-0x658], Other Possible Types: int
    let v2: i64;  // [sp-0x650]
    let v3: struct24;  // [sp-0x648], Other Possible Types: unsigned long, char
    let v4: i8;  // [bp-0x640]
    let v7: i8;  // [bp-0x620]
    let v8: i64;  // [bp-0x610], Other Possible Types: struct44
    let v9: iNone;  // [sp-0x5e8]
    let v10: iNone;  // [sp-0x5d8]
    let v11: struct24;  // [sp-0x5c8], Other Possible Types: unsigned long, Result<struct40, struct8>, struct56, struct64, struct712
    let v12: iNone;  // [bp-0x5c0]
    let v13: i32;  // [sp-0x5b0]
    let v14: struct24;  // [sp-0x2f8], Other Possible Types: struct64, struct712
    let v16: i64;  // r13
    let v19: i64;  // rbx
    let v20: i64;  // rax
    let v21: i32;  // eax
    let v22: i32;  // eax
    let v23: i64;  // rax
    let v24: i64;  // rax

    v16 = 0x8000000000000000;
    v11 = uu_truncate::uu_app();
    v14 = clap_builder::builder::command::Command::after_help(&v11, "SIZE is an integer with an optional prefix and optional unit.
The available units (K, M, G, T, P, E, Z, and Y) use the following format:
    'KB' =>           1000 (kilobytes)
    'K'  =>           1024 (kibibytes)
    'MB' =>      1000*1000 (megabytes)
    'M'  =>      1024*1024 (mebibytes)
    'GB' => 1000*1000*1000 (gigabytes)
    'G'  => 1024*1024*1024 (gibibytes)
SIZE may also be prefixed by one of the following to adjust the size of each
file based on its current size:
    '+'  => extend by
    '-'  => reduce by
    '<'  => at most
    '>'  => at least
    '/'  => round down to multiple of
    '%'  => round up to multiple of");
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v14, a0, a1);
    if v8 == 0x8000000000000000 {
        v19 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(uu_truncate::uumain::uumain::{{closure}}(*(&v4 as &i64)) as i32);
        return v19;
    }
    v9 = *(&v7 as &i128);
    v8 = struct44 {
        field_0: v17
        field_8: v18
        field_12: *(&v5 as &i128)
        field_28: *(&v6 as &i128)
    };
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, _ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E, g_516900);
    v14 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E, g_516900, &v11);
    if !v14.field_0 as i64 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    } else {
        v11 = v14;
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v11);
        v20 = v3.field_0;
        *(&v1 as &i128) = *(&v3.field_8 as &i128);
        v0 = v20;
        if v2 {
            v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN11uu_truncate7options9IO_BLOCKS17ha2b1febcfcfbcee0E, g_5168c0) as i32;
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN11uu_truncate7options9NO_CREATE17hb6d5a1980fdf49e5E, g_5168d0) as i32;
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, _ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE, g_5168e0);
            v23 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE, g_5168e0, &v11);
            if !v23 {
                *(&v3 as &i64) = 0x8000000000000000;
            } else {
                v11 = core::ops::function::FnOnce::call_once(v23);
                v3 = v11;
            }
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, _ZN11uu_truncate7options4SIZE17h8592621bba85a515E, g_5168f0);
            v24 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options4SIZE17h8592621bba85a515E, g_5168f0, &v11);
            if v24 {
                v11 = core::ops::function::FnOnce::call_once(v24);
                v16 = v11;
                v10 = *(&v11.field_8 as &i128);
            }
            v14 = v3;
            v11 = v16;
            v12 = v10;
            v19 = uu_truncate::truncate(v22 as u64, v21 as u64, &v14, &v11, v1, v2);
            return v19;
        }
    }
    v14 = <T as alloc::slice::hack::ConvertVec>::to_vec();
    v11 = v14;
    v13 = 1;
    v19 = alloc::boxed::Box<T>::new(&v11);
    return v19;
}
