fn uu_hashsum::uu_app_common(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v2: i64;  // [sp-0x53c]
    let v3: i32;  // [sp-0x534]
    let v4: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v5: i4736;  // [sp-0x268], Other Possible Types: struct592, struct8
    let v7: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v4 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v4, "Compute and check message digests.");
    v0 = uucore::format_usage("{} [OPTIONS] [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 584115552392 | *((&v4 as &char + 700) as &i64);
    v3 = *((&v4 as &char + 708) as &i32);
    v4 = clap_builder::builder::arg::Arg::new("binary");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x62);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "binary");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "read in binary mode");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("check");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x63);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "check");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "read hashsums from the FILEs and check them");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "tag");
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("tag");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "tag");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "create a BSD-style checksum");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v5 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "text");
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("text");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x74);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "text");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "read in text mode (default)");
    v1 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "binary");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x71);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "don't print OK for each successfully verified file");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("status");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x73);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "status");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "don't output anything, status code shows success");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("strict");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "strict");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "exit non-zero for improperly formatted checksum lines");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("ignore-missing");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "ignore-missing");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "don't fail or report status for missing files");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("warn");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x77);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "warn");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "warn about improperly formatted checksum lines");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x7a);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "zero");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "end each output line with NUL, not newline");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("file");
    v0 = clap_builder::builder::arg::Arg::index(&v4);
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::value_name(&v4, &g_468b9c);
    v4 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    v5 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v4, &v5);
    clap_builder::builder::command::Command::arg(a0, &v1, &v0);
    return a0;
}
