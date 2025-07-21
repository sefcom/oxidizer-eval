fn uu_link::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0x818]
    let v1: u8;  // [bp-0x800]
    let v2: u32;  // [bp-0x5b8]
    let v3: i8;  // [bp-0x5b4]
    let v4: u64;  // [bp-0x544]
    let v5: u32;  // [bp-0x53c]
    let v6: struct437;  // [bp-0x538]
    let v7: u64;  // [bp-0x27c]
    let v8: u32;  // [bp-0x274]
    let v9: u8;  // [bp-0x270]
    let v10: u32;  // [bp-0x28]
    let v11: u32;  // [bp-0x24]
    let v14: u64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v1, &v6);
    clap_builder::builder::command::Command::about(&v6, &v1);
    uucore::format_usage(&v9, "{} FILE1 FILE2");
    clap_builder::builder::command::Command::override_usage(&v1, &v6, &v9);
    memcpy(&v6, &v1, 700);
    v7 = 549755814016 | v4;
    v8 = v5;
    clap_builder::builder::arg::Arg::new(&v1);
    memcpy(&v9, &v1, 584);
    v10 = v2 | 5;
    v11 = *(&v3 as &i32);
    clap_builder::builder::arg::Arg::num_args(&v1, &v9);
    clap_builder::builder::arg::Arg::value_hint(&v9, &v1);
    v0 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v1, &v9, &v0);
    clap_builder::builder::command::Command::arg(a0, &v6, &v1);
    return a0;
}
