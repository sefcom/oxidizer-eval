long long uu_mkdir::uu_app::h2281d15957ce8683(unsigned long long a0)
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

    clap_builder::builder::command::Command::new::h795eb4adb8e3c50a(&v0, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::h6e703008c761bba0(&v8, &v0, "0.0.28Create the given DIRECTORY(ies) if they do not exist{} [OPTION]... DIRECTORY...set file mode (not implemented on windows)parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such f", 6);
    clap_builder::builder::command::Command::about::h8658f4a857dcef07(&v0, &v8, "Create the given DIRECTORY(ies) if they do not exist{} [OPTION]... DIRECTORY...set file mode (not implemented on windows)parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or", 52);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTION]... DIRECTORY...set file mode (not implemented on windows)parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 27);
    clap_builder::builder::command::Command::override_usage::hce6268cc1a1bc3e2(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | *((long long *)&v9);
    v4 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::hd930c321111f1ba4(&v8, "modei128", 4);
    clap_builder::builder::arg::Arg::short::h188d8eee4027bcca(&v5, &v8, 109);
    clap_builder::builder::arg::Arg::long::h0e7f97fad10cb351(&v8, &v5, "modei128", 4);
    clap_builder::builder::arg::Arg::help::hfcfe8af5e4e0b317(&v5, &v8, "set file mode (not implemented on windows)parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 42);
    clap_builder::builder::command::Command::arg::h689a48614b8bd7d5(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::hd930c321111f1ba4(&v0, "parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 7);
    clap_builder::builder::arg::Arg::short::h188d8eee4027bcca(&v5, &v0, 112);
    clap_builder::builder::arg::Arg::long::h0e7f97fad10cb351(&v0, &v5, "parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 7);
    clap_builder::builder::arg::Arg::help::hfcfe8af5e4e0b317(&v5, &v0, "make parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 33);
    clap_builder::builder::arg::Arg::overrides_with::hb5e23a6bb58cce2d(&v0, &v5, "parentsmake parent directories as neededverboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 7);
    clap_builder::builder::arg::Arg::action::h4db85773161f88de(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::h689a48614b8bd7d5(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::hd930c321111f1ba4(&v8, "verboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 7);
    clap_builder::builder::arg::Arg::short::h188d8eee4027bcca(&v5, &v8, 118);
    clap_builder::builder::arg::Arg::long::h0e7f97fad10cb351(&v8, &v5, "verboseprint a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 7);
    clap_builder::builder::arg::Arg::help::hfcfe8af5e4e0b317(&v5, &v8, "print a message for each printed directory: \ncannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 42);
    clap_builder::builder::arg::Arg::action::h4db85773161f88de(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h689a48614b8bd7d5(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::hd930c321111f1ba4(&v0, &g_4142bc, 4);
    clap_builder::builder::arg::Arg::action::h4db85773161f88de(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::ha621a2a957949a4b(&v0, &v5);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 1;
    v7 = *((int *)&v2);
    v11 = 2;
    clap_builder::builder::arg::Arg::value_parser::h771dc5ae7e04ccf8(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::value_hint::h4c514b1e571be732(&v5, &v0, 4);
    clap_builder::builder::command::Command::arg::h689a48614b8bd7d5(a0, &v8, &v5);
    return a0;
}
