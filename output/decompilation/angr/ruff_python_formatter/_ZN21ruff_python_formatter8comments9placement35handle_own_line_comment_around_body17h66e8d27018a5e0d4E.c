long long ruff_python_formatter::comments::placement::handle_own_line_comment_around_body(uint128_t a0[5], void* a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0xf8]
    unsigned long v1;  // [bp-0xf0]
    char *v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    char v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8]
    char v7;  // [bp-0x80]
    unsigned int v9;  // edx
    unsigned long long v10;  // rax
    int v11;  // xmm0
    int v12;  // xmm1
    int v13;  // xmm2
    int v14;  // xmm0
    int v15;  // xmm1
    int v16;  // xmm2

    if ((char)a1[72] && (long long)a1[16] != 94)
    {
        v0 = (long long)a1[16];
        v1 = (long long)a1[24];
        v0.range();
        if (v9 > (int)a1[64])
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d120); /* do not return */
        v7.new(a2, a3, v9, (int)a1[64]);
        v10 = v5.try_fold(&v7);
        if (v6 != 90)
        {
            a0[4] = (int128_t)a1[64];
            v11 = *((int128_t *)a1);
            v12 = (int128_t)a1[16];
            v13 = (int128_t)a1[32];
            a0[3] = (int128_t)a1[48];
            *((void*)&a0[2]) = v13;
            *((void*)&a0[1]) = v12;
            *((void*)&a0[0]) = v11;
            return v10;
        }
        ruff_python_formatter::comments::placement::handle_own_line_comment_between_branches(&v7, a1, v0, v1, a2, a3);
        v2 = &v0;
        v3 = a2;
        v4 = a3;
        v5.or_else(&v7, &v2);
        return a0.or_else(&v5, a2, a3);
    }
    a0[4] = (int128_t)a1[64];
    v14 = *((int128_t *)a1);
    v15 = (int128_t)a1[16];
    v16 = (int128_t)a1[32];
    a0[3] = (int128_t)a1[48];
    *((void*)&a0[2]) = v16;
    *((void*)&a0[1]) = v15;
    *((void*)&a0[0]) = v14;
    return v0;
}
