fn uu_od::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: i8;  // [bp-0x7fc]
    let v3: u64;  // [bp-0x78c]
    let v4: u32;  // [bp-0x784]
    let v5: struct437;  // [bp-0x780]
    let v6: u64;  // [bp-0x4c4]
    let v7: u32;  // [bp-0x4bc]
    let v8: u256;  // [bp-0x4b8]
    let v9: u32;  // [bp-0x270]
    let v10: u32;  // [bp-0x26c]
    let v11: struct24;  // [bp-0x268], Other Possible Types: u8
    let v14: u64;  // rdx

    v5 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v0, &v5, "0.0.28");
    clap_builder::builder::command::Command::about(&v5, &v0, "Dump files in octal and other formats");
    uucore::format_usage(&v8, "{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OPTION]... [FILENAME] [[+][0x]OFFSET[.][b] [[+][0x]LABEL[.][b]]]");
    clap_builder::builder::command::Command::override_usage(&v0, &v5, &v8);
    clap_builder::builder::command::Command::after_help(&v5, &v0, "Displays data in various human-readable formats. If multiple formats are\nspecified, the output will contain all formats in the order they appear on the\ncommand line. Each format will be printed on a new line. Only the line\ncontaining the first format will be prefixed with the offset.\n\nIf no filename is specified, or it is "-", stdin will be used. After a "--", no\nmore options will be recognized. This allows for filenames starting with a "-".\n\nIf a filename is a valid number which can be used as an offset in the second\nform, you can force it to be recognized as a filename if you include an option\nlike "-j0", which is only valid in the first form.\n\nRADIX is one of o,d,x,n for octal, decimal, hexadecimal or none.\n\nBYTES is decimal by default, octal if prefixed with a "0", or hexadecimal if\nprefixed with "0x". The suffixes b, KB, K, MB, M, GB, G, will multiply the\nnumber with 512, 1000, 1024, 1000^2, 1024^2, 1000^3, 1024^3, 1000^2, 1024^2.\n\nOFFSET and LABEL are octal by default, hexadecimal if prefixed with "0x" or\ndecimal if a "." suffix is added. The "b" suffix will multiply with 512.\n\nTYPE contains one or more format specifications consisting of:\n    a       for printable 7-bits ASCII\n    c       for utf-8 characters or octal for undefined characters\n    d[SIZE] for signed decimal\n    f[SIZE] for floating point\n    o[SIZE] for octal\n    u[SIZE] for unsigned decimal\n    x[SIZE] for hexadecimal\nSIZE is the number of bytes which can be the number 1, 2, 4, 8 or 16,\n    or C, I, S, L for 1, 2, 4, 8 bytes for integer types,\n    or F, D, L for 4, 8, 16 bytes for floating point.\nAny type specification can have a "z" suffix, which will add a ASCII dump at\n    the end of the line.\n\nIf an error occurred, a diagnostic message will be printed to stderr, and the\nexit code will be non-zero.");
    memcpy(&v0, &v5, 700);
    v3 = 1126758900564200 | v6;
    v4 = v7;
    clap_builder::builder::arg::Arg::new(&v5, "help");
    clap_builder::builder::arg::Arg::long(&v8, &v5, "help");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "Print help information.");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 5);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "address-radix");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 65);
    clap_builder::builder::arg::Arg::long(&v0, &v8, "address-radix");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "Select the base in which file offsets are printed.");
    clap_builder::builder::arg::Arg::value_name(&v11, &v8, "RADIX");
    clap_builder::builder::command::Command::arg(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new(&v5, "skip-bytes");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 106);
    clap_builder::builder::arg::Arg::long(&v5, &v8, "skip-bytes");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "Skip bytes input bytes before formatting and writing.");
    clap_builder::builder::arg::Arg::value_name(&v11, &v8, "BYTES");
    clap_builder::builder::command::Command::arg(&v5, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "read-bytes");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 78);
    clap_builder::builder::arg::Arg::long(&v0, &v8, "read-bytes");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "limit dump to BYTES input bytes");
    clap_builder::builder::arg::Arg::value_name(&v11, &v8, "BYTES");
    clap_builder::builder::command::Command::arg(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new(&v5, "endian");
    clap_builder::builder::arg::Arg::long(&v8, &v5, "endian");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "byte order to use for multi-byte formats");
    v8 = struct32 {
        field_0: &g_4171cf
        field_8: 3
        field_16: &g_4171c9
        field_24: 6
    };
    v11 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v8);
    clap_builder::builder::arg::Arg::value_parser(&v8, &v5, &v11);
    clap_builder::builder::arg::Arg::value_name(&v11, &v8, "big|little");
    clap_builder::builder::command::Command::arg(&v5, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "strings");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 83);
    clap_builder::builder::arg::Arg::long(&v0, &v8, "strings");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "NotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.");
    clap_builder::builder::arg::Arg::default_missing_value(&v0, &v8, "3");
    clap_builder::builder::arg::Arg::value_name(&v8, &v0, "BYTES");
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "a");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 97);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "named characters, ignoring high-order bit");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "b");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 98);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "octal bytes");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "c");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 99);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "ASCII characters or backslash escapes");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "d");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 100);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "unsigned decimal 2-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "D");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 68);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "unsigned decimal 4-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "o");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 111);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "octal 2-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "I");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 73);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "decimal 8-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "L");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 76);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "decimal 8-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "i");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 105);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "decimal 4-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "l");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 108);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "decimal 8-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "x");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 120);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "hexadecimal 2-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "h");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 104);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "hexadecimal 2-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "O");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 79);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "octal 4-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "s");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 115);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "decimal 2-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "X");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 88);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "hexadecimal 4-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "H");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 72);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "hexadecimal 4-byte units");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "e");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 101);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "floating point double precision (64-bit) units");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "f");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 102);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "floating point double precision (32-bit) units");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new(&v5, "F");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 70);
    clap_builder::builder::arg::Arg::help(&v5, &v8, "floating point double precision (64-bit) units");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "format");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 116);
    clap_builder::builder::arg::Arg::long(&v0, &v8, "format");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "select output format or formats");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 1);
    clap_builder::builder::arg::Arg::num_args(&v8, &v0);
    clap_builder::builder::arg::Arg::value_name(&v11, &v8, "TYPE");
    clap_builder::builder::command::Command::arg(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new(&v5, "output-duplicates");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 118);
    clap_builder::builder::arg::Arg::long(&v5, &v8, "output-duplicates");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "do not use * to mark line suppression");
    clap_builder::builder::arg::Arg::action(&v11, &v8, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "width");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 119);
    clap_builder::builder::arg::Arg::long(&v0, &v8, "width");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "output BYTES bytes per output line. 32 is implied when BYTES is not specified.");
    clap_builder::builder::arg::Arg::default_missing_value(&v0, &v8, "32");
    clap_builder::builder::arg::Arg::value_name(&v8, &v0, "BYTES");
    clap_builder::builder::arg::Arg::num_args(&v11, &v8);
    clap_builder::builder::command::Command::arg(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::new(&v5, "traditional");
    clap_builder::builder::arg::Arg::long(&v8, &v5, "traditional");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "compatibility mode with one input, offset and label.");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "FILENAME");
    memcpy(&v8, &v0, 584);
    v9 = v1 | 4;
    v10 = *(&v2 as &i32);
    clap_builder::builder::arg::Arg::action(&v0, &v8, 1);
    clap_builder::builder::arg::Arg::value_hint(&v8, &v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v5, &v8);
    return a0;
}
