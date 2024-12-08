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
    let v11: i8;  // [bp-0x3a0], Other Possible Types: struct64
    let v17: i192;  // [sp-0x360], Other Possible Types: struct24
    let v18: i64;  // [sp-0x348]
    let v19: i64;  // [sp-0x340]
    let v20: struct64;  // [bp-0x338]
    let v21: i5696;  // [sp-0x2f8], Other Possible Types: struct712, Result<struct48, struct24>, struct56
    let v22: i64;  // [sp-0x2f0]
    let v23: i64;  // [sp-0x2e8]
    let v25: i64;  // rdx
    let v26: i64;  // rax
    let v31: i32;  // r15d
    let v32: struct8;  // rax
    let v34: i64;  // r9
    let v36: i64;  // rax
    let v37: i64;  // rax

    v21 = uu_realpath::uu_app(a1, v25);
    clap_builder::builder::command::Command::try_get_matches_from(&v11, &v21, a0, a1);
    if v9 == 0x8000000000000000 {
        v26 = alloc::boxed::Box<T>::new(v10, 1);
        return v26;
    }
    v9 = struct56 {
        field_0: v11
        field_8: v12
        field_16: v13
        field_20: v14
        field_36: v15
        field_52: v16
    };
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN11uu_realpath9ARG_FILES17h6f0acf70911afa83E, g_5249b8);
    v11 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_realpath9ARG_FILES17h6f0acf70911afa83E, g_5249b8, &v21);
    if !v11 {
        core::option::unwrap_failed(); /* do not return */
    }
    v20 = struct64 {
        field_0: v11
        field_16: *((&v11 as &char + 16) as &i128)
        field_32: *((&v11 as &char + 32) as &i128)
        field_48: *((&v11 as &char + 48) as &i128)
    };
    v17 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20, v25);
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "canonicalize-existing") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "canonicalize-missing");
    }
    v31 = (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath9OPT_STRIP17h21fa4873878fccccE, g_524988) as i32 ? clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath11OPT_LOGICAL17h2edb0683af1494a7E, g_5249a8) as i32 + 1 : 0);
    v21 = uu_realpath::prepare_relative_options(&v9, 1, v31);
    v26 = v22;
    if v1 == 9223372036854775809 {
        return v26;
    }
    v6 = *((&v21 as &char + 40) as &i64);
    v5 = *((&v21 as &char + 24) as &i128);
    v1 = v21;
    v2 = v26;
    v3 = v23;
    v7 = *((&v17 as &char + 8) as &i64);
    v8 = v7 + *((&v17 as &char + 16) as &i64) * 24;
    v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v32 {
        return 0;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath9OPT_QUIET17he012d263dd697ec7E, g_524978) as i32 {
        do { } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next());
    } else {
        do {
            if v1 != 0x8000000000000000 {
                v34 = v2;
            }
            v36 = 0;
            if v5 != 0x8000000000000000 {
                v36 = *((&v5 as &char + 8) as &i64);
            }
            v0 = v36;
            v37 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_realpath::resolve_path(*((v32 + 8) as &i64), *((v32 + 16) as &i64), (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath8OPT_ZERO17h77ce6c50330cdc80E, g_524998) as i8 ? 0 : 10), v31, 1, v34, v3, v0, v6), v32);
            if v37 {
                v4 = v37;
                *((v25 + 96) as &i64)();
                uucore::mods::error::set_exit_code();
                v18 = uucore::util_name();
                v19 = v25;
                eprintln!("{:?}: {:?}", &v18, &v4);
            }
            v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v32);
    }
}
