fn uu_hashsum::uu_app_common(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v3: i4736;  // [sp-0x268], Other Possible Types: struct592, struct8
    let v5: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v2, "Compute and check message digests.");
    v0 = uucore::format_usage("{} [OPTIONS] [FILE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v2, 700);
    v1.700 = 584115552392 | (stack_base)[628] as i64;
    v1.708 = (stack_base)[620] as i32;
    v2 = clap_builder::builder::arg::Arg::new("binary");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 98);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "binary");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "read in binary mode");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("check");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 99);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "check");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "read hashsums from the FILEs and check them");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "tag");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("tag");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "tag");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "create a BSD-style checksum");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v3 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "text");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("text");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 116);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "text");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "read in text mode (default)");
    v1 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "binary");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 113);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "don't print OK for each successfully verified file");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("status");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 115);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "status");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "don't output anything, status code shows success");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("strict");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "strict");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "exit non-zero for improperly formatted checksum lines");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("ignore-missing");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "ignore-missing");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "don't fail or report status for missing files");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("warn");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 119);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "warn");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "warn about improperly formatted checksum lines");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 122);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "zero");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "end each output line with NUL, not newline");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("file");
    v0 = clap_builder::builder::arg::Arg::index(&v2);
    v2 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, &g_468d24);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    v3 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v2, &v3);
    clap_builder::builder::command::Command::arg(a0, &v1, &v0);
    return a0;
}
