long long fish::wgetopt::WGetopter::update_long_opt(struct_0 *a0, unsigned int a1, char a2, unsigned long long a3, unsigned long long *a4, unsigned long a5)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long v5;  // cc_ndep
    unsigned long v6;  // rbx
    unsigned long long v7;  // r14
    void* v8;  // rbp
    unsigned int v9;  // eax
    unsigned long v10;  // r13
    unsigned long long v11;  // rbx

    v5 = &v3 < 56;
    v6 = a0->field_68 + 1;
    if ((char)_ccall(4, 24, a0->field_68 + 1, 0, (unsigned long long)(char)(&v3 < 56)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14e4c58); /* do not return */
    a0->field_68 = v6;
    v7 = a0->field_48;
    v8 = a0->field_50;
    v9 = v7.char_at(v8, a3);
    if (v9 && v9 != 61)
        core::panicking::panic("assertion failed: matches!(self.remaining_text.char_at(name_end), '\\0' | '=')", 77, &g_14e4cd0); /* do not return */
    if ((int)v7.char_at(v8, a3) == 61)
    {
        if (a2)
        {
            v10 = a3 + 1;
            if ((char)_ccall(4, 24, a3 + 1, 0, _ccall(17, (unsigned long long)a2, 0, v5)))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14e4c70); /* do not return */
            }
            else if (v8 >= v10)
            {
                a0->field_58 = v7 + v10 * 4;
                a0->field_60 = v8 - v10;
            }
            else
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e4c88); /* do not return */
            }
        }
        else
        {
            a0->field_48 = 4;
            a0->field_50 = 0;
            return 59;
        }
    }
    else
    {
        if (a2 == 1)
        {
            if (v6 < a0->field_20)
            {
                v11 = v6 * 16;
                v1 = *((long long *)(a0->field_18 + v11));
                v2 = *((long long *)(a0->field_18 + v11 + 8));
                v0 = 0x8000000000000000;
                a0.push(&v0, &g_14e4ca0);
                a0->field_58 = *((long long *)(a0->field_18 + v11));
                a0->field_60 = v2;
                if ((char)_ccall(4, 24, a0->field_68 + 1, 0, _ccall(32, v6 * 16, v6 * 8, v5)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e4cb8); /* do not return */
                a0->field_68 = a0->field_68 + 1;
            }
            else
            {
                a0->field_48 = 4;
                a0->field_50 = 0;
                return 58;
            }
        }
    }
    a0->field_48 = 4;
    a0->field_50 = 0;
    *(a4) = a5;
    return a1;
}
