fn uu_arch::uu_app(a0: &struct712) -> u64 {
    let v0: i5696;  // [sp-0x5a8], Other Possible Types: struct712
    let v1: i3496;  // [sp-0x2e0], Other Possible Types: struct437, struct712
    let v3: i64;  // rdx
    let v4: i32;  // ecx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v3);
    v0 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v0);
    v0 = clap_builder::builder::command::Command::after_help(&v1);
    memcpy(a0, &v0, 700);
    v4 = *((&v0 as &char + 708) as &i32);
    *((a0 + 700) as &i64) = 549755814016 | *((&v0 as &char + 700) as &i64);
    *((a0 + 708) as &i32) = v4;
    return a0;
}
