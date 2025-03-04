long long uu_wc::uu_app::h62af8873bd1507e0(unsigned long long a0)
{
    unsigned long long v0;  // [sp-0xa60]
    char v1;  // [bp-0xa58]
    char v2;  // [bp-0xa50]
    char v3;  // [bp-0xa48], Other Possible Types: unsigned long
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
    char v21;  // [sp-0x268], Other Possible Types: unsigned long
    unsigned long long v22;  // [sp-0x260]
    unsigned long long v23;  // [sp-0x258]
    unsigned long long v25;  // rdx

    clap_builder::builder::command::Command::new::heef53aa4e5d4acf1(&v3, uucore::util_name::h60d842bf27b05e82(), v25);
    clap_builder::builder::command::Command::version::h42037cd52bcef4ac(&v18, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h1782c64d94d23983(&v3, &v18, "Display newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified. With no FILE, or when FILE is -, read standard input.", 160);
    uucore::format_usage::h76fcb2d15fbabc58(&v15, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h88329b020f4035f1(&v18, &v3, &v15);
    memcpy(&v3, &v18, 700);
    v13 = 584115552392 | *((long long *)&v19);
    v14 = *((int *)&v20);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&v18, "bytes", 5);
    clap_builder::builder::arg::Arg::short::h1821cb640058dc7e(&v15, &v18, 99);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&v18, &v15, "bytes", 5);
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&v15, &v18, "print the byte counts", 21);
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&v21, &v15, 2);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&v18, &v3, &v21);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&v3, "chars", 5);
    clap_builder::builder::arg::Arg::short::h1821cb640058dc7e(&v15, &v3, 109);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&v3, &v15, "chars", 5);
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&v15, &v3, "print the character counts", 26);
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&v21, &v15, 2);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&v3, &v18, &v21);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&v18, "files0-from", 11);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&v15, &v18, "files0-from", 11);
    clap_builder::builder::arg::Arg::value_name::hc7d8e8b2a7daef84(&v18, &v15, "F", 1);
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&v15, &v18, "read input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard input", 120);
    v0 = 2;
    v23 = *((long long *)&v2);
    v21 = v0;
    v22 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::h113a58cf051bb473(&v18, &v15, &v21);
    clap_builder::builder::arg::Arg::value_hint::h4dbfb8abcb369b0b(&v15, &v18, 3);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&v18, &v3, &v15);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&v3, "lines", 5);
    clap_builder::builder::arg::Arg::short::h1821cb640058dc7e(&v15, &v3, 108);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&v3, &v15, "lines", 5);
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&v15, &v3, "print the newline counts", 24);
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&v21, &v15, 2);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&v3, &v18, &v21);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&v18, "max-line-length", 15);
    clap_builder::builder::arg::Arg::short::h1821cb640058dc7e(&v15, &v18, 76);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&v18, &v15, "max-line-length", 15);
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&v15, &v18, "print the length of the longest line", 36);
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&v21, &v15, 2);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&v18, &v3, &v21);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&v3, "total", 5);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&v15, &v3, "total", 5);
    v3 = "auto";
    v4 = 4;
    v5 = "always";
    v6 = 6;
    v7 = &g_4157c4;
    v8 = 4;
    v9 = "neverinternal error: entered unreachable code: Should have been caught by clap";
    v10 = 5;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::he94a2a0f1ec543ac(&v21, &v3);
    clap_builder::builder::arg::Arg::value_parser::hb47b92374b06f664(&v3, &v15, &v21);
    clap_builder::builder::arg::Arg::value_name::hc7d8e8b2a7daef84(&v15, &v3, "WHENu128", 4);
    memcpy(&v3, &v15, 584);
    v11 = *((int *)&v16) | 16;
    v12 = *((int *)&v17);
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&v15, &v3, "when to print a line with total counts;\n  WHEN can be: auto, always, only, never", 80);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&v3, &v18, &v15);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&v18, "wordscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 5);
    clap_builder::builder::arg::Arg::short::h1821cb640058dc7e(&v15, &v18, 119);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&v18, &v15, "wordscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 5);
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&v15, &v18, "print the word counts: \n", 21);
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&v21, &v15, 2);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&v18, &v3, &v21);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&v3, "files", 5);
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&v15, &v3, 1);
    clap_builder::builder::arg::Arg::value_parser::h113a58cf051bb473(&v3, &v15, &v0);
    clap_builder::builder::arg::Arg::value_hint::h4dbfb8abcb369b0b(&v15, &v3, 3);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(a0, &v18, &v15);
    return a0;
}
