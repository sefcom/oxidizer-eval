fn uu_whoami::uu_app() -> : struct700 {
    let a0: i64;  // rsi
    let v0: u8;  // [bp-0x5c0]
    let v1: u8;  // [bp-0x5a8]
    let v2: u64;  // [bp-0x2ec]
    let v3: u32;  // [bp-0x2e4]
    let v4: struct437;  // [bp-0x2e0]
    let v7: u64;  // rdx
    let v8: i64;  // rdi

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    clap_builder::builder::command::Command::version(&v1, &v4);
    clap_builder::builder::command::Command::about(&v4, &v1);
    uucore::format_usage(&v0, "{}");
    clap_builder::builder::command::Command::override_usage(&v1, &v4, &v0);
    memcpy(v8, &v1, 700);
    *((v8 + 700) as &u64) = 549755814016 | v2;
    *((v8 + 708) as &u32) = v3;
    return;
}
