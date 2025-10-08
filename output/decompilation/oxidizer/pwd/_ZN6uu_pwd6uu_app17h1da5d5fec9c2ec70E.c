fn uu_pwd::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0xab0], Other Possible Types: struct712, struct640
    let v1: u64;  // [bp-0x7f4]
    let v2: u32;  // [bp-0x7ec]
    let v3: struct24;  // [bp-0x7e8], Other Possible Types: struct640
    let v4: struct640;  // [bp-0x568], Other Possible Types: struct712
    let v5: u64;  // [bp-0x2ac]
    let v6: u32;  // [bp-0x2a4]
    let v7: struct640;  // [bp-0x2a0]
    let v10: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v4 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v4);
    v3 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    memcpy(&v0, &v4, 700);
    v1 = 549755814016 | v5;
    v2 = v6;
    v4 = clap_builder::builder::arg::Arg::new("logical");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 76);
    v4 = clap_builder::builder::arg::Arg::long(&v3, "logical");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "use PWD from environment, even if it contains symlinks");
    v7 = clap_builder::builder::arg::Arg::action(&v3);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("physical");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 80);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "physical");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "avoid all symlinks");
    v3 = clap_builder::builder::arg::Arg::action(&v0);
    clap_builder::builder::command::Command::arg(a0, &v4, &v3);
    return;
}
