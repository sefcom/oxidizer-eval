long long uu_paste::uu_app::h5cabeb27f4ea1bb8(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x7fc]
    char v3;  // [bp-0x7f8]
    unsigned long long v4;  // [sp-0x53c]
    unsigned int v5;  // [sp-0x534]
    char v6;  // [bp-0x530]
    char v7;  // [bp-0x274]
    char v8;  // [bp-0x26c]
    char v9;  // [bp-0x268]
    unsigned int v10;  // [sp-0x20]
    unsigned int v11;  // [sp-0x1c]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::he4a9d22d9ccf5ed6(&v3, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::hcf9d5784f8bad3b6(&v6, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h5c365702cc2c1570(&v3, &v6, "Write lines consisting of the sequentially corresponding lines from each\n`FILE`, separated by `TAB`s, to standard output.", 121);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTIONS] [FILE]...", 22);
    clap_builder::builder::command::Command::override_usage::h992da5969b31b8bd(&v6, &v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | *((long long *)&v7);
    v5 = *((int *)&v8);
    clap_builder::builder::arg::Arg::new::h0494e73198587ce6(&v6, "serial", 6);
    clap_builder::builder::arg::Arg::long::h697ba2a49b6bc9c8(&v0, &v6, "serial", 6);
    clap_builder::builder::arg::Arg::short::h7f04bb52eb073c4e(&v6, &v0, 115);
    clap_builder::builder::arg::Arg::help::h758f7746b0facc75(&v0, &v6, "paste one file at a time instead of in parallel", 47);
    clap_builder::builder::arg::Arg::action::h5d8de72de4d80586(&v9, &v0, 2);
    clap_builder::builder::command::Command::arg::hb8f18785a8485244(&v6, &v3, &v9);
    clap_builder::builder::arg::Arg::new::h0494e73198587ce6(&v3, "delimiters", 10);
    clap_builder::builder::arg::Arg::long::h697ba2a49b6bc9c8(&v0, &v3, "delimiters", 10);
    clap_builder::builder::arg::Arg::short::h7f04bb52eb073c4e(&v3, &v0, 100);
    clap_builder::builder::arg::Arg::help::h758f7746b0facc75(&v0, &v3, "reuse characters from LIST instead of TABs", 42);
    clap_builder::builder::arg::Arg::value_name::h3cbd866f785abeef(&v3, &v0, "LISTAuto");
    clap_builder::builder::arg::Arg::default_value::h88e6c17a3f64ef9e(&v0, &v3, "\t");
    memcpy(&v9, &v0, 584);
    v10 = 0x400 | *((int *)&v1);
    v11 = *((int *)&v2);
    clap_builder::builder::command::Command::arg::hb8f18785a8485244(&v3, &v6, &v9);
    clap_builder::builder::arg::Arg::new::h0494e73198587ce6(&v6, "filei128", 4);
    clap_builder::builder::arg::Arg::value_name::h3cbd866f785abeef(&v0, &v6, "FILE");
    clap_builder::builder::arg::Arg::action::h5d8de72de4d80586(&v6, &v0, 1);
    clap_builder::builder::arg::Arg::default_value::h88e6c17a3f64ef9e(&v0, &v6, "-");
    clap_builder::builder::arg::Arg::value_hint::h661b0cd8f2e7e06d(&v9, &v0, 3);
    clap_builder::builder::command::Command::arg::hb8f18785a8485244(&v6, &v3, &v9);
    clap_builder::builder::arg::Arg::new::h0494e73198587ce6(&v3, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::long::h697ba2a49b6bc9c8(&v0, &v3, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::short::h7f04bb52eb073c4e(&v3, &v0, 122);
    clap_builder::builder::arg::Arg::help::h758f7746b0facc75(&v0, &v3, "line delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 34);
    clap_builder::builder::arg::Arg::action::h5d8de72de4d80586(&v3, &v0, 2);
    clap_builder::builder::command::Command::arg::hb8f18785a8485244(a0, &v6, &v3);
    return a0;
}
