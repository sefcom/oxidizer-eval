fn uu_yes::uu_app() -> : struct700 {
    let a0: i64;  // rdi
    let v0: struct437;  // [bp-0xaa8], Other Possible Types: struct640, struct712
    let v1: u64;  // [bp-0x7ec]
    let v2: u32;  // [bp-0x7e4]
    let v3: struct24;  // [bp-0x7e0], Other Possible Types: struct640
    let v4: struct712;  // [bp-0x560]
    let v5: struct640;  // [bp-0x298], Other Possible Types: u64
    let v8: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v8);
    v4 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v4);
    v3 = uucore::format_usage("{} [STRING]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new();
    v5 = 2;
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v5);
    v5 = clap_builder::builder::arg::Arg::action(&v3);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v5);
    memcpy(a0, &v0, 700);
    *((a0 + 700) as &u64) = 549755814016 | v1;
    *((a0 + 708) as &u32) = v2;
    return;
}
