fn uu_ln::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v1: u128;  // [bp-0x6c0]
    let v2: u64;  // [bp-0x6b8]
    let v3: u8;  // [bp-0x6b0]
    let v4: u128;  // [bp-0x6a0]
    let v5: u64;  // [bp-0x690]
    let v6: u8;  // [bp-0x688]
    let v7: u64;  // [bp-0x678]
    let v8: struct24;  // [bp-0x670]
    let v11: Result<struct56, struct16>;  // [bp-0x658]
    let v12: u128;  // [bp-0x658]
    let v15: u128;  // [bp-0x638]
    let v16: u64;  // [bp-0x628]
    let v17: u8;  // [bp-0x620]
    let v18: u64;  // [bp-0x610]
    let v19: u8;  // [bp-0x608]
    let v20: u8;  // [bp-0x5f8]
    let v21: u128;  // [bp-0x5e8]
    let v22: u8;  // [bp-0x5d8]
    let v23: struct56;  // [bp-0x5c8], Other Possible Types: struct24
    let v24: Result<struct16, struct9>;  // [bp-0x5c8]
    let v25: u64;  // [bp-0x5c8]
    let v26: u64;  // [bp-0x5c0]
    let v27: i64;  // [bp-0x5b8]
    let v28: u64;  // [bp-0x5b0]
    let v29: void*;  // [bp-0x5a8]
    let v30: u64;  // [bp-0x2f8]
    let v31: struct64;  // [bp-0x2f8]
    let v32: u64;  // [bp-0x2f0]
    let v33: i64;  // [bp-0x2e8]
    let v34: u64;  // [bp-0x2e0]
    let v35: u128;  // [bp-0x2d8]
    let v37: u64;  // rdx
    let v38: u8;  // al
    let v39: u64;  // r14

    v30 = "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.";
    v32 = <&T as core::fmt::Display>::fmt;
    v33 = "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups";
    v34 = <&T as core::fmt::Display>::fmt;
    v25 = &g_52a480;
    v26 = 2;
    v29 = 0;
    v27 = &v30;
    v28 = 2;
    v23 = core::option::Option<T>::map_or_else(v37);
    uu_ln::uu_app(&v23);
    v7 = v18;
    memcpy(&v6, &v17, 16);
    clap_builder::builder::command::Command::after_help(&v30, &v23, &v6);
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v30, a0, a1);
    match v11 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        },
        Ok(_) => {
            v5 = v16;
            v4 = v15;
            memcpy(&v3, &v11, 16);
            v1 = v12;
            v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, _ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E.field_0, g_52ce70.field_0);
            v31 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E.field_0, g_52ce70.field_0, &v23);
            if !v31.field_0 as i64 {
                core::option::unwrap_failed(); /* do not return */
            }
            memcpy(&v22, &v31 as u8, 16);
            v21 = v35;
            memcpy(&v20, &v31, 16);
            memcpy(&v19, &v31, 16);
            v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v19 as u128);
            v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "symbolic") as i32 as i8;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "force") as i8 {
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "interactive");
            }
            v24 = uucore::features::backup_control::determine_backup_mode(&v1);
            return v39;
        },
    }
}
