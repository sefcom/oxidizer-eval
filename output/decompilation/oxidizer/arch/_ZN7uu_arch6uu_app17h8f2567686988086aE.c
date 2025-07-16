fn uu_arch::uu_app() -> : struct700 {
    let a0: i64;  // rsi
    let v0: u8;  // [bp-0x5a8]
    let v1: u64;  // [bp-0x2ec]
    let v2: u32;  // [bp-0x2e4]
    let v3: struct437;  // [bp-0x2e0]
    let v6: u64;  // rdx
    let v7: i64;  // rdi

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    clap_builder::builder::command::Command::version(&v0, &v3);
    clap_builder::builder::command::Command::about(&v3, &v0);
    clap_builder::builder::command::Command::after_help(&v0, &v3);
    memcpy(v7, &v0, 700);
    *((v7 + 700) as &u64) = 549755814016 | v1;
    *((v7 + 708) as &u32) = v2;
    return;
}
