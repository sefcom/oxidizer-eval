long long fish::builtins::string::width_without_escapes(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [sp-0x40]
    unsigned int v3;  // eax
    void* v4;  // r15
    unsigned int v5;  // edx
    unsigned int v6;  // ebp
    unsigned int v7;  // ebp
    unsigned long long v8;  // rax
    unsigned long long v10;  // rdx
    unsigned long long v11;  // 4096
    unsigned long long v12;  // r12
    unsigned long long v13;  // r14
    unsigned long long v14;  // r12
    char v15;  // al
    unsigned long v16;  // cc_dep1
    unsigned long long v17;  // cc_ndep
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned int v20;  // eax
    unsigned int v21;  // edx
    unsigned int v22;  // r14d
    void* v23;  // r15
    unsigned long long v24;  // rax
    unsigned long v25;  // rbx

    if (a1 < a2)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d4400); /* do not return */
    v0 = a0 + a2 * 4;
    v1 = a0 + a1 * 4;
    if ((int)v0.next() == 2)
    {
        v4 = 0;
    }
    else
    {
        v4 = 0;
        do
        {
            v7 = v6;
            v3.unwrap(v7, &g_14bd1b0);
            v8 = fish::wcstringutil::fish_wcwidth_visible(v7);
            v4 = v4;
            if (v4 > 0 || v8 > 0)
            {
                v4 += v8;
                if ((char)_ccall(0, 4, v4, v8, v17))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d44d8); /* do not return */
            }
            v3 = v0.next();
            v6 = v5;
        } while (v3 != 2);
    }
    if (((char)a0.slice_from(a1, a2).find_char(v10, 27) & 1))
    {
        v11 = a1;
        do
        {
            v11 = v13;
            v14 = v12 + a2;
            if ((char)__CFADD__(v12, a2))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d4418); /* do not return */
            v15 = fish::screen::escape_code_length(a0.slice_from(v11, v14), v10);
            v16 = v15 & 1;
            if (!(v15 & 1))
            {
                v17 = _ccall(17, v16, 0, v17);
                a2 = v14 + 1;
                if ((char)_ccall(4, 24, v14 + 1, 0, _ccall(17, v16, 0, v17)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d44a8); /* do not return */
            }
            else
            {
                v18 = v14;
                v19 = v18 + v10;
                if ((char)__CFADD__(v18, v10))
                {
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d4430); /* do not return */
                }
                else if (v19 <= v11)
                {
                    v0 = a0 + v14 * 4;
                    v1 = a0 + v19 * 4;
                    if ((int)v0.next() != 2)
                    {
                        v21 = v10;
                        do
                        {
                            v22 = v21;
                            v23 = v4;
                            v20.unwrap(v22, &g_14bd1b0);
                            v24 = fish::wcstringutil::fish_wcwidth_visible(v22);
                            v4 = v23 - v24;
                            if ((char)(((v23 ^ v24) & (v23 ^ v23 - v24)) >> 63))
                                core::panicking::panic_const::panic_const_sub_overflow(&g_14d4490); /* do not return */
                            v20 = v0.next();
                            v21 = v10;
                        } while (v20 != 2);
                    }
                    if (!v10)
                        core::panicking::panic_const::panic_const_sub_overflow(&g_14d4460); /* do not return */
                    v17 = _ccall(20, v10, 0, v17);
                    v25 = v10 - 1;
                    a2 = v14 + v25;
                    v11 = a1;
                    if ((char)__CFADD__(v14, v25))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d4478); /* do not return */
                }
                else
                {
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d4448); /* do not return */
                }
            }
            v11 = v13;
            v12 = v10;
        } while (((char)a0.slice_from(v11, a2).find_char(v10, 27) & 1));
    }
    v4 >> 63.expect();
    return v4;
}
