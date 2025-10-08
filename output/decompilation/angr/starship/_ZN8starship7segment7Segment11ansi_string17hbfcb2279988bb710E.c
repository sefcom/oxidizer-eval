long long starship::segment::Segment::ansi_string(struct_0 *a0, unsigned long long *a1, void* a2, unsigned long long a3)
{
    if (!*(a1))
    {
        a0.ansi_string(a1 + 1, a2);
        return a0;
    }
    if ((unsigned int)*(a1) == 1)
    {
        a0.ansi_string(a1 + 1, 0, a3, a2);
    }
    else
    {
        a0->field_38 = 0;
        a0->field_30 = 0;
        *((unsigned long long *)&(&a0->field_38)[1]) = 90194313237;
        a0->field_0 = 0x8000000000000000;
        a0->field_8 = "\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-1.11.0/src/iter/extend.rsfatal runtime error: thread local panicked on drop, aborting\n/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/collections/btree/navigate.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/gix-config-0.46.0/src/file/access/raw.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/gix-config-0.46.0/src/file/access/comfort.rsimara-diff only supports up to  tokens/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/imara-diff-0.1.8/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/imara-diff-0.1.8/src/histogram.rs";
        a0->field_10 = 1;
        a0->field_18 = 9223372036854775810;
    }
    return a0;
}
