long long uu_sync::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x860]
    unsigned long long v1;  // [bp-0x858]
    unsigned long long v2;  // [bp-0x850]
    char v3;  // [bp-0x848]
    char v4;  // [bp-0x830]
    unsigned long v5;  // [bp-0x574]
    unsigned int v6;  // [bp-0x56c]
    char v7;  // [bp-0x568]
    unsigned long long v8;  // [bp-0x2ac]
    unsigned int v9;  // [bp-0x2a4]
    char v10;  // [bp-0x2a0]
    unsigned long long v13;  // rdx

    v7.new(uucore::util_name(), v13);
    v4.version(&v7, "(uutils coreutils) 0.1.0sync-aboutsync-usagesync-help-file-systemsync-help-data/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-", 24);
    uucore::mods::locale::get_message(&v10, "sync-aboutsync-usagesync-help-file-systemsync-help-data/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/sr", 10);
    v7.about(&v4, &v10);
    uucore::mods::locale::get_message(&v0, "sync-usagesync-help-file-systemsync-help-data/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/lib", 10);
    uucore::format_usage(&v10, v1, v2);
    v4.override_usage(&v7, &v10);
    memcpy(&v7, &v4, 700);
    v8 = 549755814016 | v5;
    v9 = v6;
    v4.new(_ZN7uu_sync7options11FILE_SYSTEM17h02a71b6e49b0b17fE, g_56d978);
    v10.short(&v4, 102);
    v4.long(&v10, _ZN7uu_sync7options11FILE_SYSTEM17h02a71b6e49b0b17fE, g_56d978);
    v10.conflicts_with(&v4, _ZN7uu_sync7options4DATA17hc24c12e1fc09440bE, g_56d988);
    uucore::mods::locale::get_message(&v3, "sync-help-file-systemsync-help-data/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/", 21);
    v4.help(&v10, &v3);
    v10.action(&v4, 2);
    v4.arg(&v7, &v10);
    v7.new(_ZN7uu_sync7options4DATA17hc24c12e1fc09440bE, g_56d988);
    v10.short(&v7, 100);
    v7.long(&v10, _ZN7uu_sync7options4DATA17hc24c12e1fc09440bE, g_56d988);
    v10.conflicts_with(&v7, _ZN7uu_sync7options11FILE_SYSTEM17h02a71b6e49b0b17fE, g_56d978);
    uucore::mods::locale::get_message(&v3, "sync-help-data/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs..\n", 14);
    v7.help(&v10, &v3);
    v10.action(&v7, 2);
    v7.arg(&v4, &v10);
    v4.new("filessrc/uu/sync/src/sync.rs", 5);
    v10.action(&v4, 1);
    v4.value_hint(&v10, 2);
    a0.arg(&v7, &v4);
    ::0x49cd40::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
