fn uu_paste::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x360], Other Possible Types: struct64
    let v1: struct24;  // [bp-0x360], Other Possible Types: u512
    let v2: u64;  // [bp-0x358]
    let v3: iNone;  // [bp-0x350]
    let v4: iNone;  // [bp-0x340]
    let v5: i8;  // [bp-0x330]
    let v6: u64;  // [bp-0x320]
    let v7: u64;  // [bp-0x318]
    let v8: iNone;  // [bp-0x310]
    let v9: iNone;  // [bp-0x300]
    let v10: u64;  // [bp-0x2f0]
    let v11: Result<struct40, struct16>;  // [bp-0x2e8], Other Possible Types: struct24, struct56, struct64, struct712
    let v13: u64;  // rdi
    let v14: u32;  // eax
    let v15: i64;  // r14
    let v16: u8;  // al
    let v17: u64;  // rax

    v11 = uu_paste::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v11, a0, a1);
    v13 = v2;
    if (((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
    }
    v10 = *(&v5 as &i64);
    v9 = v4;
    v8 = v3;
    v6 = v0.field_0;
    v7 = v2;
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "serial");
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6);
    v15 = clap_builder::parser::error::MatchesError::unwrap(&v11);
    if v15 {
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6);
        v0 = clap_builder::parser::error::MatchesError::unwrap(&v11);
        if v0.field_0 as i64 {
            v11 = v1;
            core::iter::traits::iterator::Iterator::collect(&v0, &v11);
            v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "zero-terminated");
            v11 = v1;
            v17 = uu_paste::paste(&v11, v14, *((v15 + 8) as &i64), *((v15 + 16) as &i64), (v16 ? 0 : 10));
            return v17;
        }
    }
    core::option::unwrap_failed(); /* do not return */
}
