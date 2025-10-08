long long ruff_python_formatter::comments::placement::handle_unary_op_comment(void* a0, void* a1, struct_0 *a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x7c], Other Possible Types: unsigned long long
    char v1;  // [bp-0x74], Other Possible Types: unsigned int
    unsigned long long v2;  // [bp-0x70]
    char v3;  // [bp-0x68], Other Possible Types: unsigned int
    char v4;  // [bp-0x60]
    unsigned int v6;  // eax
    unsigned long long v7;  // rax
    unsigned int v8;  // ecx
    unsigned long v9;  // rax
    unsigned int v10;  // edx
    int v11;  // xmm0
    int v12;  // xmm1
    int v13;  // xmm2

    v6 = a2->field_0.range();
    if (a2->field_8 > v6)
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d390); /* do not return */
    v4.new(a3, a4, a2->field_8, v6);
    v0.try_fold(&v4);
    v0.try_fold(&v4);
    if (v1 == 90)
    {
        v3 = 90;
    }
    else
    {
        v3 = v1;
        v2 = v0;
    }
    v7 = v2.map_or((unsigned int)a2->field_0.range());
    v8 = (int)a1[68];
    if (v8 >= (unsigned int)v7)
    {
        *((int128_t *)&a0[64]) = (int128_t)a1[64];
        v11 = *((int128_t *)a1);
        v12 = (int128_t)a1[16];
        v13 = (int128_t)a1[32];
        *((int128_t *)&a0[48]) = (int128_t)a1[48];
        a0[32] = v13;
        a0[16] = v12;
        *(a0) = v11;
        return v7;
    }
    v9 = (char)a1[72];
    v10 = (int)a1[64];
    *((unsigned long long *)&a0[8]) = 30;
    *((struct_0 **)&a0[16]) = a2;
    *((unsigned int *)&a0[24]) = v10;
    *((unsigned int *)&a0[28]) = v8;
    *((char *)&a0[32]) = 0;
    *((char *)&a0[33]) = v9;
    *((unsigned long long *)a0) = 94;
    return v9;
}
