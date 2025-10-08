long long ruff_python_formatter::comments::placement::handle_pattern_match_mapping_comment(void* a0, void* a1, struct_0 *a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    unsigned int v4;  // ebx
    unsigned long v5;  // rax
    unsigned int v6;  // ecx
    unsigned int v7;  // eax
    unsigned long long v8;  // rax
    unsigned long v9;  // rax
    unsigned int v10;  // ecx
    int v11;  // xmm0
    int v12;  // xmm1
    int v13;  // xmm2
    int v14;  // xmm0
    int v15;  // xmm1
    int v16;  // xmm2
    unsigned long v17;  // rax

    if ((int)a1[32] == 94 && a2->field_4f != 218)
    {
        v4 = (int)a1[64];
        if (v4 > a2->field_34)
        {
            v5 = (char)a1[72];
            v6 = (int)a1[68];
            *((int128_t *)&a0[8]) = *((int128_t *)a1);
            *((unsigned int *)&a0[24]) = v4;
            *((unsigned int *)&a0[28]) = v6;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v5;
            *((unsigned long long *)a0) = 96;
            return v5;
        }
        if ((long long)a1[16] == 94)
        {
            *((int128_t *)&v0) = *((int128_t *)a1);
            v7 = (unsigned int)(char)v0.range();
        }
        else
        {
            v1 = (long long)a1[16];
            v2 = (long long)a1[24];
            v1.range();
        }
        if (v7 > v4)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d330); /* do not return */
        (char)v0.new(a3, a4, v7, v4);
        v8 = (char)v0.try_fold().eq(1);
        if (!(char)v8)
        {
            *((int128_t *)&a0[64]) = (int128_t)a1[64];
            v11 = *((int128_t *)a1);
            v12 = (int128_t)a1[16];
            v13 = (int128_t)a1[32];
            *((int128_t *)&a0[48]) = (int128_t)a1[48];
            a0[32] = v13;
            a0[16] = v12;
            *(a0) = v11;
            return v8;
        }
        v9 = (char)a1[72];
        v10 = (int)a1[68];
        *((int128_t *)&a0[8]) = *((int128_t *)a1);
        *((unsigned int *)&a0[24]) = v4;
        *((unsigned int *)&a0[28]) = v10;
        *((char *)&a0[32]) = 0;
        *((char *)&a0[33]) = v9;
        *((unsigned long long *)a0) = 96;
        return v9;
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v14 = *((int128_t *)a1);
    v15 = (int128_t)a1[16];
    v16 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v16;
    a0[16] = v15;
    *(a0) = v14;
    return v17;
}
