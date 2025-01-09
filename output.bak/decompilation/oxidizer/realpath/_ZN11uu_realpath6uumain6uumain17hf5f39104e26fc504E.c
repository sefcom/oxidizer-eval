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
    let v9: struct56;  // [sp-0x3d8], Other Possible Types: i64
    let v10: i64;  // [sp-0x3d0]
    let v11: Result<struct56, struct8>;  // [sp-0x3a0], Other Possible Types: struct64, i64
    let v13: i192;  // [sp-0x360], Other Possible Types: struct24
    let v14: i64;  // [sp-0x348]
    let v15: i64;  // [sp-0x340]
    let v16: struct64;  // [bp-0x338]
    let v17: i64;  // [sp-0x2f8], Other Possible Types: struct712, struct56, Result<struct48, struct16>
    let v18: i64;  // [sp-0x2f0]
    let v19: i64;  // [sp-0x2e8]
    let v21: i64;  // rax
    let v26: i32;  // r15d
    let v27: struct8;  // rax
    let v29: i64;  // r9
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rdx

    v17 = uu_realpath::uu_app();
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1);
    if v9 == 0x8000000000000000 {
        v21 = alloc::boxed::Box<T>::new(v10, 1);
        return v21;
    }
    v9 = struct56 {
        field_0: v11
        field_8: v12
        field_16: *((&v11 as &char + 16) as &i32)
        field_20: *((&v11 as &char + 20) as &i128)
        field_36: *((&v11 as &char + 36) as &i128)
        field_52: *((&v11 as &char + 52) as &i32)
    };
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E, g_523e38);
    v11 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E, g_523e38, &v17);
    if !v11 {
        core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/realpath/src/realpath.rs"); /* do not return */
    }
    v16 = struct64 {
        field_0: v11
        field_16: *((&v11 as &char + 16) as &i128)
        field_32: *((&v11 as &char + 32) as &i128)
        field_48: *((&v11 as &char + 48) as &i128)
    };
    v13 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v16);
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "canonicalize-existing") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "canonicalize-missing");
    }
    v26 = (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath9OPT_STRIP17ha2783a6f0cb5ee11E, g_523e08) as i32 ? clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath11OPT_LOGICAL17hbce69eac99b6145fE, g_523e28) as i32 + 1 : 0);
    v17 = uu_realpath::prepare_relative_options(&v9, 1, v26);
    v21 = v18;
    if v1 == 9223372036854775809 {
        return v21;
    }
    v6 = *((&v17 as &char + 40) as &i64);
    v5 = *((&v17 as &char + 24) as &i128);
    v1 = v17;
    v2 = v21;
    v3 = v19;
    v7 = *((&v13 as &char + 8) as &i64);
    v8 = v7 + *((&v13 as &char + 16) as &i64) * 24;
    v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v27 {
        return 0;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath9OPT_QUIET17h9225b410354dbc8bE, g_523df8) as i32 {
        do { } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next());
    } else {
        do {
            v29 = 0;
            if v1 != 0x8000000000000000 {
                v29 = v2;
            }
            v31 = 0;
            if v5 != 0x8000000000000000 {
                v31 = *((&v5 as &char + 8) as &i64);
            }
            v0 = v31;
            v32 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_realpath::resolve_path(*((v27 + 8) as &i64), *((v27 + 16) as &i64), (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath8OPT_ZERO17h1b943b2f1083bf62E, g_523e18) as i8 ? 0 : 10), v26, 1, v29, v3, v0, v6), v27);
            if v32 {
                v4 = v32;
                uucore::mods::error::set_exit_code(*((v33 + 96) as &i64)());
                v14 = uucore::util_name();
                v15 = v33;
                eprintln!("{:?}: {:?}", &v14, &v4);
            }
            v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v27);
    }
}
