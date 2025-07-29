long long uu_comm::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac8]
    unsigned long long v1;  // [bp-0xac0]
    unsigned long long v2;  // [bp-0xab8]
    char v3;  // [bp-0xab0]
    unsigned int v4;  // [bp-0x838]
    unsigned int v5;  // [bp-0x834]
    char v6;  // [bp-0x830]
    unsigned int v7;  // [bp-0x5b8]
    char v8;  // [bp-0x5b4]
    unsigned long long v9;  // [bp-0x574]
    unsigned int v10;  // [bp-0x56c]
    char v11;  // [bp-0x568]
    unsigned int v12;  // [bp-0x2f0]
    char v13;  // [bp-0x2ec]
    unsigned long v14;  // [bp-0x2ac]
    unsigned int v15;  // [bp-0x2a4]
    char v16;  // [bp-0x2a0]
    unsigned long long v19;  // rdx

    v6.new(uucore::util_name(), v19);
    v11.version(&v6, "(uutils coreutils) 0.1.0comm-aboutcomm-usagecomm-help-column-1comm-help-column-2comm-help-column-3comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 24);
    uucore::mods::locale::get_message(&v3, "comm-aboutcomm-usagecomm-help-column-1comm-help-column-2comm-help-column-3comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 10);
    v6.about(&v11, &v3);
    uucore::mods::locale::get_message(&v0, "comm-usagecomm-help-column-1comm-help-column-2comm-help-column-3comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 10);
    uucore::format_usage(&v3, v1, v2);
    v11.override_usage(&v6, &v3);
    memcpy(&v6, &v11, 700);
    v9 = 584115552392 | v14;
    v10 = v15;
    v11.new("12comm-error-file-not-sorted", 1);
    v3.short(&v11, 49);
    uucore::mods::locale::get_message(&v16, "comm-help-column-1comm-help-column-2comm-help-column-3comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 18);
    v11.help(&v3, &v16);
    v3.action(&v11, 2);
    v11.arg(&v6, &v3);
    v6.new("2comm-error-file-not-sorted", 1);
    v3.short(&v6, 50);
    uucore::mods::locale::get_message(&v16, "comm-help-column-2comm-help-column-3comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 18);
    v6.help(&v3, &v16);
    v3.action(&v6, 2);
    v6.arg(&v11, &v3);
    v11.new("3totalzero-terminated", 1);
    v3.short(&v11, 51);
    uucore::mods::locale::get_message(&v16, "comm-help-column-3comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 18);
    v11.help(&v3, &v16);
    v3.action(&v11, 2);
    v11.arg(&v6, &v3);
    v6.new("output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    v3.long(&v6, "output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    uucore::mods::locale::get_message(&v16, "comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 19);
    v6.help(&v3, &v16);
    v3.value_name(&v6);
    v6.default_value(&v3);
    memcpy(&v3, &v6, 632);
    v4 = v7 | 32;
    v5 = *((int *)&v8);
    v6.action(&v3, 1);
    memcpy(&v3, &v6, 632);
    v4 = 0x400 | v7;
    v5 = *((int *)&v8);
    v6.arg(&v11, &v3);
    v11.new("zero-terminated", 15);
    v3.long(&v11, "zero-terminated", 15);
    v11.short(&v3, 122);
    v3.overrides_with(&v11, "zero-terminated", 15);
    uucore::mods::locale::get_message(&v16, "comm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 25);
    v11.help(&v3, &v16);
    v3.action(&v11, 2);
    v11.arg(&v6, &v3);
    v6.new("FILE1FILE23totalzero-terminated", 5);
    memcpy(&v3, &v6, 632);
    v4 = v7 | 1;
    v5 = *((int *)&v8);
    v16.value_hint(&v3, 3);
    v6.arg(&v11, &v16);
    v11.new("FILE23totalzero-terminated", 5);
    memcpy(&v3, &v11, 632);
    v4 = v12 | 1;
    v5 = *((int *)&v13);
    v16.value_hint(&v3, 3);
    v11.arg(&v6, &v16);
    v6.new("totalzero-terminated", 5);
    v3.long(&v6, "totalzero-terminated", 5);
    uucore::mods::locale::get_message(&v16, "comm-help-totalcomm-help-check-ordercomm-help-no-check-order", 15);
    v6.help(&v3, &v16);
    v3.action(&v6, 2);
    v6.arg(&v11, &v3);
    v11.new("check-ordernocheck-orderFILE1FILE23totalzero-terminated", 11);
    v3.long(&v11, "check-ordernocheck-orderFILE1FILE23totalzero-terminated", 11);
    uucore::mods::locale::get_message(&v16, "comm-help-check-ordercomm-help-no-check-order", 21);
    v11.help(&v3, &v16);
    v3.action(&v11, 2);
    v11.arg(&v6, &v3);
    v6.new("nocheck-orderFILE1FILE23totalzero-terminated", 13);
    v3.long(&v6, "nocheck-orderFILE1FILE23totalzero-terminated", 13);
    uucore::mods::locale::get_message(&v16, "comm-help-no-check-order", 24);
    v6.help(&v3, &v16);
    v3.action(&v6, 2);
    v6.conflicts_with(&v3, "check-ordernocheck-orderFILE1FILE23totalzero-terminated", 11);
    a0.arg(&v11, &v6);
    ::0x499880::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
