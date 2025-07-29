long long uu_link::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x868], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x860]
    unsigned long long v2;  // [bp-0x858]
    unsigned long long v3;  // [bp-0x850]
    char v4;  // [bp-0x838]
    unsigned int v5;  // [bp-0x5c0]
    char v6;  // [bp-0x5bc]
    unsigned long v7;  // [bp-0x57c]
    unsigned int v8;  // [bp-0x574]
    char v9;  // [bp-0x570]
    unsigned int v10;  // [bp-0x2f8]
    unsigned int v11;  // [bp-0x2f4]
    char v12;  // [bp-0x2f0]
    unsigned long long v13;  // [bp-0x34]
    unsigned int v14;  // [bp-0x2c]
    unsigned long long v17;  // rdx

    v12.new(uucore::util_name(), v17);
    v4.version(&v12);
    uucore::mods::locale::get_message(&v9, "link-aboutlink-usage/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern", 10);
    v12.about(&v4, &v9);
    uucore::mods::locale::get_message(&v0, "link-usage/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs..\n", 10);
    uucore::format_usage(&v9, v1, v2);
    v4.override_usage(&v12, &v9);
    memcpy(&v12, &v4, 700);
    v13 = 549755814016 | v7;
    v14 = v8;
    v4.new();
    memcpy(&v9, &v4, 632);
    v10 = v5 | 5;
    v11 = *((int *)&v6);
    v4.num_args(&v9);
    v9.value_hint(&v4);
    v3 = 2;
    v4.value_parser(&v9, &v3);
    a0.arg(&v12, &v4);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    return a0;
}
