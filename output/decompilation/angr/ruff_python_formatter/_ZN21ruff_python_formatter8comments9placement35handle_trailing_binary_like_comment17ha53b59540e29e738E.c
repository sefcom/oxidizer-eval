long long ruff_python_formatter::comments::placement::handle_trailing_binary_like_comment(void* a0, void* a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    char v2;  // [bp-0x88], Other Possible Types: unsigned long
    char v3;  // [bp-0x80]
    unsigned long v4;  // [bp-0x78]
    unsigned long v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    char v7;  // [bp-0x38]
    unsigned long v9;  // rax
    unsigned int v10;  // eax
    unsigned int v11;  // edx
    unsigned long long v12;  // rcx
    char v13;  // cl
    unsigned int v14;  // edx
    int v15;  // xmm0
    int v16;  // xmm1
    int v17;  // xmm2

    v9 = (long long)a1[32];
    if ((v9 != 94 & (long long)a1[16] != 94))
    {
        v0 = (long long)a1[16];
        v1 = (long long)a1[24];
        v4 = v9;
        v5 = (long long)a1[40];
        v0.range();
        v10 = (unsigned int)v4.range();
        if (v11 > v10)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d1f8); /* do not return */
        v6.new(a2, v12, v11, v10);
        v7 = 0;
        v2.try_fold(&v6, &v7);
        if (v3 == 90)
            core::option::expect_failed("Expected a token for the operator\"crates/ruff_python_formatter/src/comments/visitor.rsCompare expression with an unbalanced number of comparators and operations.crates/ruff_python_formatter/src/expression/binary_like.rsinternal error: entered unreachable c", 33, &g_97d210); /* do not return */
        v9 = (int)a1[68];
        if ((unsigned int)v9 < (unsigned int)v2)
        {
            v13 = (char)a1[72];
            v14 = (int)a1[64];
            *((int128_t *)&a0[8]) = *((int128_t *)&v0);
            *((unsigned int *)&a0[24]) = v14;
            *((unsigned int *)&a0[28]) = v9;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v13;
            *((unsigned long long *)a0) = 95;
            return v9;
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v15 = *((int128_t *)a1);
    v16 = (int128_t)a1[16];
    v17 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v17;
    a0[16] = v16;
    *(a0) = v15;
    return v9;
}
