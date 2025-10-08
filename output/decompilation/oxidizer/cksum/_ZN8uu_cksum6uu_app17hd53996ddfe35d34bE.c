fn uu_cksum::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct32;  // [bp-0xac0], Other Possible Types: struct712, struct640
    let v1: struct712;  // [bp-0xac0], Other Possible Types: struct640
    let v2: struct712;  // [bp-0xac0]
    let v3: struct712;  // [bp-0xac0]
    let v4: u32;  // [bp-0x848]
    let v5: u64;  // [bp-0x804]
    let v6: std::env::ArgsOs;  // [bp-0x7fc]
    let v7: struct32;  // [bp-0x7f8], Other Possible Types: struct437, struct712, struct640
    let v8: struct712;  // [bp-0x7f8]
    let v9: struct640;  // [bp-0x7f8]
    let v10: struct640;  // [bp-0x7f8]
    let v11: u32;  // [bp-0x580]
    let v12: u64;  // [bp-0x53c]
    let v13: std::env::ArgsOs;  // [bp-0x534]
    let v14: struct24;  // [bp-0x530], Other Possible Types: struct640
    let v15: struct712;  // [bp-0x2b8], Other Possible Types: u32
    let v16: struct40;  // [bp-0x2b4], Other Possible Types: u32
    let v17: struct24;  // [bp-0x2b0], Other Possible Types: struct32, struct56, struct640
    let v20: u64;  // rdx

    v7 = clap_builder::builder::command::Command::new(uucore::util_name(), v20);
    v2 = clap_builder::builder::command::Command::version(&v7);
    v7 = clap_builder::builder::command::Command::about(&v2);
    v14 = uucore::format_usage("{} [OPTIONS] [FILE]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v7, &v14);
    memcpy(&v7, &v3, 700);
    v12 = 584115552392 | v5;
    v13 = v6;
    v0 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v14, &v0, 632);
    v15 = v4 | 4;
    v16 = v4;
    v1 = clap_builder::builder::arg::Arg::action(&v14, 1);
    v17 = 2;
    v14 = clap_builder::builder::arg::Arg::value_parser(&v1, &v17);
    v17 = clap_builder::builder::arg::Arg::value_hint(&v14);
    v1 = clap_builder::builder::command::Command::arg(&v7, &v17);
    v7 = clap_builder::builder::arg::Arg::new("algorithm");
    v14 = clap_builder::builder::arg::Arg::long(&v7, "algorithm");
    v7 = clap_builder::builder::arg::Arg::short(&v14, 97);
    v14 = clap_builder::builder::arg::Arg::help(&v7, "select the digest type to use. See DIGEST below");
    v7 = clap_builder::builder::arg::Arg::value_name(&v14);
    v14 = clap_builder::builder::arg::Arg::value_parser(&v7, "sysv");
    v7 = clap_builder::builder::command::Command::arg(&v1, &v14);
    v1 = clap_builder::builder::arg::Arg::new("untagged");
    v14 = clap_builder::builder::arg::Arg::long(&v1, "untagged");
    v1 = clap_builder::builder::arg::Arg::help(&v14, "create a reversed style checksum, without digest type");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v17 = clap_builder::builder::arg::Arg::overrides_with(&v14, "tag");
    v1 = clap_builder::builder::command::Command::arg(&v7, &v17);
    v7 = clap_builder::builder::arg::Arg::new("tag");
    v14 = clap_builder::builder::arg::Arg::long(&v7, "tag");
    v7 = clap_builder::builder::arg::Arg::help(&v14, "create a BSD style checksum, undo --untagged (default)");
    v14 = clap_builder::builder::arg::Arg::action(&v7, 2);
    v17 = clap_builder::builder::arg::Arg::overrides_with(&v14, "untagged");
    v7 = clap_builder::builder::command::Command::arg(&v1, &v17);
    v1 = clap_builder::builder::arg::Arg::new("length");
    v14 = clap_builder::builder::arg::Arg::long(&v1, "length");
    v17 = struct24 {
        field_0: 4
        field_8: alloc::boxed::Box<T>::new(core::num::<impl core::str::traits::FromStr for usize>::from_str)
        field_16: &g_5639a0
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::short(&v1, 108);
    v1 = clap_builder::builder::arg::Arg::help(&v14, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 0);
    v1 = clap_builder::builder::command::Command::arg(&v7, &v14);
    v7 = clap_builder::builder::arg::Arg::new("raw");
    v14 = clap_builder::builder::arg::Arg::long(&v7, "raw");
    v7 = clap_builder::builder::arg::Arg::help(&v14, "emit a raw binary digest, not hexadecimal");
    v14 = clap_builder::builder::arg::Arg::action(&v7, 2);
    v7 = clap_builder::builder::command::Command::arg(&v1, &v14);
    v1 = clap_builder::builder::arg::Arg::new("strict");
    v14 = clap_builder::builder::arg::Arg::long(&v1, "strict");
    v1 = clap_builder::builder::arg::Arg::help(&v14, "exit non-zero for improperly formatted checksum lines");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v7, &v14);
    v7 = clap_builder::builder::arg::Arg::new("check");
    v14 = clap_builder::builder::arg::Arg::short(&v7, 99);
    v7 = clap_builder::builder::arg::Arg::long(&v14, "check");
    v14 = clap_builder::builder::arg::Arg::help(&v7, "read hashsums from the FILEs and check them");
    v17 = clap_builder::builder::arg::Arg::action(&v14, 2);
    v8 = clap_builder::builder::command::Command::arg(&v1, &v17);
    v1 = clap_builder::builder::arg::Arg::new("base64");
    v14 = clap_builder::builder::arg::Arg::long(&v1, "base64");
    v1 = clap_builder::builder::arg::Arg::help(&v14, "emit a base64 digest, not hexadecimal");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v17 = clap_builder::builder::arg::Arg::conflicts_with(&v14);
    v1 = clap_builder::builder::command::Command::arg(&v8, &v17);
    v9 = clap_builder::builder::arg::Arg::new("text");
    v14 = clap_builder::builder::arg::Arg::long(&v9, "text");
    v10 = clap_builder::builder::arg::Arg::short(&v14, 116);
    memcpy(&v14, &v10, 632);
    v15 = v11 | 4;
    v16 = v11;
    v7 = clap_builder::builder::arg::Arg::overrides_with(&v14, "binary");
    v14 = clap_builder::builder::arg::Arg::action(&v7, 2);
    v7 = clap_builder::builder::command::Command::arg(&v1, &v14);
    v1 = clap_builder::builder::arg::Arg::new("binary");
    v14 = clap_builder::builder::arg::Arg::long(&v1, "binary");
    v1 = clap_builder::builder::arg::Arg::short(&v14, 98);
    memcpy(&v14, &v1, 632);
    v15 = v4 | 4;
    v16 = *((&(&v3)[79].field_0 as &char + 4) as &i32);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v14, "text");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v7, &v14);
    v7 = clap_builder::builder::arg::Arg::new("warn");
    v14 = clap_builder::builder::arg::Arg::short(&v7, 119);
    v7 = clap_builder::builder::arg::Arg::long(&v14, "warn");
    v14 = clap_builder::builder::arg::Arg::help(&v7, "warn about improperly formatted checksum lines");
    v7 = clap_builder::builder::arg::Arg::action(&v14, 2);
    v17 = struct32 {
        field_0: "status"
        field_16: "quiet"
    };
    v14 = clap_builder::builder::arg::Arg::overrides_with_all(&v7, &v17);
    v7 = clap_builder::builder::command::Command::arg(&v0, &v14);
    v0 = clap_builder::builder::arg::Arg::new("status");
    v14 = clap_builder::builder::arg::Arg::long(&v0, "status");
    v0 = clap_builder::builder::arg::Arg::help(&v14, "don't output anything, status code shows success");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = struct32 {
        field_0: "warn"
        field_16: "quiet"
    };
    v17 = clap_builder::builder::arg::Arg::overrides_with_all(&v14, &v0);
    v0 = clap_builder::builder::command::Command::arg(&v7, &v17);
    v7 = clap_builder::builder::arg::Arg::new("quiet");
    v14 = clap_builder::builder::arg::Arg::long(&v7, "quiet");
    v7 = clap_builder::builder::arg::Arg::help(&v14, "don't print OK for each successfully verified file");
    v14 = clap_builder::builder::arg::Arg::action(&v7, 2);
    v7 = struct32 {
        field_0: "warn"
        field_16: "status"
    };
    v17 = clap_builder::builder::arg::Arg::overrides_with_all(&v14, &v7);
    v7 = clap_builder::builder::command::Command::arg(&v0, &v17);
    v0 = clap_builder::builder::arg::Arg::new("ignore-missing");
    v14 = clap_builder::builder::arg::Arg::long(&v0, "ignore-missing");
    v0 = clap_builder::builder::arg::Arg::help(&v14, "don't fail or report status for missing files");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v7, &v14);
    v7 = clap_builder::builder::arg::Arg::new("zero");
    v14 = clap_builder::builder::arg::Arg::long(&v7, "zero");
    v7 = clap_builder::builder::arg::Arg::short(&v14, 122);
    v14 = clap_builder::builder::arg::Arg::help(&v7, "end each output line with NUL, not newline,\n and disable file name escaping");
    v17 = clap_builder::builder::arg::Arg::action(&v14, 2);
    v7 = clap_builder::builder::command::Command::arg(&v0, &v17);
    clap_builder::builder::command::Command::after_help(a0, &v7);
    return;
}
