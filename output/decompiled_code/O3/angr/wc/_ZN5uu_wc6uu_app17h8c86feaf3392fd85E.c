long long uu_wc::uu_app::h8c86feaf3392fd85(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0xa60]
    char v1;  // [bp-0xa58]
    char v2;  // [bp-0xa50]
    char v3;  // [bp-0xa48], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xa40]
    unsigned long long v5;  // [sp-0xa38]
    unsigned long long v6;  // [sp-0xa30]
    unsigned long long v7;  // [sp-0xa28]
    unsigned long long v8;  // [sp-0xa20]
    unsigned long long v9;  // [sp-0xa18]
    unsigned long long v10;  // [sp-0xa10]
    unsigned int v11;  // [sp-0x800]
    unsigned int v12;  // [sp-0x7fc]
    unsigned long long v13;  // [sp-0x78c]
    unsigned int v14;  // [sp-0x784]
    char v15;  // [bp-0x780]
    char v16;  // [bp-0x538]
    char v17;  // [bp-0x534]
    char v18;  // [bp-0x530]
    char v19;  // [bp-0x274]
    char v20;  // [bp-0x26c]
    char v21;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x260]
    unsigned long long v23;  // [sp-0x258]
    unsigned long long v25;  // rdx

    clap_builder::builder::command::Command::new::h5e7409ef79906f56(&v3, uucore::util_name::h412db5e565a079f3(), v25);
    clap_builder::builder::command::Command::version::h8e8d0c8c321ff591(&v18, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hb59d6c63170bf89f(&v3, &v18, "Display newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified. With no FILE, or when FILE is -, read standard input.", 160);
    uucore::format_usage::h00b69bae12d8ac9c(&v15, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h5fe44013efd49db4(&v18, &v3, &v15);
    memcpy(&v3, &v18, 700);
    v13 = 584115552392 | *((long long *)&v19);
    v14 = *((int *)&v20);
    clap_builder::builder::arg::Arg::new::h9ce6797f1ed348e9(&v18, "bytes", 5);
    clap_builder::builder::arg::Arg::short::hd09cc8a266f16dd0(&v15, &v18, 99);
    clap_builder::builder::arg::Arg::long::h38bd1c72e8605196(&v18, &v15, "bytes", 5);
    clap_builder::builder::arg::Arg::help::h29a6ba7374b35d05(&v15, &v18, "print the byte counts", 21);
    clap_builder::builder::arg::Arg::action::hee90260f32758d38(&v21, &v15, 2);
    clap_builder::builder::command::Command::arg::h186513b1a167dd28(&v18, &v3, &v21);
    clap_builder::builder::arg::Arg::new::h9ce6797f1ed348e9(&v3, "chars", 5);
    clap_builder::builder::arg::Arg::short::hd09cc8a266f16dd0(&v15, &v3, 109);
    clap_builder::builder::arg::Arg::long::h38bd1c72e8605196(&v3, &v15, "chars", 5);
    clap_builder::builder::arg::Arg::help::h29a6ba7374b35d05(&v15, &v3, "print the character counts", 26);
    clap_builder::builder::arg::Arg::action::hee90260f32758d38(&v21, &v15, 2);
    clap_builder::builder::command::Command::arg::h186513b1a167dd28(&v3, &v18, &v21);
    clap_builder::builder::arg::Arg::new::h9ce6797f1ed348e9(&v18, "files0-from", 11);
    clap_builder::builder::arg::Arg::long::h38bd1c72e8605196(&v15, &v18, "files0-from", 11);
    clap_builder::builder::arg::Arg::value_name::h377a13bb010a3790(&v18, &v15, "F", 1);
    clap_builder::builder::arg::Arg::help::h29a6ba7374b35d05(&v15, &v18, "read input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard input", 120);
    v0 = 2;
    v23 = *((long long *)&v2);
    v21 = v0;
    v22 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::h703156a8ccefec83(&v18, &v15, &v21);
    clap_builder::builder::arg::Arg::value_hint::h42b24d512128a996(&v15, &v18, 3);
    clap_builder::builder::command::Command::arg::h186513b1a167dd28(&v18, &v3, &v15);
    clap_builder::builder::arg::Arg::new::h9ce6797f1ed348e9(&v3, "lines", 5);
    clap_builder::builder::arg::Arg::short::hd09cc8a266f16dd0(&v15, &v3, 108);
    clap_builder::builder::arg::Arg::long::h38bd1c72e8605196(&v3, &v15, "lines", 5);
    clap_builder::builder::arg::Arg::help::h29a6ba7374b35d05(&v15, &v3, "print the newline counts", 24);
    clap_builder::builder::arg::Arg::action::hee90260f32758d38(&v21, &v15, 2);
    clap_builder::builder::command::Command::arg::h186513b1a167dd28(&v3, &v18, &v21);
    clap_builder::builder::arg::Arg::new::h9ce6797f1ed348e9(&v18, "max-line-length", 15);
    clap_builder::builder::arg::Arg::short::hd09cc8a266f16dd0(&v15, &v18, 76);
    clap_builder::builder::arg::Arg::long::h38bd1c72e8605196(&v18, &v15, "max-line-length", 15);
    clap_builder::builder::arg::Arg::help::h29a6ba7374b35d05(&v15, &v18, "print the length of the longest line", 36);
    clap_builder::builder::arg::Arg::action::hee90260f32758d38(&v21, &v15, 2);
    clap_builder::builder::command::Command::arg::h186513b1a167dd28(&v18, &v3, &v21);
    clap_builder::builder::arg::Arg::new::h9ce6797f1ed348e9(&v3, "total", 5);
    clap_builder::builder::arg::Arg::long::h38bd1c72e8605196(&v15, &v3, "total", 5);
    v3 = "auto";
    v4 = 4;
    v5 = "always";
    v6 = 6;
    v7 = &g_41593c;
    v8 = 4;
    v9 = "neverinternal error: entered unreachable code: Should have been caught by clap";
    v10 = 5;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h6ff30ddcae2a1d5f(&v21, &v3);
    clap_builder::builder::arg::Arg::value_parser::hd45800e8ceedb9e1(&v3, &v15, &v21);
    clap_builder::builder::arg::Arg::value_name::h377a13bb010a3790(&v15, &v3, "WHENu128", 4);
    memcpy(&v3, &v15, 584);
    v11 = *((int *)&v16) | 16;
    v12 = *((int *)&v17);
    clap_builder::builder::arg::Arg::help::h29a6ba7374b35d05(&v15, &v3, "when to print a line with total counts;\n  WHEN can be: auto, always, only, never", 80);
    clap_builder::builder::command::Command::arg::h186513b1a167dd28(&v3, &v18, &v15);
    clap_builder::builder::arg::Arg::new::h9ce6797f1ed348e9(&v18, "words", 5);
    clap_builder::builder::arg::Arg::short::hd09cc8a266f16dd0(&v15, &v18, 119);
    clap_builder::builder::arg::Arg::long::h38bd1c72e8605196(&v18, &v15, "words", 5);
    clap_builder::builder::arg::Arg::help::h29a6ba7374b35d05(&v15, &v18, "print the word counts", 21);
    clap_builder::builder::arg::Arg::action::hee90260f32758d38(&v21, &v15, 2);
    clap_builder::builder::command::Command::arg::h186513b1a167dd28(&v18, &v3, &v21);
    clap_builder::builder::arg::Arg::new::h9ce6797f1ed348e9(&v3, "files", 5);
    clap_builder::builder::arg::Arg::action::hee90260f32758d38(&v15, &v3, 1);
    clap_builder::builder::arg::Arg::value_parser::h703156a8ccefec83(&v3, &v15, &v0);
    clap_builder::builder::arg::Arg::value_hint::h42b24d512128a996(&v15, &v3, 3);
    clap_builder::builder::command::Command::arg::h186513b1a167dd28(a0, &v18, &v15);
    return a0;
}
