long long uu_uniq::uu_app::h21a3be98fe4bed5d(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    void* v0;  // [sp-0xa70]
    unsigned long long v1;  // [sp-0xa68]
    char v2;  // [sp-0xa60]
    char v3;  // [bp-0xa58], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xa50]
    unsigned long long v5;  // [sp-0xa48]
    unsigned long long v6;  // [sp-0xa40]
    unsigned long long v7;  // [sp-0xa38]
    unsigned long long v8;  // [sp-0xa30]
    unsigned int v9;  // [sp-0x810]
    unsigned int v10;  // [sp-0x80c]
    char v11;  // [bp-0x808], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x800]
    unsigned long long v13;  // [sp-0x7f8]
    unsigned long long v14;  // [sp-0x7f0]
    unsigned long long v15;  // [sp-0x7e8]
    unsigned long long v16;  // [sp-0x7e0]
    unsigned long long v17;  // [sp-0x7d8]
    unsigned long long v18;  // [sp-0x7d0]
    char v19;  // [bp-0x5c0]
    char v20;  // [bp-0x5bc]
    char v21;  // [bp-0x54c]
    char v22;  // [bp-0x544]
    char v23;  // [bp-0x540]
    unsigned int v24;  // [sp-0x2f8]
    unsigned int v25;  // [sp-0x2f4]
    unsigned long long v26;  // [sp-0x284]
    unsigned int v27;  // [sp-0x27c]
    void* v28;  // [bp-0x278], Other Possible Types: char, unsigned long long
    unsigned long long v29;  // [sp-0x270]
    char v30;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned int v31;  // [sp-0x30]
    unsigned int v32;  // [sp-0x2c]
    unsigned long long v34;  // rdx

    clap_builder::builder::command::Command::new::ha9f386b472c5d0f1(&v23, uucore::util_name::h60d842bf27b05e82(), v34);
    clap_builder::builder::command::Command::version::h6875f9389892f91c(&v11, &v23, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h6a5467500d801ce2(&v23, &v11, "Report or omit repeated lines.", 30);
    uucore::format_usage::h76fcb2d15fbabc58(&v3, "{} [OPTION]... [INPUT [OUTPUT]]", 31);
    clap_builder::builder::command::Command::override_usage::hbed072592bcabc12(&v11, &v23, &v3);
    memcpy(&v23, &v11, 700);
    v26 = 549755814016 | *((long long *)&v21);
    v27 = *((int *)&v22);
    clap_builder::builder::command::Command::after_help::hfbc5bb31e2c5b48a(&v11, &v23, "Filter adjacent matching lines from INPUT (or standard input),\nwriting to OUTPUT (or standard output).\n\nNote: uniq does not detect repeated lines unless they are adjacent.\nYou may want to sort the input first, or use sort -u without uniq.", 238);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v23, "all-repeated", 12);
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&v3, &v23, 68);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&v23, &v3, "all-repeated", 12);
    v3 = "none";
    v4 = 4;
    v5 = "prepend";
    v6 = 7;
    v7 = "separate\n       ";
    v8 = 8;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hc2378daf3056ea67(&v28, &v3);
    clap_builder::builder::arg::Arg::value_parser::hf8c023e5f7cf7e06(&v3, &v23, &v28);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&v23, &v3, "print all duplicate lines. Delimiting is done with blank lines. [default: none]", 79);
    clap_builder::builder::arg::Arg::value_name::h389e15842e4efb3e(&v3, &v23, "delimit-method", 14);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v30 = *((long long *)&v2);
    v28 = v0;
    v29 = v1;
    clap_builder::builder::arg::Arg::num_args::h1727105242b5cb03(&v23, &v3, &v28);
    clap_builder::builder::arg::Arg::default_missing_value::hbc3011d9bfb21fcb(&v3, &v23, "none", 4);
    memcpy(&v28, &v3, 584);
    v31 = 128 | v9;
    v32 = v10;
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&v23, &v11, &v28);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v11, "group", 5);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&v3, &v11, "group", 5);
    v11 = "separate\n       ";
    v12 = 8;
    v13 = "prepend";
    v14 = 7;
    v15 = "append";
    v16 = 6;
    v17 = "both";
    v18 = 4;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hdb2f90364b5ffb5f(&v28, &v11);
    clap_builder::builder::arg::Arg::value_parser::hf8c023e5f7cf7e06(&v11, &v3, &v28);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&v3, &v11, "show all items, separating groups with an empty line. [default: separate]", 73);
    clap_builder::builder::arg::Arg::value_name::h389e15842e4efb3e(&v11, &v3, "group-method", 12);
    clap_builder::builder::arg::Arg::num_args::h1727105242b5cb03(&v3, &v11, &v0);
    clap_builder::builder::arg::Arg::default_missing_value::hbc3011d9bfb21fcb(&v11, &v3, "separate\n       ", 8);
    memcpy(&v3, &v11, 584);
    v9 = 128 | *((int *)&v19);
    v10 = *((int *)&v20);
    v11 = "repeatedNoEquals";
    v12 = 8;
    v13 = "all-repeated";
    v14 = 12;
    v15 = "unique";
    v16 = 6;
    v17 = "count";
    v18 = 5;
    clap_builder::builder::arg::Arg::conflicts_with_all::h108fb98df5efe6c4(&v28, &v3, &v11);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&v11, &v23, &v28);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v23, "check-chars", 11);
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&v3, &v23, 119);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&v23, &v3, "check-chars", 11);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&v3, &v23, "compare no more than N characters in lines", 42);
    clap_builder::builder::arg::Arg::value_name::h389e15842e4efb3e(&v28, &v3, "N", 1);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&v23, &v11, &v28);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v11, "count", 5);
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&v3, &v11, 99);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&v11, &v3, "count", 5);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&v3, &v11, "prefix lines by the number of occurrences", 41);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&v28, &v3, 2);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&v11, &v23, &v28);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v23, "ignore-case", 11);
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&v3, &v23, 105);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&v23, &v3, "ignore-case", 11);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&v3, &v23, "ignore differences in case when comparing", 41);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&v28, &v3, 2);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&v23, &v11, &v28);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v11, "repeatedNoEquals", 8);
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&v3, &v11, 100);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&v11, &v3, "repeatedNoEquals", 8);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&v3, &v11, "only print duplicate lines", 26);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&v28, &v3, 2);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&v11, &v23, &v28);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v23, "skip-chars", 10);
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&v3, &v23, 115);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&v23, &v3, "skip-chars", 10);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&v3, &v23, "avoid comparing the first N characters", 38);
    clap_builder::builder::arg::Arg::value_name::h389e15842e4efb3e(&v28, &v3, "N", 1);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&v23, &v11, &v28);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v11, "skip-fields", 11);
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&v3, &v11, 102);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&v11, &v3, "skip-fields", 11);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&v3, &v11, "avoid comparing the first N fields", 34);
    clap_builder::builder::arg::Arg::value_name::h389e15842e4efb3e(&v28, &v3, "N", 1);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&v11, &v23, &v28);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v23, "unique", 6);
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&v3, &v23, 117);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&v23, &v3, "unique", 6);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&v3, &v23, "only print unique lines", 23);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&v28, &v3, 2);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&v23, &v11, &v28);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v11, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&v3, &v11, 122);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&v11, &v3, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&v3, &v11, "end lines with 0 byte, not newlineinternal error: entered unreachable code: Should have been caught by possible values in clap", 34);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&v28, &v3, 2);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&v11, &v23, &v28);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&v23, "filesInvalid argument for : ", 5);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&v3, &v23, 1);
    v28 = 2;
    clap_builder::builder::arg::Arg::value_parser::h120ad401eb644ab4(&v23, &v3, &v28);
    v28 = 0;
    v29 = 2;
    v30 = 0;
    clap_builder::builder::arg::Arg::num_args::h1727105242b5cb03(&v3, &v23, &v28);
    memcpy(&v23, &v3, 584);
    v24 = v9 | 4;
    v25 = v10;
    clap_builder::builder::arg::Arg::value_hint::hc9d1bc2057741f49(&v3, &v23, 3);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(a0, &v11, &v3);
    return a0;
}
