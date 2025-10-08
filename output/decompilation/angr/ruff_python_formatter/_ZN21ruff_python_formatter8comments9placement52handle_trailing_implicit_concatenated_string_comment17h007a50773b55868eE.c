long long ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment(uint128_t a0[5], void* a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    void* v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    unsigned long v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    char v4;  // [bp-0x60]
    unsigned long v6;  // rax
    unsigned long long v7;  // r15
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned int v10;  // ebp
    unsigned long v11;  // rax
    int v12;  // xmm0
    int v13;  // xmm1
    int v14;  // xmm2
    int v15;  // xmm0
    int v16;  // xmm1
    int v17;  // xmm2

    if (!(char)a1[72])
    {
        v6 = (long long)a1[16];
        if (v6 != 94)
        {
            v6 = ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment::{{closure}}(v6, (long long)a1[24]);
            if (v6 != 4)
            {
                v1 = v6;
                v3.parts(&v1);
                v7 = (unsigned long long)v3.next_back();
                v8 = (unsigned long long)v3.next_back();
                if ((v8 == 4 | v7 == 4) != 1)
                {
                    if (*((int *)(v9 + (2 <= v8) * 8 + 20)) > *((int *)(v2 + (2 <= v7) * 8 + 16)))
                    {
                        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d3f0); /* do not return */
                    }
                    else if (a4.contains_line_break(a5, *((int *)(v9 + (2 <= v8) * 8 + 20)), *((int *)(v2 + (2 <= v7) * 8 + 16))) && (char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(g_488bc0[v1], v9, a2, a3, a4, a5))
                    {
                        v10 = (int)a1[64];
                        if (*((int *)(v2 + (2 <= v7) * 8 + 20)) > v10)
                            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d408); /* do not return */
                        v4.new(a4, a5, *((int *)(v2 + (2 <= v7) * 8 + 20)), v10);
                        if (!v4.try_fold().eq(1))
                        {
                            v11 = (int)a1[68];
                            *((long long *)&v0[8]) = *((long long *)(4755040 + 8 * v7));
                            *((unsigned long *)&v0[16]) = v2;
                            *((unsigned int *)&v0[24]) = v10;
                            *((unsigned int *)&v0[28]) = v11;
                            *((unsigned short *)&v0[32]) = 0;
                            *((unsigned long long *)v0) = 95;
                            return v11;
                        }
                    }
                }
                *((int128_t *)&v0[64]) = (int128_t)a1[64];
                v12 = *((int128_t *)a1);
                v13 = (int128_t)a1[16];
                v14 = (int128_t)a1[32];
                *((int128_t *)&v0[48]) = (int128_t)a1[48];
                v0[32] = v14;
                v0[16] = v13;
                *(v0) = v12;
                return a1;
            }
        }
    }
    a0[4] = (int128_t)a1[64];
    v15 = *((int128_t *)a1);
    v16 = (int128_t)a1[16];
    v17 = (int128_t)a1[32];
    a0[3] = (int128_t)a1[48];
    *((void*)&a0[2]) = v17;
    *((void*)&a0[1]) = v16;
    *((void*)&a0[0]) = v15;
    return v6;
}
