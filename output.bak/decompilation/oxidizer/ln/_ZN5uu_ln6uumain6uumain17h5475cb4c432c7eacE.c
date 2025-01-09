fn uu_ln::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x6c1]
    let v1: struct56;  // [sp-0x6c0]
    let v2: i64;  // [sp-0x6b8]
    let v3: struct24;  // [bp-0x688]
    let v4: struct24;  // [sp-0x670], Other Possible Types: i192
    let v5: struct24;  // [sp-0x658], Other Possible Types: Result<struct56, struct8>
    let v9: struct64;  // [bp-0x608]
    let v10: i5696;  // [sp-0x5c8], Other Possible Types: struct56, Result<struct16, struct1>, struct712
    let v11: i64;  // [sp-0x5c0]
    let v12: i64;  // [sp-0x5b8]
    let v13: i64;  // [sp-0x5b0]
    let v14: i64;  // [sp-0x5a8]
    let v15: i8;  // [sp-0x593]
    let v16: i64;  // [sp-0x2f8], Other Possible Types: struct64, struct712
    let v17: i64;  // [sp-0x2f0]
    let v18: i64;  // [sp-0x2e8]
    let v19: i64;  // [sp-0x2e0]
    let v21: i64;  // rax

    v16 = "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.";
    v17 = <&T as core::fmt::Display>::fmt;
    v18 = "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups";
    v19 = <&T as core::fmt::Display>::fmt;
    v10 = &g_52a480;
    v11 = 2;
    v14 = 0;
    v12 = &v16;
    v13 = 2;
    core::option::Option<T>::map_or_else();
    v10 = uu_ln::uu_app();
    v3 = struct24 {
        field_0: v7
        field_16: v8
    };
    v16 = clap_builder::builder::command::Command::after_help(&v10, &v3);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v16, a0, a1);
    match v5 {
        Err(_) => {
            v21 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
            return v21;
        },
        Ok(_) => {
            v1 = struct56 {
                field_0: v22
                field_8: v23
                field_16: *((&v5 as &char + 16) as &i128)
                field_32: *((&v5 as &char + 32) as &i128)
                field_48: *((&v5 as &char + 48) as &i64)
            };
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, _ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E, g_52ce70);
            v16 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E, g_52ce70, &v10);
            if !v16 {
                core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/ln/src/ln.rs"); /* do not return */
            }
            v9 = struct64 {
                field_0: v16
                field_16: *((&v16 as &char + 16) as &i128)
                field_32: *((&v16 as &char + 32) as &i128)
                field_48: *((&v16 as &char + 48) as &i128)
            };
            v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "symbolic");
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "force") as i8 {
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "interactive");
            }
            v10 = uucore::features::backup_control::determine_backup_mode(&v1);
            v21 = v10;
            if !v21 {
                v3 = uucore::features::backup_control::determine_backup_suffix(&v1);
                v5 = v3;
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "relative");
                v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v1);
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "logical") as i32 as i8;
                if !clap_builder::parser::error::MatchesError::unwrap("target-directory", &v10) {
                    v16 = 0x8000000000000000;
                } else {
                    core::ops::function::FnOnce::call_once();
                    v18 = v12;
                    v16 = v10;
                }
                *(&v10.field_0 as &struct56) = struct56 {
                    field_0: v5
                    field_16: v6
                    field_24: v16
                    field_40: v18
                    field_48: v22 as u8
                    field_49: v22 as u8
                    field_50: v0
                    field_51: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, &g_415e4f, 19) as i32 as i8
                    field_52: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, &g_415e62, 14) as i32 as i8
                    field_53: v15
                    field_54: 2
                    field_55: v25
                };
                v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "verbose") as i8;
                v21 = uu_ln::exec(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), &v10);
            }
            return v21;
        },
    }
}
