long long uu_truncate::uu_app::hbcccf36f8c8cedf2(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    unsigned int v1;  // [sp-0x800]
    unsigned int v2;  // [sp-0x7fc]
    char v3;  // [bp-0x7f8]
    char v4;  // [bp-0x5b0]
    char v5;  // [bp-0x5ac]
    char v6;  // [bp-0x53c]
    char v7;  // [bp-0x534]
    char v8;  // [bp-0x530]
    unsigned long long v9;  // [sp-0x274]
    unsigned int v10;  // [sp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::h58faecce804013d7(&v8, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::hbc624862496e4c42(&v3, &v8, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h09cf634931f0318a(&v8, &v3, "Shrink or extend the size of each file to the specified size.", 61);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::hd8d63210a56964d5(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v9 = 549755814016 | *((long long *)&v6);
    v10 = *((int *)&v7);
    clap_builder::builder::arg::Arg::new::hea40eb3a694de562(&v3, "io-blocks", 9);
    clap_builder::builder::arg::Arg::short::h01be6fc357385dc2(&v0, &v3, 111);
    clap_builder::builder::arg::Arg::long::hc5bd0f2989b80ba2(&v3, &v0, "io-blocks", 9);
    clap_builder::builder::arg::Arg::help::h767cd160c47d06d9(&v0, &v3, "treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)", 86);
    clap_builder::builder::arg::Arg::action::h39ec1347100c0ff5(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h9b0e73d0f5d1eec4(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::hea40eb3a694de562(&v8, "no-create", 9);
    clap_builder::builder::arg::Arg::short::h01be6fc357385dc2(&v0, &v8, 99);
    clap_builder::builder::arg::Arg::long::hc5bd0f2989b80ba2(&v8, &v0, "no-create", 9);
    clap_builder::builder::arg::Arg::help::h767cd160c47d06d9(&v0, &v8, "do not create files that do not exist", 37);
    clap_builder::builder::arg::Arg::action::h39ec1347100c0ff5(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h9b0e73d0f5d1eec4(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::hea40eb3a694de562(&v3, "reference", 9);
    clap_builder::builder::arg::Arg::short::h01be6fc357385dc2(&v0, &v3, 114);
    clap_builder::builder::arg::Arg::long::hc5bd0f2989b80ba2(&v3, &v0, "reference", 9);
    clap_builder::builder::arg::Arg::required_unless_present::hbb8ab04665e288a1(&v0, &v3, "sizei128", 4);
    clap_builder::builder::arg::Arg::help::h767cd160c47d06d9(&v3, &v0, "base the size of each file on the size of RFILE", 47);
    clap_builder::builder::arg::Arg::value_name::h4c99eccc8bb25c8e(&v0, &v3, "RFILE", 5);
    clap_builder::builder::arg::Arg::value_hint::h7760bc0653556b6b(&v11, &v0, 3);
    clap_builder::builder::command::Command::arg::h9b0e73d0f5d1eec4(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::hea40eb3a694de562(&v8, "sizei128", 4);
    clap_builder::builder::arg::Arg::short::h01be6fc357385dc2(&v0, &v8, 115);
    clap_builder::builder::arg::Arg::long::hc5bd0f2989b80ba2(&v8, &v0, "sizei128", 4);
    clap_builder::builder::arg::Arg::required_unless_present::hbb8ab04665e288a1(&v0, &v8, "reference", 9);
    clap_builder::builder::arg::Arg::help::h767cd160c47d06d9(&v8, &v0, "set or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specifiedcannot open  for writing: No such device or address", 104);
    clap_builder::builder::arg::Arg::value_name::h4c99eccc8bb25c8e(&v0, &v8, &g_413728, 4);
    clap_builder::builder::command::Command::arg::h9b0e73d0f5d1eec4(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hea40eb3a694de562(&v3, "files", 5);
    clap_builder::builder::arg::Arg::value_name::h4c99eccc8bb25c8e(&v0, &v3, "FILE", 4);
    clap_builder::builder::arg::Arg::action::h39ec1347100c0ff5(&v3, &v0, 1);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) | 1;
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::value_hint::h7760bc0653556b6b(&v3, &v0, 3);
    clap_builder::builder::command::Command::arg::h9b0e73d0f5d1eec4(a0, &v8, &v3);
    return a0;
}
