long long fish::wgetopt::WGetopter::handle_short_opt(struct_0 *a0)
{
    unsigned int v0;  // [bp-0x4c]
    unsigned long v1;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long v3;  // [bp-0x38]
    void* v4;  // [bp-0x30]
    unsigned long long v6;  // r14
    unsigned long v7;  // r15
    unsigned long v8;  // r12
    unsigned int v9;  // eax
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long v12;  // cc_ndep
    unsigned long long v13;  // cc_ndep
    unsigned long v14;  // r14
    unsigned long long v15;  // cc_ndep
    unsigned long v17;  // rax
    unsigned long long v18;  // rdi
    unsigned long long v19;  // rdi

    v6 = a0->field_50;
    v0 = a0->field_48.char_at(v6, 0);
    if (!v6)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e4c28); /* do not return */
    v7 = a0->field_48 + 4;
    a0->field_48 = v7;
    a0->field_50 = v6 - 1;
    v8 = a0->field_28;
    v1 = v8;
    v2 = v8 + a0->field_30 * 4;
    v4 = 0;
    v9 = v1.try_fold(&v0, &v4);
    v11 = (char)v9 & 1.map_or(v10, v8, a0->field_30);
    v13 = _ccall(19, (unsigned long long)(v9 & 1), 0, v12);
    v14 = v6 - 1;
    if (v6 != 1)
    {
        v15 = v13;
        if (!v0 == 58 && !!v10)
            goto LABEL_14251d7;
        a0->field_80 = v0;
        if ((char)_ccall(4, 24, a0->field_68 + 1, 0, _ccall(17, (unsigned long long)((char)(char)(v0 == 58) | (char)(char)(!v10)), 0, v13)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e4b98); /* do not return */
        a0->field_68 = a0->field_68 + 1;
    }
    else
    {
        if ((char)_ccall(4, 24, a0->field_68 + 1, 0, v13 & 1))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e4b80); /* do not return */
        a0->field_68 = a0->field_68 + 1;
        v15 = v13 & 1;
        if (v0 == 58 || !v10)
        {
            a0->field_80 = v0;
        }
        else
        {
LABEL_14251d7:
            if ((int)v11.char_at(v10, 1) != 58)
            {
                return v0;
            }
            if ((int)v11.char_at(v10, 2) == 58)
            {
                if (v14)
                {
                    a0->field_58 = v7;
                    a0->field_60 = v14;
                    v17 = a0->field_68 + 1;
                    if ((char)_ccall(4, 24, a0->field_68 + 1, 0, _ccall(20, v14, 0, v15)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e4bb0); /* do not return */
                }
                else
                {
                    a0->field_58 = 0;
                    a0->field_48 = 4;
                    a0->field_50 = 0;
                    return v0;
                }
            }
            else
            {
                if (v14)
                {
                    a0->field_58 = v7;
                    a0->field_60 = v14;
                    v17 = a0->field_68 + 1;
                    if ((char)_ccall(4, 24, a0->field_68 + 1, 0, _ccall(20, v14, 0, v15)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e4c10); /* do not return */
                }
                else
                {
                    v18 = a0->field_68;
                    if (v18 == a0->field_20)
                    {
                        a0->field_80 = v0;
                        v0 = 58;
                        v0 = 58;
                        a0->field_48 = 4;
                        a0->field_50 = 0;
                        return 58;
                    }
                    else if ((char)_ccall(2, 8, v18, a0->field_20, v15))
                    {
                        v19 = v18 * 16;
                        v2 = *((long long *)(a0->field_18 + v19));
                        v3 = *((long long *)(a0->field_18 + v19 + 8));
                        v1 = 0x8000000000000000;
                        a0.push(&v1, &g_14e4be0);
                        a0->field_58 = *((long long *)(a0->field_18 + v19));
                        a0->field_60 = v3;
                        v17 = a0->field_68 + 1;
                        if ((char)_ccall(4, 24, a0->field_68 + 1, 0, _ccall(32, v18 * 16, v18 * 8, v15)))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14e4bf8); /* do not return */
                    }
                    else
                    {
                        core::panicking::panic_bounds_check(v18, a0->field_20, &g_14e4bc8); /* do not return */
                    }
                }
            }
            a0->field_68 = v17;
            a0->field_48 = 4;
            a0->field_50 = 0;
            return v0;
        }
    }
    return 63;
}
