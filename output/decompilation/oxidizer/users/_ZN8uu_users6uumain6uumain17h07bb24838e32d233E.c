fn uu_users::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u128;  // [bp-0x618]
    let v1: u64;  // [bp-0x610]
    let v2: u64;  // [bp-0x608]
    let v3: u128;  // [bp-0x5f8]
    let v4: struct16;  // [bp-0x5f8]
    let v5: struct56;  // [bp-0x5f8]
    let v6: u64;  // [bp-0x5e8]
    let v7: struct712;  // [bp-0x5b0], Other Possible Types: Result<struct40, struct16>
    let v8: u64;  // [bp-0x5a0]
    let v9: struct56;  // [bp-0x2e8], Other Possible Types: struct712
    let v10: u64;  // [bp-0x2e0]
    let v12: i64;  // rax
    let v13: u64;  // rdi
    let v14: u64;  // rsi
    let v16: u32;  // edx

    v9 = uu_users::uu_app();
    uu_users::get_long_usage(&v0);
    v7 = clap_builder::builder::command::Command::after_help(&v9, &v0);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v7, a0, a1);
    if (((0 ^ v4.field_0) & (0 ^ -(v4.field_0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
    }
    v9 = v5;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, _ZN8uu_users8ARG_FILE17h5581d6ea30a34740E.field_0, g_4dc428.field_0);
    v12 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_users8ARG_FILE17h5581d6ea30a34740E.field_0, g_4dc428.field_0, &v7);
    core::iter::traits::iterator::Iterator::collect(&v7, uucore::features::utmpx::Utmpx::iter_all_records_from(v13, v14), v16 & 1);
    v2 = v8;
    v0 = v7 as i128;
    if !v8 {
        return 0;
    }
    alloc::slice::stable_sort(v1, v8);
    v7 = alloc::str::join_generic_copy(v1, v8);
    v6 = v8;
    v3 = v7 as i128;
    println!("{}", &v3);
    return 0;
}
