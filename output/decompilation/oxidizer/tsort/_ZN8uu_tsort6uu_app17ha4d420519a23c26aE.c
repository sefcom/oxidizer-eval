fn uu_tsort::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct640;  // [bp-0x828], Other Possible Types: struct712
    let v1: u32;  // [bp-0x5b0]
    let v2: u32;  // [bp-0x5ac]
    let v3: u64;  // [bp-0x56c]
    let v4: u32;  // [bp-0x564]
    let v5: struct24;  // [bp-0x560], Other Possible Types: struct640
    let v6: u32;  // [bp-0x2e8]
    let v7: u32;  // [bp-0x2e4]
    let v8: struct437;  // [bp-0x2e0], Other Possible Types: struct712
    let v9: u64;  // [bp-0x24]
    let v10: u32;  // [bp-0x1c]
    let v13: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    v0 = clap_builder::builder::command::Command::version(&v8);
    v5 = uucore::format_usage("{} [OPTIONS] FILE");
    v8 = clap_builder::builder::command::Command::override_usage(&v0, &v5);
    v0 = clap_builder::builder::command::Command::about(&v8);
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | v3;
    v10 = v4;
    v0 = clap_builder::builder::arg::Arg::new();
    v5 = clap_builder::builder::arg::Arg::default_value(&v0);
    memcpy(&v0, &v5, 632);
    v1 = v6 | 4;
    v2 = v7;
    v5 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v8, &v5);
    return;
}
