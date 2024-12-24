long long uu_mkdir::uu_app::h51440c47b22f6ae2(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x7fc]
    unsigned long long v3;  // [sp-0x78c]
    unsigned int v4;  // [sp-0x784]
    char v5;  // [bp-0x780]
    unsigned int v6;  // [sp-0x538]
    unsigned int v7;  // [sp-0x534]
    char v8;  // [bp-0x530]
    char v9;  // [bp-0x274]
    char v10;  // [bp-0x26c]
    char v11;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::h87d1b7704833c88a(&v0, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::hd47e79768e0bf8ac(&v8, &v0, "0.0.28Create the given DIRECTORY(ies) if they do not exist{} [OPTION]... DIRECTORY...set file mode (not implemented on windows)parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such f", 6);
    clap_builder::builder::command::Command::about::hda9421ed2d9ff654(&v0, &v8, "Create the given DIRECTORY(ies) if they do not exist{} [OPTION]... DIRECTORY...set file mode (not implemented on windows)parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or", 52);
    uucore::format_usage::h00b69bae12d8ac9c(&v5, "{} [OPTION]... DIRECTORY...set file mode (not implemented on windows)parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 27);
    clap_builder::builder::command::Command::override_usage::h40adfa6f1785b30d(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | *((long long *)&v9);
    v4 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h4582e9c862cb1f16(&v8, "modei128", 4);
    clap_builder::builder::arg::Arg::short::hc417c478e19bc62f(&v5, &v8, 109);
    clap_builder::builder::arg::Arg::long::h548bb9b47b574e19(&v8, &v5, "modei128", 4);
    clap_builder::builder::arg::Arg::help::hea975e93168d33e5(&v5, &v8, "set file mode (not implemented on windows)parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 42);
    clap_builder::builder::command::Command::arg::haee8a9a31534b341(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h4582e9c862cb1f16(&v0, "parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 7);
    clap_builder::builder::arg::Arg::short::hc417c478e19bc62f(&v5, &v0, 112);
    clap_builder::builder::arg::Arg::long::h548bb9b47b574e19(&v0, &v5, "parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 7);
    clap_builder::builder::arg::Arg::help::hea975e93168d33e5(&v5, &v0, "make parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 33);
    clap_builder::builder::arg::Arg::overrides_with::hbfe34ed4f3b22d73(&v0, &v5, "parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 7);
    clap_builder::builder::arg::Arg::action::h814682cbc12f6fb5(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::haee8a9a31534b341(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h4582e9c862cb1f16(&v8, "verboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 7);
    clap_builder::builder::arg::Arg::short::hc417c478e19bc62f(&v5, &v8, 118);
    clap_builder::builder::arg::Arg::long::h548bb9b47b574e19(&v8, &v5, "verboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 7);
    clap_builder::builder::arg::Arg::help::hea975e93168d33e5(&v5, &v8, "print a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 42);
    clap_builder::builder::arg::Arg::action::h814682cbc12f6fb5(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::haee8a9a31534b341(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h4582e9c862cb1f16(&v0, &g_414530, 4);
    clap_builder::builder::arg::Arg::action::h814682cbc12f6fb5(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::hd18a73dcb3532a7d(&v0, &v5);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 1;
    v7 = *((int *)&v2);
    v11 = 2;
    clap_builder::builder::arg::Arg::value_parser::h5f52df1bed47e24b(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::value_hint::ha1455b7613f6e298(&v5, &v0, 4);
    clap_builder::builder::command::Command::arg::haee8a9a31534b341(a0, &v8, &v5);
    return a0;
}
