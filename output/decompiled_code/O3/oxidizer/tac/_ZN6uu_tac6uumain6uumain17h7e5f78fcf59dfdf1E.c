fn uu_tac::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3b0]
    let v1: i64;  // [sp-0x3a8]
    let v2: i128;  // [sp-0x3a0]
    let v3: i128;  // [sp-0x390]
    let v4: i64;  // [sp-0x380]
    let v5: i8;  // [bp-0x378], Other Possible Types: struct64
    let v6: i8;  // [bp-0x370]
    let v7: i8;  // [bp-0x368]
    let v8: i8;  // [bp-0x358]
    let v9: i8;  // [bp-0x348]
    let v10: struct64;  // [bp-0x338]
    let v11: i448;  // [sp-0x2f8], Other Possible Types: struct24, struct712, struct56, Result<struct40, struct16>
    let v13: i64;  // rdx
    let v16: i32;  // eax
    let v17: i32;  // eax
    let v18: i64;  // rax
    let v19: i64;  // r14
    let v20: i64;  // r15
    let v21: i64;  // rax

    v11 = uu_tac::uu_app(a1, v13);
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v11, a0, a1);
    if v0 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    v4 = v9;
    v3 = v8;
    v2 = v7;
    v0 = v5;
    v1 = v6;
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options6BEFORE17hd7f3ce1de04110beE, g_6c93b0) as i32;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options5REGEX17h5156555b6dd4fcdeE, g_6c93c0) as i32;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0, _ZN6uu_tac7options9SEPARATOR17h10a4faf3cacfc3c0E, g_6c93d0);
    v18 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options9SEPARATOR17h10a4faf3cacfc3c0E, g_6c93d0, &v11);
    if !v18 {
        v20 = &g_464082;
        v19 = 1;
    } else {
        v19 = *((v18 + 16) as &i64);
        v20 = (!v19 ? *((v18 + 8) as &i64) : &g_4640a7);
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN6uu_tac7options4FILE17h29855ddd5738375dE, g_6c93e0);
    v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options4FILE17h29855ddd5738375dE, g_6c93e0, &v11);
    if v5 {
        v10 = struct64 {
            field_0: v5
            field_16: *((&v5 as &char + 16) as &i128)
            field_32: *((&v5 as &char + 32) as &i128)
            field_48: *((&v5 as &char + 48) as &i128)
        };
        v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v10, v13);
    } else {
        v21 = alloc::alloc::Global::alloc_impl();
        *(v21 as &&i64) = &g_4640a8;
        *((v21 + 8) as &i64) = 1;
        v11 = alloc::slice::hack::into_vec(v21, 1);
    }
    return uu_tac::tac(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), v16, v17, v20, v19 + (v19 < 1));
}
