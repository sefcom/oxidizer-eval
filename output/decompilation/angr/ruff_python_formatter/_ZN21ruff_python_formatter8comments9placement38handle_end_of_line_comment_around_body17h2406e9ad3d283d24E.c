long long ruff_python_formatter::comments::placement::handle_end_of_line_comment_around_body(void* a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x80]
    unsigned long v1;  // [bp-0x78]
    char v2;  // [bp-0x6c]
    char v3;  // [bp-0x64]
    char v4;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long v5;  // [bp-0x58]
    unsigned long long v7;  // r12
    unsigned int v8;  // ebp
    unsigned int v9;  // eax
    unsigned long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long v16;  // rax
    int v17;  // xmm0
    int v18;  // xmm1
    int v19;  // xmm2

    if ((char)a1[72] != 1)
    {
        if ((long long)a1[32] != 94)
        {
            v0 = (long long)a1[32];
            v1 = (long long)a1[40];
            v7 = (long long)a1[8];
            if ((char)v0.is_first_statement_in_body(*((long long *)a1), v7))
            {
                v8 = (int)a1[68];
                v9 = (unsigned int)v0.range();
                if (v8 > v9)
                    core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d108); /* do not return */
                v4.new(a2, a3, v8, v9);
                v2.try_fold(&v4);
                if (v3 == 90)
                {
                    v10 = (int)a1[64];
                    *((long long *)&a0[8]) = *((long long *)a1);
                    *((unsigned long long *)&a0[16]) = v7;
                    *((unsigned int *)&a0[24]) = v10;
                    *((unsigned int *)&a0[28]) = v8;
                    *((unsigned short *)&a0[32]) = 0;
                    *((unsigned long long *)a0) = 96;
                    return v10;
                }
            }
        }
        v11 = (long long)a1[16];
        if (v11 != 94)
        {
            v4 = v11;
            v5 = (long long)a1[24];
            v11 = v4.last_child_in_body();
            if (v11 != 94)
            {
                v13 = v11.fold(v12);
                if (v13 == 94)
                {
                    v14 = v11;
                    if (v13 != 94)
                        goto LABEL_701df0;
LABEL_701def:
                }
                else
                {
                    v14 = v13;
                    if (v13 == 94)
                        goto LABEL_701def;
LABEL_701df0:
                }
                *((unsigned long long *)&a0[8]) = v14;
                *((unsigned long long *)&a0[16]) = v15;
                v16 = (long long)a1[64];
                *((unsigned long *)&a0[24]) = v16;
                *((unsigned short *)&a0[32]) = 0;
                *((unsigned long long *)a0) = 95;
                return v16;
            }
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v17 = *((int128_t *)a1);
    v18 = (int128_t)a1[16];
    v19 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v19;
    a0[16] = v18;
    *(a0) = v17;
    return v11;
}
