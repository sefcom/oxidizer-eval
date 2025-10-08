long long fish::highlight::highlight::contains_pending_variable(unsigned long long a0[2], unsigned long a1, unsigned int *a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1[2];  // [bp-0x70]
    void* v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long v5;  // [bp-0x50]
    unsigned long v6;  // [bp-0x48]
    unsigned long v7;  // [bp-0x40]
    char *v8;  // [bp-0x38]
    unsigned long long v10[2];  // rdi
    unsigned long v11;  // r12
    void* v12;  // r13
    void* v13;  // rax
    unsigned long v14;  // rdx
    unsigned long long v15;  // r13
    unsigned long long v16;  // rax

    if (!a1)
        return 0;
    v0 = &a0[a1];
    do
    {
        v10 = a0;
        if (!v10[1])
            core::option::expect_failed("window size must be non-zero/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/str/pattern.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/char/methods.rsto_digit: invalid radix -- radix must be in the range 2 to 36 inclusive/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/iter/traits/exact_size.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/iter/traits/iterator.rs", 28, &g_14d9888); /* do not return */
        v1[0] = v10 + 1;
        v12 = 0;
        while (true)
        {
            v3 = (char *)a2 + 0x4 * v12;
            v4 = a3 - v12;
            v5 = v11;
            v2 = 0;
            v6 = v10[0];
            v7 = v11;
            v8 = &v2;
            if (!((char)v3.try_fold(&v6) & 1))
                break;
            v13 = v12;
            if ((char)__CFADD__(v13, v14))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d98a0); /* do not return */
            v15 = v13 + v14;
            v12 = v15 + 1;
            if ((char)_ccall(4, 24, v15 + 1, 0, (v13 + v14 <= v13 ? 1 : 0)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d98b8); /* do not return */
            if (v15)
            {
                if (v15 - 1 >= a3)
                {
                    core::panicking::panic_bounds_check(v15 - 1, a3, &g_14d98d0); /* do not return */
                }
                else if (a2[1 + v15] == 36)
                {
                    v16 = v15 + v11;
                    if ((char)__CFADD__(v15, v11))
                    {
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d98e8); /* do not return */
                    }
                    else if (v16 < a3)
                    {
                        v16 = fish::common::valid_var_name_char(a2[v16]);
                        if (!(char)v16)
                            return v16 & 0xffffffffffffff00 | 1;
                    }
                    else
                    {
                        return v16 & 0xffffffffffffff00 | 1;
                    }
                }
            }
            if (a3 < v12)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d9900); /* do not return */
        }
        a0[0] = v1;
    } while (a0 != v0);
    return 0;
}
