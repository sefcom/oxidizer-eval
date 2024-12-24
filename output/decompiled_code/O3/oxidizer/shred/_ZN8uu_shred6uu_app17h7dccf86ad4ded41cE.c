fn uu_shred::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct48, struct24
    let v1: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v3: i4736;  // [sp-0x268], Other Possible Types: struct592, struct17, struct24
    let v5: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v2, &g_41e5db, 132);
    v2 = clap_builder::builder::command::Command::after_help(&v1, &g_41e65f, 1628);
    v0 = uucore::format_usage("{} [OPTION]... FILE...");
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v0);
    memcpy(&v2, &v1, 700);
    v2.700 = 549755814016 | (stack_base)[1340] as i64;
    v2.708 = (stack_base)[1332] as i32;
    v1 = clap_builder::builder::arg::Arg::new("force");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "force");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 102);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "change permissions to allow writing if necessary");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("iterations");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "iterations");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 110);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "overwrite N times instead of the default (3)");
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v0 = clap_builder::builder::arg::Arg::default_value(&v2, v5);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("size");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "size");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "N");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "shred this many bytes (suffixes like K, M, G accepted)");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("u");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 117);
    v2 = clap_builder::builder::arg::Arg::help(&v0, "deallocate and remove file after overwriting");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("remove");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "remove");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "HOW");
    v0 = struct48 {
        field_0: &g_41edb0
        field_8: 6
        field_16: &g_4156c0
        field_24: 4
        field_32: &g_4157f0
        field_40: 8
    };
    v3 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    v3 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v1 = clap_builder::builder::arg::Arg::num_args(&v0, &v3);
    memcpy(&v0, &v1, 584);
    v0.584 = 128 | (stack_base)[1456] as i32;
    v0.588 = (stack_base)[1452] as i32;
    v1 = clap_builder::builder::arg::Arg::default_missing_value(&v0, v5);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "like -u but give control on HOW to delete;  See below");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "verbose");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 118);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "show progress");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("exact");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "exact");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 120);
    v0 = clap_builder::builder::arg::Arg::help(&v1, &g_41ee04, 92);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "zero");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 122);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "add a final overwrite with zeros to hide shredding");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("file");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
