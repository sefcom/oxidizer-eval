long long uu_fmt::linebreak::write_newline(void* a0, unsigned long a1, unsigned long long a2[3])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12
    unsigned long v4;  // r12
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = a2[2];
    if (a2[0] - v3 > 1)
    {
        *((char *)(a2[1] + v3)) = 10;
        v4 = v3 + 1;
        a2[2] = v4;
        if (a2[0] - v4 <= a1)
            return a2.write_all_cold(a0, a1);
    }
    else
    {
        v5 = a2.write_all_cold("\n   capacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rssrc/uu/fmt/src/linebreak.rsMismatch between definition and access of ``. /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/error.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rssrc/uu/fmt/src/linebreak.rs", 1);
        if (v5)
            return v5;
        v4 = a2[2];
        if (a2[0] - v4 <= a1)
            return a2.write_all_cold(a0, a1);
    }
    memcpy(a2[1] + v4, a0, a1);
    a2[2] = v4 + a1;
    return 0;
}
