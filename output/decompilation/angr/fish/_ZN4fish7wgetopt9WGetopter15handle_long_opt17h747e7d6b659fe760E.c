long long fish::wgetopt::WGetopter::handle_long_opt(struct_0 *a0, unsigned long long *a1)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned int
    char v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x38]
    char v3;  // [bp-0x34]
    unsigned long long v5;  // r14
    void* v6;  // r15
    void* v7;  // r15
    unsigned long long v8;  // rdx
    void* v9;  // r13
    unsigned long long v10;  // rax
    unsigned long long v11;  // r12

    v5 = a0->field_48;
    v6 = a0->field_50;
    if (!((char)v5.find(v6) & 1))
        v7 = v6;
    else
        v7 = v8;
    v9 = v7;
    v0.find_matching_long_opt(a0, v9);
    v10 = *((long long *)&v0);
    if (v10 < 2)
        return a0.update_long_opt(v2, *((int *)&v3), v9, a1, *((long long *)&v1));
    if ((unsigned int)v10 == 2)
    {
        a0->field_48 = 4;
        a0->field_50 = 0;
        if ((char)_ccall(4, 24, a0->field_68 + 1, 0, (unsigned long long)(char)((unsigned int)v10 < 2)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e4d00); /* do not return */
        a0->field_68 = a0->field_68 + 1;
    }
    else
    {
        v11 = a0->field_68;
        if (v11 >= a0->field_20)
            core::panicking::panic_bounds_check(v11, a0->field_20, &g_14e4d18); /* do not return */
        if ((int)*((long long *)(a0->field_18 + v11 * 16)).char_at(*((long long *)(a0->field_18 + v11 * 16 + 8)), 1) != 45)
        {
            v0 = v5.char_at(v6, 0);
            if (v0.slice_contains(a0->field_28, a0->field_30))
                return 0x110000;
        }
        if (!v6)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e4d30); /* do not return */
        a0->field_58 = v5 + 4;
        a0->field_60 = v6 - 1;
        a0->field_48 = 4;
        a0->field_50 = 0;
        a0->field_68 = v11 + 1;
    }
    return 63;
}
