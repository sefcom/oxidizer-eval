long long uu_wc::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0xac8]
    char v1;  // [bp-0xab0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xaa8]
    unsigned long long v3;  // [bp-0xaa0]
    unsigned long long v4;  // [bp-0xa98]
    unsigned long long v5;  // [bp-0xa90]
    unsigned long long v6;  // [bp-0xa88]
    unsigned long long v7;  // [bp-0xa80]
    unsigned long long v8;  // [bp-0xa78]
    unsigned int v9;  // [bp-0x838]
    unsigned int v10;  // [bp-0x834]
    unsigned long long v11;  // [bp-0x7f4]
    unsigned int v12;  // [bp-0x7ec]
    char v13;  // [bp-0x7e8]
    unsigned int v14;  // [bp-0x570]
    unsigned int v15;  // [bp-0x56c]
    char v16;  // [bp-0x568]
    unsigned long v17;  // [bp-0x2ac]
    unsigned int v18;  // [bp-0x2a4]
    char v19;  // [bp-0x2a0]
    unsigned long long v22;  // rdx

    v1.new(uucore::util_name(), v22);
    v16.version(&v1);
    v1.about(&v16);
    uucore::format_usage(&v13, "{} [OPTION]... [FILE]...print the byte countsprint the character countsFread input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard inputprint the newline countsprint the length of the longest linewhen", 24);
    v16.override_usage(&v1, &v13);
    memcpy(&v1, &v16, 700);
    v11 = 584115552392 | v17;
    v12 = v18;
    v16.new("bytescharsfiles0-fromlinesmax-line-lengthtotalwordsfiles-", 5);
    v13.short(&v16, 99);
    v16.long(&v13, "bytescharsfiles0-fromlinesmax-line-lengthtotalwordsfiles-", 5);
    v13.help(&v16, "print the byte countsprint the character countsFread input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard inputprint the newline countsprint the length of the longest linewhen to print a line with to", 21);
    v19.action(&v13, 2);
    v16.arg(&v1, &v19);
    v1.new("charsfiles0-fromlinesmax-line-lengthtotalwordsfiles-", 5);
    v13.short(&v1, 109);
    v1.long(&v13, "charsfiles0-fromlinesmax-line-lengthtotalwordsfiles-", 5);
    v13.help(&v1, "print the character countsFread input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard inputprint the newline countsprint the length of the longest linewhen to print a line with total counts;\n  WHEN ca", 26);
    v19.action(&v13, 2);
    v1.arg(&v16, &v19);
    v16.new("files0-fromlinesmax-line-lengthtotalwordsfiles-", 11);
    v13.long(&v16, "files0-fromlinesmax-line-lengthtotalwordsfiles-", 11);
    v16.value_name(&v13, "Fread input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard inputprint the newline countsprint the length of the longest linewhen to print a line with total counts;\n  WHEN can be: auto, always, only, ", 1);
    v13.help(&v16, "read input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard inputprint the newline countsprint the length of the longest linewhen to print a line with total counts;\n  WHEN can be: auto, always, only, n", 120);
    v0 = 2;
    v16.value_parser(&v13, &v0);
    v13.value_hint(&v16);
    v16.arg(&v1, &v13);
    v1.new("linesmax-line-lengthtotalwordsfiles-", 5);
    v13.short(&v1, 108);
    v1.long(&v13, "linesmax-line-lengthtotalwordsfiles-", 5);
    v13.help(&v1, "print the newline countsprint the length of the longest linewhen to print a line with total counts;\n  WHEN can be: auto, always, only, neverprint the word countscannot open  for reading", 24);
    v19.action(&v13, 2);
    v1.arg(&v16, &v19);
    v16.new("max-line-lengthtotalwordsfiles-", 15);
    v13.short(&v16, 76);
    v16.long(&v13, "max-line-lengthtotalwordsfiles-", 15);
    v13.help(&v16, "print the length of the longest linewhen to print a line with total counts;\n  WHEN can be: auto, always, only, neverprint the word countscannot open  for reading", 36);
    v19.action(&v13, 2);
    v16.arg(&v1, &v19);
    v1.new("totalwordsfiles-", 5);
    v13.long(&v1, "totalwordsfiles-", 5);
    v1 = "autoBool";
    v2 = 4;
    v3 = "alwaysneverinternal error: entered unreachable code: Should have been caught by clap";
    v4 = 6;
    v5 = "only";
    v6 = 4;
    v7 = "neverinternal error: entered unreachable code: Should have been caught by clap";
    v8 = 5;
    v19.from(&v1);
    v1.value_parser(&v13, &v19);
    v13.value_name(&v1, "WHENkeysu128for<only", 4);
    memcpy(&v1, &v13, 632);
    v9 = v14 | 16;
    v10 = v15;
    v13.help(&v1, "when to print a line with total counts;\n  WHEN can be: auto, always, only, neverprint the word countscannot open  for reading", 80);
    v1.arg(&v16, &v13);
    v16.new("wordsfiles-", 5);
    v13.short(&v16, 119);
    v16.long(&v13, "wordsfiles-", 5);
    v13.help(&v16, "print the word countscannot open  for reading", 21);
    v19.action(&v13, 2);
    v16.arg(&v1, &v19);
    v1.new("files-", 5);
    v13.action(&v1, 1);
    v1.value_parser(&v13, &v0);
    v13.value_hint(&v1);
    a0.arg(&v16, &v13);
    return a0;
}
