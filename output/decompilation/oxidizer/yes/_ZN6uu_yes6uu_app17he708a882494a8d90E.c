fn uu_yes::uu_app() -> : struct700 {
    let a0: i64;  // rsi
    let v0: struct437;  // [bp-0xa48]
    let v1: u64;  // [bp-0x78c]
    let v2: u32;  // [bp-0x784]
    let v3: u8;  // [bp-0x780]
    let v4: u8;  // [bp-0x530]
    let v5: u64;  // [bp-0x268]
    let v8: u64;  // rdx
    let v9: i64;  // rdi

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v8);
    clap_builder::builder::command::Command::version(&v4, &v0, "0.0.28");
    clap_builder::builder::command::Command::about(&v0, &v4, "Repeatedly display a line with STRING (or 'y')");
    uucore::format_usage(&v3, "{} [STRING]...");
    clap_builder::builder::command::Command::override_usage(&v4, &v0, &v3);
    clap_builder::builder::arg::Arg::new(&v0, "STRING");
    v5 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v3, &v0, &v5);
    clap_builder::builder::arg::Arg::action(&v5, &v3);
    clap_builder::builder::command::Command::arg(&v0, &v4, &v5);
    memcpy(v9, &v0, 700);
    *((v9 + 700) as &u64) = 549755814016 | v1;
    *((v9 + 708) as &u32) = v2;
    return;
}
