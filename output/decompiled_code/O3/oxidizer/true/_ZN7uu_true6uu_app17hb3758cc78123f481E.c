fn uu_true::uu_app(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i4736;  // [sp-0x800], Other Possible Types: struct712, struct592, struct437
    let v1: i4736;  // [sp-0x538], Other Possible Types: struct592, struct712
    let v2: struct592;  // [sp-0x270], Other Possible Types: i4736
    let v4: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v1 = clap_builder::builder::command::Command::version(&v0, v4);
    v0 = clap_builder::builder::command::Command::about(&v1);
    memcpy(&v1, &v0, 700);
    v1.700 = 0x14000000140000 | (stack_base)[1348] as i64;
    v1.708 = (stack_base)[1340] as i32;
    v0 = clap_builder::builder::arg::Arg::new("help");
    v2 = clap_builder::builder::arg::Arg::long(&v0, "help");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "Print help information");
    v2 = clap_builder::builder::arg::Arg::action(&v0, 5);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v2);
    v1 = clap_builder::builder::arg::Arg::new("version");
    v2 = clap_builder::builder::arg::Arg::long(&v1, "version");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "Print version information");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 8);
    clap_builder::builder::command::Command::arg(a0, &v0, &v2);
    return a0;
}
