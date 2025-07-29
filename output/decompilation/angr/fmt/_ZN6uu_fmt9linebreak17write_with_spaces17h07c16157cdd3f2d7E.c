long long uu_fmt::linebreak::write_with_spaces(void* a0, unsigned long a1, unsigned long a2, unsigned long long a3[3])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rax
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // r12

    v0 = v2;
    if (a2 != 1)
    {
        if (a2 == 2)
        {
            v3 = a3[2];
            if (a3[0] - v3 >= 3)
            {
                *((unsigned short *)(a3[1] + v3)) = 8224;
                v4 = v3 + 2;
LABEL_4a809c:
                a3[2] = v4;
            }
            else
            {
                v5 = "   capacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rssrc/uu/fmt/src/linebreak.rsMismatch between definition and access of ``. /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/error.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rssrc/uu/fmt/src/linebreak.rs";
                v6 = 2;
LABEL_4a810b:
                v8 = a3.write_all_cold(v5, v6);
                if (v8)
                    return v8;
            }
        }
        v9 = a3[2];
        if (a3[0] - v9 <= a1)
            return a3.write_all_cold(a0, a1);
        memcpy(a3[1] + v9, a0, a1);
        a3[2] = v9 + a1;
        return 0;
    }
    v7 = a3[2];
    if (a3[0] - v7 >= 2)
    {
        *((char *)(a3[1] + v7)) = 32;
        v4 = v7 + 1;
        goto LABEL_4a809c;
    }
    else
    {
        v5 = " capacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rssrc/uu/fmt/src/linebreak.rsMismatch between definition and access of ``. /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/error.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rssrc/uu/fmt/src/linebreak.rs";
        v6 = 1;
        goto LABEL_4a810b;
    }
}
