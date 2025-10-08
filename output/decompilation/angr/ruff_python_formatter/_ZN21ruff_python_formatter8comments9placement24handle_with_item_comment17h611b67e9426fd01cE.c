long long ruff_python_formatter::comments::placement::handle_with_item_comment(void* a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    char v4;  // [bp-0x3c]
    int v6;  // xmm0
    int v7;  // xmm1
    int v8;  // xmm2
    void* v9;  // r15
    unsigned int v10;  // eax
    unsigned int v11;  // edx
    unsigned long v12;  // rax
    char v13;  // cl
    unsigned long long v14;  // rdx
    void* v15;  // r15
    unsigned int v17;  // edi

    if (!((long long)a1[32] != 94 & (long long)a1[16] != 94))
    {
        *((int128_t *)&a0[64]) = (int128_t)a1[64];
        v6 = *((int128_t *)a1);
        v7 = (int128_t)a1[16];
        v8 = (int128_t)a1[32];
        *((int128_t *)&a0[48]) = (int128_t)a1[48];
        a0[32] = v8;
        a0[16] = v7;
        *(a0) = v6;
        return v0;
    }
    v2 = (long long)a1[16];
    v3 = (long long)a1[24];
    v0 = (long long)a1[32];
    v1 = (long long)a1[40];
    v9 = &v2;
    v2.range();
    v10 = (unsigned int)v0.range();
    if (v11 > v10)
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d318); /* do not return */
    ruff_python_trivia::tokenizer::find_only_token_in_range(&v4, v11, v10, 53, a2, a3);
    v12 = (int)a1[68];
    v13 = (char)a1[72];
    if ((unsigned int)v12 < *((int *)&v4))
    {
        v14 = 95;
        v15 = v9;
    }
    else if (v13)
    {
        v14 = 94;
        v15 = &v0;
        v3 = v1;
    }
    else
    {
        v3 = (long long)a1[8];
        v14 = 96;
        v13 = 0;
        v15 = a1;
    }
    v17 = (int)a1[64];
    *((long long *)&a0[8]) = *((long long *)v15);
    *((unsigned long *)&a0[16]) = v3;
    *((unsigned int *)&a0[24]) = v17;
    *((unsigned int *)&a0[28]) = v12;
    *((char *)&a0[32]) = 0;
    *((char *)&a0[33]) = v13;
    *((unsigned long long *)a0) = v14;
    return v12;
}
