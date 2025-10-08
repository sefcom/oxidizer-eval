long long ruff_python_formatter::comments::placement::handle_key_value_comment(void* a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x80]
    unsigned long v1;  // [bp-0x78]
    unsigned long v2;  // [bp-0x70]
    unsigned long v3;  // [bp-0x68]
    char v4;  // [bp-0x60]
    unsigned long v6;  // rax
    unsigned int v7;  // eax
    unsigned int v8;  // edx
    unsigned long v9;  // rax
    int v10;  // xmm0
    int v11;  // xmm1
    int v12;  // xmm2

    v6 = (long long)a1[16];
    if ((v6 != 94 & (long long)a1[32] != 94))
    {
        v0 = (long long)a1[32];
        v1 = (long long)a1[40];
        v2 = v6;
        v3 = (long long)a1[24];
        v2.range();
        v7 = (unsigned int)v0.range();
        if (v8 > v7)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d2a0); /* do not return */
        v4.new(a2, a3, v8, v7);
        v6 = v4.try_fold().eq(1);
        if ((char)v6)
        {
            v9 = (char)a1[72];
            *((int128_t *)&a0[8]) = *((int128_t *)a1);
            *((long long *)&a0[24]) = (long long)a1[64];
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v9;
            *((unsigned long long *)a0) = 96;
            return v9;
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v10 = *((int128_t *)a1);
    v11 = (int128_t)a1[16];
    v12 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v12;
    a0[16] = v11;
    *(a0) = v10;
    return v6;
}
