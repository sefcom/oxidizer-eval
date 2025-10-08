fn uu_uname::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v4: struct712;  // [bp-0x830]
    let v5: struct640;  // [bp-0x830]
    let v6: struct640;  // [bp-0x830]
    let v7: struct640;  // [bp-0x830]
    let v8: u32;  // [bp-0x5b8]
    let v9: u64;  // [bp-0x574]
    let v10: u32;  // [bp-0x56c]
    let v11: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v12: struct712;  // [bp-0x568]
    let v13: struct640;  // [bp-0x568]
    let v14: struct640;  // [bp-0x568]
    let v15: struct640;  // [bp-0x568]
    let v16: u32;  // [bp-0x2f0]
    let v17: u64;  // [bp-0x2ac]
    let v18: u32;  // [bp-0x2a4]
    let v19: struct640;  // [bp-0x2a0]
    let v22: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v22);
    v11 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v11);
    v0 = uucore::format_usage("{} [OPTION]...");
    v11 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v11, 700);
    v9 = 549755814016 | v17;
    v10 = v18;
    v11 = clap_builder::builder::arg::Arg::new("all");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 97);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "all");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "Behave as though all of the options -mnrsvo were specified.");
    v19 = clap_builder::builder::arg::Arg::action(&v0);
    v11 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("kernel-name");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "kernel-name");
    v0 = clap_builder::builder::arg::Arg::alias(&v3, &g_4181bd);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "print the kernel name.");
    v0 = clap_builder::builder::arg::Arg::action(&v3);
    v3 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("nodename");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 110);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "nodename");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "print the nodename (the nodename may be a name that the system is known by to a communications network).");
    v19 = clap_builder::builder::arg::Arg::action(&v0);
    v11 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("kernel-release");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 114);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "kernel-release");
    v0 = clap_builder::builder::arg::Arg::alias(&v3, &g_418242);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "print the operating system release.");
    v0 = clap_builder::builder::arg::Arg::action(&v3);
    v3 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("kernel-version");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 118);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "kernel-version");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "print the operating system version.");
    v19 = clap_builder::builder::arg::Arg::action(&v0);
    v11 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("machine");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 109);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "machine");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "print the machine hardware name.");
    v19 = clap_builder::builder::arg::Arg::action(&v0);
    v4 = clap_builder::builder::command::Command::arg(&v11, &v19);
    v11 = clap_builder::builder::arg::Arg::new("operating-system");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 111);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "operating-system");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "print the operating system name.");
    v19 = clap_builder::builder::arg::Arg::action(&v0);
    v12 = clap_builder::builder::command::Command::arg(&v4, &v19);
    v5 = clap_builder::builder::arg::Arg::new("processor");
    v0 = clap_builder::builder::arg::Arg::short(&v5, 112);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "processor");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "print the processor type (non-portable)");
    v7 = clap_builder::builder::arg::Arg::action(&v0);
    memcpy(&v0, &v7, 632);
    v1 = v8 | 4;
    v2 = v8;
    v3 = clap_builder::builder::command::Command::arg(&v12, &v0);
    v13 = clap_builder::builder::arg::Arg::new("hardware-platform");
    v0 = clap_builder::builder::arg::Arg::short(&v13, 105);
    v14 = clap_builder::builder::arg::Arg::long(&v0, "hardware-platform");
    v0 = clap_builder::builder::arg::Arg::help(&v14, "print the hardware platform (non-portable)");
    v15 = clap_builder::builder::arg::Arg::action(&v0);
    memcpy(&v0, &v15, 632);
    v1 = v16 | 4;
    v2 = v16;
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return;
}
