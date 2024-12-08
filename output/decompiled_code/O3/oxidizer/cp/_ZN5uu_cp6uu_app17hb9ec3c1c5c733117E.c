fn uu_cp::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa70], Other Possible Types: struct592, struct48, struct24
    let v1: i4736;  // [sp-0x820], Other Possible Types: struct592, struct712, struct48
    let v2: i4736;  // [sp-0x558], Other Possible Types: struct592, struct712, struct437
    let v3: i192;  // [sp-0x290]
    let v4: i192;  // [bp-0x278], Other Possible Types: struct592, struct24, struct8, struct17
    let v6: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v1 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v2 = clap_builder::builder::command::Command::about(&v1, "Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.");
    v0 = uucore::format_usage(&g_42be03, 104);
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v0);
    v3 = format!("{:?}\n\n{:?}", "Do not copy a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If timestamps are being preserved, the comparison is to the\nsource timestamp truncated to the resolutions of the destination file system and of the system calls used to\nupdate timestamps; this avoids duplicate work if several cp -pu commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. Also, if\n--preserve=links is also specified (like with cp -au for example), that will take precedence; consequently,\ndepending on the order that files are processed from the source, newer files in the destination may be replaced,\nto mirror hard links in the source. which gives more control over which existing files in the destination are\nreplaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    v2 = clap_builder::builder::command::Command::after_help(&v1, &v3);
    memcpy(&v1, &v2, 700);
    v1.700 = 584115552392 | (stack_base)[668] as i64;
    v1.708 = (stack_base)[660] as i32;
    v2 = clap_builder::builder::arg::Arg::new("target-directory");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 116);
    v2 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "no-target-directory");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "target-directory");
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "target-directory");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v2, 4);
    v4 = struct8 {
        field_0: 3
    };
    v2 = clap_builder::builder::arg::Arg::value_parser(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "copy all SOURCE arguments into target-directory");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("no-target-directory");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 84);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "no-target-directory");
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "target-directory");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "Treat DEST as a regular file and not a directory");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("interactive");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 105);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "interactive");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v2, "no-clobber");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "ask before overwriting files");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("link");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 108);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "link");
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, "link", 5);
    v1 = clap_builder::builder::arg::Arg::help(&v0, "hard-link files instead of copying");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("no-clobber");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 110);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "no-clobber");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v2, "interactive");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "don't overwrite a file that already exists");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("recursive");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 82);
    v1 = clap_builder::builder::arg::Arg::visible_short_alias(&v0, 114);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "recursive");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "copy directories recursively");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("strip-trailing-slashes");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "strip-trailing-slashes");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "remove any trailing slashes from each SOURCE argument");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("debug");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "debug");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "explain how a file is copied. Implies -v");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 118);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "explicitly state what is being done");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("symbolic-link");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 115);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "symbolic-link");
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, "link", 5);
    v1 = clap_builder::builder::arg::Arg::help(&v0, "make symbolic links instead of copying");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("force");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 102);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "force");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("remove-destination");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "remove-destination");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v0, "force");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v0 = uucore::features::backup_control::arguments::backup();
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v0 = uucore::features::backup_control::arguments::backup_no_args();
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v0 = uucore::features::backup_control::arguments::suffix();
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v0 = uucore::features::update_control::arguments::update();
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v0 = uucore::features::update_control::arguments::update_no_args();
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("reflink");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "reflink");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "WHEN");
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, "link", 5);
    memcpy(&v1, &v0, 584);
    v1.584 = 128 | v0.584;
    v1.588 = v0.588;
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v1, "always");
    v1 = struct48 {
        field_0: &g_41e00c
        field_8: 4
        field_16: &g_42c8e7
        field_24: 6
        field_32: &g_42c8ed
        field_40: 5
    };
    v4 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v4);
    v4 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v0 = clap_builder::builder::arg::Arg::num_args(&v1, &v4);
    v4 = clap_builder::builder::arg::Arg::help(&v0, "control clone/CoW copies. See below");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::new("attributes-only");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "attributes-only");
    v2 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, "link", 5);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "Don't copy the file data, just the attributes");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("preserve");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "preserve");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::use_value_delimiter(&v1, 1);
    v4 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from("mode", 7);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::num_args(&v1, 0);
    memcpy(&v1, &v0, 584);
    v1.584 = 128 | v0.584;
    v1.588 = v0.588;
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "ATTR_LIST");
    v1 = clap_builder::builder::arg::Arg::default_missing_value(&v0, "mode,ownership,timestamp");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, all");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("preserve-default-attributes");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 112);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "preserve-default-attributes");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "same as --preserve=mode,ownership(unix only),timestamps");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("no-preserve");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "no-preserve");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::use_value_delimiter(&v1, 1);
    v4 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from("mode", 7);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::num_args(&v1, 0);
    memcpy(&v1, &v0, 584);
    v1.584 = 128 | v0.584;
    v1.588 = v0.588;
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "ATTR_LIST");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "don't preserve the specified attributes");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::new("parents");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "parents");
    v2 = clap_builder::builder::arg::Arg::alias(&v0, "parent");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "use full source file name under DIRECTORY");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("no-dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 80);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "no-dereference");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v1, "dereference");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "never follow symbolic links in SOURCE");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 76);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "dereference");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v2, "no-dereference");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "always follow symbolic links in SOURCE");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("cli-symbolic-links");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 72);
    v1 = clap_builder::builder::arg::Arg::help(&v0, "follow command-line symbolic links in SOURCE");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("archive");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 97);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "archive");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "Same as -dR --preserve=all");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("no-dereference-preserve-links");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 100);
    v1 = clap_builder::builder::arg::Arg::help(&v0, "same as --no-dereference --preserve=links");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("one-file-system");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 120);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "one-file-system");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "stay on this file system");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("sparse");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "sparse");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "WHEN");
    v0 = struct48 {
        field_0: &g_42c8ed
        field_8: 5
        field_16: &g_41e00c
        field_24: 4
        field_32: &g_42c8e7
        field_40: 6
    };
    v4 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v4);
    v4 = clap_builder::builder::arg::Arg::help(&v0, "control creation of sparse files. See below");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::new("copy-contents");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "copy-contents");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v0, "attributes-only");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "NotImplemented: copy contents of special files when recursive");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("context");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "context");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "CTX");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "NotImplemented: set SELinux security context of destination file to default type");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("progress");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "progress");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 103);
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v4 = clap_builder::builder::arg::Arg::help(&v0, &g_42cca1, 78);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("paths");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::num_args(&v0, 1);
    memcpy(&v0, &v1, 584);
    v0.584 = v1.584 | 1;
    v0.588 = v1.588;
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 2);
    v4 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v4);
    clap_builder::builder::command::Command::arg(a0, &v2, &v0);
    return a0;
}
