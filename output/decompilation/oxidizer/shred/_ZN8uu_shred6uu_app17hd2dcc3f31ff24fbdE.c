fn uu_shred::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct48, struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v4: struct712;  // [bp-0x830]
    let v5: struct640;  // [bp-0x830]
    let v6: struct640;  // [bp-0x830]
    let v7: struct640;  // [bp-0x830]
    let v8: u32;  // [bp-0x5b8]
    let v9: u64;  // [bp-0x574]
    let v10: u32;  // [bp-0x56c]
    let v11: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v12: u64;  // [bp-0x2ac]
    let v13: u32;  // [bp-0x2a4]
    let v14: struct640;  // [bp-0x2a0]
    let v17: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v17);
    v11 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v11);
    v11 = clap_builder::builder::command::Command::after_help(&v3);
    v0 = uucore::format_usage("{} [OPTION]... FILE...");
    v3 = clap_builder::builder::command::Command::override_usage(&v11, &v0);
    memcpy(&v11, &v3, 700);
    v12 = 549755814016 | v9;
    v13 = v10;
    v3 = clap_builder::builder::arg::Arg::new("force");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "force");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 102);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "change permissions to allow writing if necessary");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v11, &v14);
    v11 = clap_builder::builder::arg::Arg::new("iterations");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "iterations");
    v11 = clap_builder::builder::arg::Arg::short(&v0, 110);
    v0 = clap_builder::builder::arg::Arg::help(&v11, "overwrite N times instead of the default (3)");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v0 = clap_builder::builder::arg::Arg::default_value(&v11);
    v11 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("size");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "size");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "N");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "shred this many bytes (suffixes like K, M, G accepted)");
    v4 = clap_builder::builder::command::Command::arg(&v11, &v14);
    v11 = clap_builder::builder::arg::Arg::new("u");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 117);
    v11 = clap_builder::builder::arg::Arg::help(&v0, "deallocate and remove file after overwriting");
    v0 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v11 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v5 = clap_builder::builder::arg::Arg::new("remove");
    v0 = clap_builder::builder::arg::Arg::long(&v5, "remove");
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "HOW");
    v0 = struct48 {
        field_0: "unlink"
        field_16: "wipe"
        field_32: "wipesync"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v14, &v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v6, &v14);
    v7 = clap_builder::builder::arg::Arg::num_args(&v0, None, 1);
    memcpy(&v0, &v7, 632);
    v1 = 128 | v8;
    v2 = v8;
    v3 = clap_builder::builder::arg::Arg::default_missing_value(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "like -u but give control on HOW to delete;  See below");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v3 = clap_builder::builder::command::Command::arg(&v11, &v14);
    v11 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "verbose");
    v11 = clap_builder::builder::arg::Arg::short(&v0, 118);
    v0 = clap_builder::builder::arg::Arg::help(&v11, "show progress");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v11 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("exact");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "exact");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 120);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "do not round file sizes up to the next full block;\nthis is the default for non-regular files");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v11, &v14);
    v11 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "zero");
    v11 = clap_builder::builder::arg::Arg::short(&v0, 122);
    v0 = clap_builder::builder::arg::Arg::help(&v11, "add a final overwrite with zeros to hide shredding");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v11 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("file");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v11, &v3);
    return;
}
