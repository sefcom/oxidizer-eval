long long uu_split::uu_app(unsigned long a0)
{
    unsigned long long v0;  // [bp-0xac8]
    char v1;  // [bp-0xac0]
    unsigned int v2;  // [bp-0x848]
    unsigned int v3;  // [bp-0x844]
    char v4;  // [bp-0x840]
    unsigned int v5;  // [bp-0x5c8]
    unsigned int v6;  // [bp-0x5c4]
    unsigned long v7;  // [bp-0x584]
    unsigned int v8;  // [bp-0x57c]
    char v9;  // [bp-0x578]
    unsigned int v10;  // [bp-0x300]
    unsigned int v11;  // [bp-0x2fc]
    unsigned long long v12;  // [bp-0x2bc]
    unsigned int v13;  // [bp-0x2b4]
    char v14;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x2a8]
    unsigned long long v16;  // [bp-0x2a0]
    unsigned long long v17;  // [bp-0x298]
    unsigned long long v18;  // [bp-0x290]
    unsigned long long v19;  // [bp-0x288]
    unsigned long long v20;  // [bp-0x280]
    unsigned long long v21;  // [bp-0x278]
    unsigned long long v24;  // rdx

    v4.new(uucore::util_name(), v24);
    v9.version(&v4);
    v4.about(&v9);
    v9.after_help(&v4);
    uucore::format_usage(&v1, "{} [OPTION]... [INPUT [PREFIX]]put SIZE bytes per output fileput at most SIZE bytes of lines per output fileNUMBERput NUMBER lines/records per output fileCHUNKSgenerate CHUNKS output files; see explanation belowSUFFIXadditional SUFFIX to append to output f", 31);
    v4.override_usage(&v9, &v1);
    memcpy(&v9, &v4, 700);
    v12 = 549755814016 | v7;
    v13 = v8;
    v4.new("bytesline-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    v1.short(&v4, 98);
    v4.long(&v1, "bytesline-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    memcpy(&v1, &v4, 632);
    v2 = v5 | 32;
    v3 = v6;
    v4.value_name(&v1, "SIZE) = Zero", 4);
    v1.help(&v4, "put SIZE bytes per output fileput at most SIZE bytes of lines per output fileNUMBERput NUMBER lines/records per output fileCHUNKSgenerate CHUNKS output files; see explanation belowSUFFIXadditional SUFFIX to append to output file namesCOMMANDwrite to shell ", 30);
    v4.arg(&v9, &v1);
    v9.new("line-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 10);
    v1.short(&v9, 67);
    v9.long(&v1, "line-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 10);
    memcpy(&v1, &v9, 632);
    v2 = v10 | 32;
    v3 = v11;
    v9.value_name(&v1, "SIZE) = Zero", 4);
    v1.help(&v9, "put at most SIZE bytes of lines per output fileNUMBERput NUMBER lines/records per output fileCHUNKSgenerate CHUNKS output files; see explanation belowSUFFIXadditional SUFFIX to append to output file namesCOMMANDwrite to shell COMMAND; file name is $FILE (C", 47);
    v9.arg(&v4, &v1);
    v4.new("linesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    v1.short(&v4, 108);
    v4.long(&v1, "linesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    memcpy(&v1, &v4, 632);
    v2 = v5 | 32;
    v3 = v6;
    v4.value_name(&v1, "NUMBERput NUMBER lines/records per output fileCHUNKSgenerate CHUNKS output files; see explanation belowSUFFIXadditional SUFFIX to append to output file namesCOMMANDwrite to shell COMMAND; file name is $FILE (Currently not implemented for Windows)do not gen", 6);
    v1.default_value(&v4, "1000", 4);
    v14.help(&v1, "put NUMBER lines/records per output fileCHUNKSgenerate CHUNKS output files; see explanation belowSUFFIXadditional SUFFIX to append to output file namesCOMMANDwrite to shell COMMAND; file name is $FILE (Currently not implemented for Windows)do not generate ", 40);
    v4.arg(&v9, &v14);
    v9.new("number-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    v1.short(&v9, 110);
    v9.long(&v1, "number-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    memcpy(&v1, &v9, 632);
    v2 = v10 | 32;
    v3 = v11;
    v9.value_name(&v1, "CHUNKSgenerate CHUNKS output files; see explanation belowSUFFIXadditional SUFFIX to append to output file namesCOMMANDwrite to shell COMMAND; file name is $FILE (Currently not implemented for Windows)do not generate empty output files with '-n'use numeric ", 6);
    v1.help(&v9, "generate CHUNKS output files; see explanation belowSUFFIXadditional SUFFIX to append to output file namesCOMMANDwrite to shell COMMAND; file name is $FILE (Currently not implemented for Windows)do not generate empty output files with '-n'use numeric suffix", 51);
    v9.arg(&v4, &v1);
    v4.new("additional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
    v1.long(&v4, "additional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
    memcpy(&v4, &v1, 632);
    v5 = v2 | 32;
    v6 = v3;
    v1.value_name(&v4, "SUFFIXadditional SUFFIX to append to output file namesCOMMANDwrite to shell COMMAND; file name is $FILE (Currently not implemented for Windows)do not generate empty output files with '-n'use numeric suffixes starting at 0, not alphabeticsame as -d, but all", 6);
    v4.default_value(&v1, 1, 0);
    v1.help(&v4, "additional SUFFIX to append to output file namesCOMMANDwrite to shell COMMAND; file name is $FILE (Currently not implemented for Windows)do not generate empty output files with '-n'use numeric suffixes starting at 0, not alphabeticsame as -d, but allow set", 48);
    v4.arg(&v9, &v1);
    v9.new("filternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    v1.long(&v9, "filternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    memcpy(&v9, &v1, 632);
    v10 = v2 | 32;
    v11 = v3;
    v1.value_name(&v9, "COMMANDwrite to shell COMMAND; file name is $FILE (Currently not implemented for Windows)do not generate empty output files with '-n'use numeric suffixes starting at 0, not alphabeticsame as -d, but allow setting the start valueuse hex suffixes starting at", 7);
    v9.value_hint(&v1, 6);
    v1.help(&v9, "write to shell COMMAND; file name is $FILE (Currently not implemented for Windows)do not generate empty output files with '-n'use numeric suffixes starting at 0, not alphabeticsame as -d, but allow setting the start valueuse hex suffixes starting at 0, not", 82);
    v9.arg(&v4, &v1);
    v4.new("elide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
    v1.long(&v4, "elide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
    v4.short(&v1, 101);
    v1.help(&v4, "do not generate empty output files with '-n'use numeric suffixes starting at 0, not alphabeticsame as -d, but allow setting the start valueuse hex suffixes starting at 0, not alphabeticsame as -x, but allow setting the start valueNgenerate suffixes of leng", 44);
    v14.action(&v1, 2);
    v4.arg(&v9, &v14);
    v9.new("-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 2);
    v1.short(&v9, 100);
    v9.action(&v1, 2);
    v14 = "numeric-suffixesentity not found";
    v15 = 16;
    v16 = "-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v17 = 2;
    v18 = "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v19 = 12;
    v20 = "-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v21 = 2;
    v1.overrides_with_all(&v9, &v14);
    v14.help(&v1, "use numeric suffixes starting at 0, not alphabeticsame as -d, but allow setting the start valueuse hex suffixes starting at 0, not alphabeticsame as -x, but allow setting the start valueNgenerate suffixes of length N (default 2)print a diagnostic just befo", 50);
    v9.arg(&v4, &v14);
    v4.new("numeric-suffixesentity not found", 16);
    v1.long(&v4, "numeric-suffixesentity not found", 16);
    memcpy(&v4, &v1, 632);
    v5 = 128 | v2;
    v6 = v3;
    v1.num_args(&v4, 0, 1);
    v14 = "numeric-suffixesentity not found";
    v15 = 16;
    v16 = "-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v17 = 2;
    v18 = "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v19 = 12;
    v20 = "-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v21 = 2;
    v4.overrides_with_all(&v1, &v14);
    v1.value_name(&v4, "FROMCyan    \"`$\\NOEXEADV", 4);
    v14.help(&v1, "same as -d, but allow setting the start valueuse hex suffixes starting at 0, not alphabeticsame as -x, but allow setting the start valueNgenerate suffixes of length N (default 2)print a diagnostic just before each output file is openedSEPuse SEP instead of", 45);
    v4.arg(&v9, &v14);
    v9.new("-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 2);
    v1.short(&v9, 120);
    v9.action(&v1, 2);
    v14 = "numeric-suffixesentity not found";
    v15 = 16;
    v16 = "-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v17 = 2;
    v18 = "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v19 = 12;
    v20 = "-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v21 = 2;
    v1.overrides_with_all(&v9, &v14);
    v14.help(&v1, "use hex suffixes starting at 0, not alphabeticsame as -x, but allow setting the start valueNgenerate suffixes of length N (default 2)print a diagnostic just before each output file is openedSEPuse SEP instead of newline as the record separator; '\\0' (zero)", 46);
    v9.arg(&v4, &v14);
    v4.new("hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 12);
    v1.long(&v4, "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 12);
    memcpy(&v4, &v1, 632);
    v5 = 128 | v2;
    v6 = v3;
    v1.num_args(&v4, 0, 1);
    v14 = "numeric-suffixesentity not found";
    v15 = 16;
    v16 = "-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v17 = 2;
    v18 = "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v19 = 12;
    v20 = "-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v21 = 2;
    v4.overrides_with_all(&v1, &v14);
    v1.value_name(&v4, "FROMCyan    \"`$\\NOEXEADV", 4);
    v14.help(&v1, "same as -x, but allow setting the start valueNgenerate suffixes of length N (default 2)print a diagnostic just before each output file is openedSEPuse SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL characterio-blksizex\\0'' wo", 45);
    v4.arg(&v9, &v14);
    v9.new("suffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 13);
    v1.short(&v9, 97);
    v9.long(&v1, "suffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 13);
    memcpy(&v1, &v9, 632);
    v2 = v10 | 32;
    v3 = v11;
    v9.value_name(&v1, "Ngenerate suffixes of length N (default 2)print a diagnostic just before each output file is openedSEPuse SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL characterio-blksizex\\0'' would overwrite input; aborting: cannot determi", 1);
    v1.help(&v9, "generate suffixes of length N (default 2)print a diagnostic just before each output file is openedSEPuse SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL characterio-blksizex\\0'' would overwrite input; aborting: cannot determin", 41);
    v9.arg(&v4, &v1);
    v4.new("verboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 7);
    v1.long(&v4, "verboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 7);
    v4.help(&v1, "print a diagnostic just before each output file is openedSEPuse SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL characterio-blksizex\\0'' would overwrite input; aborting: cannot determine input size: cannot determine file size", 57);
    v1.action(&v4, 2);
    v4.arg(&v9, &v1);
    v9.new("separatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 9);
    v1.short(&v9, 116);
    v9.long(&v1, "separatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 9);
    memcpy(&v1, &v9, 632);
    v2 = v10 | 32;
    v3 = v11;
    v9.value_name(&v1, "SEPuse SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL characterio-blksizex\\0'' would overwrite input; aborting: cannot determine input size: cannot determine file size", 3);
    v1.action(&v9, 1);
    v14.help(&v1, "use SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL characterio-blksizex\\0'' would overwrite input; aborting: cannot determine input size: cannot determine file size", 91);
    v9.arg(&v4, &v14);
    v4.new("-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 11);
    v1.long(&v4, "io-blksizex\\0'' would overwrite input; aborting: cannot determine input size: cannot determine file size", 10);
    v4.alias(&v1);
    memcpy(&v1, &v4, 632);
    v2 = v5 | 4;
    v3 = v6;
    v4.arg(&v9, &v1);
    v9.new("inputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    v1.default_value(&v9, "-rlsrc/uu/split/src/strategy.rs", 1);
    v14.value_hint(&v1, 3);
    v9.arg(&v4, &v14);
    v4.new("prefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    v1.default_value(&v4, "x\\0'' would overwrite input; aborting: cannot determine input size: cannot determine file size", 1);
    v0.arg(&v9, &v1);
    return a0;
}
