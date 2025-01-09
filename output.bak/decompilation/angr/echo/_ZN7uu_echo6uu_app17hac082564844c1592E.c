long long uu_echo::uu_app::hac082564844c1592(unsigned long long a0)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x78c]
    char v2;  // [bp-0x788]
    char v3;  // [bp-0x780]
    unsigned int v4;  // [sp-0x4c4]
    unsigned long long v5;  // [sp-0x4c0]
    char v6;  // [bp-0x4b8]
    char v7;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::hc7ec6dfb1f3b4da7(&v0, uucore::util_name::h60d842bf27b05e82(), v9);
    memcpy(&v3, &v0, 700);
    v4 = *((int *)&v1) | 34;
    v5 = *((long long *)&v2);
    clap_builder::builder::command::Command::version::hafd05bea21e57d41(&v0, &v3);
    clap_builder::builder::command::Command::about::hf2b328b183190985(&v3, &v0);
    clap_builder::builder::command::Command::after_help::hcc85c3a742b69a8b(&v0, &v3);
    uucore::format_usage::h76fcb2d15fbabc58(&v6, "{} [OPTIONS]... [STRING]...", 27);
    clap_builder::builder::command::Command::override_usage::h92e7942a580e103d(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::hb5e8990be33da4cd(&v0, "no_newline", 10);
    clap_builder::builder::arg::Arg::short::h0c0faedee966dc35(&v6, &v0, 110);
    clap_builder::builder::arg::Arg::help::h832a6dbb682de13b(&v0, &v6, "do not output the trailing newline", 34);
    clap_builder::builder::arg::Arg::action::hf068255853920169(&v6, &v0, 2);
    clap_builder::builder::command::Command::arg::h68fa26210e2f8086(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new::hb5e8990be33da4cd(&v3, "enable_backslash_escape", 23);
    clap_builder::builder::arg::Arg::short::h0c0faedee966dc35(&v6, &v3, 101);
    clap_builder::builder::arg::Arg::help::h832a6dbb682de13b(&v3, &v6, "enable interpretation of backslash escapes", 42);
    clap_builder::builder::arg::Arg::action::hf068255853920169(&v6, &v3, 2);
    clap_builder::builder::arg::Arg::overrides_with::h554d066c90c03c16(&v7, &v6, "disable_backslash_escape", 24);
    clap_builder::builder::command::Command::arg::h68fa26210e2f8086(&v3, &v0, &v7);
    clap_builder::builder::arg::Arg::new::hb5e8990be33da4cd(&v0, "disable_backslash_escape", 24);
    clap_builder::builder::arg::Arg::short::h0c0faedee966dc35(&v6, &v0, 69);
    clap_builder::builder::arg::Arg::help::h832a6dbb682de13b(&v0, &v6, "disable interpretation of backslash escapes (default)", 53);
    clap_builder::builder::arg::Arg::action::hf068255853920169(&v6, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::h554d066c90c03c16(&v7, &v6, "enable_backslash_escape", 23);
    clap_builder::builder::command::Command::arg::h68fa26210e2f8086(&v0, &v3, &v7);
    clap_builder::builder::arg::Arg::new::hb5e8990be33da4cd(&v3, "STRING", 6);
    clap_builder::builder::arg::Arg::action::hf068255853920169(&v6, &v3, 1);
    v7 = 2;
    clap_builder::builder::arg::Arg::value_parser::h5c4830a846a90deb(&v3, &v6, &v7);
    clap_builder::builder::command::Command::arg::h68fa26210e2f8086(a0, &v0, &v3);
    return a0;
}
