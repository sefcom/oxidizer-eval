long long ruff_python_formatter::comments::placement::handle_comprehension_comment(void* a0, void* a1, unsigned long long a2[3], unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x69]
    unsigned int v1;  // [bp-0x68]
    unsigned int v2;  // [bp-0x64]
    int v3;  // [bp-0x48]
    char v4;  // [bp-0x3c]
    unsigned int v6;  // ebp
    unsigned long v7;  // r15
    unsigned long long v8;  // rax
    unsigned long v9;  // r15
    unsigned int v10;  // eax
    unsigned int v11;  // edx
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rax
    unsigned long long v14;  // r13
    unsigned int v15;  // r15d
    unsigned long long v16;  // r13
    unsigned int v17;  // r15d
    unsigned int v18;  // eax
    unsigned long long v19;  // rax
    char v21;  // al
    unsigned long long v23;  // r13
    unsigned long long v24;  // r13
    unsigned int v25;  // r15d
    unsigned int v26;  // eax
    int v28;  // xmm0
    int v29;  // xmm1
    int v30;  // xmm2

    v1 = (int)a1[64];
    v6 = (int)a1[68];
    v7 = a2 + 1;
    v8 = v7.range();
    if (v6 >= (unsigned int)v8)
    {
        v0 = (char)a1[72];
        v7.range();
        v9 = &a2[4 + 1];
        v10 = v9.range();
        if (v11 > v10)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d3c0); /* do not return */
        ruff_python_trivia::tokenizer::find_only_token_in_range(&v4, v11, v10, 71, a3, a4);
        if (v1 < *((int *)&v4))
        {
            v8 = v2;
            if (v0)
            {
                *((unsigned long long *)&a0[8]) = 77;
                *((unsigned long long *[3])&a0[16]) = a2;
                *((unsigned int *)&a0[24]) = v1;
                *((unsigned int *)&a0[28]) = v8;
                *((unsigned short *)&a0[32]) = 0x100;
                *((unsigned long long *)a0) = 96;
                return v8;
            }
        }
        else
        {
            v8 = v2;
            if (v1 < (int)v9.range())
            {
                if (!v0)
                {
                    *((unsigned long long *)&a0[8]) = 77;
                    *((unsigned long long *[3])&a0[16]) = a2;
                    *((unsigned int *)&a0[24]) = v1;
                    *((unsigned int *)&a0[28]) = v8;
                    *((unsigned short *)&a0[32]) = 0;
                    *((unsigned long long *)a0) = 96;
                    return v8;
                }
            }
            else
            {
                v9.range();
                v8 = a2[2];
                if (v8)
                {
                    v12 = a2[1];
                    v13 = v8 * 16;
                    if (v0)
                    {
                        v14 = v13 * 5;
                        do
                        {
                            v16 = v14;
                            v17 = v15;
                            v18 = v12.range();
                            if (v17 > v18)
                                core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d3d8); /* do not return */
                            v19 = ruff_python_trivia::tokenizer::find_only_token_in_range(&v3, v17, v18, 69, a3, a4);
                            if (v17 < v1 && v1 < (int)v3)
                            {
                                *((unsigned long long *)&a0[8]) = 77;
                                *((unsigned long long *[3])&a0[16]) = a2;
                                *((unsigned int *)&a0[24]) = v1;
                                *((unsigned int *)&a0[28]) = v2;
                                *((char *)&a0[32]) = 0;
                                *((char *)&a0[33]) = 1;
                                *((unsigned long long *)a0) = 96;
                                return v19 & 0xffffffffffffff00 | 1;
                            }
                            v8 = v12.range();
                            v12 += 80;
                            v14 = v16 - 80;
                        } while (v16 != 80);
                    }
                    else
                    {
                        v23 = v13 * 5;
                        do
                        {
                            v24 = v23;
                            v25 = v15;
                            v26 = v12.range();
                            if (v25 > v26)
                                core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d3d8); /* do not return */
                            ruff_python_trivia::tokenizer::find_only_token_in_range(&v3, v25, v26, 69, a3, a4);
                            if ((int)v3 < v1 && v1 < (int)v12.range())
                            {
                                *((unsigned long long *)&a0[8]) = 77;
                                *((unsigned long long *[3])&a0[16]) = a2;
                                *((unsigned int *)&a0[24]) = v1;
                                *((unsigned int *)&a0[28]) = v2;
                                *((char *)&a0[32]) = 0;
                                *((char *)&a0[33]) = v21;
                                *((unsigned long long *)a0) = 96;
                                return 0;
                            }
                            v12.range();
                            v8 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range;
                            v12 += 80;
                            v15 = v11;
                            v23 = v24 - 80;
                        } while (v24 != 80);
                    }
                }
            }
        }
    }
    else if (!(char)a1[72])
    {
        *((unsigned long long *)&a0[8]) = 77;
        *((unsigned long long *[3])&a0[16]) = a2;
        *((unsigned int *)&a0[24]) = v1;
        *((unsigned int *)&a0[28]) = v6;
        *((unsigned short *)&a0[32]) = 0;
        *((unsigned long long *)a0) = 96;
        return v1;
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v28 = *((int128_t *)a1);
    v29 = (int128_t)a1[16];
    v30 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v30;
    a0[16] = v29;
    *(a0) = v28;
    return v8;
}
