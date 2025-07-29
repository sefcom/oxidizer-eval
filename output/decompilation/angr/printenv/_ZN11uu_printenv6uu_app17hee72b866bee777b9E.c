long long uu_printenv::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xac0]
    unsigned long long v2;  // [bp-0xab8]
    char v3;  // [bp-0xab0]
    unsigned long v4;  // [bp-0x7f4]
    unsigned int v5;  // [bp-0x7ec]
    char v6;  // [bp-0x7e8]
    unsigned long long v7;  // [bp-0x52c]
    unsigned int v8;  // [bp-0x524]
    char v9;  // [bp-0x520]
    char v10;  // [bp-0x2a0]
    unsigned long long v13;  // rdx

    v6.new(uucore::util_name(), v13);
    v3.version(&v6);
    uucore::mods::locale::get_message(&v9, "printenv-aboutprintenv-usageprintenv-help-null/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/li", 14);
    v6.about(&v3, &v9);
    uucore::mods::locale::get_message(&v0, "printenv-usageprintenv-help-null/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src", 14);
    uucore::format_usage(&v9, v1, v2);
    v3.override_usage(&v6, &v9);
    memcpy(&v6, &v3, 700);
    v7 = 549755814016 | v4;
    v8 = v5;
    v3.new("null", 4);
    v9.short(&v3);
    v3.long(&v9);
    uucore::mods::locale::get_message(&v10, "printenv-help-null/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs..\n", 18);
    v9.help(&v3, &v10);
    v10.action(&v9, 2);
    v3.arg(&v6, &v10);
    v6.new("variables(uutils coreutils) 0.1.0printenv-aboutprintenv-usageprintenv-help-null/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-", 9);
    v9.action(&v6, 1);
    v6.num_args(&v9);
    a0.arg(&v3, &v6);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    return a0;
}
