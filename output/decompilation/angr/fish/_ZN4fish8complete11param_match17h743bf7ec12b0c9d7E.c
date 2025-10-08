long long fish::complete::param_match(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    if (!a0->field_65)
        return 0;
    v3 = fish::complete::leading_dash_count(a1, a2);
    if (v3 != (a0->field_65 == 3) + 1)
    {
        return 0;
    }
    else if (a2 >= v3)
    {
        return a0->field_8.equal(a0->field_10, a1 + v3 * 4, a2 - v3);
    }
    else
    {
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d6248); /* do not return */
    }
}
