long long uu_true::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x840]
    char v1;  // [bp-0x828]
    char v2;  // [bp-0x5a8]
    unsigned long long v3;  // [bp-0x2ec]
    unsigned int v4;  // [bp-0x2e4]
    char v5;  // [bp-0x2e0]
    unsigned long v6;  // [bp-0x24]
    char v7;  // [bp-0x1c]
    unsigned long long v10;  // rdx

    v5.new(uucore::util_name(), v10);
    v2.version(&v5);
    uucore::mods::locale::get_message(&v1, "true-abouttrue-help-textversiontrue-version-text/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/", 10);
    v5.about(&v2, &v1);
    memcpy(&v2, &v5, 700);
    v3 = 0x28000000280000 | v6;
    v4 = *((int *)&v7);
    v5.new("helpNoneshimname", 4);
    v1.long(&v5, "helpNoneshimname", 4);
    uucore::mods::locale::get_message(&v0, "true-help-textversiontrue-version-text/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/al", 14);
    v5.help(&v1, &v0);
    v1.action(&v5, 5);
    v5.arg(&v2, &v1);
    v2.new("versiontrue-version-text/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.", 7);
    v1.long(&v2, "versiontrue-version-text/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.", 7);
    uucore::mods::locale::get_message(&v0, "true-version-text/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs..", 17);
    v2.help(&v1, &v0);
    v1.action(&v2, 8);
    a0.arg(&v5, &v1);
    return a0;
}
