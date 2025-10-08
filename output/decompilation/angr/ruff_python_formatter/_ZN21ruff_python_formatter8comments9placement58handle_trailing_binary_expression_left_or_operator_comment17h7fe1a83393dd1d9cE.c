long long ruff_python_formatter::comments::placement::handle_trailing_binary_expression_left_or_operator_comment(void* a0, void* a1, unsigned long long a2[2], unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x68]
    char v3;  // [bp-0x38]
    unsigned int v5;  // eax
    unsigned int v6;  // edx
    unsigned long long v7;  // rax
    unsigned int v8;  // ebp
    unsigned int v9;  // r12d
    char v10;  // bpl
    unsigned int v11;  // r14d
    unsigned long long v12;  // rax
    unsigned long long v13[2];  // rdx
    unsigned int v14;  // eax
    unsigned long v15;  // rax
    int v16;  // xmm0
    int v17;  // xmm1
    int v18;  // xmm2

    if ((int)a1[16] != 94 && (long long)a1[32] != 94)
    {
        a2[0].range();
        v5 = a2[1].range();
        if (v6 > v5)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d198); /* do not return */
        v2.new(a3, a4, v6, v5);
        v3 = 0;
        v7 = v0.try_fold(&v2, &v3);
        if (v1 == 90)
            core::option::expect_failed("Expected a token for the operator\"crates/ruff_python_formatter/src/comments/visitor.rsCompare expression with an unbalanced number of comparators and operations.crates/ruff_python_formatter/src/expression/binary_like.rsinternal error: entered unreachable c", 33, &g_97d1b0); /* do not return */
        v8 = *((int *)&v0);
        v9 = (int)a1[68];
        if (v9 < v8)
        {
            v10 = (char)a1[72];
            v11 = (int)a1[64];
            v12 = a2[0].from();
            *((unsigned long long *)&a0[8]) = v12;
            *((unsigned long long *[2])&a0[16]) = v13;
            *((unsigned int *)&a0[24]) = v11;
            *((unsigned int *)&a0[28]) = v9;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v10;
            *((unsigned long long *)a0) = 95;
            return v12;
        }
        else if (!(char)a1[72])
        {
            a2[0].range();
            if (v6 > v8)
                core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d1c8); /* do not return */
            v7 = a3.contains_line_break(a4, a2, v8);
            if ((char)v7)
            {
                v14 = a2[1].range();
                if (v14 < v8)
                    core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d1e0); /* do not return */
                v7 = a3.contains_line_break(a4, v8, v14);
                if ((char)v7)
                {
                    v15 = (int)a1[64];
                    *((unsigned long long *)&a0[8]) = 29;
                    *((unsigned long long *[2])&a0[16]) = a2;
                    *((unsigned int *)&a0[24]) = v15;
                    *((unsigned int *)&a0[28]) = v9;
                    *((unsigned short *)&a0[32]) = 0;
                    *((unsigned long long *)a0) = 96;
                    return v15;
                }
            }
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v16 = *((int128_t *)a1);
    v17 = (int128_t)a1[16];
    v18 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v18;
    a0[16] = v17;
    *(a0) = v16;
    return v7;
}
