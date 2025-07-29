long long uu_od::output_info::OutputInfo::calculate_alignment(uint128_t a0[4], unsigned long long a1, struct struct_1 *a2[5], unsigned long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0xa0]
    int v1;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x90]
    int v3;  // [bp-0x88], Other Possible Types: char *
    unsigned long long v4;  // [bp-0x80]
    void* v5;  // [bp-0x78], Other Possible Types: uint128_t
    uint128_t v6;  // [bp-0x68]
    char *v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned long long v12;  // rax
    unsigned long long v13;  // r15
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbp
    unsigned long long v16;  // r14
    unsigned long long v17;  // rbp
    unsigned long v18;  // r12
    void* v19;  // rax
    unsigned long long v20;  // r13
    int v22;  // xmm0
    int v23;  // xmm1

    if (a3 >= 9)
    {
        v0 = a3 * 8;
        v7 = &v0;
        v8 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v9 = "@";
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v1 = &g_596418;
        v2 = 3;
        v5 = 0;
        v3 = &v7;
        v4 = 2;
        core::panicking::panic_fmt(&v1, &g_596448); /* do not return */
    }
    v6 = 0;
    v5 = 0;
    *((uint128_t *)&v3) = 0;
    *((uint128_t *)&v1) = 0;
    v12 = a2[3](a1);
    if (!v12)
        core::panicking::panic_const::panic_const_div_by_zero(&g_596460); /* do not return */
    v13 = v12;
    v14 = a2[4](a1);
    if (v13 <= a3)
    {
        v16 = a4 - (((unsigned int)((a3 & 4294967295) % (v13 & 65535)) CONCAT (unsigned int)((a3 & 4294967295) / (v13 & 65535))) & 65535) * v14;
        do
        {
            v17 = v15;
            v18 = (!v16 >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v16) % (v17 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v16) / (v17 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT v16) % v17) CONCAT (unsigned long long)((0 CONCAT v16) / v17));
            v19 = 0;
            do
            {
                v20 = v13 * v19;
                if (v20 > 7)
                    core::panicking::panic_bounds_check(v20, 8, &g_596478); /* do not return */
                v19 = v19.forward_unchecked();
                *((unsigned long *)&(&(char)v1)[8 * v20]) = *((long long *)&(&(char)v1)[8 * v20]) + v18;
                v16 -= v18;
            } while (v19 < v17);
            v13 *= 2;
            v15 = v17 >> 1;
        } while (v17 >= 2);
    }
    v22 = (int128_t)v1;
    v23 = (int128_t)v3;
    a0[3] = 0;
    a0[2] = 0;
    *((void*)&a0[1]) = v23;
    *((void*)&a0[0]) = v22;
    return a0;
}
