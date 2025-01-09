fn uu_touch::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x438], Other Possible Types: struct24
    let v1: i96;  // [sp-0x430]
    let v2: i8;  // [bp-0x418], Other Possible Types: struct48, struct64
    let v4: i64;  // [sp-0x408]
    let v5: i448;  // [sp-0x3d0]
    let v6: i64;  // [sp-0x3c8]
    let v7: i192;  // [bp-0x398]
    let v8: i64;  // [sp-0x388]
    let v9: struct24;  // [sp-0x380]
    let v10: i128;  // [sp-0x368]
    let v11: i64;  // [sp-0x358]
    let v14: i64;  // [sp-0x338], Other Possible Types: struct64
    let v15: i5696;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct8>, struct24, struct56, struct712
    let v16: i64;  // [sp-0x2e8]
    let v17: i128;  // [sp-0x2e0]
    let v18: i64;  // [sp-0x2d0]
    let v19: i8;  // [sp-0x2c8]
    let v20: i8;  // [sp-0x2c7]
    let v21: i8;  // [sp-0x2c6]
    let v22: i8;  // [sp-0x2c5]
    let v25: i64;  // rax
    let v26: i8;  // al
    let v27: i64;  // r14
    let v28: i64;  // rax
    let v29: i64;  // rax

    v15 = uu_touch::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v2, &v15, a0, a1);
    if v5 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v25;
    }
    v5 = v2;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE, g_710d40);
    v2 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE, g_710d40, &v15);
    if !v14 {
        uu_touch::uumain::uumain::{{closure}}();
        return v25;
    }
    v14 = v2;
    v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v14);
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_touch7options8NO_DEREF17h87e2d6a561434778E, g_711590);
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE, g_7115d0);
    v27 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE, g_7115d0, &v15);
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E, g_7115e0);
    v28 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E, g_7115e0, &v15);
    if v27 {
        v15 = std::sys::os_str::bytes::Slice::to_owned(*((v27 + 8) as &i64), *((v27 + 16) as &i64));
        v0 = v15;
    } else if !v28 {
        v0 = 9223372036854775809;
    } else {
        v1 = uu_touch::parse_timestamp(*((v28 + 8) as &i64), *((v28 + 16) as &i64))?;
        v0 = 0x8000000000000000;
    }
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E, g_7115c0);
    v29 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E, g_7115c0, &v15);
    if !v29 {
        v7 = 0x8000000000000000;
    } else {
        v15 = <alloc::string::String as core::clone::Clone>::clone(v29);
    }
    v11 = *((&v0 as &char + 16) as &i64);
    v10 = v0;
    v4 = v8;
    v2 = v7;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_touch7options9NO_CREATE17hab80ce86436bd515E, g_711580) as i32;
    v20 = v26;
    v17 = v10;
    v18 = v11;
    v15 = v2;
    v16 = v4;
    v22 = uu_touch::determine_atime_mtime_change(&v5) as i8;
    v21 = 0;
    uu_touch::touch(&v10);
    if v2 != 9223372036854775812 {
        v2 = struct48 {
            field_0: v30
            field_8: *((&v10 as &char + 8) as &i128)
            field_24: v12
            field_40: v13
        };
        alloc::boxed::Box<T>::new(&v2);
        return v25;
    }
    return 0;
}
