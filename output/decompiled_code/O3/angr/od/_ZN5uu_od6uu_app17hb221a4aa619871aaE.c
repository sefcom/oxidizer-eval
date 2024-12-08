long long uu_od::uu_app::hb221a4aa619871aa(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x7fc]
    unsigned int v3;  // [sp-0x78c]
    unsigned long long v4;  // [sp-0x788]
    char v5;  // [bp-0x780]
    char v6;  // [bp-0x4c4]
    char v7;  // [bp-0x4c0]
    char v8;  // [bp-0x4b8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x4b0]
    unsigned long long v10;  // [sp-0x4a8]
    unsigned long long v11;  // [sp-0x4a0]
    unsigned int v12;  // [sp-0x270]
    unsigned int v13;  // [sp-0x26c]
    char v14;  // [bp-0x268]
    unsigned long long v16;  // rdx

    clap_builder::builder::command::Command::new::hf5b7fcd1faea6d66(&v5, uucore::util_name::h412db5e565a079f3(), v16);
    clap_builder::builder::command::Command::version::h9e49296c430b9c26(&v0, &v5, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hc6751945a768eea3(&v5, &v0, "Dump files in octal and other formats", 37);
    uucore::format_usage::h00b69bae12d8ac9c(&v8, "{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OPTION]... [FILENAME] [[+][0x]OFFSET[.][b] [[+][0x]LABEL[.][b]]]", 175);
    clap_builder::builder::command::Command::override_usage::h2506def71e394e67(&v0, &v5, &v8);
    clap_builder::builder::command::Command::after_help::hacbb05c58d3ee5fa(&v5, &v0, "Displays data in various human-readable formats. If multiple formats are\nspecified, the output will contain all formats in the order they appear on the\ncommand line. Each format will be printed on a new line. Only the line\ncontaining the first format will be prefixed with the offset.\n\nIf no filename is specified, or it is \"-\", stdin will be used. After a \"--\", no\nmore options will be recognized. This allows for filenames starting with a \"-\".\n\nIf a filename is a valid number which can be used as an offset in the second\nform, you can force it to be recognized as a filename if you include an option\nlike \"-j0\", which is only valid in the first form.\n\nRADIX is one of o,d,x,n for octal, decimal, hexadecimal or none.\n\nBYTES is decimal by default, octal if prefixed with a \"0\", or hexadecimal if\nprefixed with \"0x\". The suffixes b, KB, K, MB, M, GB, G, will multiply the\nnumber with 512, 1000, 1024, 1000^2, 1024^2, 1000^3, 1024^3, 1000^2, 1024^2.\n\nOFFSET and LABEL are octal by default, hexadecimal if prefixed with \"0x\" ", 1805);
    memcpy(&v0, &v5, 700);
    v3 = 262376 | *((int *)&v6);
    v4 = 262344 | *((long long *)&v7);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "help", 4);
    clap_builder::builder::arg::Arg::long::ha65999cdc84ed05e(&v8, &v5, "help", 4);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "Print help information.", 23);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 5);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "address-radix", 13);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 65);
    clap_builder::builder::arg::Arg::long::ha65999cdc84ed05e(&v0, &v8, "address-radix", 13);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v8, &v0, "Select the base in which file offsets are printed.", 50);
    clap_builder::builder::arg::Arg::value_name::hfd984ad429e8bc9e(&v14, &v8, "RADIX", 5);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v14);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "skip-bytes", 10);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 106);
    clap_builder::builder::arg::Arg::long::ha65999cdc84ed05e(&v5, &v8, "skip-bytes", 10);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v8, &v5, "Skip bytes input bytes before formatting and writing.", 53);
    clap_builder::builder::arg::Arg::value_name::hfd984ad429e8bc9e(&v14, &v8, "BYTES", 5);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v14);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "read-bytes", 10);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 78);
    clap_builder::builder::arg::Arg::long::ha65999cdc84ed05e(&v0, &v8, "read-bytes", 10);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v8, &v0, "limit dump to BYTES input bytes", 31);
    clap_builder::builder::arg::Arg::value_name::hfd984ad429e8bc9e(&v14, &v8, "BYTES", 5);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v14);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "endian", 6);
    clap_builder::builder::arg::Arg::long::ha65999cdc84ed05e(&v8, &v5, "endian", 6);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "byte order to use for multi-byte formats", 40);
    v8 = "bigInvalid argument --endian=";
    v9 = 3;
    v10 = "little";
    v11 = 6;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h269a29db127e753e(&v14, &v8);
    clap_builder::builder::arg::Arg::value_parser::h961e1458b8b0dbd9(&v8, &v5, &v14);
    clap_builder::builder::arg::Arg::value_name::hfd984ad429e8bc9e(&v14, &v8, "big|little", 10);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v14);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "strings", 7);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 83);
    clap_builder::builder::arg::Arg::long::ha65999cdc84ed05e(&v0, &v8, "strings", 7);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v8, &v0, "NotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.", 105);
    clap_builder::builder::arg::Arg::default_missing_value::hd9e43c7e029deaf3(&v0, &v8, "3", 1);
    clap_builder::builder::arg::Arg::value_name::hfd984ad429e8bc9e(&v8, &v0, "BYTES", 5);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "a", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 97);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "named characters, ignoring high-order bit", 41);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "b", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 98);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v0, &v8, "octal bytes", 11);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "c", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 99);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "ASCII characters or backslash escapes", 37);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "d", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 100);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v0, &v8, "unsigned decimal 2-byte units", 29);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "D", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 68);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "unsigned decimal 4-byte units", 29);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "o", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 111);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v0, &v8, "octal 2-byte units", 18);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "I", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 73);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "decimal 8-byte units", 20);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "L", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 76);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v0, &v8, "decimal 8-byte units", 20);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "i", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 105);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "decimal 4-byte units", 20);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "l", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 108);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v0, &v8, "decimal 8-byte units", 20);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "x", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 120);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "hexadecimal 2-byte units", 24);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "h", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 104);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v0, &v8, "hexadecimal 2-byte units", 24);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "O", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 79);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "octal 4-byte units", 18);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "s", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 115);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v0, &v8, "decimal 2-byte units", 20);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "X", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 88);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "hexadecimal 4-byte units", 24);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "H", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 72);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v0, &v8, "hexadecimal 4-byte units", 24);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "e", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 101);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "floating point double precision (64-bit) units", 46);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "f", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 102);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v0, &v8, "floating point double precision (32-bit) units", 46);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v0, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "F", 1);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 70);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "floating point double precision (64-bit) units", 46);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "format", 6);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 116);
    clap_builder::builder::arg::Arg::long::ha65999cdc84ed05e(&v0, &v8, "format", 6);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v8, &v0, "select output format or formats", 31);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v0, &v8, 1);
    clap_builder::builder::arg::Arg::num_args::h6a2712224aea5778(&v8, &v0, v16);
    clap_builder::builder::arg::Arg::value_name::hfd984ad429e8bc9e(&v14, &v8, "TYPE", 4);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v14);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "output-duplicates", 17);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v5, 118);
    clap_builder::builder::arg::Arg::long::ha65999cdc84ed05e(&v5, &v8, "output-duplicates", 17);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v8, &v5, "do not use * to mark line suppression", 37);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v14, &v8, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v14);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "widthsrc/uu/od/src/od.rs: warning: invalid width  instead\n", 5);
    clap_builder::builder::arg::Arg::short::h2b5107394a03c879(&v8, &v0, 119);
    clap_builder::builder::arg::Arg::long::ha65999cdc84ed05e(&v0, &v8, "widthsrc/uu/od/src/od.rs: warning: invalid width  instead\n", 5);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v8, &v0, "output BYTES bytes per output line. 32 is implied when BYTES is not specified.", 78);
    clap_builder::builder::arg::Arg::default_missing_value::hd9e43c7e029deaf3(&v0, &v8, "32", 2);
    clap_builder::builder::arg::Arg::value_name::hfd984ad429e8bc9e(&v8, &v0, "BYTES", 5);
    clap_builder::builder::arg::Arg::num_args::h3b0a60bebda2fb43(&v14, &v8);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v0, &v5, &v14);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v5, "traditional", 11);
    clap_builder::builder::arg::Arg::long::ha65999cdc84ed05e(&v8, &v5, "traditional", 11);
    clap_builder::builder::arg::Arg::help::h658b2f47d36dba48(&v5, &v8, "compatibility mode with one input, offset and label.  \ninvalid suffix in -- argument invalid ---- too large", 52);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v8, &v5, 2);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h5f182c910256b03e(&v0, "FILENAME\n       ", 8);
    memcpy(&v8, &v0, 584);
    v12 = *((int *)&v1) | 4;
    v13 = *((int *)&v2);
    clap_builder::builder::arg::Arg::action::h0bcb0fe1bcc35e80(&v0, &v8, 1);
    clap_builder::builder::arg::Arg::value_hint::h62d3f6f396a9b50c(&v8, &v0, 3);
    clap_builder::builder::command::Command::arg::h45df8d9820acfcf6(a0, &v5, &v8);
    return a0;
}
