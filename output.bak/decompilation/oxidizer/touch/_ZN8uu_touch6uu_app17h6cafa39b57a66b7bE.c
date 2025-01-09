fn uu_touch::uu_app(a0: &struct712) -> u64 {
    let v0: i64;  // [sp-0xad0]
    let v1: i8;  // [bp-0xac8]
    let v2: i8;  // [bp-0xac0]
    let v3: i5696;  // [sp-0xab8], Other Possible Types: struct592, struct712, struct8, struct90, struct96, struct144
    let v4: i64;  // [sp-0xab0]
    let v5: i64;  // [sp-0xaa8]
    let v6: i64;  // [sp-0xaa0]
    let v7: i128;  // [bp-0xa98]
    let v8: i64;  // [sp-0xa88]
    let v9: i64;  // [sp-0xa80]
    let v10: i8;  // [bp-0xa78]
    let v12: i8;  // [sp-0xa5f]
    let v13: struct24;  // [sp-0x7f0], Other Possible Types: struct72, i192
    let v14: i8;  // [bp-0x7a8]
    let v15: i4736;  // [sp-0x798], Other Possible Types: struct592, struct96, struct24
    let v16: i32;  // [sp-0x550]
    let v17: i32;  // [sp-0x54c]
    let v18: i5696;  // [sp-0x540], Other Possible Types: struct592, struct712, struct437
    let v19: i64;  // [sp-0x284]
    let v20: i32;  // [sp-0x27c]
    let v21: i4736;  // [sp-0x278], Other Possible Types: struct592, struct72, struct48
    let v22: i64;  // [sp-0x270]
    let v23: i64;  // [sp-0x268]
    let v25: i64;  // rdx

    v18 = clap_builder::builder::command::Command::new(uucore::util_name(), v25);
    v3 = clap_builder::builder::command::Command::version(&v18, "0.0.28");
    v18 = clap_builder::builder::command::Command::about(&v3, "Update the access and modification times of each `FILE` to the current time.");
    v15 = uucore::format_usage("{} [OPTION]... [USER]");
    v3 = clap_builder::builder::command::Command::override_usage(&v18, &v15);
    memcpy(&v18, &v3, 700);
    v19 = 1126449662918784 | *((&v3 as &char + 700) as &i64);
    v20 = *((&v3 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("help");
    v15 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v15, "Print help information.");
    v15 = clap_builder::builder::arg::Arg::action(&v3, 0x5);
    v3 = clap_builder::builder::command::Command::arg(&v18, &v15);
    v18 = clap_builder::builder::arg::Arg::new("access");
    v15 = clap_builder::builder::arg::Arg::short(&v18, 0x61);
    v18 = clap_builder::builder::arg::Arg::help(&v15, "change only the access time");
    v15 = clap_builder::builder::arg::Arg::action(&v18, 0x2);
    v18 = clap_builder::builder::command::Command::arg(&v3, &v15);
    v3 = clap_builder::builder::arg::Arg::new("timestamp");
    v15 = clap_builder::builder::arg::Arg::short(&v3, 0x74);
    v3 = clap_builder::builder::arg::Arg::help(&v15, "use [[CC]YY]MMDDhhmm[.ss] instead of the current time");
    v15 = clap_builder::builder::arg::Arg::value_name(&v3, "STAMP");
    v3 = clap_builder::builder::command::Command::arg(&v18, &v15);
    v18 = clap_builder::builder::arg::Arg::new("date");
    v15 = clap_builder::builder::arg::Arg::short(&v18, 0x64);
    v18 = clap_builder::builder::arg::Arg::long(&v15, "date");
    memcpy(&v15, &v18, 584);
    v16 = *((&v18 as &char + 584) as &i32) | 32;
    v17 = *((&v18 as &char + 588) as &i32);
    v18 = clap_builder::builder::arg::Arg::help(&v15, "parse argument and use it instead of current time");
    v15 = clap_builder::builder::arg::Arg::value_name(&v18, "STRING");
    v21 = clap_builder::builder::arg::Arg::conflicts_with(&v15, "timestamp");
    v18 = clap_builder::builder::command::Command::arg(&v3, &v21);
    v3 = clap_builder::builder::arg::Arg::new("modification");
    v15 = clap_builder::builder::arg::Arg::short(&v3, 0x6d);
    v3 = clap_builder::builder::arg::Arg::help(&v15, "change only the modification time");
    v15 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v18, &v15);
    v18 = clap_builder::builder::arg::Arg::new("no-create");
    v15 = clap_builder::builder::arg::Arg::short(&v18, 0x63);
    v18 = clap_builder::builder::arg::Arg::long(&v15, "no-create");
    v15 = clap_builder::builder::arg::Arg::help(&v18, "do not create any files");
    v21 = clap_builder::builder::arg::Arg::action(&v15, 0x2);
    v18 = clap_builder::builder::command::Command::arg(&v3, &v21);
    v3 = clap_builder::builder::arg::Arg::new("no-dereference");
    v15 = clap_builder::builder::arg::Arg::short(&v3, 0x68);
    v3 = clap_builder::builder::arg::Arg::long(&v15, "no-dereference");
    v15 = clap_builder::builder::arg::Arg::help(&v3, "affect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)");
    v21 = clap_builder::builder::arg::Arg::action(&v15, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v18, &v21);
    v18 = clap_builder::builder::arg::Arg::new("reference");
    v15 = clap_builder::builder::arg::Arg::short(&v18, 0x72);
    v18 = clap_builder::builder::arg::Arg::long(&v15, "reference");
    v15 = clap_builder::builder::arg::Arg::help(&v18, "use this file's times instead of the current time");
    v18 = clap_builder::builder::arg::Arg::value_name(&v15, "FILE");
    v0 = 2;
    v23 = v2;
    v21 = v0;
    v22 = v1;
    v15 = clap_builder::builder::arg::Arg::value_parser(&v18, &v21);
    v18 = clap_builder::builder::arg::Arg::value_hint(&v15, 0x2);
    v15 = clap_builder::builder::arg::Arg::conflicts_with(&v18, "timestamp");
    v18 = clap_builder::builder::command::Command::arg(&v3, &v15);
    v3 = clap_builder::builder::arg::Arg::new("time");
    v15 = clap_builder::builder::arg::Arg::long(&v3, "time");
    v3 = clap_builder::builder::arg::Arg::help(&v15, "change only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -m");
    v15 = clap_builder::builder::arg::Arg::value_name(&v3, "WORD");
    v8 = &g_475002;
    v9 = 5;
    v6 = 0x8000000000000000;
    v7 = v14;
    v3 = struct8 {
        field_16: 0
    };
    v4 = 8;
    v5 = 0;
    v10 = 0;
    v21 = clap_builder::builder::possible_value::PossibleValue::alias(&v3, "access");
    v13 = clap_builder::builder::possible_value::PossibleValue::alias(&v21, "use");
    v8 = &g_475007;
    v9 = 5;
    v6 = 0x8000000000000000;
    v7 = v14;
    v3 = struct8 {
        field_16: 0
    };
    v4 = 8;
    v5 = 0;
    v10 = 0;
    v21 = clap_builder::builder::possible_value::PossibleValue::alias(&v3, "modify");
    v3 = struct144 {
        field_0: v13
        field_16: v26
        field_32: v27
        field_48: v28
        field_64: *((&v13 as &char + 64) as &i64)
        field_72: v21
        field_88: v26
        field_104: v27
        field_120: v28
        field_136: *((&v21 as &char + 64) as &i64)
    };
    v13 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v3);
    v21 = clap_builder::builder::arg::Arg::value_parser(&v15, &v13);
    v3 = clap_builder::builder::command::Command::arg(&v18, &v21);
    v18 = clap_builder::builder::arg::Arg::new("files");
    v15 = clap_builder::builder::arg::Arg::action(&v18, 0x1);
    v18 = clap_builder::builder::arg::Arg::num_args(&v15);
    v15 = clap_builder::builder::arg::Arg::value_parser(&v18, &v0);
    v21 = clap_builder::builder::arg::Arg::value_hint(&v15, 0x2);
    v18 = clap_builder::builder::command::Command::arg(&v3, &v21);
    v3 = struct90 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_32: 8
        field_40: 0
        field_56: 8
        field_64: 0
        field_72: 1
        field_80: 0
        field_88: 0
    };
    v15 = clap_builder::builder::arg_group::ArgGroup::id(&v3, "sources");
    v21 = struct48 {
        field_0: &anon.9140edd4b155a5c33d3a3382a80f889a.4.llvm.18306172555780859939
        field_8: 9
        field_16: &anon.9140edd4b155a5c33d3a3382a80f889a.2.llvm.18306172555780859939
        field_24: 4
        field_32: &anon.9140edd4b155a5c33d3a3382a80f889a.3.llvm.18306172555780859939
        field_40: 9
    };
    v3 = clap_builder::builder::arg_group::ArgGroup::args(&v15, &v21);
    v12 = 1;
    *(&v15.field_0 as &struct96) = struct96 {
        field_0: v3
        field_16: *((&v3 as &char + 16) as &i128)
        field_32: *((&v3 as &char + 32) as &i128)
        field_48: *((&v3 as &char + 48) as &i128)
        field_64: *((&v3 as &char + 64) as &i128)
        field_80: v11
        field_88: *((&v3 as &char + 88) as &i8)
        field_89: v12
        field_90: *((&v3 as &char + 90) as &i32)
        field_94: *((&v3 as &char + 94) as &i16)
    };
    clap_builder::builder::command::Command::group(a0, &v18, &v15);
    return a0;
}
