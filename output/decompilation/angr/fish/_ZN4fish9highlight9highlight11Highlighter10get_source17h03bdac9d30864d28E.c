long long fish::highlight::highlight::Highlighter::get_source(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    uint128_t v3;  // [bp-0x40]
    unsigned int v5;  // eax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v5 = a2.end(a3);
    if (v5 < (int)a2.start())
    {
        v0 = &g_14d95e0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d9600); /* do not return */
    }
    else if (a2.end(a3) <= a1)
    {
        v6 = a2.start();
        v7 = a2.end(a3);
        if (v7 >= v6 && v7 <= a1)
            return a0 + v6 * 4;
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d9630); /* do not return */
    }
    else
    {
        v0 = &g_14d95f0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d9618); /* do not return */
    }
}
