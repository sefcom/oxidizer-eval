long long uu_csplit::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac8]
    unsigned long long v1;  // [bp-0xac0]
    unsigned long long v2;  // [bp-0xab8]
    char v3;  // [bp-0xab0]
    unsigned int v4;  // [bp-0x838]
    char v5;  // [bp-0x834]
    unsigned long v6;  // [bp-0x7f4]
    unsigned int v7;  // [bp-0x7ec]
    char v8;  // [bp-0x7e8]
    unsigned int v9;  // [bp-0x570]
    char v10;  // [bp-0x56c]
    unsigned long long v11;  // [bp-0x52c]
    unsigned int v12;  // [bp-0x524]
    char v13;  // [bp-0x520]
    unsigned int v14;  // [bp-0x2a8]
    unsigned int v15;  // [bp-0x2a4]
    char v16;  // [bp-0x2a0]
    unsigned long long v19;  // rdx

    v8.new(uucore::util_name(), v19);
    v3.version(&v8, "(uutils coreutils) 0.1.0csplit-aboutcsplit-usageFORMATcsplit-help-suffix-formatPREFIXcsplit-help-prefixcsplit-help-keep-filescsplit-help-suppress-matchedDIGITScsplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help", 24);
    uucore::mods::locale::get_message(&v13, "csplit-aboutcsplit-usageFORMATcsplit-help-suffix-formatPREFIXcsplit-help-prefixcsplit-help-keep-filescsplit-help-suppress-matchedDIGITScsplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help", 12);
    v8.about(&v3, &v13);
    uucore::mods::locale::get_message(&v0, "csplit-usageFORMATcsplit-help-suffix-formatPREFIXcsplit-help-prefixcsplit-help-keep-filescsplit-help-suppress-matchedDIGITScsplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help", 12);
    uucore::format_usage(&v13, v1, v2);
    v3.override_usage(&v8, &v13);
    memcpy(&v8, &v3, 700);
    v11 = 584115552392 | v6;
    v12 = v7;
    v3.new("suffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 13);
    v13.short(&v3, 98);
    v3.long(&v13, "suffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 13);
    v13.value_name(&v3, "FORMATcsplit-help-suffix-formatPREFIXcsplit-help-prefixcsplit-help-keep-filescsplit-help-suppress-matchedDIGITScsplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help");
    uucore::mods::locale::get_message(&v3, "csplit-help-suffix-formatPREFIXcsplit-help-prefixcsplit-help-keep-filescsplit-help-suppress-matchedDIGITScsplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help", 25);
    v16.help(&v13, &v3);
    v3.arg(&v8, &v16);
    v8.new("prefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v13.short(&v8, 102);
    v8.long(&v13, "prefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v13.value_name(&v8, "PREFIXcsplit-help-prefixcsplit-help-keep-filescsplit-help-suppress-matchedDIGITScsplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help");
    uucore::mods::locale::get_message(&v8, "csplit-help-prefixcsplit-help-keep-filescsplit-help-suppress-matchedDIGITScsplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help", 18);
    v16.help(&v13, &v8);
    v8.arg(&v3, &v16);
    v3.new("keep-filesquietelide-empty-filesprefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 10);
    v13.short(&v3, 107);
    v3.long(&v13, "keep-filesquietelide-empty-filesprefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 10);
    uucore::mods::locale::get_message(&v16, "csplit-help-keep-filescsplit-help-suppress-matchedDIGITScsplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help", 22);
    v13.help(&v3, &v16);
    v16.action(&v13, 2);
    v3.arg(&v8, &v16);
    v8.new("suppress-matched", 16);
    v13.long(&v8, "suppress-matched", 16);
    uucore::mods::locale::get_message(&v16, "csplit-help-suppress-matchedDIGITScsplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help", 28);
    v8.help(&v13, &v16);
    v13.action(&v8, 2);
    v8.arg(&v3, &v13);
    v3.new("digitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v13.short(&v3, 110);
    v3.long(&v13, "digitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v13.value_name(&v3, "DIGITScsplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help");
    uucore::mods::locale::get_message(&v3, "csplit-help-digitssilentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help", 18);
    v16.help(&v13, &v3);
    v3.arg(&v8, &v16);
    v8.new("quietelide-empty-filesprefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 5);
    v13.short(&v8, 113);
    v8.long(&v13, "quietelide-empty-filesprefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 5);
    v13.visible_short_alias(&v8, 115);
    v8.visible_alias(&v13, "silentcsplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help", 6);
    uucore::mods::locale::get_message(&v16, "csplit-help-quietcsplit-help-elide-empty-filespatterncsplit-after-help", 17);
    v13.help(&v8, &v16);
    v16.action(&v13, 2);
    v8.arg(&v3, &v16);
    v3.new("elide-empty-filesprefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 17);
    v13.short(&v3, 122);
    v3.long(&v13, "elide-empty-filesprefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 17);
    uucore::mods::locale::get_message(&v16, "csplit-help-elide-empty-filespatterncsplit-after-help", 29);
    v13.help(&v3, &v16);
    v16.action(&v13, 2);
    v3.arg(&v8, &v16);
    v8.new("filemode{", 4);
    memcpy(&v13, &v8, 632);
    v14 = v9 | 5;
    v15 = *((int *)&v10);
    v16.value_hint(&v13, 3);
    v8.arg(&v3, &v16);
    v3.new("patterncsplit-after-help", 7);
    memcpy(&v13, &v3, 632);
    v14 = v4 | 4;
    v15 = *((int *)&v5);
    v3.action(&v13, 1);
    memcpy(&v13, &v3, 632);
    v14 = v4 | 1;
    v15 = *((int *)&v5);
    v3.arg(&v8, &v13);
    uucore::mods::locale::get_message(&v8, "csplit-after-help", 17);
    a0.after_help(&v3, &v8);
    ::0x5a9dc0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
