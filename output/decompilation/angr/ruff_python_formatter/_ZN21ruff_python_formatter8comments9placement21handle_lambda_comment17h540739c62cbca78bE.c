long long ruff_python_formatter::comments::placement::handle_lambda_comment(void* a0, void* a1, struct_0 *a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x60]
    unsigned int v2[20];  // r15
    unsigned int v3;  // ebp
    unsigned long long v4;  // rax
    unsigned long v5;  // rcx
    char *v6;  // rdi
    unsigned long v7;  // rax
    unsigned int v8;  // ecx
    int v9;  // xmm0
    int v10;  // xmm1
    int v11;  // xmm2

    v2 = a2->field_10;
    v3 = (int)a1[64];
    if (v2)
    {
        if (v3 < v2[18])
        {
            v7 = (char)a1[72];
            v8 = (int)a1[68];
            *((int128_t *)&a0[8]) = *((int128_t *)a1);
            *((unsigned int *)&a0[24]) = v3;
            *((unsigned int *)&a0[28]) = v8;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v7;
            *((unsigned long long *)a0) = 96;
            return v7;
        }
        if (v2[19] < v3)
        {
            v4 = a2->field_0.range();
            if (v3 < (unsigned int)v4)
            {
                v5 = v2[19];
                if ((unsigned int)v5 > v3)
                    core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d360); /* do not return */
                v6 = &v0;
LABEL_703ec0:
                v6.new(a3, a4, v5, v3);
                v4 = v0.try_fold().eq(1);
                if (!(char)v4)
                {
                    v7 = (char)a1[72];
                    v8 = (int)a1[68];
                    *((int128_t *)&a0[8]) = *((int128_t *)a1);
                    *((unsigned int *)&a0[24]) = v3;
                    *((unsigned int *)&a0[28]) = v8;
                    *((char *)&a0[32]) = 0;
                    *((char *)&a0[33]) = v7;
                    *((unsigned long long *)a0) = 96;
                    return v7;
                }
            }
        }
    }
    else
    {
        v4 = a2->field_0.range();
        if (v3 < (unsigned int)v4)
        {
            v5 = a2->field_8;
            if ((unsigned int)v5 > v3)
                core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d378); /* do not return */
            v6 = &v0;
            goto LABEL_703ec0;
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v9 = *((int128_t *)a1);
    v10 = (int128_t)a1[16];
    v11 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v11;
    a0[16] = v10;
    *(a0) = v9;
    return v4;
}
