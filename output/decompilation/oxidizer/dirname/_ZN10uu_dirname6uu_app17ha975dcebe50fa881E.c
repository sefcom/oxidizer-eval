fn uu_dirname::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0xa50], Other Possible Types: struct712, struct437
    let v1: i64;  // [sp-0x794]
    let v2: i32;  // [sp-0x78c]
    let v3: struct592;  // [sp-0x788], Other Possible Types: struct24
    let v4: i32;  // [sp-0x540]
    let v5: i32;  // [sp-0x53c]
    let v6: struct712;  // [sp-0x538], Other Possible Types: struct592
    let v7: struct592;  // [sp-0x270]
    let v9: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v6 = clap_builder::builder::command::Command::about(&v0);
    v0 = clap_builder::builder::command::Command::version(&v6);
    v3 = uucore::format_usage("{} [OPTION] NAME...");
    v6 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    memcpy(&v0, &v6, 700);
    v1 = 584115552392 | *((&v6.field_0 as &char + 700) as &i64);
    v2 = *((&v6.field_0 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("zero");
    v3 = clap_builder::builder::arg::Arg::long(&v6);
    v6 = clap_builder::builder::arg::Arg::short(&v3);
    v3 = clap_builder::builder::arg::Arg::help(&v6);
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("dir");
    memcpy(&v3, &v0, 584);
    v4 = *((&v0.field_0 as &char + 584) as &i32) | 4;
    v5 = *((&v0.field_0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
