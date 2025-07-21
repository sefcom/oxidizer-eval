fn uu_touch::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xad0]
    let v1: u64;  // [bp-0xac8]
    let v2: u64;  // [bp-0xac0]
    let v3: void*;  // [bp-0xab8], Other Possible Types: u8
    let v4: struct144;  // [bp-0xab8]
    let v5: struct96;  // [bp-0xab8]
    let v6: u64;  // [bp-0xab0]
    let v7: void*;  // [bp-0xaa8], Other Possible Types: u128
    let v8: u64;  // [bp-0xaa0]
    let v9: u128;  // [bp-0xa98]
    let v10: u128;  // [bp-0xa90]
    let v11: u64;  // [bp-0xa88]
    let v12: u64;  // [bp-0xa80]
    let v13: void*;  // [bp-0xa78], Other Possible Types: u8
    let v14: u64;  // [bp-0xa70]
    let v15: void*;  // [bp-0xa68]
    let v16: u16;  // [bp-0xa60]
    let v17: u8;  // [bp-0xa5f]
    let v18: u32;  // [bp-0xa5e]
    let v19: u64;  // [bp-0x7fc]
    let v20: u32;  // [bp-0x7f4]
    let v21: struct24;  // [bp-0x7f0], Other Possible Types: struct72
    let v22: u128;  // [bp-0x7e0]
    let v23: u128;  // [bp-0x7d0]
    let v24: u128;  // [bp-0x7c0]
    let v25: u64;  // [bp-0x7b0]
    let v26: u128;  // [bp-0x7a8]
    let v27: struct96;  // [bp-0x798], Other Possible Types: u8
    let v28: u32;  // [bp-0x550]
    let v29: u32;  // [bp-0x54c]
    let v30: struct437;  // [bp-0x540]
    let v31: struct56;  // [bp-0x2f8]
    let v32: i8;  // [bp-0x2f4]
    let v33: u64;  // [bp-0x284]
    let v34: u32;  // [bp-0x27c]
    let v35: struct48;  // [bp-0x278], Other Possible Types: struct72, u64
    let v36: struct72;  // [bp-0x278]
    let v37: u64;  // [bp-0x270]
    let v38: u64;  // [bp-0x268]
    let v39: u128;  // [bp-0x248]
    let v42: u64;  // rdx
    let v43: u128;  // xmm1
    let v44: u128;  // xmm2

    v30 = clap_builder::builder::command::Command::new(uucore::util_name(), v42);
    clap_builder::builder::command::Command::version(&v3, &v30, "0.0.28");
    clap_builder::builder::command::Command::about(&v30, &v3, "Update the access and modification times of each `FILE` to the current time.");
    uucore::format_usage(&v27, "{} [OPTION]... [USER]");
    clap_builder::builder::command::Command::override_usage(&v3, &v30, &v27);
    memcpy(&v30, &v3, 700);
    v33 = 1126449662918784 | v19;
    v34 = v20;
    clap_builder::builder::arg::Arg::new(&v3, "help");
    clap_builder::builder::arg::Arg::long(&v27, &v3, "help");
    clap_builder::builder::arg::Arg::help(&v3, &v27, "Print help information.");
    clap_builder::builder::arg::Arg::action(&v27, &v3, 5);
    clap_builder::builder::command::Command::arg(&v3, &v30, &v27);
    clap_builder::builder::arg::Arg::new(&v30, "access");
    clap_builder::builder::arg::Arg::short(&v27, &v30, 97);
    clap_builder::builder::arg::Arg::help(&v30, &v27, "change only the access time");
    clap_builder::builder::arg::Arg::action(&v27, &v30, 2);
    clap_builder::builder::command::Command::arg(&v30, &v3, &v27);
    clap_builder::builder::arg::Arg::new(&v3, "timestamp");
    clap_builder::builder::arg::Arg::short(&v27, &v3, 116);
    clap_builder::builder::arg::Arg::help(&v3, &v27, "use [[CC]YY]MMDDhhmm[.ss] instead of the current time");
    clap_builder::builder::arg::Arg::value_name(&v27, &v3, "STAMP");
    clap_builder::builder::command::Command::arg(&v3, &v30, &v27);
    clap_builder::builder::arg::Arg::new(&v30, "date");
    clap_builder::builder::arg::Arg::short(&v27, &v30, 100);
    clap_builder::builder::arg::Arg::long(&v30, &v27, "date");
    memcpy(&v27, &v30, 584);
    v28 = v31 | 32;
    v29 = *(&v32 as &i32);
    clap_builder::builder::arg::Arg::help(&v30, &v27, "parse argument and use it instead of current time");
    clap_builder::builder::arg::Arg::value_name(&v27, &v30, "STRING");
    clap_builder::builder::arg::Arg::conflicts_with(&v35, &v27, "timestamp");
    clap_builder::builder::command::Command::arg(&v30, &v3, &v35);
    clap_builder::builder::arg::Arg::new(&v3, "modification");
    clap_builder::builder::arg::Arg::short(&v27, &v3, 109);
    clap_builder::builder::arg::Arg::help(&v3, &v27, "change only the modification time");
    clap_builder::builder::arg::Arg::action(&v27, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v30, &v27);
    clap_builder::builder::arg::Arg::new(&v30, "no-create");
    clap_builder::builder::arg::Arg::short(&v27, &v30, 99);
    clap_builder::builder::arg::Arg::long(&v30, &v27, "no-create");
    clap_builder::builder::arg::Arg::help(&v27, &v30, "do not create any files");
    clap_builder::builder::arg::Arg::action(&v35, &v27, 2);
    clap_builder::builder::command::Command::arg(&v30, &v3, &v35);
    clap_builder::builder::arg::Arg::new(&v3, "no-dereference");
    clap_builder::builder::arg::Arg::short(&v27, &v3, 104);
    clap_builder::builder::arg::Arg::long(&v3, &v27, "no-dereference");
    clap_builder::builder::arg::Arg::help(&v27, &v3, "affect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)");
    clap_builder::builder::arg::Arg::action(&v35, &v27, 2);
    clap_builder::builder::command::Command::arg(&v3, &v30, &v35);
    clap_builder::builder::arg::Arg::new(&v30, "reference");
    clap_builder::builder::arg::Arg::short(&v27, &v30, 114);
    clap_builder::builder::arg::Arg::long(&v30, &v27, "reference");
    clap_builder::builder::arg::Arg::help(&v27, &v30, "use this file's times instead of the current time");
    clap_builder::builder::arg::Arg::value_name(&v30, &v27, "FILE");
    v0 = 2;
    v38 = v2;
    v35 = v0;
    v37 = v1;
    clap_builder::builder::arg::Arg::value_parser(&v27, &v30, &v35);
    clap_builder::builder::arg::Arg::value_hint(&v30, &v27, 2);
    clap_builder::builder::arg::Arg::conflicts_with(&v27, &v30, "timestamp");
    clap_builder::builder::command::Command::arg(&v30, &v3, &v27);
    clap_builder::builder::arg::Arg::new(&v3, "time");
    clap_builder::builder::arg::Arg::long(&v27, &v3, "time");
    clap_builder::builder::arg::Arg::help(&v3, &v27, "change only the specified time: "access", "atime", or "use" are equivalent to -a; "modify" or "mtime" are equivalent to -m");
    clap_builder::builder::arg::Arg::value_name(&v27, &v3, "WORD");
    v11 = &g_475002;
    v12 = 5;
    v8 = 0x8000000000000000;
    v9 = v26;
    v3 = 0;
    v6 = 8;
    v7 = 0;
    v13 = 0;
    v35 = clap_builder::builder::possible_value::PossibleValue::alias(&v3, "access");
    v21 = clap_builder::builder::possible_value::PossibleValue::alias(&v35, "use");
    v11 = &g_475007;
    v12 = 5;
    v8 = 0x8000000000000000;
    v9 = v26;
    v3 = 0;
    v6 = 8;
    v7 = 0;
    v13 = 0;
    v36 = clap_builder::builder::possible_value::PossibleValue::alias(&v3, "modify");
    v43 = *(&v36.field_16 as &i128);
    v44 = v36.field_32;
    v4 = struct144 {
        field_0: v21.field_0
        field_16: v22
        field_32: v23
        field_48: v24
        field_64: v25
        field_72: v36.field_0
        field_88: v43
        field_104: v44
        field_120: v39
        field_136: v36.field_64
    };
    v21 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v4);
    clap_builder::builder::arg::Arg::value_parser(&v36, &v27, &v21);
    clap_builder::builder::command::Command::arg(&v4, &v30, &v36);
    clap_builder::builder::arg::Arg::new(&v30, "files");
    clap_builder::builder::arg::Arg::action(&v27, &v30, 1);
    clap_builder::builder::arg::Arg::num_args(&v30, &v27);
    clap_builder::builder::arg::Arg::value_parser(&v27, &v30, &v0);
    clap_builder::builder::arg::Arg::value_hint(&v36, &v27, 2);
    clap_builder::builder::command::Command::arg(&v30, &v4, &v36);
    v14 = 1;
    v15 = 0;
    v3 = 0;
    v6 = 8;
    v16 = 0;
    v7 = 0;
    v9 = 8;
    v10 = 0;
    v12 = 8;
    v13 = 0;
    v27 = clap_builder::builder::arg_group::ArgGroup::id(&v3, "sources");
    v35 = struct48 {
        field_0: &anon.9140edd4b155a5c33d3a3382a80f889a.4.llvm.18306172555780859939
        field_8: 9
        field_16: &anon.9140edd4b155a5c33d3a3382a80f889a.2.llvm.18306172555780859939
        field_24: 4
        field_32: &anon.9140edd4b155a5c33d3a3382a80f889a.3.llvm.18306172555780859939
        field_40: 9
    };
    v5 = clap_builder::builder::arg_group::ArgGroup::args(&v27, &v35);
    v17 = 1;
    v27 = struct96 {
        field_0: v5.field_0
        field_16: v5.field_16
        field_32: v5.field_32
        field_48: v5.field_48
        field_64: *(&v5.field_64 as &i128)
        field_80: 0
        field_88: v5.field_88 as i8
        field_89: 1
        field_90: v18
        field_94: *((&v5.field_88 as &char + 6) as &i16)
    };
    clap_builder::builder::command::Command::group(a0, &v30, &v27);
    return a0;
}
