long long uu_sum::uu_app::hbdfcd560e86e61fa(unsigned long long a0)
{
    char v0;  // [bp-0x7f8]
    unsigned int v1;  // [sp-0x5b0]
    unsigned int v2;  // [sp-0x5ac]
    char v3;  // [bp-0x53c]
    char v4;  // [bp-0x534]
    char v5;  // [bp-0x530]
    char v6;  // [bp-0x2e8]
    char v7;  // [bp-0x2e4]
    char v8;  // [bp-0x2e0]
    unsigned long long v9;  // [sp-0x24]
    unsigned int v10;  // [sp-0x1c]
    unsigned long long v12;  // rdx

    clap_builder::builder::command::Command::new::h145afba2524775e3(&v8, uucore::util_name::h60d842bf27b05e82(), v12);
    clap_builder::builder::command::Command::version::h5aa5f16b54449e9b(&v0, &v8, "0.0.28", 6);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::hbab238ce668db690(&v8, &v0, &v5);
    clap_builder::builder::command::Command::about::h0dd67728983a96e6(&v0, &v8, "Checksum and count the blocks in a file.\n\nWith no FILE, or when FILE is -, read standard input.", 95);
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | *((long long *)&v3);
    v10 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::hff157f15b11d8e5f(&v0, "filei128", 4);
    clap_builder::builder::arg::Arg::action::h138a3d481854f0e9(&v5, &v0, 1);
    memcpy(&v0, &v5, 584);
    v1 = *((int *)&v6) | 4;
    v2 = *((int *)&v7);
    clap_builder::builder::arg::Arg::value_hint::hd181bcc601839ad2(&v5, &v0, 3);
    clap_builder::builder::command::Command::arg::h09f67cd4a8d99462(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::hff157f15b11d8e5f(&v8, "r", 1);
    clap_builder::builder::arg::Arg::short::h5bff8bc39b41d2d2(&v5, &v8, 114);
    clap_builder::builder::arg::Arg::help::h1386c016a01bc406(&v8, &v5, "use the BSD sum algorithm, use 1K blocks (default)", 50);
    clap_builder::builder::arg::Arg::action::h138a3d481854f0e9(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::h09f67cd4a8d99462(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::hff157f15b11d8e5f(&v0, "sysv", 4);
    clap_builder::builder::arg::Arg::short::h5bff8bc39b41d2d2(&v5, &v0, 115);
    clap_builder::builder::arg::Arg::long::ha4bc876d2ea83518(&v0, &v5);
    clap_builder::builder::arg::Arg::help::h1386c016a01bc406(&v5, &v0, "use System V sum algorithm, use 512 bytes blocks", 48);
    clap_builder::builder::arg::Arg::action::h138a3d481854f0e9(&v0, &v5, 2);
    clap_builder::builder::command::Command::arg::h09f67cd4a8d99462(a0, &v8, &v0);
    return a0;
}
