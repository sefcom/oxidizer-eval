fn uu_ln::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x662]
    let v1: u8;  // [bp-0x661]
    let v2: struct24;  // [bp-0x660], Other Possible Types: struct56
    let v3: u64;  // [bp-0x658]
    let v4: u64;  // [bp-0x628]
    let v5: u64;  // [bp-0x620]
    let v6: u64;  // [bp-0x618]
    let v7: alloc::string::String;  // [bp-0x610]
    let v8: struct16;  // [bp-0x610], Other Possible Types: struct24
    let v9: struct56;  // [bp-0x610], Other Possible Types: u64
    let v10: &u64;  // [bp-0x608]
    let v11: u64;  // [bp-0x5d8]
    let v12: u64;  // [bp-0x5d0]
    let v13: Result<struct16, struct9>;  // [bp-0x5c8], Other Possible Types: struct64, struct712, struct56
    let v14: Result<struct40, struct16>;  // [bp-0x5c8]
    let v15: alloc::string::String;  // [bp-0x5c8]
    let v16: u64;  // [bp-0x5c0]
    let v17: u64;  // [bp-0x5b8]
    let v18: struct64;  // [bp-0x2f8]
    let v19: struct24;  // [bp-0x2f8]
    let v20: struct712;  // [bp-0x2f8]
    let v21: u128;  // [bp-0x2d8]
    let v23: iNone;  // xmm0
    let v24: iNone;  // xmm1
    let v25: u8;  // al
    let v26: u8;  // al
    let v27: u64;  // rax
    let v28: core::fmt::rt::Argument;  // r15
    let v29: u8;  // al
    let v30: u8;  // al
    let v31: u8;  // al

    v7 = format!("{}\n\n{}", "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    v13 = uu_ln::uu_app();
    v2 = v8;
    v20 = clap_builder::builder::command::Command::after_help(&v13, &v2);
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v20, a0, a1);
    if (((0 ^ v8.field_0) & (0 ^ -(v9))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
    }
    v2 = v9;
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, _ZN5uu_ln9ARG_FILES17h84188de9ed3f1679E.field_0, g_4f5f60.field_0);
    v18 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ln9ARG_FILES17h84188de9ed3f1679E.field_0, g_4f5f60.field_0, &v13);
    core::option::unwrap(v18);
    v23 = v18.field_0;
    v24 = v18.field_16;
    v13 = struct64 {
        field_0: v23
        field_16: v24
        field_32: v21
        field_48: v18.field_48
    };
    core::iter::traits::iterator::Iterator::collect(&v8, &v13);
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "symbolic");
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "force") {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "interactive");
    }
    v13 = uucore::features::backup_control::determine_backup_mode(&v2);
    match v13 {
        Ok(_) => {
            return v13 as i64;
        },
        Err(_) => {
            v19 = uucore::features::backup_control::determine_backup_suffix(&v2);
            v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "logical") as u32 as u8;
            v12 = v19.field_16;
            v6 = <&T as core::fmt::Display>::fmt;
            v5 = v19.field_0;
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "relative") as u8;
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2);
            v27 = clap_builder::parser::error::MatchesError::unwrap(&v14);
            v0 = v26;
            if v27 {
                v15 = <alloc::string::String as core::clone::Clone>::clone(v27);
                v28 = v15.vec.buf.inner.cap.__0;
                v4 = v16;
                v11 = v17;
            }
            v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "no-target-directory") as u32 as u8;
            v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "no-dereference") as u32 as u8;
            v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "verbose") as u8;
            v13 = struct56 {
                field_0: v5
                field_8: <&T as core::fmt::Display>::fmt
                field_16: v12
                field_24: v28
                field_32: v4
                field_40: v11
                field_48: v25
                field_49: v1
                field_50: v0
                field_51: v29
                field_52: v30
                field_53: v31
                field_54: 2
                field_55: *((&v14 as &char + 8) as &i8)
            };
            return uu_ln::exec(v10, v7.vec.len, &v13);
        },
    }
}
