fn uu_cksum::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v4: i5696;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v5: i4736;  // [bp-0x268], Other Possible Types: struct592, struct8
    let v7: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v4 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v4, "Print CRC and size for each file");
    v0 = uucore::format_usage("{} [OPTIONS] [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v4, 700);
    v3.700 = 584115552392 | (stack_base)[628] as i64;
    v3.708 = (stack_base)[620] as i32;
    v4 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v4, 584);
    v1 = *((&v4 as &char + 584) as &i32) | 4;
    v2 = *((&v4 as &char + 588) as &i32);
    v4 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v5 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v4, &v5);
    v5 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v5);
    v3 = clap_builder::builder::arg::Arg::new("algorithm");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "algorithm");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 97);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "select the digest type to use. See DIGEST below");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, v7);
    memcpy(&v5, "sysv", 240);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v5);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("untagged");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "untagged");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "create a reversed style checksum, without digest type");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v5 = clap_builder::builder::arg::Arg::overrides_with(&v0, "tag");
    v4 = clap_builder::builder::command::Command::arg(&v3, &v5);
    v3 = clap_builder::builder::arg::Arg::new("tag");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "tag");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "create a BSD style checksum, undo --untagged (default)");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v5 = clap_builder::builder::arg::Arg::overrides_with(&v0, "untagged");
    v3 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("length");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "length");
    v5 = 4;
    v5.8 = alloc::boxed::Box<T>::new(core::num::<impl core::str::traits::FromStr for usize>::from_str);
    v5.16 = 7693280;
    v4 = clap_builder::builder::arg::Arg::value_parser(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::short(&v4, 108);
    v4 = clap_builder::builder::arg::Arg::help(&v0, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 0);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("raw");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "raw");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "emit a raw binary digest, not hexadecimal");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("strict");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "strict");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "exit non-zero for improperly formatted checksum lines");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("check");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 99);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "check");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "read hashsums from the FILEs and check them");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v3, "tag");
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("base64");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "base64");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "emit a base64 digest, not hexadecimal");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v5 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "raw");
    v4 = clap_builder::builder::command::Command::arg(&v3, &v5);
    v3 = clap_builder::builder::arg::Arg::new("text");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "text");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 116);
    memcpy(&v0, &v3, 584);
    v0.584 = (stack_base)[1456] as i32 | 4;
    v0.588 = (stack_base)[1452] as i32;
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "binary");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("binary");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "binary");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 98);
    memcpy(&v0, &v4, 584);
    v0.584 = (stack_base)[744] as i32 | 4;
    v0.588 = (stack_base)[740] as i32;
    v4 = clap_builder::builder::arg::Arg::overrides_with(&v0, "text");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("warn");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 119);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "warn");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "warn about improperly formatted checksum lines");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("status");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "status");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "don't output anything, status code shows success");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "quiet");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "don't print OK for each successfully verified file");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("ignore-missing");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "ignore-missing");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "don't fail or report status for missing files");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "zero");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 122);
    v0 = clap_builder::builder::arg::Arg::help(&v3, &g_466282, 75);
    v5 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v5);
    clap_builder::builder::command::Command::after_help(a0, &v3, &g_4662cd, 459);
    return a0;
}
