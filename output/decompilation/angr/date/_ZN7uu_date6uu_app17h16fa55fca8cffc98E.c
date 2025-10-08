long long uu_date::uu_app(unsigned long a0)
{
    unsigned long long v0;  // [bp-0xac8]
    char v1;  // [bp-0xac0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xab8]
    unsigned long long v3;  // [bp-0xab0]
    unsigned long long v4;  // [bp-0xaa8]
    unsigned long long v5;  // [bp-0xaa0]
    unsigned long long v6;  // [bp-0xa98]
    unsigned int v7;  // [bp-0x848]
    unsigned int v8;  // [bp-0x844]
    char v9;  // [bp-0x840], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x838]
    unsigned long long v11;  // [bp-0x830]
    unsigned long long v12;  // [bp-0x828]
    unsigned long long v13;  // [bp-0x820]
    unsigned long long v14;  // [bp-0x818]
    unsigned long long v15;  // [bp-0x810]
    unsigned long long v16;  // [bp-0x808]
    unsigned long long v17;  // [bp-0x800]
    unsigned long long v18;  // [bp-0x7f8]
    unsigned int v19;  // [bp-0x5c8]
    unsigned int v20;  // [bp-0x5c4]
    unsigned long v21;  // [bp-0x584]
    unsigned int v22;  // [bp-0x57c]
    char v23;  // [bp-0x578]
    unsigned long long v24;  // [bp-0x2bc]
    unsigned int v25;  // [bp-0x2b4]
    char v26;  // [bp-0x2b0]
    unsigned long long v29;  // rdx

    v23.new(uucore::util_name(), v29);
    v9.version(&v23);
    v23.about(&v9);
    uucore::format_usage(&v1, "{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedis", 66);
    v9.override_usage(&v23, &v1);
    memcpy(&v23, &v9, 700);
    v24 = 549755814016 | v21;
    v25 = v22;
    v9.new("datethur]", 4);
    v1.short(&v9, 100);
    v9.long(&v1, "datethur]", 4);
    v1.value_name(&v9, "STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set", 6);
    memcpy(&v9, &v1, 632);
    v19 = v7 | 32;
    v20 = v8;
    v1.help(&v9, "display time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coord", 43);
    v9.arg(&v23, &v1);
    v23.new("filemode{", 4);
    v1.short(&v23, 102);
    v23.long(&v1, "filemode{", 4);
    v1.value_name(&v23, &g_4ff368, 8);
    v23.value_hint(&v1, 3);
    v1.help(&v23, "like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 43);
    v23.arg(&v9, &v1);
    v9.new("iso-8601, group=", 8);
    v1.short(&v9, 73);
    v9.long(&v1, "iso-8601, group=", 8);
    v1.value_name(&v9, "FMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 3);
    v9 = "datethur]";
    v10 = 4;
    v11 = "hoursminutessecondsnssrc/uu/date/src/date.rs";
    v12 = 5;
    v13 = "minutessecondsnssrc/uu/date/src/date.rs";
    v14 = 7;
    v15 = "secondsnssrc/uu/date/src/date.rs";
    v16 = 7;
    v17 = "nssrc/uu/date/src/date.rs";
    v18 = 2;
    v26.from(&v9);
    v9.value_parser(&v1, &v26);
    v1.num_args(&v9, 0, 1);
    v9.default_missing_value(&v1);
    v1.help(&v9, "output date/time in ISO 8601 format.\n FMT='date' for date only (the default),\n 'hours', 'minutes', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14T02:34:56-06:00output date and time in RFC 5322 format.\n Example: Mon, ", 200);
    v9.arg(&v23, &v1);
    v23.new("rfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 9);
    v1.short(&v23, 82);
    v23.long(&v1, "rfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 9);
    v1.help(&v23, "output date and time in RFC 5322 format.\n Example: Mon, 14 Aug 2006 02:34:56 -0600output date/time in RFC 3339 format.\n FMT='date', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00set time described by S", 82);
    v26.action(&v1);
    v23.arg(&v9, &v26);
    v9.new("rfc-3339saturday", 8);
    v1.long(&v9, "rfc-3339saturday", 8);
    v9.value_name(&v1, "FMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 3);
    v1 = "datethur]";
    v2 = 4;
    v3 = "secondsnssrc/uu/date/src/date.rs";
    v4 = 7;
    v5 = "nssrc/uu/date/src/date.rs";
    v6 = 2;
    v26.from(&v1);
    v1.value_parser(&v9, &v26);
    v26.help(&v1, "output date/time in RFC 3339 format.\n FMT='date', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00set time described by STRINGhoursminutessecondsnssrc/uu/date/src/date.rs", 151);
    v9.arg(&v23, &v26);
    v23.new("debugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 5);
    v1.long(&v23, "debugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 5);
    v23.help(&v1, "annotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 69);
    v1.action(&v23);
    v23.arg(&v9, &v1);
    v9.new("referencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 9);
    v1.short(&v9, 114);
    v9.long(&v1, "referencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 9);
    v1.value_name(&v9, &g_4fdc9c, 4);
    v9.value_hint(&v1, 2);
    v1.help(&v9, "display the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 42);
    v9.arg(&v23, &v1);
    v23.new("setuniversalutcprint or set Coordinated Universal Time (UTC)format", 3);
    v1.short(&v23, 115);
    v23.long(&v1, "setuniversalutcprint or set Coordinated Universal Time (UTC)format", 3);
    v1.value_name(&v23, "STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set", 6);
    v26.help(&v1, "set time described by STRINGhoursminutessecondsnssrc/uu/date/src/date.rs", 28);
    v23.arg(&v9, &v26);
    v9.new("universalutcprint or set Coordinated Universal Time (UTC)format", 9);
    v1.short(&v9, 117);
    v9.long(&v1, "universalutcprint or set Coordinated Universal Time (UTC)format", 9);
    v1.alias(&v9);
    v9.help(&v1, "print or set Coordinated Universal Time (UTC)format", 45);
    v1.action(&v9);
    v9.arg(&v23, &v1);
    v23.new("format", 6);
    v0.arg(&v9, &v23);
    return a0;
}
