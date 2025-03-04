fn uu_realpath::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x430]
    let v1: i64;  // [sp-0x428]
    let v2: i64;  // [sp-0x420]
    let v3: i64;  // [sp-0x418]
    let v4: iNone;  // [sp-0x408]
    let v5: i64;  // [sp-0x3f8]
    let v6: iNone;  // [sp-0x3e8]
    let v7: i64;  // [sp-0x3d8], Other Possible Types: int
    let v8: i64;  // [sp-0x3d0]
    let v9: i8;  // [bp-0x3a0], Other Possible Types: unsigned long, struct64
    let v10: struct24;  // [sp-0x360]
    let v11: i64;  // [sp-0x348]
    let v12: i64;  // [sp-0x340]
    let v13: struct64;  // [sp-0x338]
    let v14: struct48;  // [sp-0x2f8], Other Possible Types: struct712, unsigned long, struct56
    let v15: i64;  // [sp-0x2f0]
    let v16: i64;  // [sp-0x2e8]
    let v18: i64;  // rbx
    let v23: i32;  // r15d
    let v24: i64;  // rax
    let v25: i64;  // rbx
    let v26: i64;  // r9
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v29: i64;  // rdx

    v14 = uu_realpath::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v9, &v14, a0, a1);
    if v7 == 0x8000000000000000 {
        v18 = alloc::boxed::Box<T>::new(v8, 1);
        return v18;
    }
    v7 = *(&v9 as &i448);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, _ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E, g_523e38);
    v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E, g_523e38, &v14);
    if !v9 {
        core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/realpath/src/realpath.rs"); /* do not return */
    }
    v13 = v9;
    v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13);
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "canonicalize-existing") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "canonicalize-missing");
    }
    v23 = (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, _ZN11uu_realpath9OPT_STRIP17ha2783a6f0cb5ee11E, g_523e08) as i32 ? clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, _ZN11uu_realpath11OPT_LOGICAL17hbce69eac99b6145fE, g_523e28) as i32 + 1 : 0);
    v14 = uu_realpath::prepare_relative_options(&v7, 1, v23 as u64);
    v18 = v15;
    if v0 == 9223372036854775809 {
        return v18;
    }
    v5 = v14.field_40;
    v4 = *(&v14.field_24 as &i128);
    v0 = v14;
    v1 = v18;
    v2 = v16;
    v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
    if !v24 {
        return 0;
    }
    v25 = v24;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, _ZN11uu_realpath9OPT_QUIET17h9225b410354dbc8bE, g_523df8) as i32 {
        do { } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6));
    } else {
        do {
            v26 = 0;
            if v0 != 0x8000000000000000 {
                v26 = v1;
            }
            v27 = 0;
            if v4 as i64 != 0x8000000000000000 {
                v27 = (&v4)[8] as i64;
            }
            v28 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_realpath::resolve_path(*((v25 + 8) as &i64), *((v25 + 16) as &i64), (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, _ZN11uu_realpath8OPT_ZERO17h1b943b2f1083bf62E, g_523e18) as i8 ? 0 : 10), v23 as u64, 1, v26, v2, v27, v5), v25);
            if v28 {
                v3 = v28;
                uucore::mods::error::set_exit_code(*((v29 + 96) as &i64)());
                v11 = uucore::util_name();
                v12 = v29;
                eprintln!("{}: {}", &v11, &v3);
            }
            v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
        } while (v25);
    }
}
