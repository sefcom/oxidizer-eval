fn uu_id::uu_app(a0: i64) -> u64 {
    let v0: u64;  // [bp-0xac8]
    let v1: struct24;  // [bp-0xac0], Other Possible Types: struct640
    let v2: struct32;  // [bp-0x840], Other Possible Types: struct96, struct640
    let v3: struct437;  // [bp-0x5c0], Other Possible Types: struct712, struct640
    let v4: u64;  // [bp-0x304]
    let v5: u32;  // [bp-0x2fc]
    let v6: struct712;  // [bp-0x2f8], Other Possible Types: struct640
    let v7: struct712;  // [bp-0x2f8]
    let v8: u64;  // [bp-0x3c]
    let v11: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v11);
    v6 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v6);
    v1 = uucore::format_usage("{} [OPTION]... [USER]...");
    v7 = clap_builder::builder::command::Command::override_usage(&v3, &v1);
    memcpy(&v3, &v7, 700);
    v4 = 584115552392 | v8;
    v5 = v8;
    v6 = clap_builder::builder::arg::Arg::new("audit");
    v1 = clap_builder::builder::arg::Arg::short(&v6, 65);
    v2 = struct96 {
        field_0: "group"
        field_16: "user"
        field_32: "human-readable"
        field_48: "password"
        field_64: "groups"
        field_80: "zero"
    };
    v6 = clap_builder::builder::arg::Arg::conflicts_with_all(&v1, &v2);
    v1 = clap_builder::builder::arg::Arg::help(&v6, "Display the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v2);
    v3 = clap_builder::builder::arg::Arg::new("user");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 117);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "user");
    v1 = clap_builder::builder::arg::Arg::conflicts_with(&v3, "group");
    v3 = clap_builder::builder::arg::Arg::help(&v1, "Display only the effective user ID as a number.");
    v1 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v1);
    v6 = clap_builder::builder::arg::Arg::new("group");
    v1 = clap_builder::builder::arg::Arg::short(&v6, 103);
    v6 = clap_builder::builder::arg::Arg::long(&v1, "group");
    v1 = clap_builder::builder::arg::Arg::conflicts_with(&v6, "user");
    v6 = clap_builder::builder::arg::Arg::help(&v1, "Display only the effective group ID as a number");
    v1 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v1);
    v3 = clap_builder::builder::arg::Arg::new("groups");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 71);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "groups");
    v2 = struct96 {
        field_0: "group"
        field_16: "user"
        field_32: "context"
        field_48: "human-readable"
        field_64: "password"
        field_80: "audit"
    };
    v1 = clap_builder::builder::arg::Arg::conflicts_with_all(&v3, &v2);
    v3 = clap_builder::builder::arg::Arg::help(&v1, "Display only the different group IDs as white-space separated numbers, in no particular order.");
    v1 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v1);
    v6 = clap_builder::builder::arg::Arg::new("human-readable");
    v1 = clap_builder::builder::arg::Arg::short(&v6, 112);
    v6 = clap_builder::builder::arg::Arg::help(&v1, "Make the output human-readable. Each display is on a separate line.");
    v1 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v1);
    v3 = clap_builder::builder::arg::Arg::new("name");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 110);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "name");
    v1 = clap_builder::builder::arg::Arg::help(&v3, "Display the name of the user or group ID for the -G, -g and -u options instead of the number.\nIf any of the ID numbers cannot be mapped into names, the number will be displayed as usual.");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v2);
    v6 = clap_builder::builder::arg::Arg::new("password");
    v1 = clap_builder::builder::arg::Arg::short(&v6, 80);
    v6 = clap_builder::builder::arg::Arg::help(&v1, "Display the id as a password file entry.");
    v1 = clap_builder::builder::arg::Arg::conflicts_with(&v6, "human-readable");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v2);
    v3 = clap_builder::builder::arg::Arg::new("real");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 114);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "real");
    v1 = clap_builder::builder::arg::Arg::help(&v3, "Display the real ID for the -G, -g and -u options instead of the effective ID.");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v2);
    v6 = clap_builder::builder::arg::Arg::new("zero");
    v1 = clap_builder::builder::arg::Arg::short(&v6, 122);
    v6 = clap_builder::builder::arg::Arg::long(&v1, "zero");
    v1 = clap_builder::builder::arg::Arg::help(&v6, "delimit entries with NUL characters, not whitespace;\nnot permitted in default format");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v2);
    v3 = clap_builder::builder::arg::Arg::new("context");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 90);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "context");
    v2 = struct32 {
        field_0: "group"
        field_16: "user"
    };
    v1 = clap_builder::builder::arg::Arg::conflicts_with_all(&v3, &v2);
    v3 = clap_builder::builder::arg::Arg::help(&v1, "print only the security context of the process (not enabled)");
    v1 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v1);
    v6 = clap_builder::builder::arg::Arg::new("USER");
    v1 = clap_builder::builder::arg::Arg::action(&v6, 1);
    v6 = clap_builder::builder::arg::Arg::value_name(&v1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v6);
    clap_builder::builder::command::Command::arg(v0, &v3, &v1);
    return a0;
}
