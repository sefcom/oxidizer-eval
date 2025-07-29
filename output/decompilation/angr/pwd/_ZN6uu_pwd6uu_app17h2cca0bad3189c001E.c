long long uu_pwd::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xad0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xac8]
    unsigned long long v2;  // [bp-0xac0]
    char v3;  // [bp-0xab8]
    unsigned long v4;  // [bp-0x7fc]
    unsigned int v5;  // [bp-0x7f4]
    char v6;  // [bp-0x7f0]
    unsigned long long v7;  // [bp-0x534]
    unsigned int v8;  // [bp-0x52c]
    char v9;  // [bp-0x528]
    char v10;  // [bp-0x2a8]
    unsigned long long v13;  // rdx

    v6.new(uucore::util_name(), v13);
    v3.version(&v6);
    uucore::mods::locale::get_message(&v9, "pwd-aboutpwd-usagelogicalpwd-help-physical/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/librar", 9);
    v6.about(&v3, &v9);
    uucore::mods::locale::get_message(&v0, "pwd-usagelogicalpwd-help-physical/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/sr", 9);
    uucore::format_usage(&v9, v1, v2);
    v3.override_usage(&v6, &v9);
    memcpy(&v6, &v3, 700);
    v7 = 549755814016 | v4;
    v8 = v5;
    v3.new("logicalpwd-help-physical/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pat", 7);
    v9.short(&v3, 76);
    v3.long(&v9, "logicalpwd-help-physical/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pat", 7);
    uucore::mods::locale::get_message(&v10, "pwd-help-logical", 16);
    v9.help(&v3, &v10);
    v10.action(&v9);
    v3.arg(&v6, &v10);
    v6.new("physical", 8);
    v9.short(&v6, 80);
    v6.long(&v9, "physical", 8);
    v9.overrides_with(&v6);
    uucore::mods::locale::get_message(&v10, "pwd-help-physical/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs..\n", 17);
    v6.help(&v9, &v10);
    v9.action(&v6);
    a0.arg(&v3, &v9);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    return a0;
}
