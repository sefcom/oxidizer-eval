fn uu_tac::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3b0]
    let v1: i64;  // [sp-0x3a8]
    let v2: iNone;  // [sp-0x3a0]
    let v3: iNone;  // [sp-0x390]
    let v4: i64;  // [sp-0x380]
    let v5: i8;  // [sp-0x378], Other Possible Types: struct64
    let v6: i8;  // [bp-0x370]
    let v7: i8;  // [bp-0x368]
    let v8: i8;  // [bp-0x358]
    let v9: i8;  // [bp-0x348]
    let v10: struct64;  // [sp-0x338]
    let v11: struct56;  // [sp-0x2f8], Other Possible Types: struct712, Result<struct40, struct8>
    let v12: struct24;  // [sp-0x2f8], Other Possible Types: int
    let v16: i32;  // eax
    let v17: i32;  // eax
    let v18: i64;  // rax
    let v19: i64;  // r14
    let v20: i64;  // r15
    let v21: i64;  // rax

    v11 = uu_tac::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v11, a0, a1);
    if v0 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    v4 = *(&v9 as &i64);
    v3 = *(&v8 as &i128);
    v2 = *(&v7 as &i128);
    v0 = *(&v5 as &i64);
    v1 = *(&v6 as &i64);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options6BEFORE17h5ea3e93d3c7a2a31E, g_6c8d68) as i32;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options5REGEX17hba9800e3ae0d6749E, g_6c8d78) as i32;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0, _ZN6uu_tac7options9SEPARATOR17h4e8a4f2b5dbc5554E, g_6c8d88);
    v18 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options9SEPARATOR17h4e8a4f2b5dbc5554E, g_6c8d88, &v11);
    if !v18 {
        v20 = &g_463c02;
        v19 = 1;
    } else {
        v19 = *((v18 + 16) as &i64);
        v20 = (!v19 ? *((v18 + 8) as &i64) : &g_463ca1);
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN6uu_tac7options4FILE17ha26efb49879adcc6E, g_6c8d98);
    v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options4FILE17ha26efb49879adcc6E, g_6c8d98, &v11);
    if v5.field_0 as i64 {
        v10 = v5;
        v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v10);
    } else {
        v21 = alloc::alloc::Global::alloc_impl();
        *(v21 as &&i64) = &g_463ca2;
        *((v21 + 8) as &i64) = 1;
        v12 = alloc::slice::hack::into_vec(v21, 1);
    }
    return uu_tac::tac((&v12)[8] as i64, (&v12)[16] as i64, v16 as u64, v17 as u64, v20, v19 + (v19 < 1));
}
