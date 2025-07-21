fn uu_cp::uu_app(a0: &struct712) -> long long {
    let v0: struct48;  // [bp-0xa70], Other Possible Types: struct584, u8
    let v1: u32;  // [bp-0x828]
    let v2: u32;  // [bp-0x824]
    let v3: struct48;  // [bp-0x820], Other Possible Types: u8
    let v4: u32;  // [bp-0x5d8]
    let v5: u32;  // [bp-0x5d4]
    let v6: u64;  // [bp-0x564]
    let v7: u32;  // [bp-0x55c]
    let v8: struct437;  // [bp-0x558]
    let v9: u64;  // [bp-0x29c]
    let v10: u32;  // [bp-0x294]
    let v11: alloc::string::String;  // [bp-0x290]
    let v12: struct24;  // [bp-0x278], Other Possible Types: u64
    let v15: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    clap_builder::builder::command::Command::version(&v3, &v8, "0.0.28");
    clap_builder::builder::command::Command::about(&v8, &v3, "Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.");
    uucore::format_usage(&v0, "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...");
    clap_builder::builder::command::Command::override_usage(&v3, &v8, &v0);
    v11 = format!("{}\n\n{}", "Do not copy a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If timestamps are being preserved, the comparison is to the\nsource timestamp truncated to the resolutions of the destination file system and of the system calls used to\nupdate timestamps; this avoids duplicate work if several cp -pu commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. Also, if\n--preserve=links is also specified (like with cp -au for example), that will take precedence; consequently,\ndepending on the order that files are processed from the source, newer files in the destination may be replaced,\nto mirror hard links in the source. which gives more control over which existing files in the destination are\nreplaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    clap_builder::builder::command::Command::after_help(&v8 as u384, &v3, &v11);
    memcpy(&v3, &v8 as u384, 700);
    v6 = 584115552392 | v9;
    v7 = v10;
    clap_builder::builder::arg::Arg::new(&v8 as u384, "target-directory");
    clap_builder::builder::arg::Arg::short(&v0, &v8 as u384, 116);
    clap_builder::builder::arg::Arg::conflicts_with(&v8 as u384, &v0, "no-target-directory");
    clap_builder::builder::arg::Arg::long(&v0, &v8 as u384, "target-directory");
    clap_builder::builder::arg::Arg::value_name(&v8 as u384, &v0, "target-directory");
    clap_builder::builder::arg::Arg::value_hint(&v0, &v8 as u384, 4);
    v12 = 3;
    clap_builder::builder::arg::Arg::value_parser(&v8 as u384, &v0, &v12);
    clap_builder::builder::arg::Arg::help(&v0, &v8 as u384, "copy all SOURCE arguments into target-directory");
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "no-target-directory");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 84);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "no-target-directory");
    clap_builder::builder::arg::Arg::conflicts_with(&v0, &v3, "target-directory");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "Treat DEST as a regular file and not a directory");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "interactive");
    clap_builder::builder::arg::Arg::short(&v0, &v8 as u384, 105);
    clap_builder::builder::arg::Arg::long(&v8 as u384, &v0, "interactive");
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v8 as u384, "no-clobber");
    clap_builder::builder::arg::Arg::help(&v8 as u384, &v0, "ask before overwriting files");
    clap_builder::builder::arg::Arg::action(&v0, &v8 as u384, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "link");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 108);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "link");
    clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v3, "link", 5);
    clap_builder::builder::arg::Arg::help(&v3, &v0, "hard-link files instead of copying");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "no-clobber");
    clap_builder::builder::arg::Arg::short(&v0, &v8 as u384, 110);
    clap_builder::builder::arg::Arg::long(&v8 as u384, &v0, "no-clobber");
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v8 as u384, "interactive");
    clap_builder::builder::arg::Arg::help(&v8 as u384, &v0, "don't overwrite a file that already exists");
    clap_builder::builder::arg::Arg::action(&v0, &v8 as u384, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "recursive");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 82);
    clap_builder::builder::arg::Arg::visible_short_alias(&v3, &v0, 114);
    clap_builder::builder::arg::Arg::long(&v0, &v3, "recursive");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "copy directories recursively");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "strip-trailing-slashes");
    clap_builder::builder::arg::Arg::long(&v0, &v8 as u384, "strip-trailing-slashes");
    clap_builder::builder::arg::Arg::help(&v8 as u384, &v0, "remove any trailing slashes from each SOURCE argument");
    clap_builder::builder::arg::Arg::action(&v0, &v8 as u384, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "debug");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "debug");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "explain how a file is copied. Implies -v");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "verbose");
    clap_builder::builder::arg::Arg::short(&v0, &v8 as u384, 118);
    clap_builder::builder::arg::Arg::long(&v8 as u384, &v0, "verbose");
    clap_builder::builder::arg::Arg::help(&v0, &v8 as u384, "explicitly state what is being done");
    clap_builder::builder::arg::Arg::action(&v12, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v12);
    clap_builder::builder::arg::Arg::new(&v3, "symbolic-link");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "symbolic-link");
    clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v3, "link", 5);
    clap_builder::builder::arg::Arg::help(&v3, &v0, "make symbolic links instead of copying");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "force");
    clap_builder::builder::arg::Arg::short(&v0, &v8 as u384, 102);
    clap_builder::builder::arg::Arg::long(&v8 as u384, &v0, "force");
    clap_builder::builder::arg::Arg::help(&v0, &v8 as u384, "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.");
    clap_builder::builder::arg::Arg::action(&v12, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v12);
    clap_builder::builder::arg::Arg::new(&v3, "remove-destination");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "remove-destination");
    clap_builder::builder::arg::Arg::overrides_with(&v3, &v0, "force");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.");
    clap_builder::builder::arg::Arg::action(&v12, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v12);
    uucore::features::backup_control::arguments::backup(&v0);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v0);
    uucore::features::backup_control::arguments::backup_no_args(&v0);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    v0 = uucore::features::backup_control::arguments::suffix();
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v0);
    uucore::features::update_control::arguments::update(&v0);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    uucore::features::update_control::arguments::update_no_args(&v0);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "reflink");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "reflink");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "WHEN");
    clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v3, "link", 5);
    memcpy(&v3, &v0, 584);
    v4 = 128 | v1;
    v5 = v2;
    clap_builder::builder::arg::Arg::default_missing_value(&v0, &v3, "always");
    v3 = struct48 {
        field_0: &g_41e1d8
        field_8: 4
        field_16: &g_42cae7
        field_24: 6
        field_32: &g_42caed
        field_40: 5
    };
    v12 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v3);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v0, &v12);
    v12 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v12 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    clap_builder::builder::arg::Arg::num_args(&v0, &v3, &v12);
    clap_builder::builder::arg::Arg::help(&v12, &v0, "control clone/CoW copies. See below");
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v12);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "attributes-only");
    clap_builder::builder::arg::Arg::long(&v0, &v8 as u384, "attributes-only");
    clap_builder::builder::arg::Arg::overrides_with_all(&v8 as u384, &v0, "link", 5);
    clap_builder::builder::arg::Arg::help(&v0, &v8 as u384, "Don't copy the file data, just the attributes");
    clap_builder::builder::arg::Arg::action(&v12, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v12);
    clap_builder::builder::arg::Arg::new(&v3, "preserve");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "preserve");
    clap_builder::builder::arg::Arg::action(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::use_value_delimiter(&v0, &v3, 1);
    v12 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from("mode", 7);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v0, &v12);
    clap_builder::builder::arg::Arg::num_args(&v0, &v3, 0);
    memcpy(&v3, &v0, 584);
    v4 = 128 | v1;
    v5 = v2;
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "ATTR_LIST");
    clap_builder::builder::arg::Arg::default_missing_value(&v3, &v0, "mode,ownership,timestamp");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, all");
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "preserve-default-attributes");
    clap_builder::builder::arg::Arg::short(&v0, &v8 as u384, 112);
    clap_builder::builder::arg::Arg::long(&v8 as u384, &v0, "preserve-default-attributes");
    clap_builder::builder::arg::Arg::help(&v0, &v8 as u384, "same as --preserve=mode,ownership(unix only),timestamps");
    clap_builder::builder::arg::Arg::action(&v12, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v12);
    clap_builder::builder::arg::Arg::new(&v3, "no-preserve");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "no-preserve");
    clap_builder::builder::arg::Arg::action(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::use_value_delimiter(&v0, &v3, 1);
    v12 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from("mode", 7);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v0, &v12);
    clap_builder::builder::arg::Arg::num_args(&v0, &v3, 0);
    memcpy(&v3, &v0, 584);
    v4 = 128 | v1;
    v5 = v2;
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "ATTR_LIST");
    clap_builder::builder::arg::Arg::help(&v12, &v0, "don't preserve the specified attributes");
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v12);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "parents");
    clap_builder::builder::arg::Arg::long(&v0, &v8 as u384, "parents");
    clap_builder::builder::arg::Arg::alias(&v8 as u384, &v0, "parent");
    clap_builder::builder::arg::Arg::help(&v0, &v8 as u384, "use full source file name under DIRECTORY");
    clap_builder::builder::arg::Arg::action(&v12, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v12);
    clap_builder::builder::arg::Arg::new(&v3, "no-dereference");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 80);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "no-dereference");
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v3, "dereference");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "never follow symbolic links in SOURCE");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "dereference");
    clap_builder::builder::arg::Arg::short(&v0, &v8 as u384, 76);
    clap_builder::builder::arg::Arg::long(&v8 as u384, &v0, "dereference");
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v8 as u384, "no-dereference");
    clap_builder::builder::arg::Arg::help(&v8 as u384, &v0, "always follow symbolic links in SOURCE");
    clap_builder::builder::arg::Arg::action(&v0, &v8 as u384, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "cli-symbolic-links");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 72);
    clap_builder::builder::arg::Arg::help(&v3, &v0, "follow command-line symbolic links in SOURCE");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "archive");
    clap_builder::builder::arg::Arg::short(&v0, &v8 as u384, 97);
    clap_builder::builder::arg::Arg::long(&v8 as u384, &v0, "archive");
    clap_builder::builder::arg::Arg::help(&v0, &v8 as u384, "Same as -dR --preserve=all");
    clap_builder::builder::arg::Arg::action(&v12, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v12);
    clap_builder::builder::arg::Arg::new(&v3, "no-dereference-preserve-links");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 100);
    clap_builder::builder::arg::Arg::help(&v3, &v0, "same as --no-dereference --preserve=links");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "one-file-system");
    clap_builder::builder::arg::Arg::short(&v0, &v8 as u384, 120);
    clap_builder::builder::arg::Arg::long(&v8 as u384, &v0, "one-file-system");
    clap_builder::builder::arg::Arg::help(&v0, &v8 as u384, "stay on this file system");
    clap_builder::builder::arg::Arg::action(&v12, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v12);
    clap_builder::builder::arg::Arg::new(&v3, "sparse");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "sparse");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "WHEN");
    v0 = struct48 {
        field_0: &g_42caed
        field_8: 5
        field_16: &g_41e1d8
        field_24: 4
        field_32: &g_42cae7
        field_40: 6
    };
    v12 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v12);
    clap_builder::builder::arg::Arg::help(&v12, &v0, "control creation of sparse files. See below");
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v12);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "copy-contents");
    clap_builder::builder::arg::Arg::long(&v0, &v8 as u384, "copy-contents");
    clap_builder::builder::arg::Arg::overrides_with(&v8 as u384, &v0, "attributes-only");
    clap_builder::builder::arg::Arg::help(&v0, &v8 as u384, "NotImplemented: copy contents of special files when recursive");
    clap_builder::builder::arg::Arg::action(&v12, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v12);
    clap_builder::builder::arg::Arg::new(&v3, "context");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "context");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "CTX");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "NotImplemented: set SELinux security context of destination file to default type");
    clap_builder::builder::command::Command::arg(&v3, &v8 as u384, &v0);
    clap_builder::builder::arg::Arg::new(&v8 as u384, "progress");
    clap_builder::builder::arg::Arg::long(&v0, &v8 as u384, "progress");
    clap_builder::builder::arg::Arg::short(&v8 as u384, &v0, 103);
    clap_builder::builder::arg::Arg::action(&v0, &v8 as u384, 2);
    clap_builder::builder::arg::Arg::help(&v12, &v0, "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.");
    clap_builder::builder::command::Command::arg(&v8 as u384, &v3, &v12);
    clap_builder::builder::arg::Arg::new(&v3, "paths");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 1);
    clap_builder::builder::arg::Arg::num_args(&v3, &v0, 1);
    memcpy(&v0, &v3, 584);
    v1 = v4 | 1;
    v2 = v5;
    clap_builder::builder::arg::Arg::value_hint(&v3, &v0, 2);
    v12 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v12);
    clap_builder::builder::command::Command::arg(a0, &v8 as u384, &v0);
    return a0;
}
