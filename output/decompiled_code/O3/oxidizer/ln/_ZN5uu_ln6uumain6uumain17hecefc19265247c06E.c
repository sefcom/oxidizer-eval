fn uu_ln::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x6c1]
    let v1: struct56;  // [sp-0x6c0], Other Possible Types: i64
    let v2: i64;  // [sp-0x6b8]
    let v3: struct24;  // [bp-0x688], Other Possible Types: i128
    let v4: i192;  // [sp-0x670], Other Possible Types: struct24
    let v5: i8;  // [bp-0x658]
    let v6: i64;  // [bp-0x648]
    let v9: i192;  // [sp-0x620]
    let v10: struct64;  // [bp-0x608]
    let v11: i320;  // [sp-0x5c8], Other Possible Types: struct56, struct712, Result<struct40, struct16>, struct24, struct9
    let v13: i64;  // [sp-0x2f8], Other Possible Types: struct64, struct712
    let v14: i64;  // [sp-0x2e8]
    let v16: i64;  // rsi
    let v17: i64;  // rdx
    let v18: i64;  // rax
    let v22: i64;  // rax
    let v24: i64;  // r8
    let v25: i64;  // r9

    v9 = format!("{:?}\n\n{:?}", "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    v11 = uu_ln::uu_app(v16, v17);
    v3 = struct24 {
        field_0: v9
        field_16: *((&v9 as &char + 16) as &i64)
    };
    v13 = clap_builder::builder::command::Command::after_help(&v11, &v3);
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v13, a0, a1);
    if v1 == 0x8000000000000000 {
        v18 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        return v18;
    }
    v1 = struct56 {
        field_0: v19
        field_8: v20
        field_16: v6
        field_32: v7
        field_48: v8
    };
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, _ZN5uu_ln9ARG_FILES17hc7049ff41a3ed229E, g_52d598);
    v13 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ln9ARG_FILES17hc7049ff41a3ed229E, g_52d598, &v11);
    if !v13 {
        core::option::unwrap_failed(); /* do not return */
    }
    v10 = struct64 {
        field_0: v13
        field_16: *((&v13 as &char + 16) as &i128)
        field_32: *((&v13 as &char + 32) as &i128)
        field_48: *((&v13 as &char + 48) as &i128)
    };
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v10, v17);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "symbolic");
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "force") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "interactive");
    }
    v11 = uucore::features::backup_control::determine_backup_mode(&v1);
    v18 = v11;
    if !v18 {
        v3 = uucore::features::backup_control::determine_backup_suffix(&v1);
        v6 = v3.field_16;
        v5 = v3;
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "relative");
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v1);
        v22 = clap_builder::parser::error::MatchesError::unwrap(&v11);
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "logical") as i32;
        if !v22 {
            v13 = 0x8000000000000000;
        } else {
            v11 = core::ops::function::FnOnce::call_once(v22);
            v13.field_16 = v11.field_16;
            v13 = v11;
        }
        *(&v11.field_0 as &struct56) = struct56 {
            field_0: v5
            field_16: v6
            field_24: v13
            field_40: v14
            field_48: v19 as u8
            field_49: v19 as u8
            field_50: v0
            field_51: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, &g_416157, 19) as i32 as i8
            field_52: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, &g_41616a, 14) as i32 as i8
            field_53: v12
            field_54: 2
            field_55: v23
        };
        v11.53 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(stack_base + -1728, "verbose") as i8;
        v18 = uu_ln::exec(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), &v11, v14, v24, v25);
    }
    return v18;
}
