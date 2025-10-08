fn uu_who::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v2: u64;  // [bp-0x574]
    let v3: u32;  // [bp-0x56c]
    let v4: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v5: u64;  // [bp-0x2ac]
    let v6: u32;  // [bp-0x2a4]
    let v7: struct32;  // [bp-0x2a0], Other Possible Types: struct640
    let v10: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v4 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v4);
    v0 = uucore::format_usage("{} [OPTION]... [ FILE | ARG1 ARG2 ]");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    v4 = clap_builder::builder::arg::Arg::new("all");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "all");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 97);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "same as -b -d --login -p -r -t -T -u");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("boot");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "boot");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 98);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "time of last system boot");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("dead");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "dead");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 100);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "print dead processes");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("heading");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "heading");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 72);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "print line of column headings");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("login");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "login");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 108);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "print system login processes");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("lookup");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "lookup");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "attempt to canonicalize hostnames via DNS");
    v0 = clap_builder::builder::arg::Arg::action(&v1);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("only_hostname_user");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 109);
    v4 = clap_builder::builder::arg::Arg::help(&v0, "only hostname and user associated with stdin");
    v0 = clap_builder::builder::arg::Arg::action(&v4);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("process");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "process");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 112);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "print active processes spawned by init");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("count");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "count");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 113);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "all login names and number of users logged on");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("runlevel");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "runlevel");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 114);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "print current runlevel");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("short");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "short");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "print only name, line, and time (default)");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("time");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "time");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 116);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "print last system clock change");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("users");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "users");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 117);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "list users logged in");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("mesg");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "mesg");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 84);
    v0 = clap_builder::builder::arg::Arg::visible_short_alias(&v1);
    v7 = struct32 {
        field_0: "message"
        field_16: "writable"
    };
    v1 = clap_builder::builder::arg::Arg::visible_aliases(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "add user's message status as +, - or ?");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("FILE");
    v0 = clap_builder::builder::arg::Arg::num_args(&v4, 0x1, 2);
    v4 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v1, &v4);
    return;
}
