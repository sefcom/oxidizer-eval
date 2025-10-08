long long fish::wildcard::resolve_description(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[2], unsigned int a4, unsigned long a5, struct_0 *a6)
{
    unsigned int v0;  // [bp-0x64]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    int v3;  // [bp-0x48], Other Possible Types: char
    char v4;  // [bp-0x38]
    unsigned long long v5;  // r13
    unsigned long long v6;  // rax
    unsigned long v7;  // rdx
    unsigned long v8;  // rax
    unsigned long v9;  // cc_ndep
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax

    v0 = a4;
    v2 = a2;
    v1 = a1;
    v5 = a3[1];
    v6 = a3[0].find_char(v5, 9);
    if (((char)v6 & 1))
    {
        v8 = v7 + 1;
        if ((char)_ccall(4, 24, v7 + 1, 0, _ccall(17, (unsigned long long)((char)v6 & 1), 0, v9)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e4d48); /* do not return */
        v10 = v5;
        if (v10 < v8)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e4d78); /* do not return */
        v3.to_vec(v8 * 4 + a3[0], v10 - v8);
        if (v7 > v5)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e4d60); /* do not return */
        a3[1] = v7;
        v11 = *((long long *)&v4);
        *((unsigned long long *)&a0[16]) = v11;
        *(a0) = v3;
        return v11;
    }
    else
    {
        if (a5 && ((char)v0 & 64))
            goto a6->field_28;
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = 0;
        return v6;
    }
}
