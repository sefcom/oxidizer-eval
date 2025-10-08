fn uu_unlink::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x848]
    let v1: struct640;  // [bp-0x830]
    let v2: struct712;  // [bp-0x830]
    let v3: struct712;  // [bp-0x830]
    let v4: u32;  // [bp-0x5b8]
    let v5: u64;  // [bp-0x574]
    let v6: u32;  // [bp-0x56c]
    let v7: struct437;  // [bp-0x568], Other Possible Types: struct712
    let v8: u64;  // [bp-0x2ac]
    let v9: u32;  // [bp-0x2a4]
    let v10: struct24;  // [bp-0x2a0], Other Possible Types: struct640
    let v11: u32;  // [bp-0x28]
    let v12: u32;  // [bp-0x24]
    let v15: u64;  // rdx

    v7 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    v2 = clap_builder::builder::command::Command::version(&v7);
    v7 = clap_builder::builder::command::Command::about(&v2);
    v10 = uucore::format_usage("{} FILE\n{} OPTION");
    v3 = clap_builder::builder::command::Command::override_usage(&v7, &v10);
    memcpy(&v7, &v3, 700);
    v8 = 549755814016 | v5;
    v9 = v6;
    v1 = clap_builder::builder::arg::Arg::new();
    memcpy(&v10, &v1, 632);
    v11 = v4 | 5;
    v12 = v4;
    v0 = 2;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v10, &v0);
    v10 = clap_builder::builder::arg::Arg::value_hint(&v1);
    clap_builder::builder::command::Command::arg(a0, &v7, &v10);
    return;
}
