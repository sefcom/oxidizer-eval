fn uu_ln::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v1: struct56;  // [bp-0x6c0]
    let v2: u64;  // [bp-0x6b8]
    let v3: struct24;  // [bp-0x688]
    let v5: struct24;  // [bp-0x670]
    let v8: Result<struct56, struct16>;  // [bp-0x658]
    let v9: struct56;  // [bp-0x658]
    let v12: struct24;  // [bp-0x620]
    let v13: struct64;  // [bp-0x608]
    let v14: struct24;  // [bp-0x5c8], Other Possible Types: struct56
    let v15: struct16;  // [bp-0x5c8]
    let v16: u64;  // [bp-0x5c8]
    let v17: u64;  // [bp-0x5c0]
    let v18: i64;  // [bp-0x5b8]
    let v19: u64;  // [bp-0x5b0]
    let v20: void*;  // [bp-0x5a8]
    let v21: u64;  // [bp-0x2f8]
    let v22: struct64;  // [bp-0x2f8]
    let v23: struct64;  // [bp-0x2f8]
    let v24: u64;  // [bp-0x2f0]
    let v25: i64;  // [bp-0x2e8]
    let v26: u64;  // [bp-0x2e0]
    let v28: u64;  // rdx
    let v29: u8;  // al
    let v30: u64;  // r14

    v21 = "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.";
    v24 = <&T as core::fmt::Display>::fmt;
    v25 = "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups";
    v26 = <&T as core::fmt::Display>::fmt;
    v16 = &g_52a480;
    v17 = 2;
    v20 = 0;
    v18 = &v21;
    v19 = 2;
    v14 = core::option::Option<T>::map_or_else(v28);
    uu_ln::uu_app(&v14);
    v3 = v12;
    clap_builder::builder::command::Command::after_help(&v21, &v14, &v3);
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v21, a0, a1);
    match v8 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        },
        Ok(v1) => {
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, _ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E.field_0, g_52ce70.field_0);
            v22 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E.field_0, g_52ce70.field_0, &v14);
            if !v22.field_0 as i64 {
                core::option::unwrap_failed(); /* do not return */
            }
            v13 = v23;
            v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13);
            v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "symbolic") as i32 as i8;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "force") as i8 {
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "interactive");
            }
            v15 = uucore::features::backup_control::determine_backup_mode(&v1);
            return v30;
        },
    }
}
