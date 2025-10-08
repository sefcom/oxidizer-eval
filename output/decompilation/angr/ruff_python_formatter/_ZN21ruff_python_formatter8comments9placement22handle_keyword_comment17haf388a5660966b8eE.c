long long ruff_python_formatter::comments::placement::handle_keyword_comment(void* a0, void* a1, struct_0 *a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x60]
    unsigned long v2;  // rax
    unsigned int v3;  // eax
    unsigned int v4;  // ebp
    unsigned long long v5;  // rax
    int v6;  // xmm0
    int v7;  // xmm1
    int v8;  // xmm2
    unsigned long v9;  // rax
    unsigned int v10;  // ecx

    v2 = &a2->padding_0[80];
    if (a2->field_6f == 218)
        v2 = 0;
    v3 = v2.map_or(a2->field_78);
    v4 = (int)a1[64];
    if (v3 > v4)
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d258); /* do not return */
    v0.new(a3, a4, v3, v4);
    v5 = v0.try_fold().eq(1);
    if (!(char)v5)
    {
        v9 = (char)a1[72];
        v10 = (int)a1[68];
        *((int128_t *)&a0[8]) = *((int128_t *)a1);
        *((unsigned int *)&a0[24]) = v4;
        *((unsigned int *)&a0[28]) = v10;
        *((char *)&a0[32]) = 0;
        *((char *)&a0[33]) = v9;
        *((unsigned long long *)a0) = 94;
        return v9;
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v6 = *((int128_t *)a1);
    v7 = (int128_t)a1[16];
    v8 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v8;
    a0[16] = v7;
    *(a0) = v6;
    return v5;
}
