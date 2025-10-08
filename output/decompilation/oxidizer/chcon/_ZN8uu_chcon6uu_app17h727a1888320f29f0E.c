fn uu_chcon::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0xad8]
    let v1: struct24;  // [bp-0xac0], Other Possible Types: struct640
    let v2: struct437;  // [bp-0x840], Other Possible Types: struct712, struct640
    let v3: u64;  // [bp-0x584]
    let v4: u32;  // [bp-0x57c]
    let v5: struct712;  // [bp-0x578], Other Possible Types: struct640
    let v6: u64;  // [bp-0x2bc]
    let v7: u32;  // [bp-0x2b4]
    let v8: struct64;  // [bp-0x2b0], Other Possible Types: struct32, struct640
    let v11: u64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v11);
    v5 = clap_builder::builder::command::Command::version(&v2);
    v2 = clap_builder::builder::command::Command::about(&v5);
    v1 = uucore::format_usage("{} [OPTION]... CONTEXT FILE...\n{} [OPTION]... [-u USER] [-r ROLE] [-l RANGE] [-t TYPE] FILE...\n{} [OPTION]... --reference=RFILE FILE...");
    v5 = clap_builder::builder::command::Command::override_usage(&v2, &v1);
    memcpy(&v2, &v5, 700);
    v3 = 2252383929761928 | v6;
    v4 = v7;
    v5 = clap_builder::builder::arg::Arg::new("help");
    v1 = clap_builder::builder::arg::Arg::long(&v5, "help");
    v5 = clap_builder::builder::arg::Arg::help(&v1, "Print help information.");
    v1 = clap_builder::builder::arg::Arg::action(&v5, 5);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("dereference");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "dereference");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v1, "no-dereference");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "Affect the referent of each symbolic link (this is the default), rather than the symbolic link itself.");
    v8 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v5, &v8);
    v5 = clap_builder::builder::arg::Arg::new("no-dereference");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 104);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "no-dereference");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "Affect symbolic links instead of any referenced file.");
    v8 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("preserve-root");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "preserve-root");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v1, "no-preserve-root");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "Fail to operate recursively on '/'.");
    v8 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v5, &v8);
    v5 = clap_builder::builder::arg::Arg::new("no-preserve-root");
    v1 = clap_builder::builder::arg::Arg::long(&v5, "no-preserve-root");
    v5 = clap_builder::builder::arg::Arg::help(&v1, "Do not treat '/' specially (the default).");
    v1 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("reference");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "reference");
    v2 = clap_builder::builder::arg::Arg::value_name(&v1, "RFILE");
    v1 = clap_builder::builder::arg::Arg::value_hint(&v2, 3);
    v8 = struct64 {
        field_0: "user"
        field_16: "role"
        field_32: "type"
        field_48: "range"
    };
    v2 = clap_builder::builder::arg::Arg::conflicts_with_all(&v1, &v8);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "Use security context of RFILE, rather than specifying a CONTEXT value.");
    v0 = 2;
    v8 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v2 = clap_builder::builder::command::Command::arg(&v5, &v8);
    v5 = clap_builder::builder::arg::Arg::new("user");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 117);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "user");
    v1 = clap_builder::builder::arg::Arg::value_name(&v5, "USER");
    v5 = clap_builder::builder::arg::Arg::value_hint(&v1, 9);
    v1 = clap_builder::builder::arg::Arg::help(&v5, "Set user USER in the target security context.");
    v8 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("role");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 114);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "role");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "ROLE");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "Set role ROLE in the target security context.");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v0);
    v2 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("type");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 116);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "type");
    v1 = clap_builder::builder::arg::Arg::value_name(&v5, "TYPE");
    v5 = clap_builder::builder::arg::Arg::help(&v1, "Set type TYPE in the target security context.");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v5, &v0);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("range");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 108);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "range");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "RANGE");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "Set range RANGE in the target security context.");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v0);
    v2 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("recursive");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 82);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "recursive");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "Operate on files and directories recursively.");
    v8 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("follow-arg-dir-sym-link");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 72);
    v2 = clap_builder::builder::arg::Arg::requires(&v1);
    v8 = struct32 {
        field_0: "follow-dir-sym-links"
        field_16: "no-follow-sym-links"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::help(&v1, "If a command line argument is a symbolic link to a directory, traverse it. Only valid when -R is specified.");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("follow-dir-sym-links");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 76);
    v5 = clap_builder::builder::arg::Arg::requires(&v1);
    v8 = struct32 {
        field_0: "follow-arg-dir-sym-link"
        field_16: "no-follow-sym-links"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v5, &v8);
    v5 = clap_builder::builder::arg::Arg::help(&v1, "Traverse every symbolic link to a directory encountered. Only valid when -R is specified.");
    v1 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("no-follow-sym-links");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 80);
    v2 = clap_builder::builder::arg::Arg::requires(&v1);
    v8 = struct32 {
        field_0: "follow-arg-dir-sym-link"
        field_16: "follow-dir-sym-links"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::help(&v1, "Do not traverse any symbolic links (default). Only valid when -R is specified.");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("verbose");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 118);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "verbose");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "Output a diagnostic for every file processed.");
    v8 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("FILE");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    v1 = clap_builder::builder::arg::Arg::num_args(&v2);
    v2 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    clap_builder::builder::command::Command::arg(a0, &v5, &v2);
    return;
}
