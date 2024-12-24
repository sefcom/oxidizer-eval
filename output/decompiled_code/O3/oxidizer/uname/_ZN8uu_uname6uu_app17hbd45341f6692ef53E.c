fn uu_uname::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v3: i4736;  // [sp-0x268], Other Possible Types: struct592
    let v5: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v2, &g_41be25, 62);
    v0 = uucore::format_usage("{} [OPTION]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v2, 700);
    v1.700 = 549755814016 | (stack_base)[628] as i64;
    v1.708 = (stack_base)[620] as i32;
    v2 = clap_builder::builder::arg::Arg::new("all");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 97);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "all");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "Behave as though all of the options -mnrsvo were specified.");
    v3 = clap_builder::builder::arg::Arg::action(&v0);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("kernel-name");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 115);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "kernel-name");
    v0 = clap_builder::builder::arg::Arg::alias(&v1, "sysname");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "print the kernel name.");
    v0 = clap_builder::builder::arg::Arg::action(&v1);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("nodename");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 110);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "nodename");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "print the nodename (the nodename may be a name that the system is known by to a communications network).");
    v3 = clap_builder::builder::arg::Arg::action(&v0);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("kernel-release");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 114);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "kernel-release");
    v0 = clap_builder::builder::arg::Arg::alias(&v1, "release");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "print the operating system release.");
    v0 = clap_builder::builder::arg::Arg::action(&v1);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("kernel-version");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 118);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "kernel-version");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "print the operating system version.");
    v3 = clap_builder::builder::arg::Arg::action(&v0);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("machine");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 109);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "machine");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "print the machine hardware name.");
    v3 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("operating-system");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 111);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "operating-system");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "print the operating system name.");
    v3 = clap_builder::builder::arg::Arg::action(&v0);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("processor");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 112);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "processor");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "print the processor type (non-portable)");
    v1 = clap_builder::builder::arg::Arg::action(&v0);
    memcpy(&v0, &v1, 584);
    v0.584 = (stack_base)[1456] as i32 | 4;
    v0.588 = (stack_base)[1452] as i32;
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("hardware-platform");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 105);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "hardware-platform");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "print the hardware platform (non-portable)");
    v2 = clap_builder::builder::arg::Arg::action(&v0);
    memcpy(&v0, &v2, 584);
    v0.584 = (stack_base)[744] as i32 | 4;
    v0.588 = (stack_base)[740] as i32;
    clap_builder::builder::command::Command::arg(a0, &v1, &v0);
    return a0;
}
