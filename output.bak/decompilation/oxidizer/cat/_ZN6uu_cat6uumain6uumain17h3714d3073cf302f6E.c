fn uu_cat::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct8;  // [sp-0x42a]
    let v1: i8;  // [sp-0x429]
    let v2: i192;  // [sp-0x428], Other Possible Types: struct24
    let v3: i64;  // [sp-0x418]
    let v4: i128;  // [sp-0x408]
    let v5: i64;  // [sp-0x3f8]
    let v6: i64;  // [sp-0x3e8], Other Possible Types: struct24, struct64, Result<struct56, struct8>, struct5
    let v7: i64;  // [sp-0x3e0]
    let v8: i64;  // [sp-0x3a8]
    let v9: i64;  // [sp-0x3a0]
    let v10: i64;  // [sp-0x398]
    let v11: i128;  // [sp-0x390]
    let v12: i128;  // [sp-0x380]
    let v13: i64;  // [sp-0x370]
    let v14: i192;  // [sp-0x368]
    let v15: i64;  // [sp-0x358]
    let v16: struct24;  // [sp-0x348], Other Possible Types: i128, struct56, struct712
    let v17: i64;  // [sp-0x338]
    let v18: i128;  // [sp-0x330]
    let v19: i64;  // [sp-0x320]
    let v20: struct24;  // [sp-0x318], Other Possible Types: i128
    let v21: i64;  // [sp-0x308]
    let v22: i192;  // [sp-0x300], Other Possible Types: struct24
    let v23: struct64;  // [bp-0x78]
    let v26: i64;  // r15

    v16 = uu_cat::uu_app();
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v16, a0, a1);
    if v9 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
    }
    v13 = *((&v6 as &char + 48) as &i64);
    v12 = *((&v6 as &char + 32) as &i128);
    v11 = *((&v6 as &char + 16) as &i128);
    v9 = v6;
    v10 = v7;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN6uu_cat7options15NUMBER_NONBLANK17hcfd0ab18542bde86E, g_518a10) as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN6uu_cat7options6NUMBER17h11e792a4c39cb9a9E, g_518a40);
    }
    v1 = 1;
    v16 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v14 = v16;
    v16 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h95c71c636ef4e9daE, g_518a20);
    v4 = v16;
    v8 = _ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h4cb7f8221e3b7d8eE;
    v16 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h4cb7f8221e3b7d8eE, g_518a60);
    v2 = v16;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options16SHOW_NONPRINTING17h64dc0b27cbc6a658E, g_518a80);
    v22 = v6;
    v16 = v14;
    v17 = v15;
    v18 = v4;
    v19 = v5;
    v20 = v2;
    v21 = v3;
    v6 = &v16;
    v7 = &v16;
    v0 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v9);
    v16 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_ENDS17h1e75941c054d73e2E, g_518a30);
    v4 = v16;
    v16 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v2 = v16;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h95c71c636ef4e9daE, g_518a20);
    v20 = v6;
    v16 = v4;
    v17 = v5;
    v18 = v2;
    v19 = v3;
    v6 = &v16;
    v7 = &v22;
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v9);
    v16 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v4 = v16;
    v16 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_TABS17h38c44e0721b1c479E, g_518a70);
    v2 = v16;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v8, g_518a60);
    v20 = v6;
    v16 = v4;
    v17 = v5;
    v18 = v2;
    v19 = v3;
    v6 = &v16;
    v7 = &v22;
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v9);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN6uu_cat7options13SQUEEZE_BLANK17ha18c24f819d67eebE, g_518a50);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN6uu_cat7options4FILE17hd561a2c944603ee6E, g_5189f0);
    v6 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_cat7options4FILE17hd561a2c944603ee6E, g_5189f0, &v16);
    if v6 {
        v23 = struct64 {
            field_0: v6
            field_16: *((&v6 as &char + 16) as &i128)
            field_32: *((&v6 as &char + 32) as &i128)
            field_48: *((&v6 as &char + 48) as &i128)
        };
        v16 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v23);
    } else {
        v26 = alloc::alloc::Global::alloc_impl();
        v16 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v16;
        *((v26 + 16) as &i64) = v3;
        *(v26 as &i128) = v2;
        v16 = alloc::slice::hack::into_vec(v26, 1);
    }
    v6 = struct5 {
        field_0: v27
        field_1: v27
        field_2: v27
        field_3: v0
        field_4: v1
    };
    return uu_cat::cat_files(*((&v16 as &char + 8) as &i64), v17, &v6);
}
