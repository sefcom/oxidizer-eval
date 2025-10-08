fn uu_rm::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0xac0], Other Possible Types: struct712, struct640
    let v1: struct712;  // [bp-0xac0]
    let v2: struct640;  // [bp-0xac0]
    let v3: struct640;  // [bp-0xac0]
    let v4: struct640;  // [bp-0xac0]
    let v5: u32;  // [bp-0x848]
    let v6: u64;  // [bp-0x804]
    let v7: u32;  // [bp-0x7fc]
    let v8: struct24;  // [bp-0x7f8], Other Possible Types: struct640
    let v9: u32;  // [bp-0x580]
    let v10: u32;  // [bp-0x57c]
    let v11: struct712;  // [bp-0x578], Other Possible Types: struct640
    let v12: struct712;  // [bp-0x578]
    let v13: struct640;  // [bp-0x578]
    let v14: struct640;  // [bp-0x578]
    let v15: u32;  // [bp-0x300]
    let v16: u64;  // [bp-0x2bc]
    let v17: u32;  // [bp-0x2b4]
    let v18: struct32;  // [bp-0x2b0], Other Possible Types: struct640, u64
    let v21: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v21);
    v11 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v11);
    v8 = uucore::format_usage("{} [OPTION]... FILE...");
    v11 = clap_builder::builder::command::Command::override_usage(&v0, &v8);
    memcpy(&v0, &v11, 700);
    v6 = 584115552392 | v16;
    v7 = v17;
    v11 = clap_builder::builder::arg::Arg::new("force");
    v8 = clap_builder::builder::arg::Arg::short(&v11, 102);
    v11 = clap_builder::builder::arg::Arg::long(&v8, "force");
    v8 = clap_builder::builder::arg::Arg::help(&v11, "ignore nonexistent files and arguments, never prompt");
    v18 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v11 = clap_builder::builder::command::Command::arg(&v0, &v18);
    v0 = clap_builder::builder::arg::Arg::new("prompt");
    v8 = clap_builder::builder::arg::Arg::short(&v0, 105);
    v0 = clap_builder::builder::arg::Arg::help(&v8, "prompt before every removal");
    v18 = struct32 {
        field_0: "prompt-more"
        field_16: "interactive"
    };
    v8 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v18);
    v18 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v1 = clap_builder::builder::command::Command::arg(&v11, &v18);
    v11 = clap_builder::builder::arg::Arg::new("prompt-more");
    v8 = clap_builder::builder::arg::Arg::short(&v11, 73);
    v11 = clap_builder::builder::arg::Arg::help(&v8, "prompt once before removing more than three files, or when removing recursively. Less intrusive than -i, while still giving some protection against most mistakes");
    v18 = struct32 {
        field_0: "prompt"
        field_16: "interactive"
    };
    v8 = clap_builder::builder::arg::Arg::overrides_with_all(&v11, &v18);
    v18 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v11 = clap_builder::builder::command::Command::arg(&v1, &v18);
    v2 = clap_builder::builder::arg::Arg::new("interactive");
    v8 = clap_builder::builder::arg::Arg::long(&v2, "interactive");
    v3 = clap_builder::builder::arg::Arg::help(&v8, "prompt according to WHEN: never, once (-I), or always (-i). Without WHEN, prompts always");
    v8 = clap_builder::builder::arg::Arg::value_name(&v3);
    v4 = clap_builder::builder::arg::Arg::num_args(&v8, None, 1);
    memcpy(&v8, &v4, 632);
    v9 = 128 | v5;
    v10 = v5;
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v8);
    v18 = struct32 {
        field_0: "prompt"
        field_16: "prompt-more"
    };
    v8 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v18);
    v0 = clap_builder::builder::command::Command::arg(&v11, &v8);
    v11 = clap_builder::builder::arg::Arg::new("one-file-system");
    v8 = clap_builder::builder::arg::Arg::long(&v11, "one-file-system");
    v11 = clap_builder::builder::arg::Arg::help(&v8, "when removing a hierarchy recursively, skip any directory that is on a file system different from that of the corresponding command line argument (NOT IMPLEMENTED)");
    v8 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v11 = clap_builder::builder::command::Command::arg(&v0, &v8);
    v0 = clap_builder::builder::arg::Arg::new("no-preserve-root");
    v8 = clap_builder::builder::arg::Arg::long(&v0, "no-preserve-root");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "do not treat '/' specially");
    v8 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v11, &v8);
    v11 = clap_builder::builder::arg::Arg::new("preserve-root");
    v8 = clap_builder::builder::arg::Arg::long(&v11, "preserve-root");
    v11 = clap_builder::builder::arg::Arg::help(&v8, "do not remove '/' (default)");
    v8 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v11 = clap_builder::builder::command::Command::arg(&v0, &v8);
    v0 = clap_builder::builder::arg::Arg::new("recursive");
    v8 = clap_builder::builder::arg::Arg::short(&v0, 114);
    v0 = clap_builder::builder::arg::Arg::visible_short_alias(&v8);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "recursive");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "remove directories and their contents recursively");
    v8 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v11, &v8);
    v11 = clap_builder::builder::arg::Arg::new("dir");
    v8 = clap_builder::builder::arg::Arg::short(&v11, 100);
    v11 = clap_builder::builder::arg::Arg::long(&v8, "dir");
    v8 = clap_builder::builder::arg::Arg::help(&v11, "remove empty directories");
    v18 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v12 = clap_builder::builder::command::Command::arg(&v0, &v18);
    v0 = clap_builder::builder::arg::Arg::new("verbose");
    v8 = clap_builder::builder::arg::Arg::short(&v0, 118);
    v0 = clap_builder::builder::arg::Arg::long(&v8, "verbose");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "explain what is being done");
    v18 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v0 = clap_builder::builder::command::Command::arg(&v12, &v18);
    v13 = clap_builder::builder::arg::Arg::new("-presume-input-tty");
    v8 = clap_builder::builder::arg::Arg::long(&v13, "presume-input-tty");
    v14 = clap_builder::builder::arg::Arg::alias(&v8);
    memcpy(&v8, &v14, 632);
    v9 = v15 | 4;
    v10 = v15;
    v18 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v11 = clap_builder::builder::command::Command::arg(&v0, &v18);
    v0 = clap_builder::builder::arg::Arg::new("files");
    v8 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v18 = 2;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v8, &v18);
    v8 = clap_builder::builder::arg::Arg::num_args(&v0);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v8);
    clap_builder::builder::command::Command::arg(a0, &v11, &v0);
    return;
}
