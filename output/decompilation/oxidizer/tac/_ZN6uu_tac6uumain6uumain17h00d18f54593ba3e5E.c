fn uu_tac::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x3a8]
    let v1: u64;  // [bp-0x3a0]
    let v2: iNone;  // [bp-0x398]
    let v3: iNone;  // [bp-0x388]
    let v4: u64;  // [bp-0x378]
    let v5: struct16;  // [bp-0x370]
    let v6: u64;  // [bp-0x370]
    let v7: u64;  // [bp-0x368]
    let v8: iNone;  // [bp-0x360]
    let v9: iNone;  // [bp-0x350]
    let v10: u64;  // [bp-0x340]
    let v11: struct64;  // [bp-0x338]
    let v12: Result<struct40, struct16>;  // [bp-0x2f8], Other Possible Types: struct56, struct712, u64
    let v13: i64;  // [bp-0x2f0]
    let v14: u64;  // [bp-0x2e8]
    let v16: u64;  // rdi
    let v17: u32;  // eax
    let v18: u32;  // eax
    let v19: i64;  // rax
    let v20: u64;  // r14
    let v21: u64;  // r15
    let v22: i64;  // r12
    let v23: u64;  // rsi
    let v25: u64;  // rax

    v12 = uu_tac::uu_app();
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v12, a0, a1);
    v16 = v7;
    if (((0 ^ v5.field_0) & (0 ^ -(v6))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    v4 = v10;
    v3 = v9;
    v2 = v8;
    v0 = v5.field_0;
    v1 = v7;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options6BEFORE17he901c51c52bd38a8E.field_0, g_633a60.field_0);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options5REGEX17he1f2cca616d7d76cE.field_0, g_633a70.field_0);
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0, _ZN6uu_tac7options9SEPARATOR17h21d83d77c6ea9ab2E.field_0, g_633a80.field_0);
    v19 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options9SEPARATOR17h21d83d77c6ea9ab2E.field_0, g_633a80.field_0, &v12);
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN6uu_tac7options4FILE17hbfbba63fbacf671bE.field_0, g_633a90.field_0);
    v11 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options4FILE17hbfbba63fbacf671bE.field_0, g_633a90.field_0, &v12);
    if v11.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v12, &v11);
        v22 = v13;
        v23 = v14;
    } else {
        v22 = alloc::alloc::Global::alloc_impl(8, 16);
        *(v22 as &&u8) = &g_451e6c;
        *((v22 + 8) as &i64) = 1;
        v12 = 1;
        v13 = v22;
        v14 = 1;
        v23 = 1;
    }
    v25 = uu_tac::tac(v22, v23, v17, v18, v21, v20 + (v20 < 1));
    return v25;
}
