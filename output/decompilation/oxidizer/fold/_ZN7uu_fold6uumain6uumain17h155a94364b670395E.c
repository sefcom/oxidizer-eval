fn uu_fold::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: iNone;  // [sp-0x438]
    let v1: i64;  // [sp-0x428]
    let v2: struct24;  // [sp-0x418]
    let v3: Result<struct8, struct1>;  // [sp-0x400], Other Possible Types: char, struct64
    let v4: i8;  // [bp-0x3f8]
    let v5: i8;  // [bp-0x3f0]
    let v6: i8;  // [bp-0x3e0]
    let v7: i8;  // [bp-0x3d0]
    let v8: i64;  // [sp-0x3c0]
    let v9: i64;  // [sp-0x3b8]
    let v10: iNone;  // [sp-0x3b0]
    let v11: iNone;  // [sp-0x3a0]
    let v12: i64;  // [sp-0x390]
    let v13: iNone;  // [sp-0x388]
    let v14: i64;  // [sp-0x378]
    let v15: iNone;  // [sp-0x368]
    let v16: i64;  // [sp-0x358]
    let v17: iNone;  // [sp-0x348]
    let v18: struct64;  // [sp-0x338]
    let v19: i64;  // [sp-0x2f8], Other Possible Types: struct24, struct712, struct56, struct48, Result<struct40, struct8>
    let v20: struct24;  // [sp-0x2f8], Other Possible Types: int
    let v21: iNone;  // [sp-0x2f0]
    let v27: i64;  // r15
    let v28: i64;  // rax
    let v29: i64;  // r14
    let v31: i64;  // r15
    let v32: i64;  // r14

    v2 = uucore::Args::collect_lossy(a0, a1);
    v19 = uu_fold::handle_obsolete(*((&v2.field_0 as &char + 8) as &i64), v2.field_16);
    v14 = v19.field_16;
    v13 = v19.field_0;
    v1 = v19.field_40;
    v0 = v19.field_24;
    v19 = uu_fold::uu_app();
    v15 = v13 as i192;
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v19, &v15);
    if v8 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v32;
    }
    v12 = *(&v7 as &i64);
    v11 = *(&v6 as &i128);
    v10 = *(&v5 as &i128);
    v8 = *(&v3 as &i64);
    v9 = *(&v4 as &i64);
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, "width");
    v27 = clap_builder::parser::error::MatchesError::unwrap("width", &v19);
    if v27 {
        v19 = <alloc::string::String as core::clone::Clone>::clone(v27);
        v28 = v19;
        v17 = v21;
    } else {
        v28 = v0 as i64;
        v17 = (&v0)[8] as i128;
        v29 = 80;
        if v28 == 0x8000000000000000 {
            goto LABEL_464b2c;
        }
    }
    v19 = v28;
    v21 = v17;
    v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v21 as i64, (&v21)[8] as i64);
    if !v3 as i8 {
        v29 = *((&v3 as &char + 8) as &i64);
    } else if !uu_fold::uumain::uumain::{{closure}}(v21 as i64, (&v21)[8] as i64, *((&v3 as &char + 1) as &i8)) {
        v29 = &g_517fb8;
    } else if !v27 {
        return v32;
    } else {
        return v32;
    }
LABEL_464b2c:
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, "file");
    v3 = clap_builder::parser::error::MatchesError::unwrap("file", &v19);
    if v3.field_0 as i64 {
        v18 = v3;
        v20 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18);
    } else {
        v31 = alloc::alloc::Global::alloc_impl(24);
        v19 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v15 = v20;
        *((v31 + 16) as &unsigned long) = v16;
        *(v31 as void*) = v15;
        v20 = alloc::slice::hack::into_vec(v31);
    }
    uu_fold::fold((&v20)[8] as i64, (&v20)[16] as i64, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "bytes") as i32, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "spaces") as i32, v29);
    return v32;
}
