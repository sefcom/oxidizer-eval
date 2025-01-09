long long uu_expand::uu_app::h244b390e8990c65c(unsigned long long a0)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x7fc]
    char v3;  // [bp-0x7f8]
    unsigned int v4;  // [sp-0x5b0]
    unsigned int v5;  // [sp-0x5ac]
    unsigned long long v6;  // [sp-0x53c]
    unsigned int v7;  // [sp-0x534]
    char v8;  // [bp-0x530]
    char v9;  // [bp-0x274]
    char v10;  // [bp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::hfc6c8b31e1f3b5d9(&v8, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::hbee543eae6b1aabd(&v3, &v8, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h1a6582d3f5c95cc5(&v8, &v3, "Convert tabs in each `FILE` to spaces, writing to standard output.\nWith no `FILE`, or when `FILE` is `-`, read standard input.", 126);
    clap_builder::builder::command::Command::after_help::h93937b3acdbe28a7(&v3, &v8, 1, 0);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h8c4a27fecbffb0b0(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | *((long long *)&v9);
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h444236ecf1ab14fb(&v8, "initial", 7);
    clap_builder::builder::arg::Arg::long::h4cce9299e3254cc4(&v0, &v8, "initial", 7);
    clap_builder::builder::arg::Arg::short::h9feb5ee7bae1030b(&v8, &v0, 105);
    clap_builder::builder::arg::Arg::help::hc42e98c4b39f72b2(&v0, &v8, "do not convert tabs after non blanks", 36);
    clap_builder::builder::arg::Arg::action::hda9f4dbe01033f9e(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::hfa75f4a9a76db4c2(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h444236ecf1ab14fb(&v3, "tabsAuto", 4);
    clap_builder::builder::arg::Arg::long::h4cce9299e3254cc4(&v0, &v3, "tabsAuto", 4);
    clap_builder::builder::arg::Arg::short::h9feb5ee7bae1030b(&v3, &v0, 116);
    clap_builder::builder::arg::Arg::value_name::hffbc3eef5026b0d6(&v0, &v3);
    clap_builder::builder::arg::Arg::action::hda9f4dbe01033f9e(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::help::hc42e98c4b39f72b2(&v0, &v3, "have tabs N characters apart, not 8 or use comma separated list of explicit tab positions", 89);
    clap_builder::builder::command::Command::arg::hfa75f4a9a76db4c2(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h444236ecf1ab14fb(&v8, "no-utf8", 7);
    clap_builder::builder::arg::Arg::long::h4cce9299e3254cc4(&v0, &v8, "no-utf8", 7);
    clap_builder::builder::arg::Arg::short::h9feb5ee7bae1030b(&v8, &v0, 85);
    clap_builder::builder::arg::Arg::help::hc42e98c4b39f72b2(&v0, &v8, "interpret input file as 8-bit ASCII rather than UTF-8: : Is a directory\n\n", 53);
    clap_builder::builder::arg::Arg::action::hda9f4dbe01033f9e(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::hfa75f4a9a76db4c2(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h444236ecf1ab14fb(&v3, "FILES", 5);
    clap_builder::builder::arg::Arg::action::hda9f4dbe01033f9e(&v0, &v3, 1);
    memcpy(&v3, &v0, 584);
    v4 = *((int *)&v1) | 4;
    v5 = *((int *)&v2);
    clap_builder::builder::arg::Arg::value_hint::h706c0d5e67080208(&v0, &v3, 3);
    clap_builder::builder::command::Command::arg::hfa75f4a9a76db4c2(a0, &v8, &v0);
    return a0;
}
