fn uu_touch::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: iNone;  // [sp-0x438], Other Possible Types: unsigned long, struct24
    let v1: struct64;  // [bp-0x418], Other Possible Types: unsigned long, char, int
    let v2: iNone;  // [bp-0x410]
    let v3: i64;  // [sp-0x408]
    let v4: iNone;  // [sp-0x400]
    let v5: i64;  // [sp-0x3f0]
    let v6: i64;  // [sp-0x3d0], Other Possible Types: int
    let v7: i64;  // [sp-0x3c8]
    let v8: i64;  // [bp-0x398]
    let v9: i64;  // [sp-0x388]
    let v10: struct24;  // [sp-0x380]
    let v11: struct52;  // [sp-0x368], Other Possible Types: int
    let v12: i64;  // [sp-0x358]
    let v13: struct64;  // [sp-0x338], Other Possible Types: unsigned long
    let v14: Result<struct40, struct8>;  // [sp-0x2f8], Other Possible Types: struct24, struct712, int, struct56
    let v15: i64;  // [sp-0x2e8]
    let v16: iNone;  // [sp-0x2e0]
    let v17: i64;  // [sp-0x2d0]
    let v18: i8;  // [sp-0x2c8]
    let v19: i8;  // [sp-0x2c7]
    let v20: i8;  // [sp-0x2c6]
    let v21: i8;  // [sp-0x2c5]
    let v24: i64;  // rbx
    let v25: i8;  // al
    let v26: i64;  // r14
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v29: i64;  // rax

    v14 = uu_touch::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v1, &v14, a0, a1);
    if v6 == 0x8000000000000000 {
        v24 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v24;
    }
    v6 = *(&v1 as &i448);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, _ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE, g_710d40);
    v1 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE, g_710d40, &v14);
    if !v13 {
        v24 = uu_touch::uumain::uumain::{{closure}}();
        return v24;
    }
    v13 = v1;
    v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13);
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, _ZN8uu_touch7options8NO_DEREF17h87e2d6a561434778E, g_711590);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, _ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE, g_7115d0);
    v26 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE, g_7115d0, &v14);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, _ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E, g_7115e0);
    v27 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E, g_7115e0, &v14);
    if v26 {
        v14 = std::sys::os_str::bytes::Slice::to_owned(*((v26 + 8) as &i64), *((v26 + 16) as &i64));
        v0 = v14;
    } else if !v27 {
        v0 = 9223372036854775809;
    } else {
        v0 = uu_touch::parse_timestamp(*((v27 + 8) as &i64), *((v27 + 16) as &i64))?;
        v0 = 0x8000000000000000;
    }
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, _ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E, g_7115c0);
    v28 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E, g_7115c0, &v14);
    if !v28 {
        *(&v8 as &i64) = 0x8000000000000000;
    } else {
        v14 = <alloc::string::String as core::clone::Clone>::clone(v28);
    }
    v12 = (&v0)[16] as i64;
    v11 = v0 as i128;
    v3 = v9;
    *(&v1 as &i128) = (&v0)[152] as i128;
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, _ZN8uu_touch7options9NO_CREATE17hab80ce86436bd515E, g_711580) as i32;
    v19 = v25;
    v16 = v11;
    v17 = v12;
    v14 = v1 as i128;
    v15 = v3;
    v21 = uu_touch::determine_atime_mtime_change(&v6) as i8;
    v20 = 0;
    v11 = uu_touch::touch();
    v29 = v11.field_0;
    if v1 != 9223372036854775812 {
        v5 = *((&v11.field_32 as &char + 4) as &i64);
        v4 = *((&v11.field_20 as &char + 4) as &i128);
        *(&v2 as &i128) = *(&v11.field_8 as &i128);
        v1 = v29;
        return v24;
    }
    return 0;
}
