long long fish::env_universal_common::match(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v5;  // r12
    unsigned long v6;  // r12
    unsigned long long v7;  // r15
    unsigned int v8;  // eax

    v3 = v5;
    v6 = a0[0];
    v7 = a0[1];
    v0 = v6;
    v1 = v6 + v7 * 4;
    v2 = a2;
    if (!a1.eq_by(a1 + a2, &v0))
    {
LABEL_13a16f0:
        return 0;
    }
    if (v7 != a2)
    {
        v8 = v6.char_at(v7, a2);
        if (v8 != 32 && v8 != 9)
            goto LABEL_13a16f0;
    }
    if (v7 < a2)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d7540); /* do not return */
    a0[0] = v6 + a2 * 4;
    a0[1] = v7 - a2;
    return v6 + a2 * 4 & 0xffffffffffffff00 | 1;
}
