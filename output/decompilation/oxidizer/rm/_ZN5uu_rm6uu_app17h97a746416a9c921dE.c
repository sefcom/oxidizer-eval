fn uu_rm::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa58]
    let v1: u32;  // [bp-0x810]
    let v2: i8;  // [bp-0x80c]
    let v3: u64;  // [bp-0x79c]
    let v4: u32;  // [bp-0x794]
    let v5: u8;  // [bp-0x790]
    let v6: u32;  // [bp-0x548]
    let v7: u32;  // [bp-0x544]
    let v8: u8;  // [bp-0x540]
    let v9: u32;  // [bp-0x2f8]
    let v10: i8;  // [bp-0x2f4]
    let v11: u64;  // [bp-0x284]
    let v12: u32;  // [bp-0x27c]
    let v13: struct24;  // [bp-0x278], Other Possible Types: struct32, u64
    let v16: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    clap_builder::builder::command::Command::version(&v8, &v0, "0.0.28");
    clap_builder::builder::command::Command::about(&v0, &v8, "Remove (unlink) the FILE(s)");
    uucore::format_usage(&v5, "{} [OPTION]... FILE...");
    clap_builder::builder::command::Command::override_usage(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | v11;
    v4 = v12;
    clap_builder::builder::arg::Arg::new(&v8, "force");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 102);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "force");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "ignore nonexistent files and arguments, never prompt");
    clap_builder::builder::arg::Arg::action(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new(&v0, "prompt");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 105);
    clap_builder::builder::arg::Arg::help(&v0, &v5, "prompt before every removal");
    v13 = struct32 {
        field_0: &g_41e234
        field_8: 11
        field_16: &g_41e202
        field_24: 11
    };
    v13 = struct32 {
        field_0: &g_41e234
        field_8: 11
        field_16: &g_41e202
        field_24: 11
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v5, &v0, &v13);
    clap_builder::builder::arg::Arg::action(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "prompt-more");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 73);
    clap_builder::builder::arg::Arg::help(&v8, &v5, "prompt once before removing more than three files, or when removing recursively. Less intrusive than -i, while still giving some protection against most mistakes");
    v13 = struct32 {
        field_0: &g_41e22e
        field_8: 6
        field_16: &g_41e202
        field_24: 11
    };
    v13 = struct32 {
        field_0: &g_41e22e
        field_8: 6
        field_16: &g_41e202
        field_24: 11
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v5, &v8, &v13);
    clap_builder::builder::arg::Arg::action(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new(&v0, "interactive");
    clap_builder::builder::arg::Arg::long(&v5, &v0, "interactive");
    clap_builder::builder::arg::Arg::help(&v0, &v5, "prompt according to WHEN: never, once (-I), or always (-i). Without WHEN, prompts always");
    clap_builder::builder::arg::Arg::value_name(&v5, &v0);
    v13 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v13 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    clap_builder::builder::arg::Arg::num_args(&v0, &v5, &v13);
    memcpy(&v5, &v0, 584);
    v6 = 128 | v1;
    v7 = *(&v2 as &i32);
    clap_builder::builder::arg::Arg::default_missing_value(&v0, &v5);
    v13 = struct32 {
        field_0: &g_41e22e
        field_8: 6
        field_16: &g_41e234
        field_24: 11
    };
    v13 = struct32 {
        field_0: &g_41e22e
        field_8: 6
        field_16: &g_41e234
        field_24: 11
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v5, &v0, &v13);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "one-file-system");
    clap_builder::builder::arg::Arg::long(&v5, &v8, "one-file-system");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "when removing a hierarchy recursively, skip any directory that is on a file system different from that of the corresponding command line argument (NOT IMPLEMENTED)");
    clap_builder::builder::arg::Arg::action(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "no-preserve-root");
    clap_builder::builder::arg::Arg::long(&v5, &v0, "no-preserve-root");
    clap_builder::builder::arg::Arg::help(&v0, &v5, "do not treat '/' specially");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "preserve-root");
    clap_builder::builder::arg::Arg::long(&v5, &v8, "preserve-root");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "do not remove '/' (default)");
    clap_builder::builder::arg::Arg::action(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "recursive");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 114);
    clap_builder::builder::arg::Arg::visible_short_alias(&v0, &v5, 82);
    clap_builder::builder::arg::Arg::long(&v5, &v0, "recursive");
    clap_builder::builder::arg::Arg::help(&v0, &v5, "remove directories and their contents recursively");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "dir");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 100);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "dir");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "remove empty directories");
    clap_builder::builder::arg::Arg::action(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new(&v0, "verbose");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 118);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "verbose");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "explain what is being done");
    clap_builder::builder::arg::Arg::action(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "-presume-input-tty");
    clap_builder::builder::arg::Arg::long(&v5, &v8, "presume-input-tty");
    clap_builder::builder::arg::Arg::alias(&v8, &v5, "-presume-input-tty");
    memcpy(&v5, &v8, 584);
    v6 = v9 | 4;
    v7 = *(&v10 as &i32);
    clap_builder::builder::arg::Arg::action(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new(&v0, "files");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 1);
    v13 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v0, &v5, &v13);
    clap_builder::builder::arg::Arg::num_args(&v5, &v0);
    clap_builder::builder::arg::Arg::value_hint(&v0, &v5, 2);
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return a0;
}
