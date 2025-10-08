long long ruff_python_formatter::comments::placement::handle_pattern_keyword_comment(void* a0, void* a1, unsigned int a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x50]
    unsigned int v2;  // ebp
    unsigned long long v3;  // rax
    int v4;  // xmm0
    int v5;  // xmm1
    int v6;  // xmm2
    unsigned long v7;  // rax
    unsigned int v8;  // ecx

    v2 = (int)a1[64];
    if (a2 > v2)
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d270); /* do not return */
    v0.new(a3, a4, a2, v2);
    v3 = v0.try_fold().eq(1);
    if (!(char)v3)
    {
        v7 = (char)a1[72];
        v8 = (int)a1[68];
        *((int128_t *)&a0[8]) = *((int128_t *)a1);
        *((unsigned int *)&a0[24]) = v2;
        *((unsigned int *)&a0[28]) = v8;
        *((char *)&a0[32]) = 0;
        *((char *)&a0[33]) = v7;
        *((unsigned long long *)a0) = 94;
        return v7;
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v4 = *((int128_t *)a1);
    v5 = (int128_t)a1[16];
    v6 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v6;
    a0[16] = v5;
    *(a0) = v4;
    return v3;
}
