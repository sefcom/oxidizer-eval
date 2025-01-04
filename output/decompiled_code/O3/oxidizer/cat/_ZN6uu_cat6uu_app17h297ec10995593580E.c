fn uu_cat::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i5696;  // [sp-0xa48], Other Possible Types: struct592, struct712
    let v1: i5696;  // [sp-0x780], Other Possible Types: struct592, struct712, struct437
    let v2: i64;  // [sp-0x4c4]
    let v3: i32;  // [sp-0x4bc]
    let v4: i4736;  // [sp-0x4b8], Other Possible Types: struct592, struct24
    let v5: i32;  // [sp-0x270]
    let v6: i32;  // [sp-0x26c]
    let v7: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v9: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v0 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v4 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v1 = clap_builder::builder::command::Command::override_usage(&v0, &v4);
    v0 = clap_builder::builder::command::Command::about(&v1, &g_41cc88, 112);
    memcpy(&v1, &v0, 700);
    v2 = 584115552392 | *((&v0 as &char + 700) as &i64);
    v3 = *((&v0 as &char + 708) as &i32);
    v0 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v4, &v0, 584);
    v5 = *((&v0 as &char + 584) as &i32) | 4;
    v6 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::action(&v4, 0x1);
    v4 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("show-all");
    v4 = clap_builder::builder::arg::Arg::short(&v1, 0x41);
    v1 = clap_builder::builder::arg::Arg::long(&v4, "show-all");
    v4 = clap_builder::builder::arg::Arg::help(&v1, "equivalent to -vET");
    v7 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("number-nonblank");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x62);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "number-nonblank");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "number nonempty output lines, overrides -n");
    v7 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("e");
    v4 = clap_builder::builder::arg::Arg::short(&v1, 0x65);
    v1 = clap_builder::builder::arg::Arg::help(&v4, "equivalent to -vE");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("show-ends");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x45);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "show-ends");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "display $ at end of each line");
    v7 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("number");
    v4 = clap_builder::builder::arg::Arg::short(&v1, 0x6e);
    v1 = clap_builder::builder::arg::Arg::long(&v4, "number");
    v4 = clap_builder::builder::arg::Arg::help(&v1, "number all output lines");
    v7 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("squeeze-blank");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "squeeze-blank");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "suppress repeated empty output lines");
    v7 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("t");
    v4 = clap_builder::builder::arg::Arg::short(&v1, 0x74);
    v1 = clap_builder::builder::arg::Arg::help(&v4, "equivalent to -vT");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("show-tabs");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x54);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "show-tabs");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "display TAB characters at ^I");
    v7 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("show-nonprinting");
    v4 = clap_builder::builder::arg::Arg::short(&v1, 0x76);
    v1 = clap_builder::builder::arg::Arg::long(&v4, "show-nonprinting");
    v4 = clap_builder::builder::arg::Arg::help(&v1, "use ^ and M- notation, except for LF (\\n) and TAB (\\t)");
    v7 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("ignored-u");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x75);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "(ignored)");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v1, &v4);
    return a0;
}
