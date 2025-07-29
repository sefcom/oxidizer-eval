long long uu_sleep::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x858], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x850]
    unsigned long long v2;  // [bp-0x848]
    char v3;  // [bp-0x840]
    char v4;  // [bp-0x828]
    unsigned long long v5;  // [bp-0x56c]
    unsigned int v6;  // [bp-0x564]
    char v7;  // [bp-0x560]
    unsigned long v8;  // [bp-0x2a4]
    unsigned int v9;  // [bp-0x29c]
    char v10;  // [bp-0x298]
    unsigned long long v13;  // rdx

    v7.new(uucore::util_name(), v13);
    v4.version(&v7);
    uucore::mods::locale::get_message(&v10, "sleep-aboutsleep-usageNUMBERsleep-help-number: \n/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/", 11);
    v7.about(&v4, &v10);
    uucore::mods::locale::get_message(&v10, "sleep-after-help", 16);
    v4.after_help(&v7, &v10);
    uucore::mods::locale::get_message(&v0, "sleep-usageNUMBERsleep-help-number: \n/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/cor", 11);
    uucore::format_usage(&v10, v1, v2);
    v7.override_usage(&v4, &v10);
    memcpy(&v4, &v7, 700);
    v5 = 549755814016 | v8;
    v6 = v9;
    v7.new();
    uucore::mods::locale::get_message(&v3, "sleep-help-number: \n/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs..\n", 17);
    v10.help(&v7, &v3);
    v7.value_name(&v10);
    v10.action(&v7);
    a0.arg(&v4, &v10);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    return a0;
}
