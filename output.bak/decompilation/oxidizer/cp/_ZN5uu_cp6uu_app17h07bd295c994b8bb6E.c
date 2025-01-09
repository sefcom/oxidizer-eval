fn uu_cp::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa70], Other Possible Types: struct592, struct48, struct24
    let v1: i64;  // [sp-0xa68]
    let v2: i64;  // [sp-0xa60]
    let v3: i64;  // [sp-0xa58]
    let v4: i32;  // [sp-0x828]
    let v5: i32;  // [sp-0x824]
    let v6: i4736;  // [sp-0x820], Other Possible Types: struct592, struct712, struct48
    let v7: i32;  // [sp-0x5d8]
    let v8: i32;  // [sp-0x5d4]
    let v9: i64;  // [sp-0x564]
    let v10: i32;  // [sp-0x55c]
    let v11: i4736;  // [sp-0x558], Other Possible Types: struct592, struct712, struct437
    let v12: i64;  // [sp-0x550]
    let v13: i64;  // [sp-0x548]
    let v14: i64;  // [sp-0x540]
    let v15: i64;  // [sp-0x538]
    let v16: i8;  // [bp-0x290]
    let v17: i4736;  // [bp-0x278], Other Possible Types: struct592, struct24, struct8, struct17
    let v19: i64;  // rdx

    v11 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v6 = clap_builder::builder::command::Command::version(&v11, "0.0.28");
    v11 = clap_builder::builder::command::Command::about(&v6, "Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.");
    v0 = uucore::format_usage(&g_42c721, 104);
    v6 = clap_builder::builder::command::Command::override_usage(&v11, &v0);
    v0 = "Do not copy a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If timestamps are being preserved, the comparison is to the\nsource timestamp truncated to the resolutions of the destination file system and of the system calls used to\nupdate timestamps; this avoids duplicate work if several cp -pu commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. Also, if\n--preserve=links is also specified (like with cp -au for example), that will take precedence; consequently,\ndepending on the order that files are processed from the source, newer files in the destination may be replaced,\nto mirror hard links in the source. which gives more control over which existing files in the destination are\nreplaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file.";
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups";
    v3 = <&T as core::fmt::Display>::fmt;
    v11 = &g_5b5bd0;
    v12 = 2;
    v15 = 0;
    v13 = &v0;
    v14 = 2;
    core::option::Option<T>::map_or_else();
    v11 = clap_builder::builder::command::Command::after_help(&v6, &v16);
    memcpy(&v6, &v11, 700);
    v9 = 584115552392 | *((&v11 as &char + 700) as &i64);
    v10 = *((&v11 as &char + 708) as &i32);
    v11 = clap_builder::builder::arg::Arg::new("target-directory");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x74);
    v11 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "no-target-directory");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "target-directory");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "target-directory");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v11, 0x4);
    v17 = struct8 {
        field_0: 3
    };
    v11 = clap_builder::builder::arg::Arg::value_parser(&v0, &v17);
    v0 = clap_builder::builder::arg::Arg::help(&v11, "copy all SOURCE arguments into target-directory");
    v11 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("no-target-directory");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x54);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "no-target-directory");
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v6, "target-directory");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "Treat DEST as a regular file and not a directory");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("interactive");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x69);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "interactive");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v11, "no-clobber");
    v11 = clap_builder::builder::arg::Arg::help(&v0, "ask before overwriting files");
    v0 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("link");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x6c);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "link");
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, "link", 5);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "hard-link files instead of copying");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("no-clobber");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x6e);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "no-clobber");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v11, "interactive");
    v11 = clap_builder::builder::arg::Arg::help(&v0, "don't overwrite a file that already exists");
    v0 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("recursive");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x52);
    v6 = clap_builder::builder::arg::Arg::visible_short_alias(&v0, 0x72);
    v0 = clap_builder::builder::arg::Arg::long(&v6, "recursive");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "copy directories recursively");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("strip-trailing-slashes");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "strip-trailing-slashes");
    v11 = clap_builder::builder::arg::Arg::help(&v0, "remove any trailing slashes from each SOURCE argument");
    v0 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("debug");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "debug");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "explain how a file is copied. Implies -v");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x76);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "explicitly state what is being done");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v17);
    v6 = clap_builder::builder::arg::Arg::new("symbolic-link");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x73);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "symbolic-link");
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, "link", 5);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "make symbolic links instead of copying");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("force");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x66);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "force");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v17);
    v6 = clap_builder::builder::arg::Arg::new("remove-destination");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "remove-destination");
    v6 = clap_builder::builder::arg::Arg::overrides_with(&v0, "force");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v0 = uucore::features::backup_control::arguments::backup();
    v11 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v0 = uucore::features::backup_control::arguments::backup_no_args();
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v0 = uucore::features::backup_control::arguments::suffix();
    v11 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v0 = uucore::features::update_control::arguments::update();
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v0 = uucore::features::update_control::arguments::update_no_args();
    v11 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("reflink");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "reflink");
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "WHEN");
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, "link", 5);
    memcpy(&v6, &v0, 584);
    v7 = 128 | v4;
    v8 = v5;
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v6, "always");
    v6 = struct48 {
        field_0: &g_41e1d8
        field_8: 4
        field_16: &g_42cae7
        field_24: 6
        field_32: &g_42caed
        field_40: 5
    };
    v17 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v6);
    v6 = clap_builder::builder::arg::Arg::value_parser(&v0, &v17);
    v17 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v0 = clap_builder::builder::arg::Arg::num_args(&v6, &v17);
    v17 = clap_builder::builder::arg::Arg::help(&v0, "control clone/CoW copies. See below");
    v6 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v11 = clap_builder::builder::arg::Arg::new("attributes-only");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "attributes-only");
    v11 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, "link", 5);
    v0 = clap_builder::builder::arg::Arg::help(&v11, "Don't copy the file data, just the attributes");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v17);
    v6 = clap_builder::builder::arg::Arg::new("preserve");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "preserve");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::use_value_delimiter(&v6, 0x1);
    v17 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from("mode", 7);
    v6 = clap_builder::builder::arg::Arg::value_parser(&v0, &v17);
    v0 = clap_builder::builder::arg::Arg::num_args(&v6, None);
    memcpy(&v6, &v0, 584);
    v7 = 128 | v4;
    v8 = v5;
    v0 = clap_builder::builder::arg::Arg::value_name(&v6, "ATTR_LIST");
    v6 = clap_builder::builder::arg::Arg::default_missing_value(&v0, "mode,ownership,timestamp");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, all");
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("preserve-default-attributes");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x70);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "preserve-default-attributes");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "same as --preserve=mode,ownership(unix only),timestamps");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v17);
    v6 = clap_builder::builder::arg::Arg::new("no-preserve");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "no-preserve");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::use_value_delimiter(&v6, 0x1);
    v17 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from("mode", 7);
    v6 = clap_builder::builder::arg::Arg::value_parser(&v0, &v17);
    v0 = clap_builder::builder::arg::Arg::num_args(&v6, None);
    memcpy(&v6, &v0, 584);
    v7 = 128 | v4;
    v8 = v5;
    v0 = clap_builder::builder::arg::Arg::value_name(&v6, "ATTR_LIST");
    v17 = clap_builder::builder::arg::Arg::help(&v0, "don't preserve the specified attributes");
    v6 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v11 = clap_builder::builder::arg::Arg::new("parents");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "parents");
    v11 = clap_builder::builder::arg::Arg::alias(&v0, "parent");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "use full source file name under DIRECTORY");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v17);
    v6 = clap_builder::builder::arg::Arg::new("no-dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x50);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "no-dereference");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v6, "dereference");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "never follow symbolic links in SOURCE");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x4c);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "dereference");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v11, "no-dereference");
    v11 = clap_builder::builder::arg::Arg::help(&v0, "always follow symbolic links in SOURCE");
    v0 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("cli-symbolic-links");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x48);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "follow command-line symbolic links in SOURCE");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("archive");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x61);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "archive");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "Same as -dR --preserve=all");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v17);
    v6 = clap_builder::builder::arg::Arg::new("no-dereference-preserve-links");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x64);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "same as --no-dereference --preserve=links");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("one-file-system");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x78);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "one-file-system");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "stay on this file system");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v17);
    v6 = clap_builder::builder::arg::Arg::new("sparse");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "sparse");
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "WHEN");
    v0 = struct48 {
        field_0: &g_42caed
        field_8: 5
        field_16: &g_41e1d8
        field_24: 4
        field_32: &g_42cae7
        field_40: 6
    };
    v17 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v6, &v17);
    v17 = clap_builder::builder::arg::Arg::help(&v0, "control creation of sparse files. See below");
    v6 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v11 = clap_builder::builder::arg::Arg::new("copy-contents");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "copy-contents");
    v11 = clap_builder::builder::arg::Arg::overrides_with(&v0, "attributes-only");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "NotImplemented: copy contents of special files when recursive");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v17);
    v6 = clap_builder::builder::arg::Arg::new("context");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "context");
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "CTX");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "NotImplemented: set SELinux security context of destination file to default type");
    v6 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("progress");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "progress");
    v11 = clap_builder::builder::arg::Arg::short(&v0, 0x67);
    v0 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v17 = clap_builder::builder::arg::Arg::help(&v0, &g_42cea1, 78);
    v11 = clap_builder::builder::command::Command::arg(&v6, &v17);
    v6 = clap_builder::builder::arg::Arg::new("paths");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x1);
    v6 = clap_builder::builder::arg::Arg::num_args(&v0, 0x1);
    memcpy(&v0, &v6, 584);
    v4 = v7 | 1;
    v5 = v8;
    v6 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x2);
    v17 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v6, &v17);
    clap_builder::builder::command::Command::arg(a0, &v11, &v0);
    return a0;
}
