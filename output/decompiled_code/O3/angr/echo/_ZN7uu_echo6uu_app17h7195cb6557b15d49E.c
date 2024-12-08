long long uu_echo::uu_app::h7195cb6557b15d49(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h42b4438b9a1a507a(&v0, uucore::util_name::h412db5e565a079f3(), v9);
    memcpy(&v3, &v0, 700);
    v4 = *((int *)&v1) | 34;
    v5 = *((long long *)&v2);
    clap_builder::builder::command::Command::version::h2134f3c04788380d(&v0, &v3, v9);
    clap_builder::builder::command::Command::about::h7a3e29e1359d2459(&v3, &v0);
    clap_builder::builder::command::Command::after_help::h0f000f8174a97d60(&v0, &v3);
    uucore::format_usage::h00b69bae12d8ac9c(&v6, "{} [OPTIONS]... [STRING]...", 27);
    clap_builder::builder::command::Command::override_usage::hd88476731941c680(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::ha1175ab270eac012(&v0, "no_newline", 10);
    clap_builder::builder::arg::Arg::short::h4012822f3b3cf68c(&v6, &v0, 110);
    clap_builder::builder::arg::Arg::help::h2a4f12c5ff6ea177(&v0, &v6, "do not output the trailing newline", 34);
    clap_builder::builder::arg::Arg::action::h55a99fca07a596aa(&v6, &v0, 2);
    clap_builder::builder::command::Command::arg::ha17b84c04eceed33(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new::ha1175ab270eac012(&v3, "enable_backslash_escape", 23);
    clap_builder::builder::arg::Arg::short::h4012822f3b3cf68c(&v6, &v3, 101);
    clap_builder::builder::arg::Arg::help::h2a4f12c5ff6ea177(&v3, &v6, "enable interpretation of backslash escapes", 42);
    clap_builder::builder::arg::Arg::action::h55a99fca07a596aa(&v6, &v3, 2);
    clap_builder::builder::arg::Arg::overrides_with::hffbec1cd45d81b53(&v7, &v6, "disable_backslash_escape", 24);
    clap_builder::builder::command::Command::arg::ha17b84c04eceed33(&v3, &v0, &v7);
    clap_builder::builder::arg::Arg::new::ha1175ab270eac012(&v0, "disable_backslash_escape", 24);
    clap_builder::builder::arg::Arg::short::h4012822f3b3cf68c(&v6, &v0, 69);
    clap_builder::builder::arg::Arg::help::h2a4f12c5ff6ea177(&v0, &v6, "disable interpretation of backslash escapes (default)", 53);
    clap_builder::builder::arg::Arg::action::h55a99fca07a596aa(&v6, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::hffbec1cd45d81b53(&v7, &v6, "enable_backslash_escape", 23);
    clap_builder::builder::command::Command::arg::ha17b84c04eceed33(&v0, &v3, &v7);
    clap_builder::builder::arg::Arg::new::ha1175ab270eac012(&v3, "STRING", 6);
    clap_builder::builder::arg::Arg::action::h55a99fca07a596aa(&v6, &v3, 1);
    v7 = 2;
    clap_builder::builder::arg::Arg::value_parser::ha10831d2f810fa11(&v3, &v6, &v7);
    clap_builder::builder::command::Command::arg::ha17b84c04eceed33(a0, &v0, &v3);
    return a0;
}
