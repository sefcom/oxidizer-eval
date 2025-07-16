fn uu_hashsum::uu_app_common(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: struct437;  // [bp-0x7f8]
    let v2: u64;  // [bp-0x53c]
    let v3: u32;  // [bp-0x534]
    let v4: u8;  // [bp-0x530]
    let v5: u64;  // [bp-0x274]
    let v6: u32;  // [bp-0x26c]
    let v7: u8;  // [bp-0x268]
    let v10: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    clap_builder::builder::command::Command::version(&v4, &v1, "0.0.28");
    clap_builder::builder::command::Command::about(&v1, &v4, "Compute and check message digests.");
    uucore::format_usage(&v0, "{} [OPTIONS] [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v4, &v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 584115552392 | v5;
    v3 = v6;
    clap_builder::builder::arg::Arg::new(&v4, "binary");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 98);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "binary");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "read in binary mode");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new(&v1, "check");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 99);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "check");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "read hashsums from the FILEs and check them");
    clap_builder::builder::arg::Arg::action(&v1, &v0, 2);
    clap_builder::builder::arg::Arg::conflicts_with(&v0, &v1, "tag");
    clap_builder::builder::command::Command::arg(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new(&v4, "tag");
    clap_builder::builder::arg::Arg::long(&v0, &v4, "tag");
    clap_builder::builder::arg::Arg::help(&v4, &v0, "create a BSD-style checksum");
    clap_builder::builder::arg::Arg::action(&v0, &v4, 2);
    clap_builder::builder::arg::Arg::conflicts_with(&v7, &v0, "text");
    clap_builder::builder::command::Command::arg(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new(&v1, "text");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 116);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "text");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "read in text mode (default)");
    clap_builder::builder::arg::Arg::conflicts_with(&v1, &v0, "binary");
    clap_builder::builder::arg::Arg::action(&v0, &v1, 2);
    clap_builder::builder::command::Command::arg(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new(&v4, "quiet");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 113);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "quiet");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "don't print OK for each successfully verified file");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new(&v1, "status");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 115);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "status");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "don't output anything, status code shows success");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new(&v4, "strict");
    clap_builder::builder::arg::Arg::long(&v0, &v4, "strict");
    clap_builder::builder::arg::Arg::help(&v4, &v0, "exit non-zero for improperly formatted checksum lines");
    clap_builder::builder::arg::Arg::action(&v0, &v4, 2);
    clap_builder::builder::command::Command::arg(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new(&v1, "ignore-missing");
    clap_builder::builder::arg::Arg::long(&v0, &v1, "ignore-missing");
    clap_builder::builder::arg::Arg::help(&v1, &v0, "don't fail or report status for missing files");
    clap_builder::builder::arg::Arg::action(&v0, &v1, 2);
    clap_builder::builder::command::Command::arg(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new(&v4, "warn");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 119);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "warn");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "warn about improperly formatted checksum lines");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new(&v1, "zero");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 122);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "zero");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "end each output line with NUL, not newline");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new(&v4, "file");
    clap_builder::builder::arg::Arg::index(&v0, &v4);
    clap_builder::builder::arg::Arg::action(&v4, &v0, 1);
    clap_builder::builder::arg::Arg::value_name(&v0, &v4, &g_468b9c);
    clap_builder::builder::arg::Arg::value_hint(&v4, &v0, 3);
    v7 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v0, &v4, &v7);
    clap_builder::builder::command::Command::arg(a0, &v1, &v0);
    return a0;
}
