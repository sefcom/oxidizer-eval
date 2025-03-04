fn uu_cat::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v1: i8;  // [sp-0x429]
    let v2: iNone;  // [sp-0x428], Other Possible Types: struct24
    let v3: i64;  // [sp-0x418]
    let v4: iNone;  // [sp-0x408]
    let v5: i64;  // [sp-0x3f8]
    let v6: i64;  // [bp-0x3e8], Other Possible Types: struct24, struct5, char, struct64
    let v7: i64;  // [sp-0x3e0]
    let v8: i8;  // [bp-0x3d8]
    let v9: i8;  // [bp-0x3c8]
    let v10: i8;  // [bp-0x3b8]
    let v11: i64;  // [sp-0x3a8]
    let v12: i64;  // [sp-0x3a0]
    let v13: i64;  // [sp-0x398]
    let v14: iNone;  // [sp-0x390]
    let v15: iNone;  // [sp-0x380]
    let v16: i64;  // [sp-0x370]
    let v17: iNone;  // [sp-0x368]
    let v18: i64;  // [sp-0x358]
    let v19: struct24;  // [sp-0x348], Other Possible Types: int, struct712, struct56
    let v20: struct24;  // [sp-0x348], Other Possible Types: int
    let v21: i64;  // [sp-0x338]
    let v22: iNone;  // [sp-0x330]
    let v23: i64;  // [sp-0x320]
    let v24: struct24;  // [sp-0x318], Other Possible Types: int
    let v25: i64;  // [sp-0x308]
    let v26: struct24;  // [sp-0x300]
    let v27: struct64;  // [sp-0x78]
    let v30: i8;  // al
    let v31: i8;  // al
    let v32: i8;  // al
    let v34: i64;  // r15

    v19 = uu_cat::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v6, &v19, a0, a1);
    if v12 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
    }
    v16 = *(&v10 as &i64);
    v15 = *(&v9 as &i128);
    v14 = *(&v8 as &i128);
    v12 = *(&v6 as &i64);
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
    v26 = v6;
    v19 = v17;
    v21 = v18;
    v22 = v4;
    v23 = v5;
    v24 = v2;
    v25 = v3;
    *(&v6 as &void*) = &v19;
    v7 = &v19;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_ENDS17h1e75941c054d73e2E, g_518a30);
    v4 = v19;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v2 = v19;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h95c71c636ef4e9daE, g_518a20);
    v24 = v6;
    v19 = v4;
    v21 = v5;
    v22 = v2;
    v23 = v3;
    *(&v6 as &void*) = &v19;
    v7 = &v26;
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v12);
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v4 = v19;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_TABS17h38c44e0721b1c479E, g_518a70);
    v2 = v19;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v11, g_518a60);
    v24 = v6;
    v19 = v4;
    v21 = v5;
    v22 = v2;
    v23 = v3;
    *(&v6 as &void*) = &v19;
    v7 = &v26;
    v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v12);
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN6uu_cat7options13SQUEEZE_BLANK17ha18c24f819d67eebE, g_518a50) as i32;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, _ZN6uu_cat7options4FILE17hd561a2c944603ee6E, g_5189f0);
    v6 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_cat7options4FILE17hd561a2c944603ee6E, g_5189f0, &v19);
    if v6.field_0 as i64 {
        v27 = v6;
        v20 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v27);
    } else {
        v34 = alloc::alloc::Global::alloc_impl();
        v19 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v20;
        *((v34 + 16) as &unsigned long) = v3;
        *(v34 as void*) = v2;
        v20 = alloc::slice::hack::into_vec(v34, 1);
    }
    v6 = struct5 {
        field_0: v32
        field_1: v31
        field_2: v30
        field_3: v0
        field_4: v1
    };
    return uu_cat::cat_files((&v20)[8] as i64, v21, &v6);
}
