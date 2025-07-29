double uu_tr::operation::Sequence::parse_char_equal(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    char v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    char v9;  // [bp-0x38]
    int v10;  // [bp-0x30]
    char v11;  // [bp-0x20]
    unsigned long v13;  // rdi
    char v14;  // cl
    unsigned long v15;  // xmm0lq

    v7 = "[==]cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-li";
    v8 = 2;
    v0 = "=]cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linu";
    v1 = 2;
    v2 = 1;
    v3 = "=]cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linu";
    v4 = 2;
    v5 = "=]cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linu";
    v6 = 2;
    v9.process(&v0, a1);
    v13 = &(&a0->field_0)[1];
    if (!(v9 & 1))
    {
        uu_tr::operation::Sequence::parse_char_equal::{{closure}}(v13, &(char)v10, a2, v14);
        a0->field_0 = 0;
        return v15;
    }
    *((int128_t *)(v13 + 16)) = *((int128_t *)&v11);
    *((void*)v13) = v10;
    a0->field_0 = 1;
    return (unsigned long long)v10;
}
