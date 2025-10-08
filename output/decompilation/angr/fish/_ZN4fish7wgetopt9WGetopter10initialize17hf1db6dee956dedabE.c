long long fish::wgetopt::WGetopter::initialize(struct_0 *a0)
{
    unsigned long long v1;  // r15
    unsigned long long v2;  // r14
    unsigned long long v3;  // rax

    a0->field_70 = 1;
    a0->field_78 = 1;
    a0->field_68 = 1;
    a0->field_48 = 4;
    a0->field_50 = 0;
    v1 = a0->field_28;
    v2 = a0->field_30;
    v3 = v1.char_at(v2, 0);
    if ((unsigned int)v3 == 45)
    {
        a0->field_86 = 2;
        if (!v2)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e4ad8); /* do not return */
        goto LABEL_1424e1d;
    }
    else
    {
        v3 = v1.char_at(v2, 0);
        if ((unsigned int)v3 == 43)
        {
            a0->field_86 = 0;
            if (!v2)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e4af0); /* do not return */
LABEL_1424e1d:
            v2 -= 1;
            v1 += 4;
        }
        else
        {
            a0->field_86 = 1;
        }
        a0->field_28 = v1;
        a0->field_30 = v2;
        a0->field_84 = 1;
        return v3;
    }
}
