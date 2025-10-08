long long fish::expand::get_home_directory_name(unsigned long long a0, unsigned long a1, unsigned long long *a2)
{
    void* v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long v4;  // rdx

    if (!a1)
    {
        core::panicking::panic_bounds_check(0, 0, &g_14d8890); /* do not return */
    }
    else if (a0.slice_contains(&g_54a6f0, 2))
    {
        v1 = a0;
        v2 = a0 + a1 * 4;
        v0 = 0;
        if (((char)v1.try_fold(&v0) & 1))
        {
            *(a2) = v4;
            if (v4 - 1 >= a1)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d88c0); /* do not return */
        }
        else
        {
            *(a2) = a1;
        }
        return a0 + 4;
    }
    else
    {
        core::panicking::panic("assertion failed: [HOME_DIRECTORY, '~'].contains(&input.as_char_slice()[0])Must have a parser if not skipping command substitutionsMust have a parser to expand command substitutions", 75, &g_14d88a8); /* do not return */
    }
}
