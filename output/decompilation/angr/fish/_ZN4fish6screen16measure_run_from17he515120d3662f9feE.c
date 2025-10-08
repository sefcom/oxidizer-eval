long long fish::screen::measure_run_from(unsigned long long a0, unsigned long long a1, void* a2, void* a3, unsigned long long a4[3])
{
    unsigned int v0;  // [bp-0x158]
    void* v1;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v3;  // rax
    void* v4;  // r12
    void* v5;  // cc_ndep
    void* v6;  // r12
    unsigned int v7;  // eax
    void* v8;  // rax
    unsigned long long v9;  // cc_op
    void* v10;  // cc_dep1
    unsigned long long v11;  // cc_dep2
    void* v12;  // r14
    void* v13;  // r12
    void* v14;  // cc_dep1
    unsigned int v16;  // eax
    unsigned long v17;  // cc_dep1
    void* v19;  // r12

    v1 = v3;
    v1 = a3;
    v4 = 0;
    while (true)
    {
        v6 = v4;
        v7 = a0.char_at(a1, a2);
        if (v7 <= 13)
        {
            v0 = 13313;
            v5 = 0;
            if ((*((char *)&v0 + ((v7 & 31) >> 3)) >> ((char)v7 & 31 & 7) & 1))
                break;
        }
        if ((int)a0.char_at(a1, a2) != 27)
        {
            v16 = a0.char_at(a1, a2);
            v9 = 7;
            v17 = v16;
            v11 = 9;
            if (v16 == 9)
            {
                v13 = fish::screen::next_tab_stop(v6);
                v12 = a2;
                v14 = v17;
            }
            else
            {
                v11 = fish::wcstringutil::fish_wcwidth_visible((unsigned int)a0.char_at(a1, a2));
                if (v11 >= 0)
                {
                    v9 = 4;
                    v12 = a2;
                    v13 = v6 + v11;
                    v14 = v6;
                    if ((char)__CFADD__(v14, v11))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e1fc0); /* do not return */
                }
                else
                {
                    v9 = 8;
                    v11 = 1;
                    v19 = v6 - 1;
                    if (v6 < 1)
                        v19 = 0;
                    v12 = a2;
                    v13 = v19;
                    v14 = v6;
                }
            }
        }
        else if (a1 >= a2)
        {
            v8 = a4.escape_code_length(a2 * 4 + a0, a1 - a2);
            v9 = 20;
            v10 = v8;
            v11 = 0;
            v12 = a2;
            v13 = v6;
            v14 = v10;
            if (v8)
            {
                v5 = _ccall(20, v10, 0, v5);
                v11 = v8 - 1;
                v9 = 4;
                v12 = a2 + v11;
                v13 = v6;
                v14 = a2;
                if ((char)__CFADD__(v14, v11))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e1f90); /* do not return */
            }
        }
        else
        {
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1fa8); /* do not return */
        }
        v5 = _ccall(v9, v14, v11, v5);
        a2 = v12 + 1;
        v4 = v13;
        if ((char)_ccall(4, 24, v12 + 1, 0, _ccall(v9, v14, v11, v5)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e1fd8); /* do not return */
    }
    if (v1)
        *((void* *)v1) = a2;
    return v6;
}
