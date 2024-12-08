fn uu_nproc::uu_app(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i4736;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v1: i4736;  // [sp-0x538], Other Possible Types: struct712, struct592
    let v2: i4736;  // [sp-0x270], Other Possible Types: struct592, struct24
    let v4: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v1 = clap_builder::builder::command::Command::version(&v0, v4);
    v0 = clap_builder::builder::command::Command::about(&v1);
    v2 = uucore::format_usage("{} [OPTIONS]...");
    v1 = clap_builder::builder::command::Command::override_usage(&v0, &v2);
    memcpy(&v0, &v1, 700);
    v0.700 = 549755814016 | (stack_base)[636] as i64;
    v0.708 = (stack_base)[628] as i32;
    v1 = clap_builder::builder::arg::Arg::new("all");
    v2 = clap_builder::builder::arg::Arg::long(&v1, "all");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "print the number of cores available to the system");
    v2 = clap_builder::builder::arg::Arg::action(&v1);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v2);
    v0 = clap_builder::builder::arg::Arg::new("ignore");
    v2 = clap_builder::builder::arg::Arg::long(&v0, "ignore");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, v4);
    v2 = clap_builder::builder::arg::Arg::help(&v0, "ignore up to N cores");
    clap_builder::builder::command::Command::arg(a0, &v1, &v2);
    return a0;
}
