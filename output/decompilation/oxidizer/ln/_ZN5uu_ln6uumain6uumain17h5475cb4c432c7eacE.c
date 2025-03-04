fn uu_ln::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x6c1]
    let v1: struct56;  // [bp-0x6c0], Other Possible Types: unsigned long
    let v2: i64;  // [sp-0x6b8]
    let v3: struct24;  // [sp-0x688], Other Possible Types: String
    let v4: struct24;  // [sp-0x670]
    let v5: iNone;  // [sp-0x658], Other Possible Types: struct24, char
    let v7: i64;  // [sp-0x648]
    let v10: String;  // [sp-0x620]
    let v11: struct64;  // [sp-0x608]
    let v12: Result<struct40, struct8>;  // [sp-0x5c8], Other Possible Types: struct712, unsigned long, struct56, int, struct24
    let v13: i64;  // [sp-0x5b8]
    let v14: iNone;  // [bp-0x5b0]
    let v15: i64;  // [sp-0x5a0]
    let v16: i8;  // [sp-0x598]
    let v17: i8;  // [sp-0x597]
    let v18: i8;  // [sp-0x596]
    let v19: i8;  // [sp-0x595]
    let v20: i8;  // [sp-0x594]
    let v21: i8;  // [sp-0x593]
    let v22: i8;  // [sp-0x592]
    let v23: i8;  // [sp-0x591]
    let v24: iNone;  // [sp-0x2f8], Other Possible Types: struct64, unsigned long, struct24
    let v25: i64;  // [sp-0x2f8], Other Possible Types: struct712
    let v26: i64;  // [sp-0x2e8]
    let v30: i64;  // r14
    let v32: i64;  // r14
    let v33: i8;  // r13b
    let v35: i64;  // rax
    let v36: i8;  // r14b
    let v37: i64;  // r14

    v10 = format!("{}

{}", "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    v12 = uu_ln::uu_app();
    v3 = v10;
    v25 = clap_builder::builder::command::Command::after_help(&v12, &v3);
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v25, a0, a1);
    if v1 == 0x8000000000000000 {
        v30 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        return v30;
    }
    v1 = struct56 {
        field_0: v28
        field_8: v29
        field_16: *(&v7 as &i128)
        field_32: *(&v8 as &i128)
        field_48: *(&v9 as &i64)
    };
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, _ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E, g_52ce70);
    v24 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E, g_52ce70, &v12);
    if !v25 {
        core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/ln/src/ln.rs"); /* do not return */
    }
    v11 = v24;
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v11);
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "force") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "interactive");
    }
    v12 = uucore::features::backup_control::determine_backup_mode(&v1);
    v32 = v12;
    if v32 {
        v30 = v32;
        return v30;
    }
    v33 = *((&v12 as &char + 8) as &i8);
    v3 = uucore::features::backup_control::determine_backup_suffix(&v1);
    v5 = v3;
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v1);
    v35 = clap_builder::parser::error::MatchesError::unwrap("target-directory", &v12);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "logical") as i32;
    if !v35 {
        v36 = v33;
        v24 = 0x8000000000000000;
    } else {
        v12 = core::ops::function::FnOnce::call_once(v35);
        v36 = v33;
        v24 = v12;
    }
    v22 = 2;
    v23 = v36;
    v12 = v5;
    v13 = v7;
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "symbolic") as i32;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "relative") as i32;
    v18 = v0;
    *(&v14 as &i128) = v24 as i128;
    v15 = v26;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "no-target-directory") as i32;
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "no-dereference") as i32;
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "verbose") as i8;
    v30 = v37;
    return v30;
}
