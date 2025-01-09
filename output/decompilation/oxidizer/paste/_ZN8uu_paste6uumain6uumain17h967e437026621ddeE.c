fn uu_paste::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i512;  // [bp-0x3a0], Other Possible Types: struct24, struct64
    let v5: i64;  // [sp-0x360], Other Possible Types: struct56
    let v6: i64;  // [sp-0x358]
    let v7: struct64;  // [sp-0x328], Other Possible Types: i512
    let v8: i192;  // [sp-0x2e8], Other Possible Types: struct712, Result<struct40, struct8>, struct24, struct56
    let v13: i64;  // r14
    let v14: i64;  // rdi

    v8 = uu_paste::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v8, a0, a1);
    if v5 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    v5 = struct56 {
        field_0: v10
        field_8: v11
        field_16: v2
        field_32: v3
        field_48: v4
    };
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "delimiters");
    v13 = clap_builder::parser::error::MatchesError::unwrap("delimiters", &v8);
    if !v13 {
        v14 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/paste/src/paste.rs";
    } else {
        v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, "file");
        v0 = clap_builder::parser::error::MatchesError::unwrap("file", &v8);
        if v0 {
            v7 = v0;
            v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v7);
            v8 = v0;
            return uu_paste::paste(&v8, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "serial") as i32, *((v13 + 8) as &i64), *((v13 + 16) as &i64), (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "zero-terminated") as i8 ? 0 : 10));
        }
        v14 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/paste/src/paste.rs";
    }
    core::option::unwrap_failed(v14); /* do not return */
}
