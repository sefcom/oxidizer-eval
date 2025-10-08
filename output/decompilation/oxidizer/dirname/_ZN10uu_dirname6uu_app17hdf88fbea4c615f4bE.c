fn uu_dirname::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0xaa8], Other Possible Types: struct712, struct640
    let v1: u32;  // [bp-0x830]
    let v2: i8;  // [bp-0x82c]
    let v3: u64;  // [bp-0x7ec]
    let v4: u32;  // [bp-0x7e4]
    let v5: struct24;  // [bp-0x7e0], Other Possible Types: struct640
    let v6: u32;  // [bp-0x568]
    let v7: u32;  // [bp-0x564]
    let v8: struct640;  // [bp-0x560], Other Possible Types: struct712
    let v9: u64;  // [bp-0x2a4]
    let v10: u32;  // [bp-0x29c]
    let v11: struct640;  // [bp-0x298]
    let v14: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v8 = clap_builder::builder::command::Command::about(&v0);
    v0 = clap_builder::builder::command::Command::version(&v8);
    v5 = uucore::format_usage("{} [OPTION] NAME...");
    v8 = clap_builder::builder::command::Command::override_usage(&v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | v9;
    v4 = v10;
    v8 = clap_builder::builder::arg::Arg::new("zero");
    v5 = clap_builder::builder::arg::Arg::long(&v8);
    v8 = clap_builder::builder::arg::Arg::short(&v5);
    v5 = clap_builder::builder::arg::Arg::help(&v8);
    v11 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v8 = clap_builder::builder::command::Command::arg(&v0, &v11);
    v0 = clap_builder::builder::arg::Arg::new("dir");
    memcpy(&v5, &v0, 632);
    v6 = v1 | 4;
    v7 = *(&v2 as &i32);
    v0 = clap_builder::builder::arg::Arg::action(&v5, 1);
    v5 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v8, &v5);
    return;
}
