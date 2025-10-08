long long ruff_python_formatter::comments::placement::handle_expr_if_comment(void* a0, void* a1, unsigned long long a2[3], unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x3c]
    unsigned int v3;  // eax
    unsigned int v4;  // edx
    unsigned int v5;  // r12d
    unsigned long long v6;  // rdi
    unsigned int v7;  // eax
    unsigned long long v8;  // rax
    unsigned int v9;  // ebp
    unsigned long long v10;  // rax
    unsigned long v11;  // rdx
    int v12;  // xmm0
    int v13;  // xmm1
    int v14;  // xmm2

    if ((char)a1[72] != 1)
    {
        a2[1].range();
        v3 = a2[0].range();
        if (v4 > v3)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d2d0); /* do not return */
        ruff_python_trivia::tokenizer::find_only_token_in_range(&v0, v4, v3, 69, a3, a4);
        v5 = (int)a1[64];
        if (*((int *)&v0) < v5 && v5 < (int)a2[0].range())
        {
            v9 = (int)a1[68];
            v10 = a2[0].from();
            *((unsigned long long *)&a0[8]) = v10;
            *((unsigned long *)&a0[16]) = v11;
            *((unsigned int *)&a0[24]) = v5;
            *((unsigned int *)&a0[28]) = v9;
            *((unsigned short *)&a0[32]) = 0;
            *((unsigned long long *)a0) = 94;
            return v10;
        }
        a2[0].range();
        v7 = a2[2].range();
        if (v4 > v7)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d2e8); /* do not return */
        v8 = ruff_python_trivia::tokenizer::find_only_token_in_range(&v1, v4, v7, 63, a3, a4);
        if (*((int *)&v1) < v5)
        {
            v8 = a2[2].range();
            if (v5 < (unsigned int)v8)
            {
                v6 = a2[2];
                v9 = (int)a1[68];
                v10 = v6.from();
                *((unsigned long long *)&a0[8]) = v10;
                *((unsigned long *)&a0[16]) = v11;
                *((unsigned int *)&a0[24]) = v5;
                *((unsigned int *)&a0[28]) = v9;
                *((unsigned short *)&a0[32]) = 0;
                *((unsigned long long *)a0) = 94;
                return v10;
            }
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v12 = *((int128_t *)a1);
    v13 = (int128_t)a1[16];
    v14 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v14;
    a0[16] = v13;
    *(a0) = v12;
    return v8;
}
