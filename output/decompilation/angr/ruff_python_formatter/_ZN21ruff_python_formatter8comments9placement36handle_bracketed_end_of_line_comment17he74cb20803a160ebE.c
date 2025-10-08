long long ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(void* a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x7c]
    char v1;  // [bp-0x74]
    int v2;  // [bp-0x70]
    char v3;  // [bp-0x60]
    unsigned int v5;  // eax
    unsigned int v6;  // ebp
    unsigned long long v7;  // rax
    int v8;  // xmm0
    int v9;  // xmm1
    int v10;  // xmm2
    unsigned long long v11;  // rax
    unsigned long v12;  // rax
    int v13;  // xmm0
    int v14;  // xmm1
    int v15;  // xmm2

    if (!(char)a1[72])
    {
        *((int128_t *)&v2) = *((int128_t *)a1);
        v5 = (unsigned int)v2.range();
        v6 = (int)a1[64];
        if (v5 > v6)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d3a8); /* do not return */
        v3.new(a2, a3, v5, v6);
        v7 = v0.try_fold(&v3);
        if (v1 == 90)
        {
            *((int128_t *)&a0[64]) = (int128_t)a1[64];
            v8 = *((int128_t *)a1);
            v9 = (int128_t)a1[16];
            v10 = (int128_t)a1[32];
            *((int128_t *)&a0[48]) = (int128_t)a1[48];
            a0[32] = v10;
            a0[16] = v9;
            *(a0) = v8;
            return v7;
        }
        v11 = v0.try_fold(&v3);
        if (v1 == 90)
        {
            v12 = (int)a1[68];
            a0[8] = v2;
            *((unsigned int *)&a0[24]) = v6;
            *((unsigned int *)&a0[28]) = v12;
            *((unsigned short *)&a0[32]) = 0;
            *((unsigned long long *)a0) = 96;
            return v12;
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v13 = *((int128_t *)a1);
    v14 = (int128_t)a1[16];
    v15 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v15;
    a0[16] = v14;
    *(a0) = v13;
    return v11;
}
