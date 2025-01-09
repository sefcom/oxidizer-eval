long long uu_fold::uu_app::hfa78df7319f7c039(unsigned long long a0)
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

    clap_builder::builder::command::Command::new::h121b98b6d96da7a9(&v8, uucore::util_name::h60d842bf27b05e82(), v15);
    clap_builder::builder::command::Command::version::h24d9a7ca32fdd4ad(&v3, &v8, "0.0.28", 6);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h18d760c68336a81b(&v8, &v3, &v0);
    clap_builder::builder::command::Command::about::h1c6534ca9f8e90fd(&v3, &v8, "Writes each file (or standard input if no files are given)\nto standard output whilst breaking long lines", 104);
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | *((long long *)&v6);
    v12 = *((int *)&v7);
    clap_builder::builder::arg::Arg::new::hbeb9e909ddb12b0f(&v3, "bytes", 5);
    clap_builder::builder::arg::Arg::long::h030a686b44dedf14(&v0, &v3, "bytes", 5);
    clap_builder::builder::arg::Arg::short::h82aa05e7fad831b1(&v3, &v0, 98);
    clap_builder::builder::arg::Arg::help::h1fd9c0a2ec06b765(&v0, &v3, "count using bytes rather than columns (meaning control characters such as newline are not treated specially)", 108);
    clap_builder::builder::arg::Arg::action::h0f0b64d53278c1ae(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::hd508bbbf326ffb39(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::hbeb9e909ddb12b0f(&v8, "spaces", 6);
    clap_builder::builder::arg::Arg::long::h030a686b44dedf14(&v0, &v8, "spaces", 6);
    clap_builder::builder::arg::Arg::short::h82aa05e7fad831b1(&v8, &v0, 115);
    clap_builder::builder::arg::Arg::help::h1fd9c0a2ec06b765(&v0, &v8, "break lines at word boundaries rather than a hard cut-off", 57);
    clap_builder::builder::arg::Arg::action::h0f0b64d53278c1ae(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::hd508bbbf326ffb39(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::hbeb9e909ddb12b0f(&v3, "width", 5);
    clap_builder::builder::arg::Arg::long::h030a686b44dedf14(&v0, &v3, "width", 5);
    clap_builder::builder::arg::Arg::short::h82aa05e7fad831b1(&v3, &v0, 119);
    clap_builder::builder::arg::Arg::help::h1fd9c0a2ec06b765(&v0, &v3, "set WIDTH as the maximum line width rather than 80", 50);
    clap_builder::builder::arg::Arg::value_name::h6bb6a5099e9af500(&v3, &v0);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) | 32;
    v2 = *((int *)&v5);
    clap_builder::builder::command::Command::arg::hd508bbbf326ffb39(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbeb9e909ddb12b0f(&v8, "filei128", 4);
    memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 4;
    v2 = *((int *)&v10);
    clap_builder::builder::arg::Arg::action::h0f0b64d53278c1ae(&v8, &v0, 1);
    clap_builder::builder::arg::Arg::value_hint::h4b1a98209220178f(&v0, &v8, 3);
    clap_builder::builder::command::Command::arg::hd508bbbf326ffb39(a0, &v3, &v0);
    return a0;
}
