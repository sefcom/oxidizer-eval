long long uu_expand::uu_app::h5f698e677a3ba316(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::hec2656934e96167f(&v8, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::h80df12a060072a22(&v3, &v8, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h7cd8b19cb07757e2(&v8, &v3, "Convert tabs in each `FILE` to spaces, writing to standard output.\nWith no `FILE`, or when `FILE` is `-`, read standard input.", 126);
    clap_builder::builder::command::Command::after_help::h5c21e2cef3ce1e4f(&v3, &v8, 1, 0);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::hf5263b347d9df176(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | *((long long *)&v9);
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::hd31776fd122d25a3(&v8, "initial", 7);
    clap_builder::builder::arg::Arg::long::h9a91ee0fd7a0b7b1(&v0, &v8, "initial", 7);
    clap_builder::builder::arg::Arg::short::h796ce9d8970a041d(&v8, &v0, 105);
    clap_builder::builder::arg::Arg::help::haca9e25f0d974d06(&v0, &v8, "do not convert tabs after non blanks", 36);
    clap_builder::builder::arg::Arg::action::hdea9854a09ab7f5e(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h3316cd1def775aa0(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::hd31776fd122d25a3(&v3, "tabsAuto", 4);
    clap_builder::builder::arg::Arg::long::h9a91ee0fd7a0b7b1(&v0, &v3, "tabsAuto", 4);
    clap_builder::builder::arg::Arg::short::h796ce9d8970a041d(&v3, &v0, 116);
    clap_builder::builder::arg::Arg::value_name::h787c5a8d6114d004(&v0, &v3, v13);
    clap_builder::builder::arg::Arg::action::hdea9854a09ab7f5e(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::help::haca9e25f0d974d06(&v0, &v3, "have tabs N characters apart, not 8 or use comma separated list of explicit tab positions", 89);
    clap_builder::builder::command::Command::arg::h3316cd1def775aa0(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hd31776fd122d25a3(&v8, "no-utf8", 7);
    clap_builder::builder::arg::Arg::long::h9a91ee0fd7a0b7b1(&v0, &v8, "no-utf8", 7);
    clap_builder::builder::arg::Arg::short::h796ce9d8970a041d(&v8, &v0, 85);
    clap_builder::builder::arg::Arg::help::haca9e25f0d974d06(&v0, &v8, "interpret input file as 8-bit ASCII rather than UTF-8: \n: Is a directory\n", 53);
    clap_builder::builder::arg::Arg::action::hdea9854a09ab7f5e(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h3316cd1def775aa0(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::hd31776fd122d25a3(&v3, "FILES/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 5);
    clap_builder::builder::arg::Arg::action::hdea9854a09ab7f5e(&v0, &v3, 1);
    memcpy(&v3, &v0, 584);
    v4 = *((int *)&v1) | 4;
    v5 = *((int *)&v2);
    clap_builder::builder::arg::Arg::value_hint::h9ad1fe78b62eb0f4(&v0, &v3, 3);
    clap_builder::builder::command::Command::arg::h3316cd1def775aa0(a0, &v8, &v0);
    return a0;
}
