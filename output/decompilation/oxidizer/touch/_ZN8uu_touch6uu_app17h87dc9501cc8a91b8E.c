fn uu_touch::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct72;  // [bp-0xb20]
    let v1: u128;  // [bp-0xb10]
    let v2: u128;  // [bp-0xb00]
    let v3: u128;  // [bp-0xaf0]
    let v4: u64;  // [bp-0xae0]
    let v5: u128;  // [bp-0xad8]
    let v6: struct144;  // [bp-0xac8], Other Possible Types: struct90, void*, struct712, struct640
    let v7: struct712;  // [bp-0xac8]
    let v8: struct640;  // [bp-0xac8]
    let v9: struct96;  // [bp-0xac8]
    let v10: u64;  // [bp-0xac0]
    let v11: void*;  // [bp-0xab8]
    let v12: u64;  // [bp-0xab0]
    let v13: u128;  // [bp-0xaa8]
    let v14: &str;  // [bp-0xa98]
    let v15: u8;  // [bp-0xa88]
    let v16: u8;  // [bp-0xa6f]
    let v17: u32;  // [bp-0xa6e]
    let v18: u64;  // [bp-0x80c]
    let v19: struct24;  // [bp-0x7f8], Other Possible Types: struct96, struct640
    let v20: u32;  // [bp-0x580]
    let v21: u32;  // [bp-0x57c]
    let v22: struct437;  // [bp-0x578], Other Possible Types: struct712, struct640
    let v23: struct712;  // [bp-0x578]
    let v24: struct640;  // [bp-0x578]
    let v25: struct640;  // [bp-0x578]
    let v26: u32;  // [bp-0x300]
    let v27: u64;  // [bp-0x2bc]
    let v28: u32;  // [bp-0x2b4]
    let v29: struct48;  // [bp-0x2b0], Other Possible Types: struct72, struct640, u64
    let v30: struct72;  // [bp-0x2b0]
    let v31: u128;  // [bp-0x280]
    let v34: u64;  // rdx
    let v35: iNone;  // xmm1
    let v36: iNone;  // xmm2

    v22 = clap_builder::builder::command::Command::new(uucore::util_name(), v34);
    v6 = clap_builder::builder::command::Command::version(&v22);
    v22 = clap_builder::builder::command::Command::about(&v6);
    v19 = uucore::format_usage("{} [OPTION]... [USER]");
    v7 = clap_builder::builder::command::Command::override_usage(&v22, &v19);
    memcpy(&v22, &v7, 700);
    v27 = 2252349570023552 | v18;
    v28 = v18;
    v6 = clap_builder::builder::arg::Arg::new("help");
    v19 = clap_builder::builder::arg::Arg::long(&v6, "help");
    v6 = clap_builder::builder::arg::Arg::help(&v19, "Print help information.");
    v19 = clap_builder::builder::arg::Arg::action(&v6, 5);
    v6 = clap_builder::builder::command::Command::arg(&v22, &v19);
    v22 = clap_builder::builder::arg::Arg::new("access");
    v19 = clap_builder::builder::arg::Arg::short(&v22, 97);
    v22 = clap_builder::builder::arg::Arg::help(&v19, "change only the access time");
    v19 = clap_builder::builder::arg::Arg::action(&v22, 2);
    v23 = clap_builder::builder::command::Command::arg(&v6, &v19);
    v6 = clap_builder::builder::arg::Arg::new("timestamp");
    v19 = clap_builder::builder::arg::Arg::short(&v6, 116);
    v6 = clap_builder::builder::arg::Arg::help(&v19, "use [[CC]YY]MMDDhhmm[.ss] instead of the current time");
    v19 = clap_builder::builder::arg::Arg::value_name(&v6, "STAMP");
    v6 = clap_builder::builder::command::Command::arg(&v23, &v19);
    v24 = clap_builder::builder::arg::Arg::new("date");
    v19 = clap_builder::builder::arg::Arg::short(&v24, 100);
    v25 = clap_builder::builder::arg::Arg::long(&v19, "date");
    memcpy(&v19, &v25, 632);
    v20 = v26 | 32;
    v21 = v26;
    v22 = clap_builder::builder::arg::Arg::help(&v19, "parse argument and use it instead of current time");
    v19 = clap_builder::builder::arg::Arg::value_name(&v22, "STRING");
    v29 = clap_builder::builder::arg::Arg::conflicts_with(&v19);
    v22 = clap_builder::builder::command::Command::arg(&v6, &v29);
    v6 = clap_builder::builder::arg::Arg::new("modification");
    v19 = clap_builder::builder::arg::Arg::short(&v6, 109);
    v6 = clap_builder::builder::arg::Arg::help(&v19, "change only the modification time");
    v19 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v6 = clap_builder::builder::command::Command::arg(&v22, &v19);
    v22 = clap_builder::builder::arg::Arg::new("no-create");
    v19 = clap_builder::builder::arg::Arg::short(&v22, 99);
    v22 = clap_builder::builder::arg::Arg::long(&v19, "no-create");
    v19 = clap_builder::builder::arg::Arg::help(&v22, "do not create any files");
    v29 = clap_builder::builder::arg::Arg::action(&v19, 2);
    v22 = clap_builder::builder::command::Command::arg(&v6, &v29);
    v6 = clap_builder::builder::arg::Arg::new("no-dereference");
    v19 = clap_builder::builder::arg::Arg::short(&v6, 104);
    v6 = clap_builder::builder::arg::Arg::long(&v19, "no-dereference");
    v19 = clap_builder::builder::arg::Arg::help(&v6, "affect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)");
    v29 = clap_builder::builder::arg::Arg::action(&v19, 2);
    v6 = clap_builder::builder::command::Command::arg(&v22, &v29);
    v22 = clap_builder::builder::arg::Arg::new("reference");
    v19 = clap_builder::builder::arg::Arg::short(&v22, 114);
    v22 = clap_builder::builder::arg::Arg::long(&v19, "reference");
    v19 = clap_builder::builder::arg::Arg::help(&v22, "use this file's times instead of the current time");
    v22 = clap_builder::builder::arg::Arg::value_name(&v19, "FILE");
    v29 = 2;
    v19 = clap_builder::builder::arg::Arg::value_parser(&v22, &v29);
    v22 = clap_builder::builder::arg::Arg::value_hint(&v19);
    v19 = clap_builder::builder::arg::Arg::conflicts_with(&v22);
    v22 = clap_builder::builder::command::Command::arg(&v6, &v19);
    v6 = clap_builder::builder::arg::Arg::new("time");
    v19 = clap_builder::builder::arg::Arg::long(&v6, "time");
    v8 = clap_builder::builder::arg::Arg::help(&v19, "change only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -m");
    v19 = clap_builder::builder::arg::Arg::value_name(&v8, "WORD");
    v14 = "atime";
    v12 = 0x8000000000000000;
    v13 = v5;
    v6 = 0;
    v10 = 8;
    v11 = 0;
    v15 = 0;
    v29 = clap_builder::builder::possible_value::PossibleValue::alias(&v6, "access");
    v0 = clap_builder::builder::possible_value::PossibleValue::alias(&v29, "use");
    v14 = "mtime";
    v12 = 0x8000000000000000;
    v13 = v5;
    v6 = 0;
    v10 = 8;
    v11 = 0;
    v15 = 0;
    v30 = clap_builder::builder::possible_value::PossibleValue::alias(&v6, "modify");
    v35 = *(&v30.field_16 as &i128);
    v36 = v30.field_32;
    v6 = struct144 {
        field_0: v0.field_0
        field_16: v1
        field_32: v2
        field_48: v3
        field_64: v4
        field_72: v30.field_0
        field_88: v35
        field_104: v36
        field_120: v31
        field_136: v30.field_64
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0, &v6);
    v29 = clap_builder::builder::arg::Arg::value_parser(&v19, &v0);
    v6 = clap_builder::builder::command::Command::arg(&v22, &v29);
    v22 = clap_builder::builder::arg::Arg::new("files");
    v19 = clap_builder::builder::arg::Arg::action(&v22, 1);
    v22 = clap_builder::builder::arg::Arg::num_args(&v19);
    v19 = clap_builder::builder::arg::Arg::value_hint(&v22);
    v22 = clap_builder::builder::command::Command::arg(&v6, &v19);
    v6 = struct90 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_32: 8
        field_40: 0
        field_56: ""
        field_72: ""
        field_88: 0
    };
    v19 = clap_builder::builder::arg_group::ArgGroup::id(&v6);
    v29 = struct48 {
        field_0: "timestamp"
        field_16: "date"
        field_32: "reference"
    };
    v9 = clap_builder::builder::arg_group::ArgGroup::args(&v19, &v29);
    v16 = 1;
    v19 = struct96 {
        field_0: v9.field_0
        field_16: v9.field_16
        field_32: v9.field_32
        field_48: v9.field_48
        field_64: *(&v9.field_64 as &i128)
        field_80: 0
        field_88: v9.field_88 as i8
        field_89: 1
        field_90: v17
        field_94: *((&v9.field_88 as &char + 6) as &i16)
    };
    clap_builder::builder::command::Command::group(a0, &v22, &v19);
    return;
}
