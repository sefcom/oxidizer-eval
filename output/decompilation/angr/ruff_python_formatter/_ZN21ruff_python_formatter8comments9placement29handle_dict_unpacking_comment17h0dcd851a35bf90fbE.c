long long ruff_python_formatter::comments::placement::handle_dict_unpacking_comment(void* a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x78]
    int v1;  // [bp-0x68]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x60]
    char v4;  // [bp-0x38]
    unsigned long v6;  // r15
    unsigned long v7;  // r13
    unsigned int v8;  // eax
    unsigned int v9;  // ebp
    unsigned long long v10;  // rax
    unsigned long v11;  // rax
    unsigned int v12;  // ecx
    int v13;  // xmm0
    int v14;  // xmm1
    int v15;  // xmm2

    v6 = (long long)a1[32];
    if (v6 != 94)
    {
        v7 = (long long)a1[40];
        if ((long long)a1[16] == 94)
        {
            *((int128_t *)&v1) = *((int128_t *)a1);
            v8 = (unsigned int)(char)v2.range();
        }
        else
        {
            v2 = (long long)a1[16];
            v3 = (long long)a1[24];
            v2.range();
        }
        v9 = (int)a1[64];
        if (v8 > v9)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d288); /* do not return */
        v0 = v7;
        (char)v2.new(a2, a3, v8, v9);
        v4 = 0;
        v10 = (char)v2.try_fold().eq(1);
        if ((char)v10)
        {
            v11 = (char)a1[72];
            v12 = (int)a1[68];
            *((unsigned long *)&a0[8]) = v6;
            *((unsigned long *)&a0[16]) = v0;
            *((unsigned int *)&a0[24]) = v9;
            *((unsigned int *)&a0[28]) = v12;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v11;
            *((unsigned long long *)a0) = 94;
            return v11;
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
    return v10;
}
