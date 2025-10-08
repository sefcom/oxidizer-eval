fn uu_arch::uu_app() -> : struct700 {
    let a0: i64;  // rdi
    let v0: struct712;  // [bp-0x5a8]
    let v1: u64;  // [bp-0x2ec]
    let v2: u32;  // [bp-0x2e4]
    let v3: struct437;  // [bp-0x2e0], Other Possible Types: struct712
    let v6: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v0 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v0);
    v0 = clap_builder::builder::command::Command::after_help(&v3);
    memcpy(a0, &v0, 700);
    *((a0 + 700) as &u64) = 549755814016 | v1;
    *((a0 + 708) as &u32) = v2;
    return;
}
