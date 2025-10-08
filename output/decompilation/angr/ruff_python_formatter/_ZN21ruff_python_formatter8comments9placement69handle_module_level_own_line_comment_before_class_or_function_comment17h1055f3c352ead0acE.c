long long ruff_python_formatter::comments::placement::handle_module_level_own_line_comment_before_class_or_function_comment(uint128_t a0[5], void* a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x38]
    char v5;  // bpl
    unsigned long v6;  // rax
    unsigned int v7;  // ebx
    unsigned int v8;  // eax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned int v12;  // eax
    unsigned int v13;  // ecx
    int v14;  // xmm0
    int v15;  // xmm1
    int v16;  // xmm2

    v5 = (char)a1[72];
    if (v5)
    {
        v6 = (long long)a1[32];
        if (!v6 == 94 && !(long long)a1[16] == 94)
        {
            v2 = v6;
            v3 = (long long)a1[40];
            v6 = (unsigned int)v6 & 4294967294;
            if ((unsigned int)v6 == 2)
            {
                v1 = (long long)a1[24];
                v7 = (int)a1[68];
                v8 = (unsigned int)v2.range();
                if (v7 > v8)
                    core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d228); /* do not return */
                v9 = v7.from(v8);
                v11 = v9.get(v10, a2, a3);
                if (!v11)
                    core::str::slice_error_fail(a2, a3, v9, v10, &g_97d240); /* do not return */
                v12 = ruff_python_formatter::comments::placement::max_empty_lines(v11, v10);
                v13 = (int)a1[64];
                if (!v12)
                {
                    *((int128_t *)&v0[8]) = *((int128_t *)&v2);
                    *((unsigned int *)&v0[24]) = v13;
                    *((unsigned int *)&v0[28]) = v7;
                    *((char *)&v0[32]) = 0;
                    *((char *)&v0[33]) = v5;
                    *((unsigned long long *)v0) = 94;
                    return a0;
                }
                *((long long *)&v0[8]) = (long long)a1[16];
                *((unsigned long *)&v0[16]) = v1;
                *((unsigned int *)&v0[24]) = v13;
                *((unsigned int *)&v0[28]) = v7;
                *((char *)&v0[32]) = 0;
                *((char *)&v0[33]) = v5;
                *((unsigned long long *)v0) = 95;
                return a0;
            }
        }
    }
    a0[4] = (int128_t)a1[64];
    v14 = *((int128_t *)a1);
    v15 = (int128_t)a1[16];
    v16 = (int128_t)a1[32];
    a0[3] = (int128_t)a1[48];
    *((void*)&a0[2]) = v16;
    *((void*)&a0[1]) = v15;
    *((void*)&a0[0]) = v14;
    return v6;
}
