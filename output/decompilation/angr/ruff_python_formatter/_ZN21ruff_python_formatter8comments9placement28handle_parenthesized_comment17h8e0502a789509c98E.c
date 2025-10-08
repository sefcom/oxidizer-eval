long long ruff_python_formatter::comments::placement::handle_parenthesized_comment(uint128_t a0[5], void* a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0xd4]
    void* v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned int v4;  // [bp-0xac]
    unsigned int v5;  // [bp-0xa8]
    unsigned int v6;  // [bp-0xa4]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    char *v9;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long v10;  // [bp-0x88]
    unsigned long v11;  // [bp-0x80]
    unsigned long v12;  // [bp-0x78]
    unsigned long v13;  // [bp-0x70]
    char v14;  // [bp-0x68]
    char v15;  // [bp-0x38]
    unsigned int v17;  // edx
    unsigned long v18;  // rax
    unsigned int v19;  // eax
    unsigned long v20;  // rax
    int v21;  // xmm0
    int v22;  // xmm1
    int v23;  // xmm2
    int v24;  // xmm0
    int v25;  // xmm1
    int v26;  // xmm2

    if (*((int *)a1) != 44 && (long long)a1[16] != 94)
    {
        v10 = (long long)a1[16];
        v11 = (long long)a1[24];
        if ((long long)a1[32] != 94)
        {
            v12 = (long long)a1[32];
            v13 = (long long)a1[40];
            v10.range();
            if (v17 > (int)a1[64])
                core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d0c0); /* do not return */
            v0 = (int)a1[68];
            v4 = (int)a1[64];
            v14.new(v2, v3, v17, v4);
            v15 = 0;
            v7 = v2;
            v8 = v3;
            v9 = &vvar_68{reg 32};
            if (v14.try_fold(&v7).eq(1))
            {
                v18 = (char)a1[72];
                *((unsigned long *)&v1[8]) = v12;
                *((unsigned long *)&v1[16]) = v13;
                *((unsigned int *)&v1[24]) = v4;
                *((unsigned int *)&v1[28]) = v0;
                *((char *)&v1[32]) = 0;
                *((char *)&v1[33]) = v18;
                *((unsigned long long *)v1) = 94;
                return v18;
            }
            v19 = (unsigned int)v12.range();
            if (v0 > v19)
                core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d0d8); /* do not return */
            v5 = v0;
            v6 = v19;
            v14.new(v2, v3, v0, v19);
            v15 = 0;
            v7 = v2;
            v8 = v3;
            v9 = &v5;
            if (!v14.try_fold(&v7).eq(1))
            {
                *((int128_t *)&v1[64]) = (int128_t)a1[64];
                v21 = *((int128_t *)a1);
                v22 = (int128_t)a1[16];
                v23 = (int128_t)a1[32];
                *((int128_t *)&v1[48]) = (int128_t)a1[48];
                v1[32] = v23;
                v1[16] = v22;
                *(v1) = v21;
                return a1;
            }
            v20 = (char)a1[72];
            *((int128_t *)&v1[8]) = *((int128_t *)&v10);
            *((unsigned int *)&v1[24]) = v4;
            *((unsigned int *)&v1[28]) = v0;
            *((char *)&v1[32]) = 0;
            *((char *)&v1[33]) = v20;
            *((unsigned long long *)v1) = 95;
            return v20;
        }
    }
    a0[4] = (int128_t)a1[64];
    v24 = *((int128_t *)a1);
    v25 = (int128_t)a1[16];
    v26 = (int128_t)a1[32];
    a0[3] = (int128_t)a1[48];
    *((void*)&a0[2]) = v26;
    *((void*)&a0[1]) = v25;
    *((void*)&a0[0]) = v24;
    return v10;
}
