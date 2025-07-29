double uu_tr::operation::Sequence::parse_backslash(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    char v4;  // [bp-0x18]
    unsigned long v6;  // xmm0lq
    int v7;  // xmm0

    v0 = "\\/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/tr/src/operation.rs";
    v1 = 1;
    v2.process(&v0, a1);
    if (*((int *)&v2) != 3)
    {
        v7 = *((int128_t *)&v2);
        a0->field_10 = *((int128_t *)&v4);
        *((void*)&a0->field_0) = v7;
        return (unsigned long long)v7;
    }
    uu_tr::operation::Sequence::parse_backslash::{{closure}}(&a0->padding_1[7], &v3);
    *((unsigned long long *)&a0->field_0) = 3;
    return v6;
}
