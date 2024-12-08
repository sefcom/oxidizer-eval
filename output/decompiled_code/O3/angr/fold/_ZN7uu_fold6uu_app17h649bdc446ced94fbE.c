long long uu_fold::uu_app::h649bdc446ced94fb(unsigned long long a0, unsigned long a1, unsigned long a2)
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
    char v9;  // [bp-0x2e8]
    char v10;  // [bp-0x2e4]
    unsigned long long v11;  // [sp-0x274]
    unsigned int v12;  // [sp-0x26c]
    char v13;  // [bp-0x268]
    unsigned long long v15;  // rdx

    clap_builder::builder::command::Command::new::h785e93b6bd80a893(&v8, uucore::util_name::h412db5e565a079f3(), v15);
    clap_builder::builder::command::Command::version::h97b90659ac40bbf5(&v3, &v8, "0.0.28", 6);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h2513ea067ef52756(&v8, &v3, &v0);
    clap_builder::builder::command::Command::about::h5cb821eac1342b32(&v3, &v8, "Writes each file (or standard input if no files are given)\nto standard output whilst breaking long lines", 104);
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | *((long long *)&v6);
    v12 = *((int *)&v7);
    clap_builder::builder::arg::Arg::new::hc1572d8f8d64b370(&v3, "bytes", 5);
    clap_builder::builder::arg::Arg::long::h76bb0db8528e6cc9(&v0, &v3, "bytes", 5);
    clap_builder::builder::arg::Arg::short::h9acc8bc9a7dfb293(&v3, &v0, 98);
    clap_builder::builder::arg::Arg::help::h799f9c217b6cd290(&v0, &v3, "count using bytes rather than columns (meaning control characters such as newline are not treated specially)", 108);
    clap_builder::builder::arg::Arg::action::h04dfd8983bb43a9d(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::hbeaeb3800b7bdf1b(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::hc1572d8f8d64b370(&v8, "spaces", 6);
    clap_builder::builder::arg::Arg::long::h76bb0db8528e6cc9(&v0, &v8, "spaces", 6);
    clap_builder::builder::arg::Arg::short::h9acc8bc9a7dfb293(&v8, &v0, 115);
    clap_builder::builder::arg::Arg::help::h799f9c217b6cd290(&v0, &v8, "break lines at word boundaries rather than a hard cut-off", 57);
    clap_builder::builder::arg::Arg::action::h04dfd8983bb43a9d(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::hbeaeb3800b7bdf1b(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::hc1572d8f8d64b370(&v3, "width", 5);
    clap_builder::builder::arg::Arg::long::h76bb0db8528e6cc9(&v0, &v3, "width", 5);
    clap_builder::builder::arg::Arg::short::h9acc8bc9a7dfb293(&v3, &v0, 119);
    clap_builder::builder::arg::Arg::help::h799f9c217b6cd290(&v0, &v3, "set WIDTH as the maximum line width rather than 80", 50);
    clap_builder::builder::arg::Arg::value_name::h8dce1f89f834155b(&v3, &v0, v15);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) | 32;
    v2 = *((int *)&v5);
    clap_builder::builder::command::Command::arg::hbeaeb3800b7bdf1b(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hc1572d8f8d64b370(&v8, "filei128", 4);
    memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 4;
    v2 = *((int *)&v10);
    clap_builder::builder::arg::Arg::action::h04dfd8983bb43a9d(&v8, &v0, 1);
    clap_builder::builder::arg::Arg::value_hint::he6db28d0225570bf(&v0, &v8, 3);
    clap_builder::builder::command::Command::arg::hbeaeb3800b7bdf1b(a0, &v3, &v0);
    return a0;
}
