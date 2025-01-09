fn uu_cat::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v1: i8;  // [sp-0x429]
    let v2: i128;  // [sp-0x428], Other Possible Types: struct24
    let v3: i64;  // [sp-0x418]
    let v4: i128;  // [sp-0x408]
    let v5: i64;  // [sp-0x3f8]
    let v6: i64;  // [bp-0x3e8], Other Possible Types: struct24, struct64, struct5
    let v7: i64;  // [sp-0x3e0]
    let v8: i8;  // [bp-0x3d8]
    let v9: i8;  // [bp-0x3c8]
    let v10: i8;  // [bp-0x3b8]
    let v11: i64;  // [sp-0x3a8]
    let v12: i64;  // [sp-0x3a0]
    let v13: i64;  // [sp-0x398]
    let v14: i128;  // [sp-0x390]
    let v15: i128;  // [sp-0x380]
    let v16: i64;  // [sp-0x370]
    let v17: i192;  // [sp-0x368]
    let v18: i64;  // [sp-0x358]
    let v19: struct24;  // [sp-0x348], Other Possible Types: i5696, struct56, struct712
    let v20: i64;  // [sp-0x338]
    let v21: i128;  // [sp-0x330]
    let v22: i64;  // [sp-0x320]
    let v23: struct24;  // [sp-0x318], Other Possible Types: i128
    let v24: i64;  // [sp-0x308]
    let v25: i192;  // [sp-0x300], Other Possible Types: struct24
    let v26: struct64;  // [sp-0x78], Other Possible Types: i512
    let v29: i8;  // al
    let v30: i8;  // al
    let v31: i8;  // al
    let v33: i64;  // r15

    v19 = uu_cat::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v6, &v19, a0, a1);
    if v12 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
    }
    v16 = v10;
    v15 = v9;
    v14 = v8;
    v12 = v6;
    v13 = v7;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN6uu_cat7options15NUMBER_NONBLANK17hcfd0ab18542bde86E, g_518a10) as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN6uu_cat7options6NUMBER17h11e792a4c39cb9a9E, g_518a40);
    }
    v1 = 1;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v17 = v19;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h95c71c636ef4e9daE, g_518a20);
    v4 = v19;
    v11 = _ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h4cb7f8221e3b7d8eE;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h4cb7f8221e3b7d8eE, g_518a60);
    v2 = v19;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options16SHOW_NONPRINTING17h64dc0b27cbc6a658E, g_518a80);
    v25 = v6;
    v19 = v17;
    v20 = v18;
    v21 = v4;
    v22 = v5;
    v23 = v2;
    v24 = v3;
    v6 = &v19;
    v7 = &v19;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_ENDS17h1e75941c054d73e2E, g_518a30);
    v4 = v19;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v2 = v19;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h95c71c636ef4e9daE, g_518a20);
    v23 = v6;
    v19 = v4;
    v20 = v5;
    v21 = v2;
    v22 = v3;
    v6 = &v19;
    v7 = &v25;
    v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v12);
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v4 = v19;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_TABS17h38c44e0721b1c479E, g_518a70);
    v2 = v19;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v11, g_518a60);
    v23 = v6;
    v19 = v4;
    v20 = v5;
    v21 = v2;
    v22 = v3;
    v6 = &v19;
    v7 = &v25;
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v12);
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN6uu_cat7options13SQUEEZE_BLANK17ha18c24f819d67eebE, g_518a50) as i32;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, _ZN6uu_cat7options4FILE17hd561a2c944603ee6E, g_5189f0);
    v6 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_cat7options4FILE17hd561a2c944603ee6E, g_5189f0, &v19);
    if v6 {
        v26 = v6;
        v19 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v26);
    } else {
        v33 = alloc::alloc::Global::alloc_impl();
        v19 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v19;
        *((v33 + 16) as &i64) = v3;
        *(v33 as &i128) = v2;
        v19 = alloc::slice::hack::into_vec(v33, 1);
    }
    v6 = struct5 {
        field_0: v31
        field_1: v30
        field_2: v29
        field_3: v0
        field_4: v1
    };
    return uu_cat::cat_files(*((&v19 as &char + 8) as &i64), v20, &v6);
}
