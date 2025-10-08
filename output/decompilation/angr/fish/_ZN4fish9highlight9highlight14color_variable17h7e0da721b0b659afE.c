long long fish::highlight::highlight::color_variable(unsigned long long a0, unsigned long long a1, void* a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned int v3;  // ebx
    void* v4;  // rbp
    void* v5;  // r13
    void* v6;  // r13
    unsigned int v7;  // eax
    char v8;  // al
    unsigned long long v9;  // cc_ndep
    void* v10;  // cc_dep1
    unsigned long long v11;  // cc_dep2
    void* v12;  // rbp
    unsigned int v13;  // cc_dep1
    void* v14;  // rbp
    unsigned int v15;  // ebx
    char v16;  // al
    unsigned long long v17;  // rdx
    void* v18;  // rdi
    unsigned long v19;  // rdi
    void* v21;  // rsi
    void* v23;  // r13

    v0 = v2;
    v0 = a3;
    v3 = 0;
    if ((int)a0.char_at(a1, 0) != 36)
        core::panicking::panic("assertion failed: inp.char_at(0) == '$'Unexpected base color", 39, &g_14d92e8); /* do not return */
    v4 = 0;
    if ((int)a0.char_at(a1, 0) == 36)
    {
        v5 = 0;
        do
        {
            v6 = v5;
            v4 = v6 + 1;
            v7 = a0.char_at(a1, v4);
            if (v7 == 36 || fish::common::valid_var_name_char(v7))
            {
                v8 = 9;
                if (v6 >= v0)
                    core::panicking::panic_bounds_check(v6, v0, &g_14d91c8); /* do not return */
            }
            else if (v7 != 40)
            {
                v8 = 1;
                if (v6 >= v0)
                    core::panicking::panic_bounds_check(v6, v0, &g_14d91b0); /* do not return */
            }
            else if (v6 < v0)
            {
                *((unsigned int *)((char *)a2 + 0x4 * v6)) = 0x90000;
                return v4;
            }
            else
            {
                core::panicking::panic_bounds_check(v6, v0, &g_14d9198); /* do not return */
            }
            *((unsigned short *)((char *)a2 + 0x4 * v6)) = 0;
            *(2 + (char *)a2 + 0x4 * v6) = v8;
            *(3 + (char *)a2 + 0x4 * v6) = 0;
            if (v6 == 2147483647)
                core::panicking::panic_const::panic_const_add_overflow(&g_14d91e0); /* do not return */
            v5 = v4;
        } while ((int)a0.char_at(a1, v5) == 36);
        v3 = (unsigned int)v4;
    }
    while (true)
    {
        v23 = v4;
        if (fish::common::valid_var_name_char(a0.char_at(a1, v4)))
        {
            v10 = v23;
            v11 = v0;
            if (v23 >= v0)
                core::panicking::panic_bounds_check(v23, v0, &g_14d92d0); /* do not return */
            v12 = v23;
        }
        else
        {
            v13 = a0.char_at(a1, v23);
            if (v13 != 92)
                break;
            v14 = v23;
            v9 = v13 < 92;
            v12 = v14 + 1;
            if ((char)_ccall(4, 24, v14 + 1, 0, (unsigned long long)(char)(v13 < 92)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d91f8); /* do not return */
            if ((int)a0.char_at(a1, v12) != 10)
                break;
            if (v23 >= v0)
                core::panicking::panic_bounds_check(v23, v0, &g_14d9210); /* do not return */
            *((unsigned int *)((char *)a2 + 0x4 * v23)) = 0x90000;
            v10 = v12;
            v11 = v0;
            if (v12 >= v0)
                core::panicking::panic_bounds_check(v12, v0, &g_14d9228); /* do not return */
        }
        *((unsigned int *)((char *)a2 + 0x4 * v12)) = 0x90000;
        v9 = v10 < v11;
        v4 = v12 + 1;
    }
    if (v3 > 0)
    {
        while (true)
        {
            v15 = v3;
            if (a1 < v23)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d9240); /* do not return */
            v16 = fish::parse_util::parse_util_slice_length(a0 + v23 * 4, a1 - v23);
            if ((v16 & 1))
            {
                if (!v17)
                    break;
                if (v23 >= v0)
                    core::panicking::panic_bounds_check(v23, v0, &g_14d9288); /* do not return */
                *((unsigned int *)((char *)a2 + 0x4 * v23)) = 0x90000;
                if ((char)__CFADD__(v17, v23))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d92a0); /* do not return */
                v18 = v17 + v23;
                v19 = v18 - 1;
                if (v18 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14d92a0); /* do not return */
                }
                else if (v19 < v0)
                {
                    *((unsigned int *)((char *)a2 + 4 * v19)) = 0x90000;
                    v23 = v18;
                    v9 = v19 < v0;
                    v3 = v15 - 1;
                    if (v15 == 1)
                        return v18;
                }
                else
                {
                    core::panicking::panic_bounds_check(v19, v0, &g_14d92b8); /* do not return */
                }
            }
            else
            {
                v21 = v23;
                if ((char)_ccall(4, 24, v21 + 1, 0, _ccall(17, (unsigned long long)(v16 & 1), 0, v9)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d9258); /* do not return */
                0.index_mut(v21 + 1, a2, v0, &g_14d9270).spec_fill(v17, 0x10000);
                break;
            }
        }
    }
    return v23;
}
