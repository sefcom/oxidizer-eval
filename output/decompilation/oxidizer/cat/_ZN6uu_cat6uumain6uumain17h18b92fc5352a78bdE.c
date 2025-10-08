fn uu_cat::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x3c8]
    let v1: i64;  // [bp-0x3c0]
    let v2: i64;  // [bp-0x3b8], Other Possible Types: u8
    let v3: u8;  // [bp-0x3b8]
    let v4: u64;  // [bp-0x3b0]
    let v5: u8;  // [bp-0x3b0]
    let v6: struct5;  // [bp-0x3a8], Other Possible Types: struct24, struct16, u128
    let v7: u64;  // [bp-0x3a0]
    let v8: i8;  // [bp-0x398], Other Possible Types: u64
    let v9: iNone;  // [bp-0x388]
    let v10: u64;  // [bp-0x378]
    let v11: u64;  // [bp-0x370]
    let v12: u64;  // [bp-0x368]
    let v13: iNone;  // [bp-0x360]
    let v14: iNone;  // [bp-0x350]
    let v15: u64;  // [bp-0x340]
    let v16: struct56;  // [bp-0x338], Other Possible Types: struct712, struct24, u64
    let v17: struct24;  // [bp-0x338], Other Possible Types: u64
    let v18: u64;  // [bp-0x338]
    let v19: i64;  // [bp-0x330]
    let v20: i64;  // [bp-0x330]
    let v21: u64;  // [bp-0x328]
    let v22: u64;  // [bp-0x328]
    let v23: u64;  // [bp-0x320]
    let v24: i64;  // [bp-0x318]
    let v25: u64;  // [bp-0x310]
    let v26: u128;  // [bp-0x308]
    let v27: u128;  // [bp-0x308]
    let v28: i64;  // [bp-0x300]
    let v29: u64;  // [bp-0x2f8]
    let v30: iNone;  // [bp-0x2f0]
    let v31: u64;  // [bp-0x2e0]
    let v32: struct64;  // [bp-0x70]
    let v34: u64;  // rdi
    let v35: u8;  // al
    let v36: u8;  // al
    let v37: i64;  // r13
    let v38: u64;  // rbp
    let v40: iNone;  // xmm0
    let v41: u64;  // rax

    v16 = uu_cat::uu_app();
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v16, a0, a1);
    v34 = v7;
    if (((0 ^ v6.field_0) & (0 ^ -(v6.field_0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
    }
    v15 = v10;
    v14 = v9;
    v13 = *(&v8 as &i128);
    v11 = v6.field_0;
    v12 = v7;
    v0 = 1;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN6uu_cat7options15NUMBER_NONBLANK17h21a967aa4e64630bE.field_0, g_4eaab0.field_0) {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN6uu_cat7options6NUMBER17h695181ced15c3b18E.field_0, g_4eaae0.field_0);
        v0 *= 2;
    }
    v17 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE.field_0, *(&g_4eaaa0 as &i64));
    v4 = v17.field_0;
    v1 = v19;
    v17 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h6825b0ae9c7a2748E.field_0, *(&g_4eaac0 as &i64));
    v2 = v19;
    v17 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hb145e2c58bb790e4E.field_0, *(&g_4eab00 as &i64));
    v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(_ZN6uu_cat7options16SHOW_NONPRINTING17h5b72b06df7137a06E.field_0, *(&g_4eab20 as &i64));
    v31 = v8;
    v30 = *(&v6.field_0 as &i128);
    v17 = v4;
    v20 = v1;
    v22 = v21;
    v23 = v18;
    v24 = v2;
    v25 = v21;
    v26 = v18;
    v28 = v19;
    v29 = v21;
    v6 = struct16 {
        field_0: &v17
        field_8: &v16 as u8
    };
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v11);
    v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_ENDS17h1ee7bf9af15f8ab5E.field_0, *(&g_4eaad0 as &i64));
    v1 = v20;
    v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE.field_0, *(&g_4eaaa0 as &i64));
    v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h6825b0ae9c7a2748E.field_0, *(&g_4eaac0 as &i64));
    v29 = v8;
    v27 = *(&v6.field_0 as &i128);
    v16 = v16.field_0;
    v19 = v1;
    v21 = v22;
    v23 = v17;
    v24 = v20;
    v25 = v22;
    v6 = struct16 {
        field_0: &v16
        field_8: &v30
    };
    v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v11);
    v17 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE.field_0, *(&g_4eaaa0 as &i64));
    v1 = v19;
    v17 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_TABS17h8dabaa7165eb4951E.field_0, *(&g_4eab10 as &i64));
    v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hb145e2c58bb790e4E.field_0, *(&g_4eab00 as &i64));
    v29 = v8;
    v26 = *(&v6.field_0 as &i128);
    v17 = v17.field_0;
    v20 = v1;
    v22 = v21;
    v23 = v16;
    v24 = v19;
    v25 = v21;
    v6 = struct16 {
        field_0: &v17
        field_8: &v30
    };
    v35 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v11);
    v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN6uu_cat7options13SQUEEZE_BLANK17ha17d626b5583237cE.field_0, g_4eaaf0.field_0);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, _ZN6uu_cat7options4FILE17h55d7a2ab59327302E.field_0, g_4eaa90.field_0);
    v32 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_cat7options4FILE17h55d7a2ab59327302E.field_0, g_4eaa90.field_0, &v16);
    if v32.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v16, &v32);
        v37 = v20;
        v38 = v22;
    } else {
        v37 = alloc::alloc::Global::alloc_impl(8, 24);
        v38 = 1;
        v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        v8 = v22;
        v40 = *(&v16.field_0 as &i128);
        *(&v6 as void*) = v40;
        *((v37 + 16) as &u64) = v22;
        *(v37 as void*) = v40;
        v16 = 1;
        v19 = v37;
        v21 = 1;
    }
    v6 = struct5 {
        field_0: v36
        field_1: v35
        field_2: v3
        field_3: v5
        field_4: v0
    };
    v41 = uu_cat::cat_files(v37, v38, &v6);
    return v41;
}
