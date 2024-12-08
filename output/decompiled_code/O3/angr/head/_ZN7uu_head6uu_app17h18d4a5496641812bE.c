long long uu_head::uu_app::h18d4a5496641812b(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa50]
    unsigned int v1;  // [sp-0x808]
    unsigned int v2;  // [sp-0x804]
    char v3;  // [bp-0x800]
    unsigned long long v4;  // [sp-0x544]
    unsigned int v5;  // [sp-0x53c]
    char v6;  // [bp-0x538]
    char v7;  // [bp-0x2f0]
    char v8;  // [bp-0x2ec]
    char v9;  // [bp-0x27c]
    char v10;  // [bp-0x274]
    unsigned long v11;  // [sp-0x270], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x268]
    unsigned long long v13;  // [sp-0x260]
    unsigned long long v14;  // [sp-0x258]
    unsigned int v15;  // [sp-0x28]
    unsigned int v16;  // [sp-0x24]
    unsigned long long v18;  // rdx

    clap_builder::builder::command::Command::new::ha1037ac0f3cc69b0(&v3, uucore::util_name::h412db5e565a079f3(), v18);
    clap_builder::builder::command::Command::version::h32b29e13f6c8b71a(&v6, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::haf1ceedc4b3dc786(&v3, &v6, "Print the first 10 lines of each `FILE` to standard output.\nWith more than one `FILE`, precede each with a header giving the file name.\nWith no `FILE`, or when `FILE` is `-`, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags too.", 265);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [FLAG]... [FILE]...", 22);
    clap_builder::builder::command::Command::override_usage::h38de5b93144c1dbe(&v6, &v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | *((long long *)&v9);
    v5 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::hdd5bf460838a85f0(&v6, "BYTES", 5);
    clap_builder::builder::arg::Arg::short::h9539a9bef5510b5a(&v0, &v6, 99);
    clap_builder::builder::arg::Arg::long::h22ff34e71dce4141(&v6, &v0, "bytes", 5);
    clap_builder::builder::arg::Arg::value_name::h1cd1176169339e5b(&v0, &v6, v18);
    clap_builder::builder::arg::Arg::help::hc9a219c1eb0165f2(&v6, &v0, "print the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each file", 107);
    v11 = "BYTES";
    v12 = 5;
    v13 = "LINES";
    v14 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h9366c48ee5c20814(&v0, &v6, &v11);
    memcpy(&v11, &v0, 584);
    v15 = v1 | 32;
    v16 = v2;
    clap_builder::builder::command::Command::arg::h1ccf07dd4c91f658(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new::hdd5bf460838a85f0(&v3, "LINES", 5);
    clap_builder::builder::arg::Arg::short::h9539a9bef5510b5a(&v0, &v3, 110);
    clap_builder::builder::arg::Arg::long::h22ff34e71dce4141(&v3, &v0, "lines", 5);
    clap_builder::builder::arg::Arg::value_name::h1cd1176169339e5b(&v0, &v3, v18);
    clap_builder::builder::arg::Arg::help::hc9a219c1eb0165f2(&v3, &v0, "print the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each file", 118);
    v11 = "LINES";
    v12 = 5;
    v13 = "BYTES";
    v14 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h9366c48ee5c20814(&v0, &v3, &v11);
    memcpy(&v11, &v0, 584);
    v15 = v1 | 32;
    v16 = v2;
    clap_builder::builder::command::Command::arg::h1ccf07dd4c91f658(&v3, &v6, &v11);
    clap_builder::builder::arg::Arg::new::hdd5bf460838a85f0(&v6, "QUIET", 5);
    clap_builder::builder::arg::Arg::short::h9539a9bef5510b5a(&v0, &v6, 113);
    clap_builder::builder::arg::Arg::long::h22ff34e71dce4141(&v6, &v0, "quiet", 5);
    clap_builder::builder::arg::Arg::visible_alias::h1c0d1966810e9dc3(&v0, &v6, "silent", 6);
    clap_builder::builder::arg::Arg::help::hc9a219c1eb0165f2(&v6, &v0, "never print headers giving file names", 37);
    v11 = "VERBOSE";
    v12 = 7;
    v13 = "QUIET";
    v14 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h9366c48ee5c20814(&v0, &v6, &v11);
    clap_builder::builder::arg::Arg::action::h46c20600091f8f9e(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h1ccf07dd4c91f658(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new::hdd5bf460838a85f0(&v3, "VERBOSE", 7);
    clap_builder::builder::arg::Arg::short::h9539a9bef5510b5a(&v0, &v3, 118);
    clap_builder::builder::arg::Arg::long::h22ff34e71dce4141(&v3, &v0, "verbose", 7);
    clap_builder::builder::arg::Arg::help::hc9a219c1eb0165f2(&v0, &v3, "always print headers giving file names", 38);
    v11 = "QUIET";
    v12 = 5;
    v13 = "VERBOSE";
    v14 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::h9366c48ee5c20814(&v3, &v0, &v11);
    clap_builder::builder::arg::Arg::action::h46c20600091f8f9e(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::h1ccf07dd4c91f658(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new::hdd5bf460838a85f0(&v6, "-PRESUME-INPUT-PIPE", 19);
    clap_builder::builder::arg::Arg::long::h22ff34e71dce4141(&v0, &v6, "presume-input-pipe", 18);
    clap_builder::builder::arg::Arg::alias::ha05f61ab440608f8(&v6, &v0, "-presume-input-pipe", 19);
    memcpy(&v0, &v6, 584);
    v1 = *((int *)&v7) | 4;
    v2 = *((int *)&v8);
    clap_builder::builder::arg::Arg::action::h46c20600091f8f9e(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h1ccf07dd4c91f658(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new::hdd5bf460838a85f0(&v3, "ZEROu128", 4);
    clap_builder::builder::arg::Arg::short::h9539a9bef5510b5a(&v0, &v3, 122);
    clap_builder::builder::arg::Arg::long::h22ff34e71dce4141(&v3, &v0, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::help::hc9a219c1eb0165f2(&v0, &v3, "line delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 34);
    clap_builder::builder::arg::Arg::overrides_with::hf05195502f3a4ca9(&v3, &v0, "ZEROu128", 4);
    clap_builder::builder::arg::Arg::action::h46c20600091f8f9e(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::h1ccf07dd4c91f658(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new::hdd5bf460838a85f0(&v6, "FILE", 4);
    clap_builder::builder::arg::Arg::action::h46c20600091f8f9e(&v0, &v6, 1);
    clap_builder::builder::arg::Arg::value_hint::hf2b720ed2b9178ce(&v6, &v0, 3);
    clap_builder::builder::command::Command::arg::h1ccf07dd4c91f658(a0, &v3, &v6);
    return a0;
}
