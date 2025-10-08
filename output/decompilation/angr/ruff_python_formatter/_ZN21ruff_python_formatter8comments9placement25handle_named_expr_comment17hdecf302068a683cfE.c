long long ruff_python_formatter::comments::placement::handle_named_expr_comment(void* a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    char v4;  // [bp-0x3c]
    int v6;  // xmm0
    int v7;  // xmm1
    int v8;  // xmm2
    void* v9;  // r13
    unsigned int v10;  // eax
    unsigned int v11;  // edx
    unsigned int v12;  // eax
    unsigned int v13;  // ecx
    void* v14;  // 4096
    void* v15;  // r13
    unsigned long long *v16;  // rax
    char v17;  // cl
    unsigned long v18;  // rdi
    unsigned long long v19;  // rax

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
        return v2;
    }
    v0 = (long long)a1[16];
    v1 = (long long)a1[24];
    v2 = (long long)a1[32];
    v3 = (long long)a1[40];
    v9 = &v0;
    v0.range();
    v10 = (unsigned int)v2.range();
    if (v11 > v10)
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d348); /* do not return */
    ruff_python_trivia::tokenizer::find_only_token_in_range(&v4, v11, v10, 48, a2, a3);
    v12 = (int)a1[68];
    v13 = *((int *)&v4);
    if (v13 <= v12)
        v14 = a1;
    else
        v14 = v9;
    v15 = v14;
    v16 = &v1;
    v17 = (char)a1[72];
    v18 = (long long)a1[64];
    if (v13 <= v12)
        v16 = a1 + 8;
    v19 = *(v16);
    *((long long *)&a0[8]) = *((long long *)v15);
    *((unsigned long long *)&a0[16]) = v19;
    *((unsigned long *)&a0[24]) = v18;
    *((char *)&a0[32]) = 0;
    *((char *)&a0[33]) = v17;
    *((unsigned long long *)a0) = 96 - (v12 < v13);
    return v19;
}
