fn uu_cat::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct8;  // [sp-0x42a]
    let v1: i8;  // [sp-0x429]
    let v2: i128;  // [sp-0x428]
    let v3: i64;  // [sp-0x418]
    let v4: i128;  // [sp-0x408]
    let v5: i64;  // [sp-0x3f8]
    let v6: i192;  // [bp-0x3e8], Other Possible Types: struct24, struct5, struct64
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
    let v17: i128;  // [sp-0x368]
    let v18: i64;  // [sp-0x358]
    let v19: i128;  // [sp-0x348], Other Possible Types: struct24, struct712, struct56
    let v20: i128;  // [sp-0x330]
    let v21: i64;  // [sp-0x320]
    let v22: i128;  // [sp-0x318]
    let v23: i64;  // [sp-0x308]
    let v24: struct64;  // [bp-0x78]
    let v26: i64;  // rdx
    let v28: i64;  // r15

    v19 = uu_cat::uu_app(a1, v26);
    clap_builder::builder::command::Command::try_get_matches_from(&v6, &v19, a0, a1);
    if v12 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
    }
    v16 = v10;
    v15 = v9;
    v14 = v8;
    v12 = v6;
    v13 = v7;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN6uu_cat7options15NUMBER_NONBLANK17hdaa53217bffb8cb8E, g_519428) as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN6uu_cat7options6NUMBER17hb966f66a7281c27bE, g_519458);
    }
    v1 = 1;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17hf50dee31f68dc7a4E, g_519418);
    v18 = v19.field_16;
    v17 = v19;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h82d4931b66642f17E, g_519438);
    v5 = v19.field_16;
    v4 = v19;
    v11 = _ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hdfb90e3611deae91E;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hdfb90e3611deae91E, g_519478);
    v3 = v19.field_16;
    v2 = v19;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options16SHOW_NONPRINTING17h2c635465fd68793dE, g_519498);
    v19.88 = (stack_base)[984] as i64;
    v19.72 = (stack_base)[1000] as i128;
    v19 = v17;
    v19.field_16 = vvar_369{stack -856};
    v19.24 = vvar_376{stack -1032};
    v19.40 = vvar_374{stack -1016};
    v19.48 = vvar_382{stack -1064};
    v19.64 = vvar_380{stack -1048};
    v6 = &v19;
    v6.field_8 = stack_base + -744;
    v0 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v12);
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_ENDS17h04653d90c0396f7aE, g_519448);
    v5 = v19.field_16;
    v4 = v19;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17hf50dee31f68dc7a4E, g_519418);
    v3 = v19.field_16;
    v2 = v19;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h82d4931b66642f17E, g_519438);
    v23 = *((&v6 as &char + 16) as &i64);
    v22 = v6;
    v19 = v4;
    v19.field_16 = vvar_397{stack -1016};
    v20 = v2;
    v21 = v3;
    v6 = &v19;
    v6.field_8 = stack_base + -0x300;
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v12);
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17hf50dee31f68dc7a4E, g_519418);
    v5 = v19.field_16;
    v4 = v19;
    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_TABS17h12ef283ebc177f54E, g_519488);
    v3 = v19.field_16;
    v2 = v19;
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v11, g_519478);
    v23 = *((&v6 as &char + 16) as &i64);
    v22 = v6;
    v19 = v4;
    v19.field_16 = vvar_413{stack -1016};
    v20 = v2;
    v21 = v3;
    v6 = &v19;
    v6.field_8 = stack_base + -0x300;
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v12);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN6uu_cat7options13SQUEEZE_BLANK17h5d48012ae426d7caE, g_519468);
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, _ZN6uu_cat7options4FILE17h81814bf651146a3bE, g_519408);
    v6 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_cat7options4FILE17h81814bf651146a3bE, g_519408, &v19);
    if v6 {
        v24 = struct64 {
            field_0: v6
            field_16: *((&v6 as &char + 16) as &i128)
            field_32: *((&v6 as &char + 32) as &i128)
            field_48: *((&v6 as &char + 48) as &i128)
        };
        v19 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v24, v26);
    } else {
        v28 = alloc::alloc::Global::alloc_impl();
        v19 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v3 = v19.field_16;
        v2 = v19;
        *((v28 + 16) as &i64) = v3;
        *(v28 as &i128) = v2;
        v19 = alloc::slice::hack::into_vec(v28, 1);
    }
    v6 = struct5 {
        field_0: v29
        field_1: v29
        field_2: v29
        field_3: v0
        field_4: v1
    };
    return uu_cat::cat_files(*((&v19 as &char + 8) as &i64), v19.field_16, &v6);
}
