long long fish::env_universal_common::skip_spaces(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rbx

    v0 = v2;
    while (true)
    {
        v3 = a1;
        if (!a0.starts_with(v3, " ", 1) && !a0.starts_with(v3, "\t", 1))
            return a0;
        v4 = v3 - 1;
        if (v3 < 1)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d7648); /* do not return */
        a0 += 4;
        a1 = v4;
    }
}
