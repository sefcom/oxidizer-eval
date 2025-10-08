long long fish::tokenizer::Tok::get_source(unsigned int a0[2], unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rax
    unsigned long v4;  // rcx

    v0 = v2;
    v3 = a0[0];
    v4 = a0[1];
    if ((char)__CFADD__(v4, v3))
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14e3998); /* do not return */
    }
    else if (a2 >= (v4 + v3 & 4294967295))
    {
        return a1 + v3 * 4;
    }
    else
    {
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e39b0); /* do not return */
    }
}
