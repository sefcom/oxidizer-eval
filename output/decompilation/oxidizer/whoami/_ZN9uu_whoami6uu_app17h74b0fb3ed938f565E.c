fn uu_whoami::uu_app(a0: &struct712) -> u64 {
    let v0: struct24;  // [sp-0x5c0]
    let v1: struct712;  // [sp-0x5a8]
    let v2: struct712;  // [sp-0x2e0], Other Possible Types: struct437
    let v4: i64;  // rdx
    let v5: i32;  // ecx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v1 = clap_builder::builder::command::Command::version(&v2);
    v2 = clap_builder::builder::command::Command::about(&v1);
    v0 = uucore::format_usage("{}");
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v0);
    memcpy(a0, &v1, 700);
    v5 = *((&v1.field_0 as &char + 708) as &i32);
    *((a0 + 700) as &i64) = 549755814016 | *((&v1.field_0 as &char + 700) as &i64);
    *((a0 + 708) as &unsigned int) = v5;
    return a0;
}
