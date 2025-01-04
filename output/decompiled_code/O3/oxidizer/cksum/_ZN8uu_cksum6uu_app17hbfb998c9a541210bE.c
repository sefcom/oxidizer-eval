fn uu_cksum::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v4: i64;  // [sp-0x53c]
    let v5: i32;  // [sp-0x534]
    let v6: i5696;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v7: i4736;  // [bp-0x268], Other Possible Types: struct592, struct8
    let v8: i64;  // [sp-0x260]
    let v9: i64;  // [sp-0x258]
    let v11: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v11);
    v6 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v6, "Print CRC and size for each file");
    v0 = uucore::format_usage("{} [OPTIONS] [FILE]...");
    v6 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 584115552392 | *((&v6 as &char + 700) as &i64);
    v5 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v6, 584);
    v1 = *((&v6 as &char + 584) as &i32) | 4;
    v2 = *((&v6 as &char + 588) as &i32);
    v6 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v7 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v6, &v7);
    v7 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("algorithm");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "algorithm");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x61);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "select the digest type to use. See DIGEST below");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, v11);
    memcpy(&v7, "sysv", 240);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("untagged");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "untagged");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "create a reversed style checksum, without digest type");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v7 = clap_builder::builder::arg::Arg::overrides_with(&v0, "tag");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("tag");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "tag");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "create a BSD style checksum, undo --untagged (default)");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v7 = clap_builder::builder::arg::Arg::overrides_with(&v0, "untagged");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("length");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "length");
    v7 = 4;
    v8 = alloc::boxed::Box<T>::new();
    v9 = &g_755768;
    v6 = clap_builder::builder::arg::Arg::value_parser(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x6c);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8");
    v0 = clap_builder::builder::arg::Arg::action(&v6, None);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("raw");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "raw");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "emit a raw binary digest, not hexadecimal");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("strict");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "strict");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "exit non-zero for improperly formatted checksum lines");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("check");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x63);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "check");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "read hashsums from the FILEs and check them");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v3, "tag");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("base64");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "base64");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "emit a base64 digest, not hexadecimal");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v7 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "raw");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("text");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "text");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x74);
    memcpy(&v0, &v3, 584);
    v1 = *((&v3 as &char + 584) as &i32) | 4;
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "binary");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("binary");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "binary");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 0x62);
    memcpy(&v0, &v6, 584);
    v1 = *((&v6 as &char + 584) as &i32) | 4;
    v2 = *((&v6 as &char + 588) as &i32);
    v6 = clap_builder::builder::arg::Arg::overrides_with(&v0, "text");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("warn");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x77);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "warn");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "warn about improperly formatted checksum lines");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("status");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "status");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "don't output anything, status code shows success");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "quiet");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "don't print OK for each successfully verified file");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("ignore-missing");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "ignore-missing");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "don't fail or report status for missing files");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "zero");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x7a);
    v0 = clap_builder::builder::arg::Arg::help(&v3, &g_466078, 75);
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v7);
    clap_builder::builder::command::Command::after_help(a0, &v3, &g_4660c3, 459);
    return a0;
}
