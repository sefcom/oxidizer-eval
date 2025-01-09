fn uu_rm::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa58], Other Possible Types: struct592, struct712, struct437
    let v1: i64;  // [sp-0x79c]
    let v2: i32;  // [sp-0x794]
    let v3: i4736;  // [sp-0x790], Other Possible Types: struct592, struct24
    let v4: i32;  // [sp-0x548]
    let v5: i32;  // [sp-0x544]
    let v6: i4736;  // [sp-0x540], Other Possible Types: struct592, struct712
    let v7: struct592;  // [sp-0x278], Other Possible Types: i4736, struct32, struct17, struct8
    let v9: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v6 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v6, "Remove (unlink) the FILE(s)");
    v3 = uucore::format_usage("{} [OPTION]... FILE...");
    v6 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    memcpy(&v0, &v6, 700);
    v1 = 584115552392 | *((&v6 as &char + 700) as &i64);
    v2 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("force");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x66);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "force");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "ignore nonexistent files and arguments, never prompt");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("prompt");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x69);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "prompt before every removal");
    v7 = struct32 {
        field_0: &g_41e234
        field_8: 11
        field_16: &g_41e202
        field_24: 11
    };
    v3 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v7);
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("prompt-more");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x49);
    v6 = clap_builder::builder::arg::Arg::help(&v3, "prompt once before removing more than three files, or when removing recursively. Less intrusive than -i, while still giving some protection against most mistakes");
    v7 = struct32 {
        field_0: &g_41e22e
        field_8: 6
        field_16: &g_41e202
        field_24: 11
    };
    v3 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, &v7);
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("interactive");
    v3 = clap_builder::builder::arg::Arg::long(&v0, "interactive");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "prompt according to WHEN: never, once (-I), or always (-i). Without WHEN, prompts always");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0);
    v7 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v0 = clap_builder::builder::arg::Arg::num_args(&v3, &v7);
    memcpy(&v3, &v0, 584);
    v4 = 128 | *((&v0 as &char + 584) as &i32);
    v5 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v3);
    v7 = struct32 {
        field_0: &g_41e22e
        field_8: 6
        field_16: &g_41e234
        field_24: 11
    };
    v3 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v7);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("one-file-system");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "one-file-system");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "when removing a hierarchy recursively, skip any directory that is on a file system different from that of the corresponding command line argument (NOT IMPLEMENTED)");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("no-preserve-root");
    v3 = clap_builder::builder::arg::Arg::long(&v0, "no-preserve-root");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "do not treat '/' specially");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("preserve-root");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "preserve-root");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "do not remove '/' (default)");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("recursive");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x72);
    v0 = clap_builder::builder::arg::Arg::visible_short_alias(&v3, 0x52);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "recursive");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "remove directories and their contents recursively");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("dir");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x64);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "dir");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "remove empty directories");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("verbose");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x76);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "verbose");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "explain what is being done");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("-presume-input-tty");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "presume-input-tty");
    v6 = clap_builder::builder::arg::Arg::alias(&v3, "-presume-input-tty");
    memcpy(&v3, &v6, 584);
    v4 = *((&v6 as &char + 584) as &i32) | 4;
    v5 = *((&v6 as &char + 588) as &i32);
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("files");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v7 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::num_args(&v0);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v6, &v0);
    return a0;
}
