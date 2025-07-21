fn uu_uname::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: struct437;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: i8;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: u32;  // [bp-0x534]
    let v8: u8;  // [bp-0x530]
    let v9: u32;  // [bp-0x2e8]
    let v10: i8;  // [bp-0x2e4]
    let v11: u64;  // [bp-0x274]
    let v12: u32;  // [bp-0x26c]
    let v13: u8;  // [bp-0x268]
    let v16: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    clap_builder::builder::command::Command::version(&v8, &v3, "0.0.28");
    clap_builder::builder::command::Command::about(&v3, &v8, "Print certain system information. \nWith no OPTION, same as -s.");
    uucore::format_usage(&v0, "{} [OPTION]...");
    clap_builder::builder::command::Command::override_usage(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | v11;
    v7 = v12;
    clap_builder::builder::arg::Arg::new(&v8, "all");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 97);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "all");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "Behave as though all of the options -mnrsvo were specified.");
    clap_builder::builder::arg::Arg::action(&v13, &v0);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "kernel-name");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "kernel-name");
    clap_builder::builder::arg::Arg::alias(&v0, &v3, "sysname");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "print the kernel name.");
    clap_builder::builder::arg::Arg::action(&v0, &v3);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "nodename");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 110);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "nodename");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "print the nodename (the nodename may be a name that the system is known by to a communications network).");
    clap_builder::builder::arg::Arg::action(&v13, &v0);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "kernel-release");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 114);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "kernel-release");
    clap_builder::builder::arg::Arg::alias(&v0, &v3, "release");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "print the operating system release.");
    clap_builder::builder::arg::Arg::action(&v0, &v3);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "kernel-version");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 118);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "kernel-version");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "print the operating system version.");
    clap_builder::builder::arg::Arg::action(&v13, &v0);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "machine");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 109);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "machine");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "print the machine hardware name.");
    clap_builder::builder::arg::Arg::action(&v13, &v0);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "operating-system");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 111);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "operating-system");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "print the operating system name.");
    clap_builder::builder::arg::Arg::action(&v13, &v0);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "processor");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 112);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "processor");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "print the processor type (non-portable)");
    clap_builder::builder::arg::Arg::action(&v3, &v0);
    memcpy(&v0, &v3, 584);
    v1 = v4 | 4;
    v2 = *(&v5 as &i32);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "hardware-platform");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 105);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "hardware-platform");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "print the hardware platform (non-portable)");
    clap_builder::builder::arg::Arg::action(&v8, &v0);
    memcpy(&v0, &v8, 584);
    v1 = v9 | 4;
    v2 = *(&v10 as &i32);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return a0;
}
