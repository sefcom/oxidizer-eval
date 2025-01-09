fn uu_tac::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3b0]
    let v1: i64;  // [sp-0x3a8]
    let v2: i128;  // [sp-0x3a0]
    let v3: i128;  // [sp-0x390]
    let v4: i64;  // [sp-0x380]
    let v5: i512;  // [bp-0x378], Other Possible Types: struct64
    let v6: i8;  // [bp-0x370]
    let v7: i8;  // [bp-0x368]
    let v8: i8;  // [bp-0x358]
    let v9: i8;  // [bp-0x348]
    let v10: i512;  // [sp-0x338], Other Possible Types: struct64
    let v11: i192;  // [sp-0x2f8], Other Possible Types: struct24, struct56, struct712, Result<struct40, struct8>
    let v15: i32;  // eax
    let v16: i32;  // eax
    let v17: i64;  // rax
    let v18: i64;  // r14
    let v19: i64;  // r15
    let v20: i64;  // rax

    v11 = uu_tac::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v11, a0, a1);
    if v0 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    v4 = v9;
    v3 = v8;
    v2 = v7;
    v0 = v5;
    v1 = v6;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options6BEFORE17h5ea3e93d3c7a2a31E, g_6c8d68) as i32;
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options5REGEX17hba9800e3ae0d6749E, g_6c8d78) as i32;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0, _ZN6uu_tac7options9SEPARATOR17h4e8a4f2b5dbc5554E, g_6c8d88);
    v17 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options9SEPARATOR17h4e8a4f2b5dbc5554E, g_6c8d88, &v11);
    if !v17 {
        v19 = &g_463c02;
        v18 = 1;
    } else {
        v18 = *((v17 + 16) as &i64);
        v19 = (!v18 ? *((v17 + 8) as &i64) : &g_463ca1);
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN6uu_tac7options4FILE17ha26efb49879adcc6E, g_6c8d98);
    v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options4FILE17ha26efb49879adcc6E, g_6c8d98, &v11);
    if v5 {
        v10 = v5;
        v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v10);
    } else {
        v20 = alloc::alloc::Global::alloc_impl();
        *(v20 as &&i64) = &g_463ca2;
        *((v20 + 8) as &i64) = 1;
        v11 = alloc::slice::hack::into_vec(v20, 1);
    }
    return uu_tac::tac(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), v15, v16, v19, v18 + (v18 < 1));
}
