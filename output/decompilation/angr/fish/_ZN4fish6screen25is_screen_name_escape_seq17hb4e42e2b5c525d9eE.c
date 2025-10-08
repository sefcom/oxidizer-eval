long long fish::screen::is_screen_name_escape_seq(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned long v4;  // rdx
    unsigned long long v5;  // rbp
    unsigned long long v6;  // cc_ndep
    unsigned long long v7;  // rdx
    unsigned long v8;  // rdx
    unsigned long v9;  // rdi
    void* v10;  // rcx
    void* v11;  // rax
    unsigned long v12;  // rdi
    unsigned long v13;  // rsi
    unsigned int v15;  // cc_dep1

    v0 = v2;
    if ((int)a0.char_at(a1, 1) != 107)
    {
        if (!a0.starts_with(a1, "P", 6))
            return 0;
        if (a1 >= 2)
        {
            v5 = 2;
            do
            {
                if (!((char)a0 + v5 * 4.find(a1 - v5, &g_54a3b8, 2) & 1))
                    return 1;
                v7 = v5;
                v4 = v7 + v8;
                if ((char)__CFADD__(v7, v8))
                {
LABEL_140ef3a:
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e1f00); /* do not return */
                }
                if ((char)_ccall(4, 4, v7, v8, v6))
                {
                    v4 = 0;
LABEL_140f063:
                    if ((char)__CFADD__(v4, 2))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e1f60); /* do not return */
                    return 1;
                }
                v9 = v4 - 1;
                if (v8 + v5 - 1 >= a1)
                    core::panicking::panic_bounds_check(v9, a1, &g_14e1f18); /* do not return */
                v10 = v4 * 4 + a0 - 4;
                v11 = 0;
                v12 = v9;
                if (*((int *)v10) == 27)
                {
                    while (true)
                    {
                        v13 = v12;
                        if (v9 == v11)
                            break;
                        if ((int)v10[4] == 27)
                        {
                            if (v13 != 1)
                            {
                                if (((unsigned int)~(v11 & 4294967295 ^ 2) & ((unsigned int)v11 ^ (unsigned int)v11 + 2)) < 0)
                                    core::panicking::panic_const::panic_const_add_overflow(&g_14e1f30); /* do not return */
                                v10 -= 8;
                                v11 += 2;
                                v12 = v13 - 2;
                                if (*((int *)v10) != 27)
                                    break;
                            }
                            else
                            {
                                v11 = (unsigned int)v11 + 1;
                                break;
                            }
                        }
                        else
                        {
                            v11 = (unsigned int)v11 + 1;
                            break;
                        }
                    }
                }
                v15 = (unsigned int)v11 & 2147483649;
                if (v15 != 1)
                    goto LABEL_140f063;
                v6 = v15 < 1;
                v5 = v4 + 1;
                if ((char)_ccall(4, 24, v4 + 1, 0, (unsigned long long)(char)(v15 < 1)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e1f48); /* do not return */
            } while (a1 >= v5);
        }
    }
    else if (a1 >= 2)
    {
        if (!((char)a0 + 8.find(a1 - 2, &g_54a3b8, 2) & 1))
            return 1;
        v4 = v3 + 2;
        if ((char)__CFADD__(v3, 2))
            goto LABEL_140ef3a;
        goto LABEL_140f063;
    }
    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1f78); /* do not return */
}
