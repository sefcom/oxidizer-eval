fn uu_tee::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: iNone;  // [bp-0xba8]
    let v1: struct288;  // [bp-0xb98], Other Possible Types: void*, struct712, struct640
    let v2: u64;  // [bp-0xb90]
    let v3: void*;  // [bp-0xb88]
    let v4: u64;  // [bp-0xb80]
    let v5: iNone;  // [bp-0xb78]
    let v6: &str;  // [bp-0xb68]
    let v7: u8;  // [bp-0xb58]
    let v8: u32;  // [bp-0x920]
    let v9: u32;  // [bp-0x91c]
    let v10: u64;  // [bp-0x8dc]
    let v11: u32;  // [bp-0x8d4]
    let v12: struct72;  // [bp-0x8c8]
    let v13: u128;  // [bp-0x8b8]
    let v14: u128;  // [bp-0x8a8]
    let v15: u128;  // [bp-0x898]
    let v16: u64;  // [bp-0x888]
    let v17: struct72;  // [bp-0x880]
    let v18: u128;  // [bp-0x870]
    let v19: u128;  // [bp-0x860]
    let v20: u128;  // [bp-0x850]
    let v21: u64;  // [bp-0x840]
    let v22: struct72;  // [bp-0x838]
    let v23: u128;  // [bp-0x828]
    let v24: u128;  // [bp-0x818]
    let v25: u128;  // [bp-0x808]
    let v26: u64;  // [bp-0x7f8]
    let v27: struct24;  // [bp-0x7f0], Other Possible Types: struct640
    let v28: u32;  // [bp-0x578]
    let v29: u32;  // [bp-0x574]
    let v30: struct437;  // [bp-0x570], Other Possible Types: struct712, struct640
    let v31: u64;  // [bp-0x2b4]
    let v32: u32;  // [bp-0x2ac]
    let v33: struct640;  // [bp-0x2a8]
    let v34: struct72;  // [bp-0x2a8]
    let v35: u128;  // [bp-0x298]
    let v36: u128;  // [bp-0x288]
    let v37: u128;  // [bp-0x278]
    let v40: u64;  // rdx

    v30 = clap_builder::builder::command::Command::new(uucore::util_name(), v40);
    v1 = clap_builder::builder::command::Command::version(&v30);
    v30 = clap_builder::builder::command::Command::about(&v1);
    v27 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v1 = clap_builder::builder::command::Command::override_usage(&v30, &v27);
    v30 = clap_builder::builder::command::Command::after_help(&v1);
    memcpy(&v1, &v30, 700);
    v10 = 2252349570023552 | v31;
    v11 = v32;
    v30 = clap_builder::builder::arg::Arg::new("--help");
    v27 = clap_builder::builder::arg::Arg::short(&v30, 104);
    v30 = clap_builder::builder::arg::Arg::long(&v27, "help");
    v27 = clap_builder::builder::arg::Arg::help(&v30, "Print help");
    v33 = clap_builder::builder::arg::Arg::action(&v27, 7);
    v30 = clap_builder::builder::command::Command::arg(&v1, &v33);
    v1 = clap_builder::builder::arg::Arg::new("append");
    v27 = clap_builder::builder::arg::Arg::long(&v1, "append");
    v1 = clap_builder::builder::arg::Arg::short(&v27, 97);
    v27 = clap_builder::builder::arg::Arg::help(&v1, "append to the given FILEs, do not overwrite");
    v33 = clap_builder::builder::arg::Arg::action(&v27, 2);
    v1 = clap_builder::builder::command::Command::arg(&v30, &v33);
    v30 = clap_builder::builder::arg::Arg::new("ignore-interrupts");
    v27 = clap_builder::builder::arg::Arg::long(&v30, "ignore-interrupts");
    v30 = clap_builder::builder::arg::Arg::short(&v27, 105);
    v27 = clap_builder::builder::arg::Arg::help(&v30, "ignore interrupt signals (ignored on non-Unix platforms)");
    v33 = clap_builder::builder::arg::Arg::action(&v27, 2);
    v30 = clap_builder::builder::command::Command::arg(&v1, &v33);
    v1 = clap_builder::builder::arg::Arg::new("file");
    v27 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v33 = clap_builder::builder::arg::Arg::value_hint(&v27);
    v1 = clap_builder::builder::command::Command::arg(&v30, &v33);
    v30 = clap_builder::builder::arg::Arg::new("ignore-pipe-errors");
    v27 = clap_builder::builder::arg::Arg::short(&v30, 112);
    v30 = clap_builder::builder::arg::Arg::help(&v27, "set write error behavior (ignored on non-Unix platforms)");
    v27 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::command::Command::arg(&v1, &v27);
    v1 = clap_builder::builder::arg::Arg::new("output-error");
    v27 = clap_builder::builder::arg::Arg::long(&v1, "output-error");
    memcpy(&v1, &v27, 632);
    v8 = 128 | v28;
    v9 = v29;
    v27 = clap_builder::builder::arg::Arg::num_args(&v1, None, 1);
    v6 = "warn";
    v4 = 0x8000000000000000;
    v5 = v0;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v7 = 0;
    v12 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "produce warnings for errors writing to any output");
    v6 = "warn-nopipe";
    v4 = 0x8000000000000000;
    v5 = v0;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v7 = 0;
    v17 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "produce warnings for errors that are not pipe errors (ignored on non-unix platforms)");
    v6 = "exit";
    v4 = 0x8000000000000000;
    v5 = v0;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v7 = 0;
    v22 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "exit on write errors to any output");
    v6 = "exit-nopipe";
    v4 = 0x8000000000000000;
    v5 = v0;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v7 = 0;
    v34 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "exit on write errors to any output that are not pipe errors (equivalent to exit on non-unix platforms)");
    v1 = struct288 {
        field_0: v12.field_0
        field_16: v13
        field_32: v14
        field_48: v15
        field_64: v16
        field_72: v17.field_0
        field_88: v18
        field_104: v19
        field_120: v20
        field_136: v21
        field_144: v22.field_0
        field_160: v23
        field_176: v24
        field_192: v25
        field_208: v26
        field_216: v34.field_0
        field_232: v35
        field_248: v36
        field_264: v37
        field_280: v34.field_64
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v34, &v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v27, &v34);
    v27 = clap_builder::builder::arg::Arg::help(&v1, "set write error behavior");
    clap_builder::builder::command::Command::arg(a0, &v30, &v27);
    return;
}
