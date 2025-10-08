fn uu_logname::uu_app() -> : struct700 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x5c0]
    let v1: struct712;  // [bp-0x5a8]
    let v2: u64;  // [bp-0x2ec]
    let v3: u32;  // [bp-0x2e4]
    let v4: struct437;  // [bp-0x2e0], Other Possible Types: struct712
    let v7: u64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v1 = clap_builder::builder::command::Command::version(&v4);
    v0 = uucore::format_usage("{}");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    v1 = clap_builder::builder::command::Command::about(&v4);
    memcpy(a0, &v1, 700);
    *((a0 + 700) as &u64) = 549755814016 | v2;
    *((a0 + 708) as &u32) = v3;
    return;
}
