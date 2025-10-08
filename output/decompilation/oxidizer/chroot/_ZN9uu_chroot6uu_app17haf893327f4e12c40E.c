fn uu_chroot::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct712;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: u32;  // [bp-0x7f4]
    let v4: u64;  // [bp-0x7f0]
    let v5: struct24;  // [bp-0x7e8], Other Possible Types: struct640
    let v6: u32;  // [bp-0x570]
    let v7: u32;  // [bp-0x56c]
    let v8: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v9: u32;  // [bp-0x2ac]
    let v10: u64;  // [bp-0x2a8]
    let v11: struct640;  // [bp-0x2a0]
    let v14: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v0 = clap_builder::builder::command::Command::version(&v8);
    v8 = clap_builder::builder::command::Command::about(&v0);
    v5 = uucore::format_usage("{} [OPTION]... NEWROOT [COMMAND [ARG]...]");
    v0 = clap_builder::builder::command::Command::override_usage(&v8, &v5);
    memcpy(&v8, &v0, 700);
    v9 = 160 | v3;
    v10 = 128 | v4;
    v0 = clap_builder::builder::arg::Arg::new("newroot");
    v5 = clap_builder::builder::arg::Arg::value_hint(&v0, 4);
    memcpy(&v0, &v5, 632);
    v1 = v6 | 5;
    v2 = v7;
    v5 = clap_builder::builder::arg::Arg::index(&v0, 0x1);
    v0 = clap_builder::builder::command::Command::arg(&v8, &v5);
    v8 = clap_builder::builder::arg::Arg::new("groups");
    v5 = clap_builder::builder::arg::Arg::long(&v8, "groups");
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v5);
    v5 = clap_builder::builder::arg::Arg::help(&v8, "Comma-separated list of groups to switch to");
    v11 = clap_builder::builder::arg::Arg::value_name(&v5, "GROUP1,GROUP2...");
    v8 = clap_builder::builder::command::Command::arg(&v0, &v11);
    v0 = clap_builder::builder::arg::Arg::new("userspec");
    v5 = clap_builder::builder::arg::Arg::long(&v0, "userspec");
    v0 = clap_builder::builder::arg::Arg::help(&v5, "Colon-separated user and group to switch to.");
    v5 = clap_builder::builder::arg::Arg::value_name(&v0, "USER:GROUP");
    v0 = clap_builder::builder::command::Command::arg(&v8, &v5);
    v8 = clap_builder::builder::arg::Arg::new("skip-chdir");
    v5 = clap_builder::builder::arg::Arg::long(&v8, "skip-chdir");
    v8 = clap_builder::builder::arg::Arg::help(&v5, "Use this option to not change the working directory to / after changing the root directory to newroot, i.e., inside the chroot.");
    v5 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("command");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v5, 6);
    memcpy(&v5, &v0, 632);
    v6 = v1 | 4;
    v7 = v2;
    v0 = clap_builder::builder::arg::Arg::index(&v5, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return;
}
