fn uu_truncate::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x660]
    let v1: u64;  // [bp-0x658]
    let v2: u64;  // [bp-0x650]
    let v3: struct24;  // [bp-0x648], Other Possible Types: struct44, u128
    let v5: Result<struct56, struct16>;  // [bp-0x648]
    let v6: u64;  // [bp-0x638]
    let v7: struct44;  // [bp-0x610]
    let v8: u128;  // [bp-0x5d8]
    let v9: Result<struct40, struct16>;  // [bp-0x5c8], Other Possible Types: struct24, u8
    let v10: Result<struct40, struct16>;  // [bp-0x5c8]
    let v11: struct24;  // [bp-0x5c8]
    let v13: struct64;  // [bp-0x5c8]
    let v14: u128;  // [bp-0x5c0]
    let v15: u64;  // [bp-0x5b8]
    let v16: u32;  // [bp-0x5b0]
    let v17: struct24;  // [bp-0x2f8], Other Possible Types: struct64, u8
    let v18: struct64;  // [bp-0x2f8]
    let v19: u64;  // [bp-0x2e8]
    let v21: u64;  // r13
    let v22: u32;  // eax
    let v23: u8;  // al
    let v24: u64;  // rbx
    let v25: u64;  // rax
    let v26: u64;  // rax

    v21 = 0x8000000000000000;
    uu_truncate::uu_app(&v9);
    clap_builder::builder::command::Command::after_help(&v17, &v9, "SIZE is an integer with an optional prefix and optional unit.\nThe available units (K, M, G, T, P, E, Z, and Y) use the following format:\n    'KB' =>           1000 (kilobytes)\n    'K'  =>           1024 (kibibytes)\n    'MB' =>      1000*1000 (megabytes)\n    'M'  =>      1024*1024 (mebibytes)\n    'GB' => 1000*1000*1000 (gigabytes)\n    'G'  => 1024*1024*1024 (gibibytes)\nSIZE may also be prefixed by one of the following to adjust the size of each\nfile based on its current size:\n    '+'  => extend by\n    '-'  => reduce by\n    '<'  => at most\n    '>'  => at least\n    '/'  => round down to multiple of\n    '%'  => round up to multiple of");
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1);
    match v5 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(uu_truncate::uumain::uumain::{{closure}}(*((&v5 as &char + 8) as &i64)) as i32 as u32 as u64);
        },
        Ok(_) => {
            v7 = v3;
            v9 as u448 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, _ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E.field_0, g_516900.field_0);
            v18 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E.field_0, g_516900.field_0, &v9 as u448);
            if v18.field_0 as i64 && !((v13 = v17, v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v13), v1 = *((&v3.field_0 as &char + 8) as &i128) as u128, v0 = v3.field_0 as i64, !v2)) {
                v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, _ZN11uu_truncate7options9IO_BLOCKS17ha2b1febcfcfbcee0E.field_0, g_5168c0.field_0) as i32;
                v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, _ZN11uu_truncate7options9NO_CREATE17hb6d5a1980fdf49e5E.field_0, g_5168d0.field_0) as i32 as i8;
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v7, _ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE.field_0, g_5168e0.field_0);
                v25 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE.field_0, g_5168e0.field_0, &v9);
                if v25 {
                    v9 = core::ops::function::FnOnce::call_once(v25);
                    v6 = v15;
                    v3 = v9.field_0;
                }
                v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v7, _ZN11uu_truncate7options4SIZE17h8592621bba85a515E.field_0, g_5168f0.field_0);
                v26 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options4SIZE17h8592621bba85a515E.field_0, g_5168f0.field_0, &v10);
                if v26 {
                    v11 = core::ops::function::FnOnce::call_once(v26);
                }
                v19 = v6;
                v17 = v3.field_0;
                v9 = v21;
                v14 = v8;
                v24 = uu_truncate::truncate(v23, v22 as u64, &v17, &v9, v1, v2);
            } else {
                vvar_434{stack -760} = struct24 OrderedDict({0: 𝜙@128b [((4609615, None), None), ((4609419, None), vvar_378{stack -760})], 16: 𝜙@64b [((4609615, None), None), ((4609419, None), None)]})
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v17);
                v15 = v19;
                v9 = v17.field_0;
                v16 = 1;
                v24 = alloc::boxed::Box<T>::new(&v9 as u448);
            }
            return v24;
        },
    }
}
