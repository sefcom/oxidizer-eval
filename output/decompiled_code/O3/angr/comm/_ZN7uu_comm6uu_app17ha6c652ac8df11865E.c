long long uu_comm::uu_app::ha6c652ac8df11865(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa50]
    char v1;  // [bp-0x808]
    char v2;  // [bp-0x804]
    unsigned long long v3;  // [sp-0x794]
    unsigned int v4;  // [sp-0x78c]
    char v5;  // [bp-0x788]
    unsigned int v6;  // [sp-0x540]
    unsigned int v7;  // [sp-0x53c]
    char v8;  // [bp-0x538]
    char v9;  // [bp-0x2f0]
    char v10;  // [bp-0x2ec]
    char v11;  // [bp-0x27c]
    char v12;  // [bp-0x274]
    char v13;  // [bp-0x270]
    unsigned long long v15;  // rdx

    clap_builder::builder::command::Command::new::h8cb04297ccfbdc55(&v0, uucore::util_name::h60d842bf27b05e82(), v15);
    clap_builder::builder::command::Command::version::h0b8db7f7545f961f(&v8, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hcd89649185c31ce1(&v0, &v8, "Compare two sorted files line by line.\n\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n\nWith no options, produce three-column output. Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,\nand column three contains lines common to both files.", 284);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTION]... FILE1 FILE2", 26);
    clap_builder::builder::command::Command::override_usage::h59e8652e835bd692(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | *((long long *)&v11);
    v4 = *((int *)&v12);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&v8, "1", 1);
    clap_builder::builder::arg::Arg::short::h57149b05e5532777(&v5, &v8, 49);
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&v8, &v5, "suppress column 1 (lines unique to FILE1)", 41);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&v0, "2", 1);
    clap_builder::builder::arg::Arg::short::h57149b05e5532777(&v5, &v0, 50);
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&v0, &v5, "suppress column 2 (lines unique to FILE2)", 41);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&v8, "3", 1);
    clap_builder::builder::arg::Arg::short::h57149b05e5532777(&v5, &v8, 51);
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&v8, &v5, "suppress column 3 (lines that appear in both files)", 51);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&v0, "output-delimiterPermissionDenied", 16);
    clap_builder::builder::arg::Arg::long::hf8a62a6ddf6ca989(&v5, &v0, "output-delimiterPermissionDenied", 16);
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&v0, &v5, "separate columns with STR", 25);
    clap_builder::builder::arg::Arg::value_name::h48c23f45fee90993(&v5, &v0, v15);
    clap_builder::builder::arg::Arg::default_value::h76809d39c32b1ee7(&v0, &v5, v15);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 32;
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&v0, &v5, 1);
    memcpy(&v5, &v0, 584);
    v6 = 0x400 | *((int *)&v1);
    v7 = *((int *)&v2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&v8, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::long::hf8a62a6ddf6ca989(&v5, &v8, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::short::h57149b05e5532777(&v8, &v5, 122);
    clap_builder::builder::arg::Arg::overrides_with::h148f45f9c75c9d7b(&v5, &v8, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&v8, &v5, "line delimiter is NUL, not newline", 34);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&v0, "FILE1", 5);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 1;
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::value_hint::hdc1c549de59681ab(&v13, &v5, 3);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&v8, "FILE2", 5);
    memcpy(&v5, &v8, 584);
    v6 = *((int *)&v9) | 1;
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::value_hint::hdc1c549de59681ab(&v13, &v5, 3);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&v0, "total", 5);
    clap_builder::builder::arg::Arg::long::hf8a62a6ddf6ca989(&v5, &v0, "total", 5);
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&v0, &v5, "output a summary", 16);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(a0, &v8, &v5);
    return a0;
}
