long long uu_paste::uu_app::h87aafd5fcd701ee2(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h2d89901a4c11736f(&v3, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::h1786ea0568577d16(&v6, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::he37ac683e6989227(&v3, &v6, "Write lines consisting of the sequentially corresponding lines from each\n`FILE`, separated by `TAB`s, to standard output.", 121);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTIONS] [FILE]...", 22);
    clap_builder::builder::command::Command::override_usage::h36151491c16bc914(&v6, &v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | *((long long *)&v7);
    v5 = *((int *)&v8);
    clap_builder::builder::arg::Arg::new::h69c65de3dd0c85d1(&v6, "serial", 6);
    clap_builder::builder::arg::Arg::long::h32a364c1d5e44f7a(&v0, &v6, "serial", 6);
    clap_builder::builder::arg::Arg::short::h50c6c71bc945f571(&v6, &v0, 115);
    clap_builder::builder::arg::Arg::help::hd0bdc3f2ccbb627d(&v0, &v6, "paste one file at a time instead of in parallel", 47);
    clap_builder::builder::arg::Arg::action::h40df50799c878ac5(&v9, &v0, 2);
    clap_builder::builder::command::Command::arg::h319b9505fad8ef44(&v6, &v3, &v9);
    clap_builder::builder::arg::Arg::new::h69c65de3dd0c85d1(&v3, "delimiters", 10);
    clap_builder::builder::arg::Arg::long::h32a364c1d5e44f7a(&v0, &v3, "delimiters", 10);
    clap_builder::builder::arg::Arg::short::h50c6c71bc945f571(&v3, &v0, 100);
    clap_builder::builder::arg::Arg::help::hd0bdc3f2ccbb627d(&v0, &v3, "reuse characters from LIST instead of TABs", 42);
    clap_builder::builder::arg::Arg::value_name::hb77c6348bf2cf90f(&v3, &v0, "LISTAuto");
    clap_builder::builder::arg::Arg::default_value::h5773730136277d55(&v0, &v3, "\t");
    memcpy(&v9, &v0, 584);
    v10 = 0x400 | *((int *)&v1);
    v11 = *((int *)&v2);
    clap_builder::builder::command::Command::arg::h319b9505fad8ef44(&v3, &v6, &v9);
    clap_builder::builder::arg::Arg::new::h69c65de3dd0c85d1(&v6, "filei128", 4);
    clap_builder::builder::arg::Arg::value_name::hb77c6348bf2cf90f(&v0, &v6, "FILE");
    clap_builder::builder::arg::Arg::action::h40df50799c878ac5(&v6, &v0, 1);
    clap_builder::builder::arg::Arg::default_value::h5773730136277d55(&v0, &v6, "-");
    clap_builder::builder::arg::Arg::value_hint::h9782c062f6c33716(&v9, &v0, 3);
    clap_builder::builder::command::Command::arg::h319b9505fad8ef44(&v6, &v3, &v9);
    clap_builder::builder::arg::Arg::new::h69c65de3dd0c85d1(&v3, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::long::h32a364c1d5e44f7a(&v0, &v3, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::short::h50c6c71bc945f571(&v3, &v0, 122);
    clap_builder::builder::arg::Arg::help::hd0bdc3f2ccbb627d(&v0, &v3, "line delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 34);
    clap_builder::builder::arg::Arg::action::h40df50799c878ac5(&v3, &v0, 2);
    clap_builder::builder::command::Command::arg::h319b9505fad8ef44(a0, &v6, &v3);
    return a0;
}
