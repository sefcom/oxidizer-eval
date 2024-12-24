fn uu_rm::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa58], Other Possible Types: struct592, struct712, struct437
    let v1: i4736;  // [sp-0x790], Other Possible Types: struct592, struct24
    let v2: i4736;  // [sp-0x540], Other Possible Types: struct592, struct712
    let v3: i4736;  // [sp-0x278], Other Possible Types: struct592, struct32, struct8, struct17
    let v5: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v2, "Remove (unlink) the FILE(s)");
    v1 = uucore::format_usage("{} [OPTION]... FILE...");
    v2 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    memcpy(&v0, &v2, 700);
    v0.700 = 584115552392 | (stack_base)[644] as i64;
    v0.708 = (stack_base)[636] as i32;
    v2 = clap_builder::builder::arg::Arg::new("force");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 102);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "force");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "ignore nonexistent files and arguments, never prompt");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("prompt");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 105);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "prompt before every removal");
    v3 = struct32 {
        field_0: &g_41e25c
        field_8: 11
        field_16: &g_41e22a
        field_24: 11
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v3);
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("prompt-more");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 73);
    v2 = clap_builder::builder::arg::Arg::help(&v1, "prompt once before removing more than three files, or when removing recursively. Less intrusive than -i, while still giving some protection against most mistakes");
    v3 = struct32 {
        field_0: &g_41e256
        field_8: 6
        field_16: &g_41e22a
        field_24: 11
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v3);
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("interactive");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "interactive");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "prompt according to WHEN: never, once (-I), or always (-i). Without WHEN, prompts always");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, v5);
    v3 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v0 = clap_builder::builder::arg::Arg::num_args(&v1, &v3);
    memcpy(&v1, &v0, 584);
    v1.584 = 128 | (stack_base)[2064] as i32;
    v1.588 = (stack_base)[2060] as i32;
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v1, v5);
    v3 = struct32 {
        field_0: &g_41e256
        field_8: 6
        field_16: &g_41e25c
        field_24: 11
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v3);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("one-file-system");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "one-file-system");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "when removing a hierarchy recursively, skip any directory that is on a file system different from that of the corresponding command line argument (NOT IMPLEMENTED)");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("no-preserve-root");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "no-preserve-root");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "do not treat '/' specially");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("preserve-root");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "preserve-root");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "do not remove '/' (default)");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("recursive");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 114);
    v0 = clap_builder::builder::arg::Arg::visible_short_alias(&v1, 82);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "recursive");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "remove directories and their contents recursively");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("dir");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 100);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "dir");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "remove empty directories");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("verbose");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 118);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "verbose");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "explain what is being done");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("-presume-input-tty");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "presume-input-tty");
    v2 = clap_builder::builder::arg::Arg::alias(&v1, "-presume-input-tty");
    memcpy(&v1, &v2, 584);
    v1.584 = (stack_base)[760] as i32 | 4;
    v1.588 = (stack_base)[756] as i32;
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("files");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v3 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::num_args(&v0);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1, 2);
    clap_builder::builder::command::Command::arg(a0, &v2, &v0);
    return a0;
}
