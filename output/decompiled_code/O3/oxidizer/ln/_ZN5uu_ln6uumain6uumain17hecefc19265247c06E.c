fn uu_ln::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x6c1]
    let v1: struct56;  // [sp-0x6c0]
    let v2: i64;  // [sp-0x6b8]
    let v3: i192;  // [bp-0x688], Other Possible Types: struct24
    let v4: struct24;  // [sp-0x670], Other Possible Types: i192
    let v5: i192;  // [sp-0x658], Other Possible Types: Result<struct56, struct16>
    let v6: i192;  // [sp-0x620]
    let v7: i512;  // [bp-0x608]
    let v8: i5696;  // [sp-0x5c8], Other Possible Types: Result<struct40, struct16>, struct712, struct56, struct24
    let v9: i5696;  // [sp-0x2f8], Other Possible Types: struct64, struct712
    let v10: i64;  // [sp-0x2e8]
    let v12: i64;  // rsi
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v18: i64;  // rax
    let v19: i64;  // r8
    let v20: i64;  // r9

    v6 = format!("{:?}\n\n{:?}", "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    v8 = uu_ln::uu_app(v12, v13);
    v3 = v6;
    v9 = clap_builder::builder::command::Command::after_help(&v8, &v3);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v9, a0, a1);
    match v5 {
        Err(_) => {
            v14 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
            return v14;
        },
        Ok(_) => {
            v1 = struct56 {
                field_0: v15
                field_8: v16
                field_16: *((&v5 as &char + 16) as &i128)
                field_32: *((&v5 as &char + 32) as &i128)
                field_48: *((&v5 as &char + 48) as &i64)
            };
            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, _ZN5uu_ln9ARG_FILES17hc7049ff41a3ed229E, g_52d598);
            v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ln9ARG_FILES17hc7049ff41a3ed229E, g_52d598, &v8);
            if !v9 {
                core::option::unwrap_failed(); /* do not return */
            }
            v7 = v9;
            v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v7, v13);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "symbolic");
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "force") as i8 {
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "interactive");
            }
            v8 = uucore::features::backup_control::determine_backup_mode(&v1);
            v14 = v8;
            if !v14 {
                v3 = uucore::features::backup_control::determine_backup_suffix(&v1);
                v5 = v3;
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "relative");
                v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v1);
                v18 = clap_builder::parser::error::MatchesError::unwrap(&v8);
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "logical") as i32 as i8;
                if !v18 {
                    v9 = 0x8000000000000000;
                } else {
                    v8 = core::ops::function::FnOnce::call_once(v18);
                    v9 = v8;
                }
                v8 = v5;
                v14 = uu_ln::exec(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), &v8, v10, v19, v20);
            }
            return v14;
        },
    }
}
