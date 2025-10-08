long long fish::editable_line::range_of_line_at_cursor(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v3;  // al
    unsigned long v4;  // rdx
    unsigned long v5;  // r15
    unsigned long v6;  // cc_ndep
    unsigned long long v7;  // 4096
    unsigned long long v9;  // r13

    if (a2 > a1)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d6698); /* do not return */
    v0 = a0;
    v1 = a0 + a2 * 4;
    v3 = v0.rposition();
    if ((v3 & 1))
    {
        v5 = v4 + 1;
        if ((char)_ccall(4, 24, v4 + 1, 0, _ccall(17, (unsigned long long)(v3 & 1), 0, v6)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d6650); /* do not return */
    }
    else
    {
        v5 = 0;
    }
    v0 = v1;
    v1 = a0 + a1 * 4;
    v7 = a1;
    if (((char)v0.position() & 1))
    {
        if (!((char)__CFADD__(a2, v4)))
            v7 = a2 + v4;
        else
            core::panicking::panic_const::panic_const_add_overflow(&g_14d6668); /* do not return */
    }
    v9 = v7;
    if (v9 == v5)
    {
        return v5;
    }
    else if (v9)
    {
        return v5;
    }
    else
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14d6680); /* do not return */
    }
}
