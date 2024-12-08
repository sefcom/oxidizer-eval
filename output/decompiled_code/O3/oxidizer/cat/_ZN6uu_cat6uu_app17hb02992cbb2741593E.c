fn uu_cat::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct712
    let v1: i3496;  // [sp-0x780], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x4b8], Other Possible Types: struct592, struct24
    let v3: i32;  // [sp-0x270]
    let v4: i32;  // [sp-0x26c]
    let v5: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v7: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v0 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v2 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v1 = clap_builder::builder::command::Command::override_usage(&v0, &v2);
    v0 = clap_builder::builder::command::Command::about(&v1, &g_413860, 112);
    memcpy(&v1, &v0, 700);
    v1.700 = 584115552392 | (stack_base)[1932] as i64;
    v1.708 = (stack_base)[1924] as i32;
    v0 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v2, &v0, 584);
    v3 = *((&v0 as &char + 584) as &i32) | 4;
    v4 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v2);
    v1 = clap_builder::builder::arg::Arg::new("show-all");
    v2 = clap_builder::builder::arg::Arg::short(&v1, 65);
    v1 = clap_builder::builder::arg::Arg::long(&v2, "show-all");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "equivalent to -vET");
    v5 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("number-nonblank");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 98);
    v0 = clap_builder::builder::arg::Arg::long(&v2, "number-nonblank");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "number nonempty output lines, overrides -n");
    v5 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("e");
    v2 = clap_builder::builder::arg::Arg::short(&v1, 101);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "equivalent to -vE");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v2);
    v0 = clap_builder::builder::arg::Arg::new("show-ends");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 69);
    v0 = clap_builder::builder::arg::Arg::long(&v2, "show-ends");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "display $ at end of each line");
    v5 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("number");
    v2 = clap_builder::builder::arg::Arg::short(&v1, 110);
    v1 = clap_builder::builder::arg::Arg::long(&v2, "number");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "number all output lines");
    v5 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("squeeze-blank");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::long(&v2, "squeeze-blank");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "suppress repeated empty output lines");
    v5 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("t");
    v2 = clap_builder::builder::arg::Arg::short(&v1, 116);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "equivalent to -vT");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v2);
    v0 = clap_builder::builder::arg::Arg::new("show-tabs");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 84);
    v0 = clap_builder::builder::arg::Arg::long(&v2, "show-tabs");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "display TAB characters at ^I");
    v5 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("show-nonprinting");
    v2 = clap_builder::builder::arg::Arg::short(&v1, 118);
    v1 = clap_builder::builder::arg::Arg::long(&v2, "show-nonprinting");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "use ^ and M- notation, except for LF (\\n) and TAB (\\t)");
    v5 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("ignored-u");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 117);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "(ignored)");
    v2 = clap_builder::builder::arg::Arg::action(&v0, 2);
    clap_builder::builder::command::Command::arg(a0, &v1, &v2);
    return a0;
}
