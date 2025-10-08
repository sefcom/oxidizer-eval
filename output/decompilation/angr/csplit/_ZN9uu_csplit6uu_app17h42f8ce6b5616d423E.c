long long uu_csplit::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned int v1;  // [bp-0x840]
    unsigned int v2;  // [bp-0x83c]
    char v3;  // [bp-0x838]
    unsigned int v4;  // [bp-0x5c0]
    char v5;  // [bp-0x5bc]
    unsigned long v6;  // [bp-0x57c]
    unsigned int v7;  // [bp-0x574]
    char v8;  // [bp-0x570]
    unsigned int v9;  // [bp-0x2f8]
    char v10;  // [bp-0x2f4]
    unsigned long long v11;  // [bp-0x2b4]
    unsigned int v12;  // [bp-0x2ac]
    char v13;  // [bp-0x2a8]
    unsigned long long v16;  // rdx

    v8.new(uucore::util_name(), v16);
    v3.version(&v8);
    v8.about(&v3);
    uucore::format_usage(&v0, "{} [OPTION]... FILE PATTERN...FORMATuse sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of outpu", 30);
    v3.override_usage(&v8, &v0);
    memcpy(&v8, &v3, 700);
    v11 = 584115552392 | v6;
    v12 = v7;
    v3.new("suffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 13);
    v0.short(&v3, 98);
    v3.long(&v0, "suffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 13);
    v0.value_name(&v3, "FORMATuse sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty outpu");
    v13.help(&v0, "use sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output file", 34);
    v3.arg(&v8, &v13);
    v8.new("prefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v0.short(&v8, 102);
    v8.long(&v0, "prefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v0.value_name(&v8, "PREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE sepa");
    v13.help(&v0, "use PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated ", 26);
    v8.arg(&v3, &v13);
    v3.new("keep-filesquietelide-empty-filesprefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 10);
    v0.short(&v3, 107);
    v3.long(&v0, "keep-filesquietelide-empty-filesprefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 10);
    v0.help(&v3, "do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx", 36);
    v13.action(&v0, 2);
    v3.arg(&v8, &v13);
    v8.new("suppress-matched", 16);
    v0.long(&v8, "suppress-matched", 16);
    v8.help(&v0, "suppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte co", 35);
    v0.action(&v8, 2);
    v8.arg(&v3, &v0);
    v3.new("digitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v0.short(&v3, 110);
    v3.long(&v0, "digitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v0.value_name(&v3, "DIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard outp");
    v13.help(&v0, "use specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.IO ", 43);
    v3.arg(&v8, &v13);
    v8.new("quietelide-empty-filesprefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 5);
    v0.short(&v8, 113);
    v8.long(&v0, "quietelide-empty-filesprefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 5);
    v0.visible_short_alias(&v8);
    v8.visible_alias(&v0);
    v0.help(&v8, "do not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.IO error: : line number out of range: line number ou", 40);
    v13.action(&v0, 2);
    v8.arg(&v3, &v13);
    v3.new("elide-empty-filesprefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 17);
    v0.short(&v3, 122);
    v3.long(&v0, "elide-empty-filesprefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 17);
    v0.help(&v3, "remove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.IO error: : line number out of range: line number out of range on repetition : match not fou", 25);
    v13.action(&v0, 2);
    v3.arg(&v8, &v13);
    v8.new("filemode{", 4);
    memcpy(&v0, &v8, 632);
    v1 = v9 | 5;
    v2 = *((int *)&v10);
    v13.value_hint(&v0);
    v8.arg(&v3, &v13);
    v3.new("patternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.IO error: : line number out of range: line number out of range on repetition : match not found' is smaller than prece", 7);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 4;
    v2 = *((int *)&v5);
    v3.action(&v0, 1);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 1;
    v2 = *((int *)&v5);
    v3.arg(&v8, &v0);
    a0.after_help(&v3);
    return a0;
}
