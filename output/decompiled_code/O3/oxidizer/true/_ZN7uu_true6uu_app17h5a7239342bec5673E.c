fn uu_true::uu_app(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i4736;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v1: i5696;  // [sp-0x538], Other Possible Types: struct592, struct712
    let v2: i64;  // [sp-0x27c]
    let v3: i32;  // [sp-0x274]
    let v4: i4736;  // [sp-0x270], Other Possible Types: struct592
    let v6: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v1 = clap_builder::builder::command::Command::version(&v0, v6);
    v0 = clap_builder::builder::command::Command::about(&v1);
    memcpy(&v1, &v0, 700);
    v2 = 0x14000000140000 | *((&v0 as &char + 700) as &i64);
    v3 = *((&v0 as &char + 708) as &i32);
    v0 = clap_builder::builder::arg::Arg::new("help");
    v4 = clap_builder::builder::arg::Arg::long(&v0, "help");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "Print help information");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x5);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("version");
    v4 = clap_builder::builder::arg::Arg::long(&v1, "version");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "Print version information");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 0x8);
    clap_builder::builder::command::Command::arg(a0, &v0, &v4);
    return a0;
}
