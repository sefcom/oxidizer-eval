long long fish::screen::LayoutCache::escape_code_length(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    if ((int)a1.char_at(a2, 0) != 27)
        return 0;
    v2 = a0.find_escape_code(a1, a2);
    if (v2)
    {
        return v2;
    }
    else if (!((char)fish::screen::escape_code_length(a1, a2) & 1))
    {
        return 0;
    }
    else if (v3 <= a2)
    {
        v0.to_vec(a1, v3);
        a0.add_escape_code(&v0);
        return v3;
    }
    else
    {
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1df8); /* do not return */
    }
}
