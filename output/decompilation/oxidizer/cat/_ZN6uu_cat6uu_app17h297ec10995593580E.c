fn uu_cat::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: i8;  // [bp-0x7fc]
    let v3: u64;  // [bp-0x78c]
    let v4: u32;  // [bp-0x784]
    let v5: struct437;  // [bp-0x780]
    let v6: u64;  // [bp-0x4c4]
    let v7: u32;  // [bp-0x4bc]
    let v8: u8;  // [bp-0x4b8]
    let v9: u32;  // [bp-0x270]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v5 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v0, &v5, "0.0.28");
    uucore::format_usage(&v8, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v5, &v0, &v8);
    clap_builder::builder::command::Command::about(&v0, &v5, "Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.");
    memcpy(&v5, &v0, 700);
    v6 = 584115552392 | v3;
    v7 = v4;
    clap_builder::builder::arg::Arg::new(&v0, "file");
    memcpy(&v8, &v0, 584);
    v9 = v1 | 4;
    v10 = *(&v2 as &i32);
    clap_builder::builder::arg::Arg::action(&v0, &v8, 1);
    clap_builder::builder::arg::Arg::value_hint(&v8, &v0, 3);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "show-all");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 65);
    clap_builder::builder::arg::Arg::long(&v5, &v8, "show-all");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "equivalent to -vET");
    clap_builder::builder::arg::Arg::action(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "number-nonblank");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 98);
    clap_builder::builder::arg::Arg::long(&v0, &v8, "number-nonblank");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "number nonempty output lines, overrides -n");
    clap_builder::builder::arg::Arg::action(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new(&v5, "e");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 101);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "equivalent to -vE");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "show-ends");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 69);
    clap_builder::builder::arg::Arg::long(&v0, &v8, "show-ends");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "display $ at end of each line");
    clap_builder::builder::arg::Arg::action(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new(&v5, "number");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 110);
    clap_builder::builder::arg::Arg::long(&v5, &v8, "number");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "number all output lines");
    clap_builder::builder::arg::Arg::action(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "squeeze-blank");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 115);
    clap_builder::builder::arg::Arg::long(&v0, &v8, "squeeze-blank");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "suppress repeated empty output lines");
    clap_builder::builder::arg::Arg::action(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new(&v5, "t");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 116);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "equivalent to -vT");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "show-tabs");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 84);
    clap_builder::builder::arg::Arg::long(&v0, &v8, "show-tabs");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "display TAB characters at ^I");
    clap_builder::builder::arg::Arg::action(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new(&v5, "show-nonprinting");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 118);
    clap_builder::builder::arg::Arg::long(&v5, &v8, "show-nonprinting");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "use ^ and M- notation, except for LF (\\n) and TAB (\\t)");
    clap_builder::builder::arg::Arg::action(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "ignored-u");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 117);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "(ignored)");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg(a0, &v5, &v8);
    return a0;
}
