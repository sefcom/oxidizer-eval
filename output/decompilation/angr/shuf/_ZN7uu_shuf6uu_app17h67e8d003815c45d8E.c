long long uu_shuf::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xae8]
    unsigned long long v1;  // [bp-0xae0]
    unsigned long long v2;  // [bp-0xad8]
    unsigned long long v3;  // [bp-0xad0]
    unsigned long long v4;  // [bp-0xac8]
    unsigned long long v5;  // [bp-0xac0]
    char v6;  // [bp-0xab8]
    char v7;  // [bp-0x838]
    unsigned long v8;  // [bp-0x57c]
    unsigned int v9;  // [bp-0x574]
    char v10;  // [bp-0x570]
    unsigned long long v11;  // [bp-0x2b4]
    unsigned int v12;  // [bp-0x2ac]
    char v13;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x2a0]
    unsigned long long v15;  // [bp-0x298]
    unsigned long long v18;  // rdx

    v10.new(uucore::util_name(), v18);
    uucore::mods::locale::get_message(&v6, "shuf-about(uutils coreutils) 0.1.0shuf-usageshuf-help-echoLO-HIshuf-help-input-rangeCOUNTshuf-help-head-countshuf-help-random-sourceshuf-help-zero-terminated-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/", 10);
    v7.about(&v10, &v6);
    v10.version(&v7, "(uutils coreutils) 0.1.0shuf-usageshuf-help-echoLO-HIshuf-help-input-rangeCOUNTshuf-help-head-countshuf-help-random-sourceshuf-help-zero-terminated-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/i", 24);
    uucore::mods::locale::get_message(&v0, "shuf-usageshuf-help-echoLO-HIshuf-help-input-rangeCOUNTshuf-help-head-countshuf-help-random-sourceshuf-help-zero-terminated-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssr", 10);
    uucore::format_usage(&v6, v1, v2);
    v7.override_usage(&v10, &v6);
    memcpy(&v10, &v7, 700);
    v11 = 549755814016 | v8;
    v12 = v9;
    v7.new(_ZN7uu_shuf7options4ECHO17h03e57bd2988bae02E, g_58f978);
    v6.short(&v7, 101);
    v7.long(&v6, _ZN7uu_shuf7options4ECHO17h03e57bd2988bae02E, g_58f978);
    uucore::mods::locale::get_message(&v13, "shuf-help-echoLO-HIshuf-help-input-rangeCOUNTshuf-help-head-countshuf-help-random-sourceshuf-help-zero-terminated-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/shuf/", 14);
    v6.help(&v7, &v13);
    v7.action(&v6, 2);
    v6.overrides_with(&v7, _ZN7uu_shuf7options4ECHO17h03e57bd2988bae02E, g_58f978);
    v13.conflicts_with(&v6, _ZN7uu_shuf7options11INPUT_RANGE17h8c668f1194421642E, g_58f988);
    v7.arg(&v10, &v13);
    v10.new(_ZN7uu_shuf7options11INPUT_RANGE17h8c668f1194421642E, g_58f988);
    v6.short(&v10, 105);
    v10.long(&v6, _ZN7uu_shuf7options11INPUT_RANGE17h8c668f1194421642E, g_58f988);
    v6.value_name(&v10, "LO-HIshuf-help-input-rangeCOUNTshuf-help-head-countshuf-help-random-sourceshuf-help-zero-terminated-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/shuf/src/shuf.rs", 5);
    uucore::mods::locale::get_message(&v13, "shuf-help-input-rangeCOUNTshuf-help-head-countshuf-help-random-sourceshuf-help-zero-terminated-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/shuf/src/shuf.rs", 21);
    v10.help(&v6, &v13);
    v6.value_parser(&v10);
    v13.conflicts_with(&v6, _ZN7uu_shuf7options12FILE_OR_ARGS17hf1addcb51a4f46c3E, g_58f9e8);
    v10.arg(&v7, &v13);
    v7.new(_ZN7uu_shuf7options10HEAD_COUNT17h3102fae5d1b57ed4E, g_58f998);
    v6.short(&v7, 110);
    v7.long(&v6, _ZN7uu_shuf7options10HEAD_COUNT17h3102fae5d1b57ed4E, g_58f998);
    v6.value_name(&v7, "COUNTshuf-help-head-countshuf-help-random-sourceshuf-help-zero-terminated-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/shuf/src/shuf.rs", 5);
    v7.action(&v6, 1);
    uucore::mods::locale::get_message(&v13, "shuf-help-head-countshuf-help-random-sourceshuf-help-zero-terminated-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/shuf/src/shuf.rs", 20);
    v6.help(&v7, &v13);
    v13.value_parser(&v6);
    v7.arg(&v10, &v13);
    v10.new(_ZN7uu_shuf7options6OUTPUT17h7356d359ad2fc376E, g_58f9a8);
    v6.short(&v10, 111);
    v10.long(&v6, _ZN7uu_shuf7options6OUTPUT17h7356d359ad2fc376E, g_58f9a8);
    v6.value_name(&v10, "FILEchar", 4);
    uucore::mods::locale::get_message(&v13, "shuf-help-outputa Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rsdescription() is deprecated; use Display/root/.rustup/toolchains/nig", 16);
    v10.help(&v6, &v13);
    v3 = 3;
    v15 = v5;
    v13 = v3;
    v14 = v4;
    v6.value_parser(&v10, &v13);
    v13.value_hint(&v6, 3);
    v10.arg(&v7, &v13);
    v7.new(_ZN7uu_shuf7options13RANDOM_SOURCE17hc1b9901da096501dE, g_58f9b8);
    v6.long(&v7, _ZN7uu_shuf7options13RANDOM_SOURCE17hc1b9901da096501dE, g_58f9b8);
    v7.value_name(&v6, "FILEchar", 4);
    uucore::mods::locale::get_message(&v13, "shuf-help-random-sourceshuf-help-zero-terminated-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/shuf/src/shuf.rs", 23);
    v6.help(&v7, &v13);
    v7.value_parser(&v6, &v3);
    v6.value_hint(&v7, 3);
    v7.arg(&v10, &v6);
    v10.new(_ZN7uu_shuf7options6REPEAT17h65928e931cec9ae5E, g_58f9c8);
    v6.short(&v10, 114);
    v10.long(&v6, _ZN7uu_shuf7options6REPEAT17h65928e931cec9ae5E, g_58f9c8);
    uucore::mods::locale::get_message(&v13, "shuf-help-repeat", 16);
    v6.help(&v10, &v13);
    v10.action(&v6, 2);
    v6.overrides_with(&v10, _ZN7uu_shuf7options6REPEAT17h65928e931cec9ae5E, g_58f9c8);
    v10.arg(&v7, &v6);
    v7.new(_ZN7uu_shuf7options15ZERO_TERMINATED17hb4763797e98ad578E, g_58f9d8);
    v6.short(&v7, 122);
    v7.long(&v6, _ZN7uu_shuf7options15ZERO_TERMINATED17hb4763797e98ad578E, g_58f9d8);
    uucore::mods::locale::get_message(&v13, "shuf-help-zero-terminated-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/shuf/src/shuf.rs", 25);
    v6.help(&v7, &v13);
    v7.action(&v6, 2);
    v6.overrides_with(&v7, _ZN7uu_shuf7options15ZERO_TERMINATED17hb4763797e98ad578E, g_58f9d8);
    v7.arg(&v10, &v6);
    v10.new(_ZN7uu_shuf7options12FILE_OR_ARGS17hf1addcb51a4f46c3E, g_58f9e8);
    v6.action(&v10, 1);
    v13 = 2;
    v10.value_parser(&v6, &v13);
    v6.value_hint(&v10, 3);
    a0.arg(&v7, &v6);
    ::0x4acd50::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
