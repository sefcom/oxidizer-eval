fn uu_tac::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3b0]
    let v1: i64;  // [sp-0x3a8]
    let v2: i128;  // [sp-0x3a0]
    let v3: i128;  // [sp-0x390]
    let v4: i64;  // [sp-0x380]
    let v5: i512;  // [sp-0x378], Other Possible Types: struct64, Result<struct56, struct16>
    let v6: i512;  // [bp-0x338]
    let v7: i320;  // [sp-0x2f8], Other Possible Types: struct24, struct56, struct712, Result<struct40, struct16>
    let v9: i64;  // rdx
    let v12: i32;  // eax
    let v13: i32;  // eax
    let v14: i64;  // rax
    let v15: i64;  // r14
    let v16: i64;  // r15
    let v17: i64;  // rax

    v7 = uu_tac::uu_app(a1, v9);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v7, a0, a1);
    if v0 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    v4 = *((&v5 as &char + 48) as &i64);
    v3 = *((&v5 as &char + 32) as &i128);
    v2 = *((&v5 as &char + 16) as &i128);
    v0 = v5;
    v1 = *((&v5 as &char + 8) as &i64);
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options6BEFORE17hd7f3ce1de04110beE, g_6c93b0) as i32;
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options5REGEX17h5156555b6dd4fcdeE, g_6c93c0) as i32;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0, _ZN6uu_tac7options9SEPARATOR17h10a4faf3cacfc3c0E, g_6c93d0);
    v14 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options9SEPARATOR17h10a4faf3cacfc3c0E, g_6c93d0, &v7);
    if !v14 {
        v16 = &g_464082;
        v15 = 1;
    } else {
        v15 = *((v14 + 16) as &i64);
        v16 = (!v15 ? *((v14 + 8) as &i64) : &g_4640a7);
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN6uu_tac7options4FILE17h29855ddd5738375dE, g_6c93e0);
    v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options4FILE17h29855ddd5738375dE, g_6c93e0, &v7);
    if v5 {
        v6 = v5;
        v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v6, v9);
    } else {
        v17 = alloc::alloc::Global::alloc_impl();
        *(v17 as &&i64) = &g_4640a8;
        *((v17 + 8) as &i64) = 1;
        v7 = alloc::slice::hack::into_vec(v17, 1);
    }
    return uu_tac::tac(*((&v7 as &char + 8) as &i64), *((&v7 as &char + 16) as &i64), v12, v13, v16, v15 + (v15 < 1));
}
