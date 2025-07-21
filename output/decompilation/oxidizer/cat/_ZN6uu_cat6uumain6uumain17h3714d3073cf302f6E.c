fn uu_cat::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x42a]
    let v1: u8;  // [bp-0x429]
    let v2: struct24;  // [bp-0x428], Other Possible Types: u128
    let v3: u64;  // [bp-0x418]
    let v4: u128;  // [bp-0x408]
    let v5: u64;  // [bp-0x3f8]
    let v6: Result<struct56, struct16>;  // [bp-0x3e8], Other Possible Types: struct5, struct64, struct16
    let v7: struct24;  // [bp-0x3e8]
    let v8: struct24;  // [bp-0x3e8]
    let v9: struct24;  // [bp-0x3e8]
    let v10: struct64;  // [bp-0x3e8]
    let v11: u64;  // [bp-0x3e0]
    let v12: u128;  // [bp-0x3d8]
    let v13: u128;  // [bp-0x3c8]
    let v14: u64;  // [bp-0x3a8]
    let v15: u64;  // [bp-0x3a0]
    let v16: u64;  // [bp-0x398]
    let v17: u128;  // [bp-0x390]
    let v18: u128;  // [bp-0x380]
    let v19: u64;  // [bp-0x370]
    let v20: u128;  // [bp-0x368]
    let v21: u64;  // [bp-0x358]
    let v22: Result<struct24, struct24>;  // [bp-0x348], Other Possible Types: struct56, struct24, u8
    let v23: u128;  // [bp-0x348]
    let v24: struct24;  // [bp-0x348]
    let v25: u64;  // [bp-0x340]
    let v26: u64;  // [bp-0x338]
    let v27: u128;  // [bp-0x330]
    let v28: u64;  // [bp-0x320]
    let v29: u128;  // [bp-0x318]
    let v30: u64;  // [bp-0x308]
    let v31: u128;  // [bp-0x300]
    let v32: u64;  // [bp-0x2f0]
    let v33: i8;  // [bp-0x2e8]
    let v34: struct64;  // [bp-0x78]
    let v36: u64;  // rdi
    let v37: u8;  // cl
    let v38: u8;  // al
    let v39: u8;  // al
    let v40: u8;  // al
    let v42: i64;  // r15

    uu_cat::uu_app(&v22);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v22, a0, a1);
    v36 = v11;
    match v6 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        },
        Ok(_) => {
            v19 = *((&v6 as &char + 48) as &i64);
            v18 = v13;
            v17 = v12;
            v15 = v6 as i64;
            v16 = v11;
            v37 = 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, _ZN6uu_cat7options15NUMBER_NONBLANK17hcfd0ab18542bde86E.field_0, g_518a10.field_0) as i8 {
                v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, _ZN6uu_cat7options6NUMBER17h11e792a4c39cb9a9E.field_0, g_518a40.field_0) as i8 * 2;
            }
            v1 = v37;
            v22 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E.field_0, *(&g_518a00 as &i64));
            v21 = v26;
            v20 = *(&v22.field_0 as &i128);
            v22 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h95c71c636ef4e9daE.field_0, *(&g_518a20 as &i64));
            v5 = v26;
            v4 = *(&v22.field_0 as &i128);
            v14 = _ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h4cb7f8221e3b7d8eE.field_0;
            v23 as u192 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h4cb7f8221e3b7d8eE.field_0, *(&g_518a60 as &i64));
            v3 = v26;
            v2 = *(&v22.field_0 as &i128);
            v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options16SHOW_NONPRINTING17h64dc0b27cbc6a658E.field_0, *(&g_518a80 as &i64));
            v32 = v7.field_16;
            v31 = *(&v7.field_0 as &i128);
            v23 = v20;
            v26 = v21;
            v27 = v4;
            v28 = v5;
            v29 = v2;
            v30 = v3;
            v6 = struct16 {
                field_0: &v23 as u192
                field_8: &v33
            };
            v0 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v15);
            v22 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_ENDS17h1e75941c054d73e2E.field_0, *(&g_518a30 as &i64));
            v5 = v26;
            v4 = *(&v22.field_0 as &i128);
            v23 as u192 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E.field_0, *(&g_518a00 as &i64));
            v3 = v26;
            v2 = *(&v22.field_0 as &i128);
            v8 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h95c71c636ef4e9daE.field_0, *(&g_518a20 as &i64));
            v30 = v8.field_16;
            v29 = *(&v8.field_0 as &i128);
            v23 = v4;
            v26 = v5;
            v27 = v2;
            v28 = v3;
            v6 = struct16 {
                field_0: &v23 as u192
                field_8: &v31
            };
            v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v15) as i32 as i8;
            v22 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E.field_0, *(&g_518a00 as &i64));
            v5 = v26;
            v4 = *(&v22.field_0 as &i128);
            v23 as u192 = <T as alloc::slice::hack::ConvertVec>::to_vec(_ZN6uu_cat7options9SHOW_TABS17h38c44e0721b1c479E.field_0, *(&g_518a70 as &i64));
            v3 = v26;
            v2 = *(&v22.field_0 as &i128);
            v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(v14, *(&g_518a60 as &i64));
            v30 = v9.field_16;
            v29 = *(&v9.field_0 as &i128);
            v23 = v4;
            v26 = v5;
            v27 = v2;
            v28 = v3;
            v6 = struct16 {
                field_0: &v23 as u192
                field_8: &v31
            };
            v39 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, &v15) as i32 as i8;
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, _ZN6uu_cat7options13SQUEEZE_BLANK17ha18c24f819d67eebE.field_0, g_518a50.field_0) as i32 as i8;
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, _ZN6uu_cat7options4FILE17hd561a2c944603ee6E.field_0, g_5189f0.field_0);
            v6 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_cat7options4FILE17hd561a2c944603ee6E.field_0, g_5189f0.field_0, &v22);
            if v6.field_0 as i64 {
                v34 = v10;
                v22 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v34);
            } else {
                v42 = alloc::alloc::Global::alloc_impl(a0) as u64;
                v22 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                v2 = v24;
                *((v42 + 16) as &u64) = v26;
                *(v42 as &i128) = *(&v2.field_0 as &i128);
                v22 = alloc::slice::hack::into_vec(v42, 1);
            }
            v6 = struct5 {
                field_0: v40
                field_1: v39
                field_2: v38
                field_3: v0
                field_4: v1
            };
            return uu_cat::cat_files(v25, v26, &v6);
        },
    }
}
