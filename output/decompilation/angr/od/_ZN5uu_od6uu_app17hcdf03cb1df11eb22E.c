long long uu_od::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned long v1;  // [bp-0x7f4]
    unsigned int v2;  // [bp-0x7ec]
    char v3;  // [bp-0x7e8]
    unsigned int v4;  // [bp-0x570]
    char v5;  // [bp-0x56c]
    unsigned long long v6;  // [bp-0x52c]
    unsigned int v7;  // [bp-0x524]
    char v8;  // [bp-0x520], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x518]
    unsigned long long v10;  // [bp-0x510]
    unsigned long long v11;  // [bp-0x508]
    unsigned int v12;  // [bp-0x2a8]
    unsigned int v13;  // [bp-0x2a4]
    char v14;  // [bp-0x2a0]
    unsigned long long v17;  // rdx

    v0.new(uucore::util_name(), v17);
    v3.version(&v0);
    v0.about(&v3);
    uucore::format_usage(&v8, "{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OPTION]... [FILENAME] [[+][0x]OFFSET[.][b] [[+][0x]LABEL[.][b]]]Displays data in various human-readable formats. If multiple formats are\nspecifie", 175);
    v3.override_usage(&v0, &v8);
    v0.after_help(&v3);
    memcpy(&v3, &v0, 700);
    v6 = 2252658807668968 | v1;
    v7 = v2;
    v0.new("helpNoneshim", 4);
    v8.long(&v0, "helpNoneshim", 4);
    v0.help(&v8, "Print help information.Select the base in which file offsets are printed.RADIXSkip bytes input bytes before formatting and writing.BYTESlimit dump to BYTES input bytesbyte order to use for multi-byte formatsbig|littlestringsNotImplemented: output strings o", 23);
    v8.action(&v0, 5);
    v0.arg(&v3, &v8);
    v3.new("address-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 13);
    v8.short(&v3, 65);
    v3.long(&v8, "address-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 13);
    v8.help(&v3, "Select the base in which file offsets are printed.RADIXSkip bytes input bytes before formatting and writing.BYTESlimit dump to BYTES input bytesbyte order to use for multi-byte formatsbig|littlestringsNotImplemented: output strings of at least BYTES graphi", 50);
    v14.value_name(&v8, "RADIXSkip bytes input bytes before formatting and writing.BYTESlimit dump to BYTES input bytesbyte order to use for multi-byte formatsbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.", 5);
    v3.arg(&v0, &v14);
    v0.new("skip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 10);
    v8.short(&v0, 106);
    v0.long(&v8, "skip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 10);
    v8.help(&v0, "Skip bytes input bytes before formatting and writing.BYTESlimit dump to BYTES input bytesbyte order to use for multi-byte formatsbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named", 53);
    v14.value_name(&v8, "BYTESlimit dump to BYTES input bytesbyte order to use for multi-byte formatsbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named characters, ignoring high-order bitoctal bytesASCII ", 5);
    v0.arg(&v3, &v14);
    v3.new("read-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 10);
    v8.short(&v3, 78);
    v3.long(&v8, "read-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 10);
    v8.help(&v3, "limit dump to BYTES input bytesbyte order to use for multi-byte formatsbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named characters, ignoring high-order bitoctal bytesASCII chara", 31);
    v14.value_name(&v8, "BYTESlimit dump to BYTES input bytesbyte order to use for multi-byte formatsbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named characters, ignoring high-order bitoctal bytesASCII ", 5);
    v3.arg(&v0, &v14);
    v0.new("endiansrc/uu/od/src/od.rs", 6);
    v8.long(&v0, "endiansrc/uu/od/src/od.rs", 6);
    v0.help(&v8, "byte order to use for multi-byte formatsbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named characters, ignoring high-order bitoctal bytesASCII characters or backslash escapesunsig", 40);
    v8 = "bigInvalid argument --endian=: warning: invalid width  instead\n";
    v9 = 3;
    v10 = "littlebigInvalid argument --endian=: warning: invalid width  instead\n";
    v11 = 6;
    v14.from(&v8);
    v8.value_parser(&v0, &v14);
    v14.value_name(&v8, "big|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named characters, ignoring high-order bitoctal bytesASCII characters or backslash escapesunsigned decimal 2-byte unitsunsigned decimal", 10);
    v0.arg(&v3, &v14);
    v3.new("stringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named characters, ignoring high-order bitoctal bytesASCII characters or backslash escapesunsigned decimal 2-byte unitsunsigned decimal 4-byte un", 7);
    v8.short(&v3, 83);
    v3.long(&v8, "stringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named characters, ignoring high-order bitoctal bytesASCII characters or backslash escapesunsigned decimal 2-byte unitsunsigned decimal 4-byte un", 7);
    v8.help(&v3, "NotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named characters, ignoring high-order bitoctal bytesASCII characters or backslash escapesunsigned decimal 2-byte unitsunsigned decimal 4-byte unitsocta", 105);
    v3.default_missing_value(&v8, "3456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.value_name(&v3, "BYTESlimit dump to BYTES input bytesbyte order to use for multi-byte formatsbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named characters, ignoring high-order bitoctal bytesASCII ", 5);
    v3.arg(&v0, &v8);
    v0.new("abcdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v0, 97);
    v0.help(&v8, "named characters, ignoring high-order bitoctal bytesASCII characters or backslash escapesunsigned decimal 2-byte unitsunsigned decimal 4-byte unitsoctal 2-byte unitsdecimal 8-byte unitsdecimal 4-byte unitshexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2", 41);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("bcdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v3, 98);
    v3.help(&v8, "octal bytesASCII characters or backslash escapesunsigned decimal 2-byte unitsunsigned decimal 4-byte unitsoctal 2-byte unitsdecimal 8-byte unitsdecimal 4-byte unitshexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloati", 11);
    v8.action(&v3, 2);
    v3.arg(&v0, &v8);
    v0.new("cdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v0, 99);
    v0.help(&v8, "ASCII characters or backslash escapesunsigned decimal 2-byte unitsunsigned decimal 4-byte unitsoctal 2-byte unitsdecimal 8-byte unitsdecimal 4-byte unitshexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point do", 37);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("defghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v3, 100);
    v3.help(&v8, "unsigned decimal 2-byte unitsunsigned decimal 4-byte unitsoctal 2-byte unitsdecimal 8-byte unitsdecimal 4-byte unitshexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating", 29);
    v8.action(&v3, 2);
    v3.arg(&v0, &v8);
    v0.new("DEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v0, 68);
    v0.help(&v8, "unsigned decimal 4-byte unitsoctal 2-byte unitsdecimal 8-byte unitsdecimal 4-byte unitshexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-b", 29);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("opqrstuvwxyz{|}~del", 1);
    v8.short(&v3, 111);
    v3.help(&v8, "octal 2-byte unitsdecimal 8-byte unitsdecimal 4-byte unitshexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format", 18);
    v8.action(&v3, 2);
    v3.arg(&v0, &v8);
    v0.new("IJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v0, 73);
    v0.help(&v8, "decimal 8-byte unitsdecimal 4-byte unitshexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not ", 20);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("LMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v3, 76);
    v3.help(&v8, "decimal 8-byte unitsdecimal 4-byte unitshexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not ", 20);
    v8.action(&v3, 2);
    v3.arg(&v0, &v8);
    v0.new("ijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v0, 105);
    v0.help(&v8, "decimal 4-byte unitshexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not use * to mark line s", 20);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("lmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v3, 108);
    v3.help(&v8, "decimal 8-byte unitsdecimal 4-byte unitshexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not ", 20);
    v8.action(&v3, 2);
    v3.arg(&v0, &v8);
    v0.new("xyz{|}~del", 1);
    v8.short(&v0, 120);
    v0.help(&v8, "hexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not use * to mark line suppressionoutput BYT", 24);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("hijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v3, 104);
    v3.help(&v8, "hexadecimal 2-byte unitsoctal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not use * to mark line suppressionoutput BYT", 24);
    v8.action(&v3, 2);
    v3.arg(&v0, &v8);
    v0.new("OPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v0, 79);
    v0.help(&v8, "octal 4-byte unitsdecimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not use * to mark line suppressionoutput BYTES bytes per output line", 18);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("stuvwxyz{|}~del", 1);
    v8.short(&v3, 115);
    v3.help(&v8, "decimal 2-byte unitshexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not use * to mark line suppressionoutput BYTES bytes per output line. 32 is implied wh", 20);
    v8.action(&v3, 2);
    v3.arg(&v0, &v8);
    v0.new("XYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v0, 88);
    v0.help(&v8, "hexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not use * to mark line suppressionoutput BYTES bytes per output line. 32 is implied when BYTES is not spec", 24);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("HIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v3, 72);
    v3.help(&v8, "hexadecimal 4-byte unitsfloating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not use * to mark line suppressionoutput BYTES bytes per output line. 32 is implied when BYTES is not spec", 24);
    v8.action(&v3, 2);
    v3.arg(&v0, &v8);
    v0.new("efghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v0, 101);
    v0.help(&v8, "floating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not use * to mark line suppressionoutput BYTES bytes per output line. 32 is implied when BYTES is not specified.32compatibility mode with one input, offset and label.  ", 46);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("fghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v3, 102);
    v3.help(&v8, "floating point double precision (32-bit) unitsselect output format or formatsdo not use * to mark line suppressionoutput BYTES bytes per output line. 32 is implied when BYTES is not specified.32compatibility mode with one input, offset and label.  ", 46);
    v8.action(&v3, 2);
    v3.arg(&v0, &v8);
    v0.new("FGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~del", 1);
    v8.short(&v0, 70);
    v0.help(&v8, "floating point double precision (64-bit) unitsfloating point double precision (32-bit) unitsselect output format or formatsdo not use * to mark line suppressionoutput BYTES bytes per output line. 32 is implied when BYTES is not specified.32compatibility mode with one input, offset and label.  ", 46);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("formatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 6);
    v8.short(&v3, 116);
    v3.long(&v8, "formatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 6);
    v8.help(&v3, "select output format or formatsdo not use * to mark line suppressionoutput BYTES bytes per output line. 32 is implied when BYTES is not specified.32compatibility mode with one input, offset and label.  ", 31);
    v3.action(&v8, 1);
    v8.num_args(&v3);
    v14.value_name(&v8, "TYPE\"`$\\EADV", 4);
    v3.arg(&v0, &v14);
    v0.new("output-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 17);
    v8.short(&v0, 118);
    v0.long(&v8, "output-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 17);
    v8.help(&v0, "do not use * to mark line suppressionoutput BYTES bytes per output line. 32 is implied when BYTES is not specified.32compatibility mode with one input, offset and label.  ", 37);
    v14.action(&v8, 2);
    v0.arg(&v3, &v14);
    v3.new("widthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 5);
    v8.short(&v3, 119);
    v3.long(&v8, "widthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 5);
    v8.help(&v3, "output BYTES bytes per output line. 32 is implied when BYTES is not specified.32compatibility mode with one input, offset and label.  ", 78);
    v3.default_missing_value(&v8, "32compatibility mode with one input, offset and label.  ", 2);
    v8.value_name(&v3, "BYTESlimit dump to BYTES input bytesbyte order to use for multi-byte formatsbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.named characters, ignoring high-order bitoctal bytesASCII ", 5);
    v14.num_args(&v8);
    v3.arg(&v0, &v14);
    v0.new("traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 11);
    v8.long(&v0, "traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 11);
    v0.help(&v8, "compatibility mode with one input, offset and label.  ", 52);
    v8.action(&v0, 2);
    v0.arg(&v3, &v8);
    v3.new("FILENAME\n       ", 8);
    memcpy(&v8, &v3, 632);
    v12 = v4 | 4;
    v13 = *((int *)&v5);
    v3.action(&v8, 1);
    v8.value_hint(&v3);
    a0.arg(&v0, &v8);
    return a0;
}
