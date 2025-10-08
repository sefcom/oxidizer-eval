long long fish::reader::replace_line_at_cursor(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long *a3, unsigned long long a4, unsigned long a5)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v5;  // r12
    char v6;  // al
    unsigned long v7;  // rdx
    unsigned long v8;  // r14
    unsigned long v9;  // cc_ndep
    unsigned long long v10;  // 4096
    unsigned long long v12;  // r13
    unsigned long v13;  // rax

    v5 = *(a3);
    if (v5 > a2)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e0f48); /* do not return */
    v0 = a1;
    v1 = a1 + v5 * 4;
    v6 = v0.rposition();
    if ((v6 & 1))
    {
        v8 = v7 + 1;
        if ((char)_ccall(4, 24, v7 + 1, 0, _ccall(17, (unsigned long long)(v6 & 1), 0, v9)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e0ed0); /* do not return */
    }
    else
    {
        v8 = 0;
    }
    v0 = v1;
    v1 = a1 + a2 * 4;
    v10 = a2;
    if (((char)v0.position() & 1))
    {
        if (!((char)__CFADD__(v5, v7)))
            v10 = v5 + v7;
        else
            core::panicking::panic_const::panic_const_add_overflow(&g_14e0ee8); /* do not return */
    }
    v12 = v10;
    v13 = v8;
    if ((char)__CFADD__(v13, v2))
        core::panicking::panic_const::panic_const_add_overflow(&g_14e0f00); /* do not return */
    *(a3) = v13 + v2;
    if (v8 > a2)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e0f18); /* do not return */
    v0.to_vec(a1, v8);
    v3.add(&v0, a4, v2);
    if (a2 < v12)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e0f30); /* do not return */
    return a0.add(&v3, a1 + v12 * 4, a2 - v12);
}
