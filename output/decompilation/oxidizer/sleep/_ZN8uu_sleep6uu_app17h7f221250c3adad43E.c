fn uu_sleep::uu_app(a0: &struct712) -> u64 {
    let v0: struct712;  // [sp-0x7f8]
    let v1: i64;  // [sp-0x53c]
    let v2: i32;  // [sp-0x534]
    let v3: struct592;  // [sp-0x530], Other Possible Types: struct712, struct437
    let v4: struct592;  // [sp-0x268], Other Possible Types: struct24
    let v6: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v0 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v0, "Pause for NUMBER seconds.");
    v0 = clap_builder::builder::command::Command::after_help(&v3, "Pause for NUMBER seconds.  SUFFIX may be 's' for seconds (the default),
'm' for minutes, 'h' for hours or 'd' for days.  Unlike most implementations
that require NUMBER be an integer, here NUMBER may be an arbitrary floating
point number.  Given two or more arguments, pause for the amount of time
specified by the sum of their values.");
    v4 = uucore::format_usage("{} NUMBER[SUFFIX]...
{} OPTION");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v4);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | *((&v3.field_0 as &char + 700) as &i64);
    v2 = *((&v3.field_0 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("NUMBER");
    v4 = clap_builder::builder::arg::Arg::help(&v3);
    v3 = clap_builder::builder::arg::Arg::value_name(&v4);
    v4 = clap_builder::builder::arg::Arg::action(&v3);
    clap_builder::builder::command::Command::arg(a0, &v0, &v4);
    return a0;
}
