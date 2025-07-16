fn uu_cksum::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: struct437;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: i8;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: u32;  // [bp-0x534]
    let v8: u8;  // [bp-0x530]
    let v9: u32;  // [bp-0x2e8]
    let v10: i8;  // [bp-0x2e4]
    let v11: u64;  // [bp-0x274]
    let v12: u32;  // [bp-0x26c]
    let v13: u192;  // [bp-0x268]
    let v16: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    clap_builder::builder::command::Command::version(&v8, &v3, "0.0.28");
    clap_builder::builder::command::Command::about(&v3, &v8, "Print CRC and size for each file");
    uucore::format_usage(&v0, "{} [OPTIONS] [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | v11;
    v7 = v12;
    clap_builder::builder::arg::Arg::new(&v8, "file");
    memcpy(&v0, &v8, 584);
    v1 = v9 | 4;
    v2 = *(&v10 as &i32);
    clap_builder::builder::arg::Arg::action(&v8, &v0, 1);
    v13 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::value_hint(&v13, &v0, 3);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "algorithm");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "algorithm");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 97);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "select the digest type to use. See DIGEST below");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0);
    memcpy(&v13, "sysv", 240);
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v13);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "untagged");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "untagged");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "create a reversed style checksum, without digest type");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v13, &v0, "tag");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "tag");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "tag");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "create a BSD style checksum, undo --untagged (default)");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v13, &v0, "untagged");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "length");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "length");
    v13 = struct24 {
        field_0: 4
        field_8: alloc::boxed::Box<T>::new()
        field_16: &g_755768
    };
    clap_builder::builder::arg::Arg::value_parser(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::short(&v0, &v8, 108);
    clap_builder::builder::arg::Arg::help(&v8, &v0, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 0);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "raw");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "raw");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "emit a raw binary digest, not hexadecimal");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "strict");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "strict");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "exit non-zero for improperly formatted checksum lines");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "check");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 99);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "check");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "read hashsums from the FILEs and check them");
    clap_builder::builder::arg::Arg::action(&v3, &v0, 2);
    clap_builder::builder::arg::Arg::conflicts_with(&v0, &v3, "tag");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "base64");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "base64");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "emit a base64 digest, not hexadecimal");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::arg::Arg::conflicts_with(&v13, &v0, "raw");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "text");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "text");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 116);
    memcpy(&v0, &v3, 584);
    v1 = v4 | 4;
    v2 = *(&v5 as &i32);
    clap_builder::builder::arg::Arg::overrides_with(&v3, &v0, "binary");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "binary");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "binary");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 98);
    memcpy(&v0, &v8, 584);
    v1 = v9 | 4;
    v2 = *(&v10 as &i32);
    clap_builder::builder::arg::Arg::overrides_with(&v8, &v0, "text");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "warn");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 119);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "warn");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "warn about improperly formatted checksum lines");
    clap_builder::builder::arg::Arg::action(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "status");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "status");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "don't output anything, status code shows success");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "quiet");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "quiet");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "don't print OK for each successfully verified file");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "ignore-missing");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "ignore-missing");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "don't fail or report status for missing files");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "zero");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "zero");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 122);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "end each output line with NUL, not newline,\n and disable file name escaping");
    clap_builder::builder::arg::Arg::action(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v13);
    clap_builder::builder::command::Command::after_help(a0, &v3, "DIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)");
    return a0;
}
