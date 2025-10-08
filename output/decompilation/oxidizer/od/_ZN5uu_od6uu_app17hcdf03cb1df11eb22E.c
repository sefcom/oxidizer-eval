fn uu_od::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0xab0], Other Possible Types: struct712, struct640
    let v1: u64;  // [bp-0x7f4]
    let v2: u32;  // [bp-0x7ec]
    let v3: struct712;  // [bp-0x7e8], Other Possible Types: struct640
    let v4: struct712;  // [bp-0x7e8]
    let v5: struct640;  // [bp-0x7e8]
    let v6: u32;  // [bp-0x570]
    let v7: u64;  // [bp-0x52c]
    let v8: u32;  // [bp-0x524]
    let v9: struct24;  // [bp-0x520], Other Possible Types: struct32, struct640
    let v10: u32;  // [bp-0x2a8]
    let v11: u32;  // [bp-0x2a4]
    let v12: struct640;  // [bp-0x2a0]
    let v15: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    v3 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v3);
    v9 = uucore::format_usage("{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OPTION]... [FILENAME] [[+][0x]OFFSET[.][b] [[+][0x]LABEL[.][b]]]");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v9);
    v0 = clap_builder::builder::command::Command::after_help(&v3);
    memcpy(&v3, &v0, 700);
    v7 = 2252658807668968 | v1;
    v8 = v2;
    v0 = clap_builder::builder::arg::Arg::new("help");
    v9 = clap_builder::builder::arg::Arg::long(&v0, "help");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "Print help information.");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 5);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("address-radix");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 65);
    v3 = clap_builder::builder::arg::Arg::long(&v9, "address-radix");
    v9 = clap_builder::builder::arg::Arg::help(&v3, "Select the base in which file offsets are printed.");
    v12 = clap_builder::builder::arg::Arg::value_name(&v9, "RADIX");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v12);
    v0 = clap_builder::builder::arg::Arg::new("skip-bytes");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 106);
    v0 = clap_builder::builder::arg::Arg::long(&v9, "skip-bytes");
    v9 = clap_builder::builder::arg::Arg::help(&v0, "Skip bytes input bytes before formatting and writing.");
    v12 = clap_builder::builder::arg::Arg::value_name(&v9, "BYTES");
    v0 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("read-bytes");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 78);
    v3 = clap_builder::builder::arg::Arg::long(&v9, "read-bytes");
    v9 = clap_builder::builder::arg::Arg::help(&v3, "limit dump to BYTES input bytes");
    v12 = clap_builder::builder::arg::Arg::value_name(&v9, "BYTES");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v12);
    v0 = clap_builder::builder::arg::Arg::new("endian");
    v9 = clap_builder::builder::arg::Arg::long(&v0, "endian");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "byte order to use for multi-byte formats");
    v9 = struct32 {
        field_0: "big"
        field_16: "little"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v12, &v9);
    v9 = clap_builder::builder::arg::Arg::value_parser(&v0, &v12);
    v12 = clap_builder::builder::arg::Arg::value_name(&v9, "big|little");
    v0 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("strings");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 83);
    v3 = clap_builder::builder::arg::Arg::long(&v9, "strings");
    v9 = clap_builder::builder::arg::Arg::help(&v3, "NotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.");
    v3 = clap_builder::builder::arg::Arg::default_missing_value(&v9, "3");
    v9 = clap_builder::builder::arg::Arg::value_name(&v3, "BYTES");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("a");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 97);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "named characters, ignoring high-order bit");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("b");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 98);
    v3 = clap_builder::builder::arg::Arg::help(&v9, "octal bytes");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("c");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 99);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "ASCII characters or backslash escapes");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("d");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 100);
    v3 = clap_builder::builder::arg::Arg::help(&v9, "unsigned decimal 2-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("D");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 68);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "unsigned decimal 4-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("o");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 111);
    v3 = clap_builder::builder::arg::Arg::help(&v9, "octal 2-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("I");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 73);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "decimal 8-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("L");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 76);
    v3 = clap_builder::builder::arg::Arg::help(&v9, "decimal 8-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("i");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 105);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "decimal 4-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("l");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 108);
    v3 = clap_builder::builder::arg::Arg::help(&v9, "decimal 8-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("x");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 120);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "hexadecimal 2-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("h");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 104);
    v3 = clap_builder::builder::arg::Arg::help(&v9, "hexadecimal 2-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("O");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 79);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "octal 4-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("s");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::help(&v9, "decimal 2-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("X");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 88);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "hexadecimal 4-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("H");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 72);
    v3 = clap_builder::builder::arg::Arg::help(&v9, "hexadecimal 4-byte units");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("e");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 101);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "floating point double precision (64-bit) units");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("f");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 102);
    v3 = clap_builder::builder::arg::Arg::help(&v9, "floating point double precision (32-bit) units");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("F");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 70);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "floating point double precision (64-bit) units");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("format");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 116);
    v3 = clap_builder::builder::arg::Arg::long(&v9, "format");
    v9 = clap_builder::builder::arg::Arg::help(&v3, "select output format or formats");
    v3 = clap_builder::builder::arg::Arg::action(&v9, 1);
    v9 = clap_builder::builder::arg::Arg::num_args(&v3);
    v12 = clap_builder::builder::arg::Arg::value_name(&v9, "TYPE");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v12);
    v0 = clap_builder::builder::arg::Arg::new("output-duplicates");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 118);
    v0 = clap_builder::builder::arg::Arg::long(&v9, "output-duplicates");
    v9 = clap_builder::builder::arg::Arg::help(&v0, "do not use * to mark line suppression");
    v12 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("width");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 119);
    v3 = clap_builder::builder::arg::Arg::long(&v9, "width");
    v9 = clap_builder::builder::arg::Arg::help(&v3, "output BYTES bytes per output line. 32 is implied when BYTES is not specified.");
    v3 = clap_builder::builder::arg::Arg::default_missing_value(&v9, "32");
    v9 = clap_builder::builder::arg::Arg::value_name(&v3, "BYTES");
    v12 = clap_builder::builder::arg::Arg::num_args(&v9);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v12);
    v0 = clap_builder::builder::arg::Arg::new("traditional");
    v9 = clap_builder::builder::arg::Arg::long(&v0, "traditional");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "compatibility mode with one input, offset and label.");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v9);
    v5 = clap_builder::builder::arg::Arg::new("FILENAME");
    memcpy(&v9, &v5, 632);
    v10 = v6 | 4;
    v11 = v6;
    v3 = clap_builder::builder::arg::Arg::action(&v9, 1);
    v9 = clap_builder::builder::arg::Arg::value_hint(&v3);
    clap_builder::builder::command::Command::arg(a0, &v0, &v9);
    return;
}
