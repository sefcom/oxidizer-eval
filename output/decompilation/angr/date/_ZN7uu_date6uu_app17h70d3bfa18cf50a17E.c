long long uu_date::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xad0]
    unsigned long long v1;  // [bp-0xac8]
    unsigned long long v2;  // [bp-0xac0]
    char v3;  // [bp-0xab8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xab0]
    unsigned long long v5;  // [bp-0xaa8]
    unsigned long long v6;  // [bp-0xaa0]
    unsigned long long v7;  // [bp-0xa98]
    unsigned long long v8;  // [bp-0xa90]
    unsigned long long v9;  // [bp-0xa88]
    unsigned long long v10;  // [bp-0xa80]
    unsigned long long v11;  // [bp-0xa78]
    unsigned long long v12;  // [bp-0xa70]
    unsigned int v13;  // [bp-0x840]
    unsigned int v14;  // [bp-0x83c]
    unsigned long v15;  // [bp-0x7fc]
    unsigned int v16;  // [bp-0x7f4]
    char v17;  // [bp-0x7f0], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x7e8]
    unsigned long long v19;  // [bp-0x7e0]
    unsigned long long v20;  // [bp-0x7d8]
    unsigned long long v21;  // [bp-0x7d0]
    unsigned long long v22;  // [bp-0x7c8]
    unsigned int v23;  // [bp-0x578]
    unsigned int v24;  // [bp-0x574]
    char v25;  // [bp-0x570]
    unsigned long long v26;  // [bp-0x2b4]
    unsigned int v27;  // [bp-0x2ac]
    void* v28;  // [bp-0x2a8], Other Possible Types: char
    unsigned long long v29;  // [bp-0x2a0]
    char v30;  // [bp-0x298]
    unsigned long long v33;  // rdx

    v25.new(uucore::util_name(), v33);
    v3.version(&v25, "(uutils coreutils) 0.1.0date-aboutdate-usageSTRINGdate-help-datedate-help-fileFMTdate-help-iso-8601rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime ", 24);
    uucore::mods::locale::get_message(&v17, "date-aboutdate-usageSTRINGdate-help-datedate-help-fileFMTdate-help-iso-8601rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/", 10);
    v25.about(&v3, &v17);
    uucore::mods::locale::get_message(&v0, "date-usageSTRINGdate-help-datedate-help-fileFMTdate-help-iso-8601rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.carg", 10);
    uucore::format_usage(&v17, v1, v2);
    v3.override_usage(&v25, &v17);
    memcpy(&v25, &v3, 700);
    v26 = 549755814016 | v15;
    v27 = v16;
    v3.new("datethur]", 4);
    v17.short(&v3, 100);
    v3.long(&v17, "datethur]", 4);
    v17.value_name(&v3, "STRINGdate-help-datedate-help-fileFMTdate-help-iso-8601rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry", 6);
    memcpy(&v3, &v17, 632);
    v13 = v23 | 32;
    v14 = v24;
    uucore::mods::locale::get_message(&v28, "date-help-datedate-help-fileFMTdate-help-iso-8601rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/i", 14);
    v17.help(&v3, &v28);
    v3.arg(&v25, &v17);
    v25.new("filemode{", 4);
    v17.short(&v25, 102);
    v25.long(&v17, "filemode{", 4);
    v17.value_name(&v25, &g_465bb8, 8);
    v25.value_hint(&v17, 3);
    uucore::mods::locale::get_message(&v28, "date-help-fileFMTdate-help-iso-8601rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io", 14);
    v17.help(&v25, &v28);
    v25.arg(&v3, &v17);
    v3.new("iso-8601", 8);
    v17.short(&v3, 73);
    v3.long(&v17, "iso-8601", 8);
    v17.value_name(&v3, "FMTdate-help-iso-8601rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b5", 3);
    v3 = "datethur]";
    v4 = 4;
    v5 = "hoursminutessecondsnssrc/uu/date/src/date.rs";
    v6 = 5;
    v7 = "minutessecondsnssrc/uu/date/src/date.rs";
    v8 = 7;
    v9 = "secondsnssrc/uu/date/src/date.rs";
    v10 = 7;
    v11 = "nssrc/uu/date/src/date.rs";
    v12 = 2;
    v28.from(&v3);
    v3.value_parser(&v17, &v28);
    v28 = 0;
    v29 = 1;
    v30 = 0;
    v17.num_args(&v3, &v28);
    v3.default_missing_value(&v17);
    uucore::mods::locale::get_message(&v28, "date-help-iso-8601rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f", 18);
    v17.help(&v3, &v28);
    v3.arg(&v25, &v17);
    v25.new("rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src", 9);
    v17.short(&v25, 82);
    v25.long(&v17, "rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src", 9);
    uucore::mods::locale::get_message(&v28, "date-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime", 19);
    v17.help(&v25, &v28);
    v28.action(&v17);
    v25.arg(&v3, &v28);
    v3.new("rfc-3339saturday", 8);
    v17.long(&v3, "rfc-3339saturday", 8);
    v3.value_name(&v17, "FMTdate-help-iso-8601rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b5", 3);
    v17 = "datethur]";
    v18 = 4;
    v19 = "secondsnssrc/uu/date/src/date.rs";
    v20 = 7;
    v21 = "nssrc/uu/date/src/date.rs";
    v22 = 2;
    v28.from(&v17);
    v17.value_parser(&v3, &v28);
    uucore::mods::locale::get_message(&v3, "date-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 18);
    v28.help(&v17, &v3);
    v3.arg(&v25, &v28);
    v25.new("debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 5);
    v17.long(&v25, "debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 5);
    uucore::mods::locale::get_message(&v28, "date-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 15);
    v25.help(&v17, &v28);
    v17.action(&v25);
    v25.arg(&v3, &v17);
    v3.new("referencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 9);
    v17.short(&v3, 114);
    v3.long(&v17, "referencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 9);
    v17.value_name(&v3, &g_468b00, 4);
    v3.value_hint(&v17, 2);
    uucore::mods::locale::get_message(&v28, "date-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 19);
    v17.help(&v3, &v28);
    v3.arg(&v25, &v17);
    v25.new("setdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 3);
    v17.short(&v25, 115);
    v25.long(&v17, "setdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 3);
    v17.value_name(&v25, "STRINGdate-help-datedate-help-fileFMTdate-help-iso-8601rfc-emaildate-help-rfc-emaildate-help-rfc-3339debugdate-help-debugreferencedate-help-referencesetdate-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry", 6);
    uucore::mods::locale::get_message(&v25, "date-help-setuniversalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 13);
    v28.help(&v17, &v25);
    v25.arg(&v3, &v28);
    v3.new("universalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 9);
    v17.short(&v3, 117);
    v3.long(&v17, "universalutcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 9);
    v17.alias(&v3, "utcdate-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 3);
    uucore::mods::locale::get_message(&v28, "date-help-universalformat`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 19);
    v3.help(&v17, &v28);
    v17.action(&v3);
    v3.arg(&v25, &v17);
    v25.new("format`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 6);
    a0.arg(&v3, &v25);
    ::0x600130::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
