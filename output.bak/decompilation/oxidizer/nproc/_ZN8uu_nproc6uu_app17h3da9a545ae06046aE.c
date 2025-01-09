fn uu_nproc::uu_app(a0: &struct712) -> u64 {
    let v0: i3496;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v1: i64;  // [sp-0x544]
    let v2: i32;  // [sp-0x53c]
    let v3: i5696;  // [sp-0x538], Other Possible Types: struct712, struct592
    let v4: i192;  // [sp-0x270], Other Possible Types: struct592, struct24
    let v6: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v3 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v3);
    v4 = uucore::format_usage("{} [OPTIONS]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v4);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | *((&v3 as &char + 700) as &i64);
    v2 = *((&v3 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("all");
    v4 = clap_builder::builder::arg::Arg::long(&v3, "all");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "print the number of cores available to the system");
    v4 = clap_builder::builder::arg::Arg::action(&v3);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("ignore");
    v4 = clap_builder::builder::arg::Arg::long(&v0, "ignore");
    v0 = clap_builder::builder::arg::Arg::value_name(&v4);
    v4 = clap_builder::builder::arg::Arg::help(&v0, "ignore up to N cores");
    clap_builder::builder::command::Command::arg(a0, &v3, &v4);
    return a0;
}
