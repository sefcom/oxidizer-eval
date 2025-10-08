fn uu_cp::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xad8], Other Possible Types: struct48, struct632, struct640
    let v1: u32;  // [bp-0x860]
    let v2: u32;  // [bp-0x85c]
    let v3: struct48;  // [bp-0x858], Other Possible Types: struct712, struct640
    let v4: u32;  // [bp-0x5e0]
    let v5: u32;  // [bp-0x5dc]
    let v6: u64;  // [bp-0x59c]
    let v7: u32;  // [bp-0x594]
    let v8: struct437;  // [bp-0x590], Other Possible Types: struct712, struct640
    let v9: struct712;  // [bp-0x590]
    let v10: struct640;  // [bp-0x590]
    let v11: struct640;  // [bp-0x590]
    let v12: u32;  // [bp-0x318]
    let v13: u64;  // [bp-0x2d4]
    let v14: u32;  // [bp-0x2cc]
    let v15: u8;  // [bp-0x2c8]
    let v16: struct640;  // [bp-0x2b0], Other Possible Types: u64
    let v19: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v3 = clap_builder::builder::command::Command::version(&v8);
    v8 = clap_builder::builder::command::Command::about(&v3);
    v0 = uucore::format_usage("{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...");
    v3 = clap_builder::builder::command::Command::override_usage(&v8, &v0);
    format!("{}\n\n{}", "Do not copy a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If timestamps are being preserved, the comparison is to the\nsource timestamp truncated to the resolutions of the destination file system and of the system calls used to\nupdate timestamps; this avoids duplicate work if several cp -pu commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. Also, if\n--preserve=links is also specified (like with cp -au for example), that will take precedence; consequently,\ndepending on the order that files are processed from the source, newer files in the destination may be replaced,\nto mirror hard links in the source. which gives more control over which existing files in the destination are\nreplaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    v8 = clap_builder::builder::command::Command::after_help(&v3, &v15);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | v13;
    v7 = v14;
    v8 = clap_builder::builder::arg::Arg::new("target-directory");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 116);
    v8 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "no-target-directory");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "target-directory");
    v8 = clap_builder::builder::arg::Arg::value_name(&v0, "target-directory");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v8, 4);
    v16 = 3;
    v8 = clap_builder::builder::arg::Arg::value_parser(&v0, &v16);
    v0 = clap_builder::builder::arg::Arg::help(&v8, "copy all SOURCE arguments into target-directory");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("no-target-directory");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 84);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "no-target-directory");
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v3, "target-directory");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Treat DEST as a regular file and not a directory");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("interactive");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 105);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "interactive");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v8, "no-clobber");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "ask before overwriting files");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("link");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 108);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "link");
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v3);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "hard-link files instead of copying");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("no-clobber");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 110);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "no-clobber");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v8, "interactive");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "don't overwrite a file that already exists");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("recursive");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 82);
    v3 = clap_builder::builder::arg::Arg::visible_short_alias(&v0);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "recursive");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "copy directories recursively");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("strip-trailing-slashes");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "strip-trailing-slashes");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "remove any trailing slashes from each SOURCE argument");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("debug");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "debug");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "explain how a file is copied. Implies -v");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 118);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "explicitly state what is being done");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("symbolic-link");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "symbolic-link");
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v3);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "make symbolic links instead of copying");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("force");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 102);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "force");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("remove-destination");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "remove-destination");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "force");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v16);
    v0 = uucore::features::backup_control::arguments::backup();
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v0 = uucore::features::backup_control::arguments::backup_no_args();
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v0 = uucore::features::backup_control::arguments::suffix();
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v0 = uucore::features::update_control::arguments::update();
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v0 = uucore::features::update_control::arguments::update_no_args();
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("reflink");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "reflink");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "WHEN");
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v3);
    memcpy(&v3, &v0, 632);
    v4 = 128 | v1;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v3, "always");
    v3 = struct48 {
        field_0: "auto"
        field_16: "always"
        field_32: "never"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v16, &v3);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v16);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3, None, 1);
    v16 = clap_builder::builder::arg::Arg::help(&v0, "control clone/CoW copies. See below");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v16);
    v8 = clap_builder::builder::arg::Arg::new("attributes-only");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "attributes-only");
    v8 = clap_builder::builder::arg::Arg::overrides_with_all(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Don't copy the file data, just the attributes");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("preserve");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "preserve");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::use_value_delimiter(&v3, 1);
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v16);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v16);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3, None);
    memcpy(&v3, &v0, 632);
    v4 = 128 | v1;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "ATTR_LIST");
    v3 = clap_builder::builder::arg::Arg::default_missing_value(&v0, "mode,ownership,timestamp");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, all");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("preserve-default-attributes");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 112);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "preserve-default-attributes");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "same as --preserve=mode,ownership(unix only),timestamps");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("no-preserve");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "no-preserve");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::use_value_delimiter(&v3, 1);
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v16);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v16);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3, None);
    memcpy(&v3, &v0, 632);
    v4 = 128 | v1;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "ATTR_LIST");
    v16 = clap_builder::builder::arg::Arg::help(&v0, "don't preserve the specified attributes");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v16);
    v8 = clap_builder::builder::arg::Arg::new("parents");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "parents");
    v8 = clap_builder::builder::arg::Arg::alias(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v8, "use full source file name under DIRECTORY");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("no-dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 80);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "no-dereference");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v3, "dereference");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "never follow symbolic links in SOURCE");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 76);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "dereference");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v8, "no-dereference");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "always follow symbolic links in SOURCE");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("cli-symbolic-links");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 72);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "follow command-line symbolic links in SOURCE");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("archive");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 97);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "archive");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Same as -dR --preserve=all");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("no-dereference-preserve-links");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 100);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "same as --no-dereference --preserve=links");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("one-file-system");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 120);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "one-file-system");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "stay on this file system");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("sparse");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "sparse");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "WHEN");
    v0 = struct48 {
        field_0: "never"
        field_16: "auto"
        field_32: "always"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v16, &v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v16);
    v16 = clap_builder::builder::arg::Arg::help(&v0, "control creation of sparse files. See below");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v16);
    v8 = clap_builder::builder::arg::Arg::new("Z");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 90);
    v8 = clap_builder::builder::arg::Arg::help(&v0, "set SELinux security context of destination file to default type");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("context");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "context");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "CTX");
    v16 = 1;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX");
    v0 = clap_builder::builder::arg::Arg::num_args(&v3, None, 1);
    memcpy(&v3, &v0, 632);
    v4 = 128 | v1;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v3, 1, 0);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("progress");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "progress");
    v8 = clap_builder::builder::arg::Arg::short(&v0, 103);
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v16 = clap_builder::builder::arg::Arg::help(&v0, "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.");
    v9 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("copy-contents");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "copy-contents");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "attributes-only");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "NotImplemented: copy contents of special files when recursive");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v16);
    v10 = clap_builder::builder::arg::Arg::new("paths");
    v0 = clap_builder::builder::arg::Arg::action(&v10, 1);
    v11 = clap_builder::builder::arg::Arg::num_args(&v0, 0x1);
    memcpy(&v0, &v11, 632);
    v1 = v12 | 1;
    v2 = v12;
    v8 = clap_builder::builder::arg::Arg::value_hint(&v0, 2);
    v16 = 2;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v8, &v16);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return;
}
