fn uu_uname::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v4: i64;  // [sp-0x53c]
    let v5: i32;  // [sp-0x534]
    let v6: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v7: i4736;  // [sp-0x268], Other Possible Types: struct592
    let v9: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v6 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v6, "Print certain system information. \nWith no OPTION, same as -s.");
    v0 = uucore::format_usage("{} [OPTION]...");
    v6 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | *((&v6 as &char + 700) as &i64);
    v5 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("all");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x61);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "all");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "Behave as though all of the options -mnrsvo were specified.");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("kernel-name");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x73);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "kernel-name");
    v0 = clap_builder::builder::arg::Arg::alias(&v3, "sysname");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "print the kernel name.");
    v0 = clap_builder::builder::arg::Arg::action(&v3);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("nodename");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x6e);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "nodename");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "print the nodename (the nodename may be a name that the system is known by to a communications network).");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("kernel-release");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x72);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "kernel-release");
    v0 = clap_builder::builder::arg::Arg::alias(&v3, "release");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "print the operating system release.");
    v0 = clap_builder::builder::arg::Arg::action(&v3);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("kernel-version");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x76);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "kernel-version");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "print the operating system version.");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("machine");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x6d);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "machine");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "print the machine hardware name.");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("operating-system");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x6f);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "operating-system");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "print the operating system name.");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("processor");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x70);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "processor");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "print the processor type (non-portable)");
    v3 = clap_builder::builder::arg::Arg::action(&v0);
    memcpy(&v0, &v3, 584);
    v1 = *((&v3 as &char + 584) as &i32) | 4;
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("hardware-platform");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x69);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "hardware-platform");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "print the hardware platform (non-portable)");
    v6 = clap_builder::builder::arg::Arg::action(&v0);
    memcpy(&v0, &v6, 584);
    v1 = *((&v6 as &char + 584) as &i32) | 4;
    v2 = *((&v6 as &char + 588) as &i32);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return a0;
}
