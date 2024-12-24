fn uu_cat::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct8;  // [sp-0x42a]
    let v1: i8;  // [sp-0x429]
    let v2: i128;  // [bp-0x428]
    let v3: i64;  // [sp-0x418]
    let v4: i192;  // [bp-0x408]
    let v5: i192;  // [sp-0x3e8], Other Possible Types: struct24, Result<struct56, struct16>, struct64, struct5
    let v6: i64;  // [sp-0x3e0]
    let v7: i64;  // [sp-0x3a8]
    let v8: i64;  // [sp-0x3a0]
    let v9: i64;  // [sp-0x398]
    let v10: i128;  // [sp-0x390]
    let v11: i128;  // [sp-0x380]
    let v12: i64;  // [sp-0x370]
    let v13: i128;  // [bp-0x368]
    let v14: i192;  // [sp-0x348], Other Possible Types: struct24, struct712, struct56
    let v15: i128;  // [sp-0x330]
    let v16: i64;  // [sp-0x320]
    let v17: i192;  // [bp-0x318]
    let v18: i192;  // [bp-0x300]
    let v19: i512;  // [bp-0x78]
    let v21: i64;  // rdx
    let v23: i64;  // r15

    v14 = uu_cat::uu_app(a1, v21);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v14, a0, a1);
    if v8 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
    }
    v12 = *((&v5 as &char + 48) as &i64);
    v11 = *((&v5 as &char + 32) as &i128);
    v10 = *((&v5 as &char + 16) as &i128);
    v8 = v5;
    v9 = v6;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN6uu_cat7options15NUMBER_NONBLANK17hdaa53217bffb8cb8E, g_519428) as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN6uu_cat7options6NUMBER17hb966f66a7281c27bE, g_519458);
    }
    v1 = 1;
    v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17hf50dee31f68dc7a4E, g_519418);
    v13 = v14;
    v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h82d4931b66642f17E, g_519438);
    v4 = v14;
    v7 = _ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hdfb90e3611deae91E;
    v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hdfb90e3611deae91E, g_519478);
    v2 = v14;
    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options16SHOW_NONPRINTING17h2c635465fd68793dE, g_519498);
    v18 = v5;
    v14 = v13;
    v14.field_16 = vvar_369{stack -856};
    v14.24 = vvar_376{stack -1032};
    v14.40 = vvar_374{stack -1016};
    v14.48 = vvar_382{stack -1064};
    v14.64 = vvar_380{stack -1048};
    v5 = &v14;
    v5.field_8 = stack_base + -744;
    v0 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v8);
    v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_ENDS17h04653d90c0396f7aE, g_519448);
    v4 = v14;
    v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17hf50dee31f68dc7a4E, g_519418);
    v2 = v14;
    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h82d4931b66642f17E, g_519438);
    v17 = v5;
    v14 = v4;
    v14.field_16 = vvar_397{stack -1016};
    v15 = v2;
    v16 = v3;
    v5 = &v14;
    v5.field_8 = stack_base + -0x300;
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v5, &v8);
    v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17hf50dee31f68dc7a4E, g_519418);
    v4 = v14;
    v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_TABS17h12ef283ebc177f54E, g_519488);
    v2 = v14;
    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(v7, g_519478);
    v17 = v5;
    v14 = v4;
    v14.field_16 = vvar_413{stack -1016};
    v15 = v2;
    v16 = v3;
    v5 = &v14;
    v5.field_8 = stack_base + -0x300;
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v5, &v8);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN6uu_cat7options13SQUEEZE_BLANK17h5d48012ae426d7caE, g_519468);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, _ZN6uu_cat7options4FILE17h81814bf651146a3bE, g_519408);
    v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_cat7options4FILE17h81814bf651146a3bE, g_519408, &v14);
    if v5 {
        v19 = v5;
        v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v19, v21);
    } else {
        v23 = alloc::alloc::Global::alloc_impl();
        v14 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v14;
        *((v23 + 16) as &i64) = v3;
        *(v23 as &i128) = v2;
        v14 = alloc::slice::hack::into_vec(v23, 1);
    }
    v5 = struct5 {
        field_0: v24
        field_1: v24
        field_2: v24
        field_3: v0
        field_4: v1
    };
    return uu_cat::cat_files(*((&v14 as &char + 8) as &i64), v14.field_16, &v5);
}
