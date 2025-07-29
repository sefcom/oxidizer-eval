long long uu_fmt::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned long long v1;  // [bp-0xab0]
    unsigned long long v2;  // [bp-0xaa8]
    char v3;  // [bp-0xaa0]
    unsigned int v4;  // [bp-0x828]
    unsigned int v5;  // [bp-0x824]
    unsigned long long v6;  // [bp-0x7e4]
    unsigned int v7;  // [bp-0x7dc]
    char v8;  // [bp-0x7d8]
    unsigned long v9;  // [bp-0x51c]
    unsigned int v10;  // [bp-0x514]
    char v11;  // [bp-0x510]
    unsigned int v12;  // [bp-0x298]
    unsigned int v13;  // [bp-0x294]
    char v14;  // [bp-0x290]
    unsigned long long v17;  // rdx

    v3.new(uucore::util_name(), v17);
    v8.version(&v3, "(uutils coreutils) 0.1.0fmt-aboutfmt-usagefmt-crown-margin-helpfmt-tagged-paragraph-helpfmt-preserve-headers-helpfmt-split-only-helpfmt-uniform-spacing-helpfmt-prefix-helpPREFIXfmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-p", 24);
    uucore::mods::locale::get_message(&v11, "fmt-aboutfmt-usagefmt-crown-margin-helpfmt-tagged-paragraph-helpfmt-preserve-headers-helpfmt-split-only-helpfmt-uniform-spacing-helpfmt-prefix-helpPREFIXfmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-help", 9);
    v3.about(&v8, &v11);
    uucore::mods::locale::get_message(&v0, "fmt-usagefmt-crown-margin-helpfmt-tagged-paragraph-helpfmt-preserve-headers-helpfmt-split-only-helpfmt-uniform-spacing-helpfmt-prefix-helpPREFIXfmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-", 9);
    uucore::format_usage(&v11, v1, v2);
    v8.override_usage(&v3, &v11);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | v9;
    v7 = v10;
    v8.new("crown-marginuniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 12);
    v11.short(&v8, 99);
    v8.long(&v11, "crown-marginuniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 12);
    uucore::mods::locale::get_message(&v14, "fmt-crown-margin-helpfmt-tagged-paragraph-helpfmt-preserve-headers-helpfmt-split-only-helpfmt-uniform-spacing-helpfmt-prefix-helpPREFIXfmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-help", 21);
    v11.help(&v8, &v14);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new("tagged-paragraphDASHED_UNDERLINE", 16);
    v11.short(&v3, 116);
    v3.long(&v11, "tagged-paragraphDASHED_UNDERLINE", 16);
    uucore::mods::locale::get_message(&v14, "fmt-tagged-paragraph-helpfmt-preserve-headers-helpfmt-split-only-helpfmt-uniform-spacing-helpfmt-prefix-helpPREFIXfmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab", 25);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("preserve-headers", 16);
    v11.short(&v8, 109);
    v8.long(&v11, "preserve-headers", 16);
    uucore::mods::locale::get_message(&v14, "fmt-preserve-headers-helpfmt-split-only-helpfmt-uniform-spacing-helpfmt-prefix-helpPREFIXfmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt", 25);
    v11.help(&v8, &v14);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new("split-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 10);
    v11.short(&v3, 115);
    v3.long(&v11, "split-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 10);
    uucore::mods::locale::get_message(&v14, "fmt-split-only-helpfmt-uniform-spacing-helpfmt-prefix-helpPREFIXfmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-er", 19);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("uniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 15);
    v11.short(&v8, 117);
    v8.long(&v11, "uniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 15);
    uucore::mods::locale::get_message(&v14, "fmt-uniform-spacing-helpfmt-prefix-helpPREFIXfmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-th", 24);
    v11.help(&v8, &v14);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new("prefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 6);
    v11.short(&v3, 112);
    v3.long(&v11, "prefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 6);
    uucore::mods::locale::get_message(&v14, "fmt-prefix-helpPREFIXfmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invali", 15);
    v11.help(&v3, &v14);
    v14.value_name(&v11, "PREFIXfmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-erro", 6);
    v3.arg(&v8, &v14);
    v8.new("skip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 11);
    v11.short(&v8, 80);
    v8.long(&v11, "skip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 11);
    uucore::mods::locale::get_message(&v14, "fmt-skip-prefix-helpPSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-widt", 20);
    v11.help(&v8, &v14);
    v14.value_name(&v11, "PSKIPfmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-er", 5);
    v8.arg(&v3, &v14);
    v3.new("exact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 12);
    v11.short(&v3, 120);
    v3.long(&v11, "exact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 12);
    uucore::mods::locale::get_message(&v14, "fmt-exact-prefix-helpexact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-error-i", 21);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("exact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-error-invalid-tabwidthfmt-er", 17);
    v11.short(&v8, 88);
    v8.long(&v11, "exact-skip-prefixfmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-error-invalid-tabwidthfmt-er", 17);
    uucore::mods::locale::get_message(&v14, "fmt-exact-skip-prefix-helpfmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-error-invalid-tabwidthfmt-error-first-option-", 26);
    v11.help(&v8, &v14);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new("widthsrc/uu/fmt/src/fmt.rs", 5);
    v11.short(&v3, 119);
    v3.long(&v11, "widthsrc/uu/fmt/src/fmt.rs", 5);
    uucore::mods::locale::get_message(&v14, "fmt-width-helpWIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-error-invalid-tabwidthfmt-error-first-option-widthfmt-error-readfmt-error-invalid-width-malformed", 14);
    v11.help(&v3, &v14);
    v14.value_name(&v11, "WIDTHfmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-error-invalid-tabwidthfmt-error-first-option-widthfmt-error-readfmt-error-invalid-width-malformed", 5);
    v3.arg(&v8, &v14);
    v8.new("goal", 4);
    v11.short(&v8, 103);
    v8.long(&v11, "goal", 4);
    uucore::mods::locale::get_message(&v14, "fmt-goal-helpfmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-error-invalid-tabwidthfmt-error-first-option-widthfmt-error-readfmt-error-invalid-width-malformed", 13);
    v11.help(&v8, &v14);
    v14.value_name(&v11, "GOALi128", 4);
    v8.arg(&v3, &v14);
    v3.new("quicksplit-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 5);
    v11.short(&v3, 113);
    v3.long(&v11, "quicksplit-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 5);
    uucore::mods::locale::get_message(&v14, "fmt-quick-helpfmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-error-invalid-tabwidthfmt-error-first-option-widthfmt-error-readfmt-error-invalid-width-malformed", 14);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("tab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 9);
    v11.short(&v8, 84);
    v8.long(&v11, "tab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 9);
    uucore::mods::locale::get_message(&v14, "fmt-tab-width-helpFILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-error-invalid-tabwidthfmt-error-first-option-widthfmt-error-readfmt-error-invalid-width-malformed", 18);
    v11.help(&v8, &v14);
    v14.value_name(&v11, "TABWIDTH'; only all-args", 8);
    v8.arg(&v3, &v14);
    v3.new("fileswidthsrc/uu/fmt/src/fmt.rs", 5);
    v11.action(&v3, 1);
    v3.value_name(&v11, "FILESoptionfmt-error-invalid-goalfmt-error-goal-greater-than-widthfmt-error-invalid-widthfmt-error-width-out-of-rangefmt-error-invalid-tabwidthfmt-error-first-option-widthfmt-error-readfmt-error-invalid-width-malformed", 5);
    v11.value_hint(&v3, 3);
    memcpy(&v3, &v11, 632);
    v4 = v12 | 64;
    v5 = v13;
    a0.arg(&v8, &v3);
    ::0x4a1010::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
