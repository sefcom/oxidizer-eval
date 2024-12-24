fn uu_touch::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xad0]
    let v1: i5696;  // [sp-0xab8], Other Possible Types: struct592, struct712, struct8, struct90, struct96
    let v2: i64;  // [sp-0xab0]
    let v3: i128;  // [sp-0xaa8]
    let v4: i64;  // [sp-0xaa0]
    let v5: i128;  // [bp-0xa98]
    let v6: i128;  // [sp-0xa88]
    let v7: i64;  // [sp-0xa80]
    let v8: i8;  // [bp-0xa78]
    let v9: i576;  // [bp-0xa70]
    let v10: i576;  // [sp-0x7f0], Other Possible Types: struct72, struct24
    let v11: i8;  // [bp-0x7a8]
    let v12: i4736;  // [sp-0x798], Other Possible Types: struct592, struct96, struct24
    let v13: i5696;  // [sp-0x540], Other Possible Types: struct592, struct712, struct437
    let v14: i4736;  // [sp-0x278], Other Possible Types: struct592, struct72, struct48
    let v16: i64;  // rdx
    let v17: i128;  // xmm1
    let v18: i128;  // xmm2
    let v19: i128;  // xmm3

    v13 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    v1 = clap_builder::builder::command::Command::version(&v13, "0.0.28");
    v13 = clap_builder::builder::command::Command::about(&v1, "Update the access and modification times of each `FILE` to the current time.");
    v12 = uucore::format_usage("{} [OPTION]... [USER]");
    v1 = clap_builder::builder::command::Command::override_usage(&v13, &v12);
    memcpy(&v13, &v1, 700);
    v13.700 = 1126449662918784 | (stack_base)[2044] as i64;
    v13.708 = (stack_base)[2036] as i32;
    v1 = clap_builder::builder::arg::Arg::new("help");
    v12 = clap_builder::builder::arg::Arg::long(&v1, "help");
    v1 = clap_builder::builder::arg::Arg::help(&v12, "Print help information.");
    v12 = clap_builder::builder::arg::Arg::action(&v1, 5);
    v1 = clap_builder::builder::command::Command::arg(&v13, &v12);
    v13 = clap_builder::builder::arg::Arg::new("access");
    v12 = clap_builder::builder::arg::Arg::short(&v13, 97);
    v13 = clap_builder::builder::arg::Arg::help(&v12, "change only the access time");
    v12 = clap_builder::builder::arg::Arg::action(&v13, 2);
    v13 = clap_builder::builder::command::Command::arg(&v1, &v12);
    v1 = clap_builder::builder::arg::Arg::new("timestamp");
    v12 = clap_builder::builder::arg::Arg::short(&v1, 116);
    v1 = clap_builder::builder::arg::Arg::help(&v12, "use [[CC]YY]MMDDhhmm[.ss] instead of the current time");
    v12 = clap_builder::builder::arg::Arg::value_name(&v1, "STAMP");
    v1 = clap_builder::builder::command::Command::arg(&v13, &v12);
    v13 = clap_builder::builder::arg::Arg::new("date");
    v12 = clap_builder::builder::arg::Arg::short(&v13, 100);
    v13 = clap_builder::builder::arg::Arg::long(&v12, "date");
    memcpy(&v12, &v13, 584);
    v12.584 = (stack_base)[760] as i32 | 32;
    v12.588 = (stack_base)[756] as i32;
    v13 = clap_builder::builder::arg::Arg::help(&v12, "parse argument and use it instead of current time");
    v12 = clap_builder::builder::arg::Arg::value_name(&v13, "STRING");
    v14 = clap_builder::builder::arg::Arg::conflicts_with(&v12, "timestamp");
    v13 = clap_builder::builder::command::Command::arg(&v1, &v14);
    v1 = clap_builder::builder::arg::Arg::new("modification");
    v12 = clap_builder::builder::arg::Arg::short(&v1, 109);
    v1 = clap_builder::builder::arg::Arg::help(&v12, "change only the modification time");
    v12 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v13, &v12);
    v13 = clap_builder::builder::arg::Arg::new("no-create");
    v12 = clap_builder::builder::arg::Arg::short(&v13, 99);
    v13 = clap_builder::builder::arg::Arg::long(&v12, "no-create");
    v12 = clap_builder::builder::arg::Arg::help(&v13, "do not create any files");
    v14 = clap_builder::builder::arg::Arg::action(&v12, 2);
    v13 = clap_builder::builder::command::Command::arg(&v1, &v14);
    v1 = clap_builder::builder::arg::Arg::new("no-dereference");
    v12 = clap_builder::builder::arg::Arg::short(&v1, 104);
    v1 = clap_builder::builder::arg::Arg::long(&v12, "no-dereference");
    v12 = clap_builder::builder::arg::Arg::help(&v1, "affect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)");
    v14 = clap_builder::builder::arg::Arg::action(&v12, 2);
    v1 = clap_builder::builder::command::Command::arg(&v13, &v14);
    v13 = clap_builder::builder::arg::Arg::new("reference");
    v12 = clap_builder::builder::arg::Arg::short(&v13, 114);
    v13 = clap_builder::builder::arg::Arg::long(&v12, "reference");
    v12 = clap_builder::builder::arg::Arg::help(&v13, "use this file's times instead of the current time");
    v13 = clap_builder::builder::arg::Arg::value_name(&v12, "FILE");
    v0 = 2;
    v14.16 = (stack_base)[2752] as i64;
    v14 = v0;
    v14.8 = (stack_base)[2760] as i64;
    v12 = clap_builder::builder::arg::Arg::value_parser(&v13, &v14);
    v13 = clap_builder::builder::arg::Arg::value_hint(&v12, 2);
    v12 = clap_builder::builder::arg::Arg::conflicts_with(&v13, "timestamp");
    v13 = clap_builder::builder::command::Command::arg(&v1, &v12);
    v1 = clap_builder::builder::arg::Arg::new("time");
    v12 = clap_builder::builder::arg::Arg::long(&v1, "time");
    v1 = clap_builder::builder::arg::Arg::help(&v12, "change only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -m");
    v12 = clap_builder::builder::arg::Arg::value_name(&v1, "WORD");
    v1.48 = 4674486;
    v1.56 = 5;
    v1.24 = 0x8000000000000000;
    v5 = v11;
    v1 = struct8 {
        field_16: 0
    };
    v1.8 = 8;
    v1.16 = 0;
    v8 = 0;
    v14 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "access");
    v10 = clap_builder::builder::possible_value::PossibleValue::alias(&v14, "use");
    v6 = &g_4753c4;
    v7 = 5;
    v4 = 0x8000000000000000;
    v5 = v11;
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    v8 = 0;
    v14 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "modify");
    v17 = *((&v10 as &char + 16) as &i128);
    v18 = *((&v10 as &char + 32) as &i128);
    v19 = *((&v10 as &char + 48) as &i128);
    v1 = v10;
    v3 = v17;
    v5 = v18;
    v6 = v19;
    v8 = *((&v10 as &char + 64) as &i64);
    v9 = v14;
    v10 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v14 = clap_builder::builder::arg::Arg::value_parser(&v12, &v10);
    v1 = clap_builder::builder::command::Command::arg(&v13, &v14);
    v13 = clap_builder::builder::arg::Arg::new("files");
    v12 = clap_builder::builder::arg::Arg::action(&v13, 1);
    v13 = clap_builder::builder::arg::Arg::num_args(&v12);
    v12 = clap_builder::builder::arg::Arg::value_parser(&v13, &v0);
    v14 = clap_builder::builder::arg::Arg::value_hint(&v12, 2);
    v13 = clap_builder::builder::command::Command::arg(&v1, &v14);
    v1 = struct90 {
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
    v12 = clap_builder::builder::arg_group::ArgGroup::id(&v1, "sources");
    v14 = struct48 {
        field_0: &anon.32920fb0992448a71939038bdb7f69c7.22.llvm.16001827659566714888
        field_8: 9
        field_16: &anon.32920fb0992448a71939038bdb7f69c7.20.llvm.16001827659566714888
        field_24: 4
        field_32: &anon.32920fb0992448a71939038bdb7f69c7.21.llvm.16001827659566714888
        field_40: 9
    };
    v1 = clap_builder::builder::arg_group::ArgGroup::args(&v12, &v14);
    v1.89 = 1;
    v12 = v1;
    clap_builder::builder::command::Command::group(a0, &v13, &v12);
    return a0;
}
