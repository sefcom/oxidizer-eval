fn uu_paste::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: Result<struct56, struct16>;  // [bp-0x3a0], Other Possible Types: struct24, struct64
    let v1: struct24;  // [bp-0x3a0], Other Possible Types: struct64
    let v2: u64;  // [bp-0x398]
    let v3: u128;  // [bp-0x390]
    let v4: u128;  // [bp-0x380]
    let v5: u64;  // [bp-0x360]
    let v6: u64;  // [bp-0x358]
    let v7: u128;  // [bp-0x350]
    let v8: u128;  // [bp-0x340]
    let v9: u64;  // [bp-0x330]
    let v10: struct64;  // [bp-0x328]
    let v11: Result<struct40, struct16>;  // [bp-0x2e8], Other Possible Types: struct24, struct56, u8
    let v13: u64;  // rdi
    let v14: u32;  // eax
    let v15: i64;  // r14
    let v16: u8;  // al
    let v17: u64;  // rax

    uu_paste::uu_app(&v11);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v11, a0, a1);
    v13 = v2;
    match v0 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        },
        Ok(_) => {
            v9 = *((&v0 as &char + 48) as &i64);
            v8 = v4;
            v7 = v3;
            v5 = v0 as i64;
            v6 = v2;
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "serial") as i32;
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "delimiters");
            v15 = clap_builder::parser::error::MatchesError::unwrap("delimiters", &v11);
            if v15 {
                v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, "file");
                v0 = clap_builder::parser::error::MatchesError::unwrap("file", &v11);
                if v0.field_0 as i64 {
                    v10 = v1;
                    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v10);
                    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "zero-terminated") as i8;
                    v11 = v1;
                    v17 = uu_paste::paste(&v11, v14 as u64, *((v15 + 8) as &i64), *((v15 + 16) as &i64), (v16 ? 0 : 10));
                    return v17;
                }
            }
            core::option::unwrap_failed(); /* do not return */
        },
    }
}
