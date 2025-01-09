fn uu_ln::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x6c1]
    let v1: struct56;  // [sp-0x6c0], Other Possible Types: i64
    let v2: i64;  // [sp-0x6b8]
    let v3: i192;  // [sp-0x688], Other Possible Types: struct24
    let v4: i192;  // [sp-0x670], Other Possible Types: struct24
    let v5: i8;  // [bp-0x658], Other Possible Types: struct24
    let v10: i8;  // [bp-0x620]
    let v11: i512;  // [sp-0x608], Other Possible Types: struct64
    let v12: i448;  // [sp-0x5c8], Other Possible Types: Result<struct16, struct1>, struct56, struct712
    let v13: i64;  // [sp-0x5c0]
    let v14: i64;  // [sp-0x5b8]
    let v15: i64;  // [sp-0x5b0]
    let v16: i64;  // [sp-0x5a8]
    let v17: i128;  // [sp-0x2f8], Other Possible Types: struct64, struct712
    let v18: i64;  // [sp-0x2f0]
    let v19: i64;  // [sp-0x2e8]
    let v20: i64;  // [sp-0x2e0]
    let v24: i64;  // rax

    v17 = "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.";
    v18 = <&T as core::fmt::Display>::fmt;
    v19 = "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups";
    v20 = <&T as core::fmt::Display>::fmt;
    v12 = &g_52a480;
    v13 = 2;
    v16 = 0;
    v14 = &v17;
    v15 = 2;
    core::option::Option<T>::map_or_else();
    v12 = uu_ln::uu_app();
    v3 = v10;
    v17 = clap_builder::builder::command::Command::after_help(&v12, &v3);
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v17, a0, a1);
    if v1 == 0x8000000000000000 {
        v24 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        return v24;
    }
    v1 = struct56 {
        field_0: v22
        field_8: v23
        field_16: v7
        field_32: v8
        field_48: v9
    };
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, _ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E, g_52ce70);
    v17 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E, g_52ce70, &v12);
    if !v17 {
        core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/ln/src/ln.rs"); /* do not return */
    }
    v11 = v17;
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v11);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "symbolic");
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "force") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "interactive");
    }
    v12 = uucore::features::backup_control::determine_backup_mode(&v1);
    if v12 {
        return v24;
    }
    v3 = uucore::features::backup_control::determine_backup_suffix(&v1);
    v5 = v3;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "relative");
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v1);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "logical") as i32;
    if !clap_builder::parser::error::MatchesError::unwrap("target-directory", &v12) {
        v17 = 0x8000000000000000;
    } else {
        core::ops::function::FnOnce::call_once();
        v19 = v14;
        v17 = v12;
    }
    v12 = v5;
    uu_ln::exec(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), &v12);
    return v24;
}
