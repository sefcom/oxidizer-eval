fn uu_hashsum::uu_app_common(a0: i64) -> long long {
    let v0: struct24;  // [bp-0xac0], Other Possible Types: struct640
    let v1: struct437;  // [bp-0x840], Other Possible Types: struct712, struct640
    let v2: u64;  // [bp-0x584]
    let v3: u32;  // [bp-0x57c]
    let v4: struct712;  // [bp-0x578], Other Possible Types: struct640
    let v5: u64;  // [bp-0x2bc]
    let v6: u32;  // [bp-0x2b4]
    let v7: struct32;  // [bp-0x2b0], Other Possible Types: struct640, u64
    let v10: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v4 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v4);
    v0 = uucore::format_usage("{} --<digest> [OPTIONS]... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 584115552392 | v5;
    v3 = v6;
    v4 = clap_builder::builder::arg::Arg::new("binary");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 98);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "binary");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "read in binary mode");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("check");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 99);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "check");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "read hashsums from the FILEs and check them");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "tag");
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("tag");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "tag");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "create a BSD-style checksum");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v7 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "text");
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("text");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 116);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "text");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "read in text mode (default)");
    v1 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "binary");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 113);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "don't print OK for each successfully verified file");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v7 = struct32 {
        field_0: "status"
        field_16: "warn"
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v4, &v7);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("status");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 115);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "status");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "don't output anything, status code shows success");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v7 = struct32 {
        field_0: "quiet"
        field_16: "warn"
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v7);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("strict");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "strict");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "exit non-zero for improperly formatted checksum lines");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("ignore-missing");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "ignore-missing");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "don't fail or report status for missing files");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("warn");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 119);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "warn");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "warn about improperly formatted checksum lines");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v7 = struct32 {
        field_0: "quiet"
        field_16: "status"
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v4, &v7);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 122);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "zero");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "end each output line with NUL, not newline");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("file");
    v0 = clap_builder::builder::arg::Arg::index(&v4);
    v4 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_name(&v4, &g_411db8);
    v4 = clap_builder::builder::arg::Arg::value_hint(&v0);
    v7 = 2;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v4, &v7);
    clap_builder::builder::command::Command::arg(a0, &v1, &v0);
    return a0;
}
