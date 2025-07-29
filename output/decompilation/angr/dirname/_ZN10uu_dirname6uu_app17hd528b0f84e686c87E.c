long long uu_dirname::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xac0]
    unsigned long long v2;  // [bp-0xab8]
    char v3;  // [bp-0xab0]
    unsigned int v4;  // [bp-0x838]
    char v5;  // [bp-0x834]
    unsigned long long v6;  // [bp-0x7f4]
    unsigned int v7;  // [bp-0x7ec]
    char v8;  // [bp-0x7e8]
    unsigned int v9;  // [bp-0x570]
    unsigned int v10;  // [bp-0x56c]
    char v11;  // [bp-0x568]
    unsigned long v12;  // [bp-0x2ac]
    unsigned int v13;  // [bp-0x2a4]
    char v14;  // [bp-0x2a0]
    unsigned long long v17;  // rdx

    v3.new(uucore::util_name(), v17);
    uucore::mods::locale::get_message(&v8, "dirname-about(uutils coreutils) 0.1.0dirname-usagedirname-zero-helpdir/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs..", 13);
    v11.about(&v3, &v8);
    v3.version(&v11);
    uucore::mods::locale::get_message(&v0, "dirname-usagedirname-zero-helpdir/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs..", 13);
    uucore::format_usage(&v8, v1, v2);
    v11.override_usage(&v3, &v8);
    memcpy(&v3, &v11, 700);
    v6 = 584115552392 | v12;
    v7 = v13;
    v11.new("zeroAnsi -- ", 4);
    v8.long(&v11);
    v11.short(&v8);
    uucore::mods::locale::get_message(&v14, "dirname-zero-helpdir/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs..", 17);
    v8.help(&v11, &v14);
    v14.action(&v8, 2);
    v11.arg(&v3, &v14);
    v3.new("dir/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs..", 3);
    memcpy(&v8, &v3, 632);
    v9 = v4 | 4;
    v10 = *((int *)&v5);
    v3.action(&v8, 1);
    v8.value_hint(&v3);
    a0.arg(&v11, &v8);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    return a0;
}
