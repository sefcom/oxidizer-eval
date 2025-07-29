long long uu_wc::files0_iter_stdin(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    char v4;  // [bp-0x20]
    unsigned long long v6;  // rax
    unsigned int v7;  // edx

    v0 = std::io::stdio::stdin();
    v6 = v0.lock();
    v3.to_owned("-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/wc/src/wc.rs", 1);
    v2 = *((long long *)&v4);
    memcpy(&v1, &v3, 16);
    return uu_wc::files0_iter(a0, v6, v7 & 1, &v1);
}
