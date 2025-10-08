long long ruff_python_formatter::comments::placement::handle_trailing_expression_starred_star_end_of_line_comment(void* a0, void* a1, struct_0 *a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x58]
    unsigned int v2;  // ebp
    unsigned long long v3;  // rax
    unsigned long v4;  // rax
    unsigned int v5;  // ecx
    int v6;  // xmm0
    int v7;  // xmm1
    int v8;  // xmm2

    if ((int)a1[32] != 94)
    {
        v2 = (int)a1[64];
        if (a2->field_8 > v2)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d300); /* do not return */
        v0.new(a3, a4, a2->field_8, v2);
        v3 = v0.try_fold().eq(1);
        if (!(char)v3)
        {
            v4 = (char)a1[72];
            v5 = (int)a1[68];
            *((unsigned long long *)&a0[8]) = 54;
            *((struct_0 **)&a0[16]) = a2;
            *((unsigned int *)&a0[24]) = v2;
            *((unsigned int *)&a0[28]) = v5;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v4;
            *((unsigned long long *)a0) = 94;
            return v4;
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v6 = *((int128_t *)a1);
    v7 = (int128_t)a1[16];
    v8 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v8;
    a0[16] = v7;
    *(a0) = v6;
    return v3;
}
