fn uu_realpath::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x450]
    let v1: i64;  // [sp-0x430]
    let v2: i64;  // [sp-0x428]
    let v3: i64;  // [sp-0x420]
    let v4: i64;  // [sp-0x418]
    let v5: i128;  // [sp-0x408]
    let v6: i64;  // [sp-0x3f8]
    let v7: i64;  // [sp-0x3e8]
    let v8: i64;  // [sp-0x3e0]
    let v9: i64;  // [sp-0x3d8]
    let v10: i64;  // [sp-0x3d0]
    let v11: i64;  // [bp-0x3a0], Other Possible Types: struct64
    let v12: i192;  // [sp-0x360], Other Possible Types: struct24
    let v13: i64;  // [sp-0x348]
    let v14: i64;  // [sp-0x340]
    let v15: struct64;  // [sp-0x338], Other Possible Types: i512
    let v16: i64;  // [sp-0x2f8], Other Possible Types: struct56, struct712
    let v17: i64;  // [sp-0x2f0]
    let v18: i64;  // [sp-0x2e8]
    let v20: i64;  // rax
    let v25: i32;  // r15d
    let v26: struct8;  // rax
    let v28: i64;  // r9
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rdx

    v16 = uu_realpath::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v11, &v16, a0, a1);
    if v9 == 0x8000000000000000 {
        v20 = alloc::boxed::Box<T>::new(v10, 1);
        return v20;
    }
    v9 = v11;
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E, g_523e38);
    v11 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E, g_523e38, &v16);
    if !v11 {
        core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/realpath/src/realpath.rs"); /* do not return */
    }
    v15 = v11;
    v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v15);
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "canonicalize-existing") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "canonicalize-missing");
    }
    v25 = (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath9OPT_STRIP17ha2783a6f0cb5ee11E, g_523e08) as i32 ? clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath11OPT_LOGICAL17hbce69eac99b6145fE, g_523e28) as i32 + 1 : 0);
    uu_realpath::prepare_relative_options(&v16, &v9, 1, v25);
    v20 = v17;
    if v1 == 9223372036854775809 {
        return v20;
    }
    v6 = *((&v16 as &char + 40) as &i64);
    v5 = *((&v16 as &char + 24) as &i128);
    v1 = v16;
    v2 = v20;
    v3 = v18;
    v7 = *((&v12 as &char + 8) as &i64);
    v8 = v7 + *((&v12 as &char + 16) as &i64) * 24;
    v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v26 {
        return 0;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath9OPT_QUIET17h9225b410354dbc8bE, g_523df8) as i32 {
        do { } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next());
    } else {
        do {
            v28 = 0;
            if v1 != 0x8000000000000000 {
                v28 = v2;
            }
            v30 = 0;
            if v5 != 0x8000000000000000 {
                v30 = *((&v5 as &char + 8) as &i64);
            }
            v0 = v30;
            v31 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_realpath::resolve_path(*((v26 + 8) as &i64), *((v26 + 16) as &i64), (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath8OPT_ZERO17h1b943b2f1083bf62E, g_523e18) as i8 ? 0 : 10), v25, 1, v28, v3, v0, v6), v26);
            if v31 {
                v4 = v31;
                uucore::mods::error::set_exit_code(*((v32 + 96) as &i64)());
                v13 = uucore::util_name();
                v14 = v32;
                eprintln!("{}: {}", &v13, &v4);
            }
            v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v26);
    }
}
