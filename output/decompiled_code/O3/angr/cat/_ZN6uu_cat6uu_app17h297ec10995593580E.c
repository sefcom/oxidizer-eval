long long uu_cat::uu_app::h297ec10995593580(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x7fc]
    char v3;  // [bp-0x78c]
    char v4;  // [bp-0x784]
    char v5;  // [bp-0x780]
    unsigned long long v6;  // [sp-0x4c4]
    unsigned int v7;  // [sp-0x4bc]
    char v8;  // [bp-0x4b8]
    unsigned int v9;  // [sp-0x270]
    unsigned int v10;  // [sp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::hb7751347de0bc77c(&v5, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::h62abd575415b3c83(&v0, &v5, "0.0.28", 6);
    uucore::format_usage::h76fcb2d15fbabc58(&v8, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h05aa70576fd37d7f(&v5, &v0, &v8);
    clap_builder::builder::command::Command::about::h93fccad803b098fc(&v0, &v5, "Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.", 112);
    memcpy(&v5, &v0, 700);
    v6 = 584115552392 | *((long long *)&v3);
    v7 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v0, "filei128", 4);
    memcpy(&v8, &v0, 584);
    v9 = *((int *)&v1) | 4;
    v10 = *((int *)&v2);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v0, &v8, 1);
    clap_builder::builder::arg::Arg::value_hint::hf044cb3d24704047(&v8, &v0, 3);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v5, "show-all", 8);
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&v8, &v5, 65);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&v5, &v8, "show-all", 8);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&v8, &v5, "equivalent to -vET", 18);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&v5, &v0, &v11);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v0, "number-nonblank", 15);
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&v8, &v0, 98);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&v0, &v8, "number-nonblank", 15);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&v8, &v0, "number nonempty output lines, overrides -n", 42);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v5, "e", 1);
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&v8, &v5, 101);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&v5, &v8, "equivalent to -vE", 17);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v0, "show-ends", 9);
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&v8, &v0, 69);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&v0, &v8, "show-ends", 9);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&v8, &v0, "display $ at end of each line", 29);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v5, "number", 6);
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&v8, &v5, 110);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&v5, &v8, "number", 6);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&v8, &v5, "number all output lines", 23);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&v5, &v0, &v11);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v0, "squeeze-blank", 13);
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&v8, &v0, 115);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&v0, &v8, "squeeze-blank", 13);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&v8, &v0, "suppress repeated empty output lines", 36);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v5, "t", 1);
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&v8, &v5, 116);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&v5, &v8, "equivalent to -vT", 17);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v0, "show-tabs", 9);
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&v8, &v0, 84);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&v0, &v8, "show-tabs", 9);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&v8, &v0, "display TAB characters at ^I", 28);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v5, "show-nonprinting", 16);
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&v8, &v5, 118);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&v5, &v8, "show-nonprinting", 16);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&v8, &v5, "use ^ and M- notation, except for LF (\\n) and TAB (\\t)", 54);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&v5, &v0, &v11);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&v0, "ignored-u", 9);
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&v8, &v0, 117);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&v0, &v8, "(ignored): ", 9);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(a0, &v5, &v8);
    return a0;
}
