long long uu_nproc::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x868], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x860]
    unsigned long long v2;  // [bp-0x858]
    char v3;  // [bp-0x850]
    char v4;  // [bp-0x838]
    unsigned long long v5;  // [bp-0x57c]
    unsigned int v6;  // [bp-0x574]
    char v7;  // [bp-0x570]
    char v8;  // [bp-0x2f0]
    unsigned long v9;  // [bp-0x34]
    char v10;  // [bp-0x2c]
    unsigned long long v13;  // rdx

    v4.new(uucore::util_name(), v13);
    v8.version(&v4);
    uucore::mods::locale::get_message(&v7, "nproc-aboutnproc-usagenproc-help-allNnproc-help-ignore/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src", 11);
    v4.about(&v8, &v7);
    uucore::mods::locale::get_message(&v0, "nproc-usagenproc-help-allNnproc-help-ignore/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/libra", 11);
    uucore::format_usage(&v7, v1, v2);
    v8.override_usage(&v4, &v7);
    memcpy(&v4, &v8, 700);
    v5 = 549755814016 | v9;
    v6 = *((int *)&v10);
    v8.new("allignore(uutils coreutils) 0.1.0nproc-aboutnproc-usagenproc-help-allNnproc-help-ignore/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-", 3);
    v7.long(&v8, "allignore(uutils coreutils) 0.1.0nproc-aboutnproc-usagenproc-help-allNnproc-help-ignore/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-", 3);
    uucore::mods::locale::get_message(&v3, "nproc-help-allNnproc-help-ignore/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src", 14);
    v8.help(&v7, &v3);
    v7.action(&v8);
    v8.arg(&v4, &v7);
    v4.new("ignore(uutils coreutils) 0.1.0nproc-aboutnproc-usagenproc-help-allNnproc-help-ignore/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unk", 6);
    v7.long(&v4, "ignore(uutils coreutils) 0.1.0nproc-aboutnproc-usagenproc-help-allNnproc-help-ignore/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unk", 6);
    v4.value_name(&v7);
    uucore::mods::locale::get_message(&v3, "nproc-help-ignore/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs..\n", 17);
    v7.help(&v4, &v3);
    a0.arg(&v8, &v7);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    return a0;
}
