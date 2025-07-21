fn uu_sleep::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0x7f8]
    let v1: u64;  // [bp-0x53c]
    let v2: u32;  // [bp-0x534]
    let v3: struct437;  // [bp-0x530]
    let v4: u64;  // [bp-0x274]
    let v5: u32;  // [bp-0x26c]
    let v6: u8;  // [bp-0x268]
    let v9: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    clap_builder::builder::command::Command::version(&v0, &v3, "0.0.28");
    clap_builder::builder::command::Command::about(&v3, &v0, "Pause for NUMBER seconds.");
    clap_builder::builder::command::Command::after_help(&v0, &v3, "Pause for NUMBER seconds.  SUFFIX may be 's' for seconds (the default),\n'm' for minutes, 'h' for hours or 'd' for days.  Unlike most implementations\nthat require NUMBER be an integer, here NUMBER may be an arbitrary floating\npoint number.  Given two or more arguments, pause for the amount of time\nspecified by the sum of their values.");
    uucore::format_usage(&v6, "{} NUMBER[SUFFIX]...\n{} OPTION");
    clap_builder::builder::command::Command::override_usage(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | v4;
    v2 = v5;
    clap_builder::builder::arg::Arg::new(&v3, "NUMBER");
    clap_builder::builder::arg::Arg::help(&v6, &v3);
    clap_builder::builder::arg::Arg::value_name(&v3, &v6);
    clap_builder::builder::arg::Arg::action(&v6, &v3);
    clap_builder::builder::command::Command::arg(a0, &v0, &v6);
    return a0;
}
