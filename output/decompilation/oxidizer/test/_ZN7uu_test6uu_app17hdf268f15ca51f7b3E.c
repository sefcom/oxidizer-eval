fn uu_test::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x5c0]
    let v1: struct437;  // [bp-0x5a8], Other Possible Types: struct712
    let v2: struct712;  // [bp-0x2e0]
    let v5: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v2);
    v0 = uucore::format_usage("test EXPRESSION\n[\n[ EXPRESSION ]\n[ ]\n[ OPTION\n]");
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    clap_builder::builder::command::Command::after_help(a0, &v2);
    return;
}
