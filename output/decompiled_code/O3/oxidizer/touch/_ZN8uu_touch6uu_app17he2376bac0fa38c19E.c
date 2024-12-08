fn uu_touch::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xad0]
    let v1: i5696;  // [sp-0xab8], Other Possible Types: struct592, struct712, struct8, struct90, struct96
    let v2: i64;  // [sp-0xab0]
    let v3: i64;  // [sp-0xaa8]
    let v4: i64;  // [sp-0xaa0]
    let v5: i128;  // [bp-0xa98]
    let v6: i128;  // [sp-0xa88]
    let v7: i64;  // [sp-0xa80]
    let v8: i64;  // [bp-0xa78]
    let v9: i128;  // [bp-0xa70]
    let v11: i128;  // [bp-0xa60]
    let v13: i576;  // [sp-0x7f0], Other Possible Types: struct24, struct72
    let v14: i8;  // [bp-0x7a8]
    let v15: i4736;  // [sp-0x798], Other Possible Types: struct592, struct96, struct24
    let v16: i4736;  // [sp-0x540], Other Possible Types: struct592, struct712, struct437
    let v17: i4736;  // [sp-0x278], Other Possible Types: struct592, struct72, struct48
    let v19: i64;  // rdx
    let v20: i128;  // xmm1
    let v21: i128;  // xmm2
    let v22: i128;  // xmm3
    let v23: i128;  // xmm1
    let v24: i128;  // xmm2
    let v25: i128;  // xmm3

    v16 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v1 = clap_builder::builder::command::Command::version(&v16, "0.0.28");
    v16 = clap_builder::builder::command::Command::about(&v1, "Update the access and modification times of each `FILE` to the current time.");
    v15 = uucore::format_usage("{} [OPTION]... [USER]");
    v1 = clap_builder::builder::command::Command::override_usage(&v16, &v15);
    memcpy(&v16, &v1, 700);
    v16.700 = 1126449662918784 | (stack_base)[2044] as i64;
    v16.708 = (stack_base)[2036] as i32;
    v1 = clap_builder::builder::arg::Arg::new("help");
    v15 = clap_builder::builder::arg::Arg::long(&v1, "help");
    v1 = clap_builder::builder::arg::Arg::help(&v15, "Print help information.");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 5);
    v1 = clap_builder::builder::command::Command::arg(&v16, &v15);
    v16 = clap_builder::builder::arg::Arg::new("access");
    v15 = clap_builder::builder::arg::Arg::short(&v16, 97);
    v16 = clap_builder::builder::arg::Arg::help(&v15, "change only the access time");
    v15 = clap_builder::builder::arg::Arg::action(&v16, 2);
    v16 = clap_builder::builder::command::Command::arg(&v1, &v15);
    v1 = clap_builder::builder::arg::Arg::new("timestamp");
    v15 = clap_builder::builder::arg::Arg::short(&v1, 116);
    v1 = clap_builder::builder::arg::Arg::help(&v15, "use [[CC]YY]MMDDhhmm[.ss] instead of the current time");
    v15 = clap_builder::builder::arg::Arg::value_name(&v1, "STAMP");
    v1 = clap_builder::builder::command::Command::arg(&v16, &v15);
    v16 = clap_builder::builder::arg::Arg::new("date");
    v15 = clap_builder::builder::arg::Arg::short(&v16, 100);
    v16 = clap_builder::builder::arg::Arg::long(&v15, "date");
    memcpy(&v15, &v16, 584);
    v15.584 = (stack_base)[760] as i32 | 32;
    v15.588 = (stack_base)[756] as i32;
    v16 = clap_builder::builder::arg::Arg::help(&v15, "parse argument and use it instead of current time");
    v15 = clap_builder::builder::arg::Arg::value_name(&v16, "STRING");
    v17 = clap_builder::builder::arg::Arg::conflicts_with(&v15, "timestamp");
    v16 = clap_builder::builder::command::Command::arg(&v1, &v17);
    v1 = clap_builder::builder::arg::Arg::new("modification");
    v15 = clap_builder::builder::arg::Arg::short(&v1, 109);
    v1 = clap_builder::builder::arg::Arg::help(&v15, "change only the modification time");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v16, &v15);
    v16 = clap_builder::builder::arg::Arg::new("no-create");
    v15 = clap_builder::builder::arg::Arg::short(&v16, 99);
    v16 = clap_builder::builder::arg::Arg::long(&v15, "no-create");
    v15 = clap_builder::builder::arg::Arg::help(&v16, "do not create any files");
    v17 = clap_builder::builder::arg::Arg::action(&v15, 2);
    v16 = clap_builder::builder::command::Command::arg(&v1, &v17);
    v1 = clap_builder::builder::arg::Arg::new("no-dereference");
    v15 = clap_builder::builder::arg::Arg::short(&v1, 104);
    v1 = clap_builder::builder::arg::Arg::long(&v15, "no-dereference");
    v15 = clap_builder::builder::arg::Arg::help(&v1, "affect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)");
    v17 = clap_builder::builder::arg::Arg::action(&v15, 2);
    v1 = clap_builder::builder::command::Command::arg(&v16, &v17);
    v16 = clap_builder::builder::arg::Arg::new("reference");
    v15 = clap_builder::builder::arg::Arg::short(&v16, 114);
    v16 = clap_builder::builder::arg::Arg::long(&v15, "reference");
    v15 = clap_builder::builder::arg::Arg::help(&v16, "use this file's times instead of the current time");
    v16 = clap_builder::builder::arg::Arg::value_name(&v15, "FILE");
    v0 = 2;
    v17.16 = (stack_base)[2752] as i64;
    v17 = v0;
    v17.8 = (stack_base)[2760] as i64;
    v15 = clap_builder::builder::arg::Arg::value_parser(&v16, &v17);
    v16 = clap_builder::builder::arg::Arg::value_hint(&v15, 2);
    v15 = clap_builder::builder::arg::Arg::conflicts_with(&v16, "timestamp");
    v16 = clap_builder::builder::command::Command::arg(&v1, &v15);
    v1 = clap_builder::builder::arg::Arg::new("time");
    v15 = clap_builder::builder::arg::Arg::long(&v1, "time");
    v1 = clap_builder::builder::arg::Arg::help(&v15, "change only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -m");
    v15 = clap_builder::builder::arg::Arg::value_name(&v1, "WORD");
    v1.48 = 4674486;
    v1.56 = 5;
    v1.24 = 0x8000000000000000;
    v5 = v14;
    v1 = struct8 {
        field_16: 0
    };
    v1.8 = 8;
    v1.16 = 0;
    v8 = 0;
    v17 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "access");
    v13 = clap_builder::builder::possible_value::PossibleValue::alias(&v17, "use");
    v6 = &g_4753c4;
    v7 = 5;
    v4 = 0x8000000000000000;
    v5 = v14;
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    v8 = 0;
    v17 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "modify");
    v20 = *((&v13 as &char + 16) as &i128);
    v21 = *((&v13 as &char + 32) as &i128);
    v22 = *((&v13 as &char + 48) as &i128);
    v1 = v13;
    v3 = v20;
    v5 = v21;
    v6 = v22;
    v8 = *((&v13 as &char + 64) as &i64);
    v23 = *((&v17 as &char + 16) as &i128);
    v24 = *((&v17 as &char + 32) as &i128);
    v25 = *((&v17 as &char + 48) as &i128);
    v9 = v17;
    v11 = v23;
    v1.104 = vvar_418{reg 288};
    v1.120 = vvar_420{reg 320};
    v1.136 = (stack_base)[568] as i64;
    v13 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v17 = clap_builder::builder::arg::Arg::value_parser(&v15, &v13);
    v1 = clap_builder::builder::command::Command::arg(&v16, &v17);
    v16 = clap_builder::builder::arg::Arg::new("files");
    v15 = clap_builder::builder::arg::Arg::action(&v16, 1);
    v16 = clap_builder::builder::arg::Arg::num_args(&v15);
    v15 = clap_builder::builder::arg::Arg::value_parser(&v16, &v0);
    v17 = clap_builder::builder::arg::Arg::value_hint(&v15, 2);
    v16 = clap_builder::builder::command::Command::arg(&v1, &v17);
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
    v15 = clap_builder::builder::arg_group::ArgGroup::id(&v1, "sources");
    v17 = struct48 {
        field_0: &anon.32920fb0992448a71939038bdb7f69c7.22.llvm.16001827659566714888
        field_8: 9
        field_16: &anon.32920fb0992448a71939038bdb7f69c7.20.llvm.16001827659566714888
        field_24: 4
        field_32: &anon.32920fb0992448a71939038bdb7f69c7.21.llvm.16001827659566714888
        field_40: 9
    };
    v1 = clap_builder::builder::arg_group::ArgGroup::args(&v15, &v17);
    v1.89 = 1;
    *(&v15.field_0 as &struct96) = struct96 {
        field_0: v1
        field_16: *((&v1 as &char + 16) as &i128)
        field_32: *((&v1 as &char + 32) as &i128)
        field_48: *((&v1 as &char + 48) as &i128)
        field_64: *((&v1 as &char + 64) as &i128)
        field_80: v10
        field_88: *((&v1 as &char + 88) as &i8)
        field_89: v12
        field_90: *((&v1 as &char + 90) as &i32)
        field_94: *((&v1 as &char + 94) as &i16)
    };
    clap_builder::builder::command::Command::group(a0, &v16, &v15);
    return a0;
}
