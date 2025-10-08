long long fd::fmt::token_from_pattern_id(unsigned long long *a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned int v2;  // esi
    unsigned long long v3;  // rax

    v2 = a1 - 2;
    if (v2 >= 5)
    {
        v0 = v3;
        core::panicking::panic("internal error: entered unreachable code/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/crossbeam-channel-0.5.15/src/channel.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/crossbeam-channel-0.5.15/src/context.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/crossbeam-channel-0.5.15/src/flavors/at.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/crossbeam-channel-0.5.15/src/flavors/list.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/crossbeam-channel-0.5.15/src/flavors/zero.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/crossbeam-channel-0.5.15/src/flavors/array.rs#/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/io/mod.rsstream did not contain valid UTF-8a formatting trait implementation returned an error when the underlying stream did notfailed to write whole buffer/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/io/buffered/bufwriter.rsfailed to wri", 40, &g_8024b8); /* do not return */
    }
    *(a0) = 0x8000000000000000 | v2;
    return v2;
}
