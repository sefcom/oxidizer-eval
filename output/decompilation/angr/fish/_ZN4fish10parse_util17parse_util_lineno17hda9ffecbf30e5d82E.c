long long fish::parse_util::parse_util_lineno(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    if (!a1)
        return 1;
    v3 = a2.min(a1);
    if (v3 > a1)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dd960); /* do not return */
    v4 = fish::wcstringutil::count_newlines(a0, v3);
    if ((char)_ccall(4, 24, v4 + 1, 0, (unsigned long long)(char)(v3 < a1)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14dd948); /* do not return */
    return v4 + 1;
}
