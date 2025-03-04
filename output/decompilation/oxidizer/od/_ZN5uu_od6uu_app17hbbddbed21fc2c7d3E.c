fn uu_od::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0xa48], Other Possible Types: struct712
    let v1: i64;  // [sp-0x78c]
    let v2: i32;  // [sp-0x784]
    let v3: struct592;  // [sp-0x780], Other Possible Types: struct712, struct437
    let v4: struct592;  // [sp-0x4b8], Other Possible Types: struct24, struct32
    let v5: i32;  // [sp-0x270]
    let v6: i32;  // [sp-0x26c]
    let v7: struct592;  // [sp-0x268], Other Possible Types: struct24
    let v9: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v0 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v0, "Dump files in octal and other formats");
    v4 = uucore::format_usage("{} [OPTION]... [--] [FILENAME]...
{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]
{} --traditional [OPTION]... [FILENAME] [[+][0x]OFFSET[.][b] [[+][0x]LABEL[.][b]]]");
    v0 = clap_builder::builder::command::Command::override_usage(&v3, &v4);
    v3 = clap_builder::builder::command::Command::after_help(&v0, "Displays data in various human-readable formats. If multiple formats are
specified, the output will contain all formats in the order they appear on the
command line. Each format will be printed on a new line. Only the line
containing the first format will be prefixed with the offset.

If no filename is specified, or it is "-", stdin will be used. After a "--", no
more options will be recognized. This allows for filenames starting with a "-".

If a filename is a valid number which can be used as an offset in the second
form, you can force it to be recognized as a filename if you include an option
like "-j0", which is only valid in the first form.

RADIX is one of o,d,x,n for octal, decimal, hexadecimal or none.

BYTES is decimal by default, octal if prefixed with a "0", or hexadecimal if
prefixed with "0x". The suffixes b, KB, K, MB, M, GB, G, will multiply the
number with 512, 1000, 1024, 1000^2, 1024^2, 1000^3, 1024^3, 1000^2, 1024^2.

OFFSET and LABEL are octal by default, hexadecimal if prefixed with "0x" or
decimal if a "." suffix is added. The "b" suffix will multiply with 512.

TYPE contains one or more format specifications consisting of:
    a       for printable 7-bits ASCII
    c       for utf-8 characters or octal for undefined characters
    d[SIZE] for signed decimal
    f[SIZE] for floating point
    o[SIZE] for octal
    u[SIZE] for unsigned decimal
    x[SIZE] for hexadecimal
SIZE is the number of bytes which can be the number 1, 2, 4, 8 or 16,
    or C, I, S, L for 1, 2, 4, 8 bytes for integer types,
    or F, D, L for 4, 8, 16 bytes for floating point.
Any type specification can have a "z" suffix, which will add a ASCII dump at
    the end of the line.

If an error occurred, a diagnostic message will be printed to stderr, and the
exit code will be non-zero.");
    memcpy(&v0, &v3, 700);
    v1 = 1126758900564200 | *((&v3.field_0 as &char + 700) as &i64);
    v2 = *((&v3.field_0 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("help");
    v4 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "Print help information.");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x5);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("address-radix");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x41);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "address-radix");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "Select the base in which file offsets are printed.");
    v7 = clap_builder::builder::arg::Arg::value_name(&v4, "RADIX");
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("skip-bytes");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x6a);
    v3 = clap_builder::builder::arg::Arg::long(&v4, "skip-bytes");
    v4 = clap_builder::builder::arg::Arg::help(&v3, "Skip bytes input bytes before formatting and writing.");
    v7 = clap_builder::builder::arg::Arg::value_name(&v4, "BYTES");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("read-bytes");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x4e);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "read-bytes");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "limit dump to BYTES input bytes");
    v7 = clap_builder::builder::arg::Arg::value_name(&v4, "BYTES");
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("endian");
    v4 = clap_builder::builder::arg::Arg::long(&v3, "endian");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "byte order to use for multi-byte formats");
    v4 = struct32 {
        field_0: &g_4171cf
        field_8: 3
        field_16: &g_4171c9
        field_24: 6
    };
    v7 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v4);
    v4 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    v7 = clap_builder::builder::arg::Arg::value_name(&v4, "big|little");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("strings");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x53);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "strings");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "NotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.");
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v4, "3");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0, "BYTES");
    v0 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("a");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x61);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "named characters, ignoring high-order bit");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("b");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x62);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "octal bytes");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("c");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x63);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "ASCII characters or backslash escapes");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("d");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x64);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "unsigned decimal 2-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("D");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x44);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "unsigned decimal 4-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("o");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x6f);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "octal 2-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("I");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x49);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "decimal 8-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("L");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x4c);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "decimal 8-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("i");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x69);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "decimal 4-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("l");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x6c);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "decimal 8-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("x");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x78);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "hexadecimal 2-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("h");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x68);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "hexadecimal 2-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("O");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x4f);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "octal 4-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("s");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "decimal 2-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("X");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x58);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "hexadecimal 4-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("H");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x48);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "hexadecimal 4-byte units");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("e");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x65);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "floating point double precision (64-bit) units");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("f");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x66);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "floating point double precision (32-bit) units");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("F");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x46);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "floating point double precision (64-bit) units");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("format");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x74);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "format");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "select output format or formats");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 0x1);
    v4 = clap_builder::builder::arg::Arg::num_args(&v0);
    v7 = clap_builder::builder::arg::Arg::value_name(&v4, "TYPE");
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("output-duplicates");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x76);
    v3 = clap_builder::builder::arg::Arg::long(&v4, "output-duplicates");
    v4 = clap_builder::builder::arg::Arg::help(&v3, "do not use * to mark line suppression");
    v7 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("width");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x77);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "width");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "output BYTES bytes per output line. 32 is implied when BYTES is not specified.");
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v4, "32");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0, "BYTES");
    v7 = clap_builder::builder::arg::Arg::num_args(&v4);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("traditional");
    v4 = clap_builder::builder::arg::Arg::long(&v3, "traditional");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "compatibility mode with one input, offset and label.");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("FILENAME");
    memcpy(&v4, &v0, 584);
    v5 = *((&v0.field_0 as &char + 584) as &i32) | 4;
    v6 = *((&v0.field_0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::action(&v4, 0x1);
    v4 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v3, &v4);
    return a0;
}
