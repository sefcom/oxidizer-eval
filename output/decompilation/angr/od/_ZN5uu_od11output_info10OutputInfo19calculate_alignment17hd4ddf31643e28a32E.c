double uu_od::output_info::OutputInfo::calculate_alignment(long long a0, long long a1, long long a2, long long a3)
{
    unsigned long long v0;  // [bp-0x90]
    int v1;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x80]
    int v3;  // [bp-0x78], Other Possible Types: char *
    unsigned long long v4;  // [bp-0x70]
    void* v5;  // [bp-0x68], Other Possible Types: uint128_t
    uint128_t v6;  // [bp-0x58]
    char *v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    unsigned long long v12;  // rax
    unsigned long long v13;  // r15
    unsigned long long v14;  // rsi
    unsigned long long v15;  // r14
    unsigned long long v16;  // rsi
    unsigned long v17;  // rax
    unsigned long long v18;  // rcx
    void* v19;  // rdi
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rcx
    int v23;  // xmm0
    int v24;  // xmm1

    if (a2 >= 9)
    {
        v0 = a2 * 8;
        v7 = &v0;
        v8 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v9 = "@";
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v1 = &g_502560;
        v2 = 3;
        v5 = 0;
        v3 = &v7;
        v4 = 2;
        core::panicking::panic_fmt(&v1, &g_502590); /* do not return */
    }
    v6 = 0;
    v5 = 0;
    *((uint128_t *)&v3) = 0;
    *((uint128_t *)&v1) = 0;
    v12 = a1.byte_size();
    if (!v12)
        core::panicking::panic_const::panic_const_div_by_zero(&g_5025a8); /* do not return */
    v13 = v12;
    if (v12 <= a2)
    {
        v14 = ((unsigned int)((a2 & 4294967295) % (v13 & 65535)) CONCAT (unsigned int)((a2 & 4294967295) / (v13 & 65535))) & 65535;
        v15 = a3 - v14 * a1.print_width();
        do
        {
            v16 = v14;
            v17 = (!v15 >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v15) % (v16 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v15) / (v16 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT v15) % v16) CONCAT (unsigned long long)((0 CONCAT v15) / v16));
            v18 = v16 + (v16 < 1);
            v19 = 0;
            do
            {
                v20 = v18;
                if (v19 > 7)
                    core::panicking::panic_bounds_check(v19, 8, &g_5025c0); /* do not return */
                *((unsigned long *)(&(char)v1 + 0x8 * v19)) = *((long long *)(&(char)v1 + 0x8 * v19)) + v17;
                v15 -= v17;
                v19 += v13;
                v21 = v20 - 1;
                v18 = v21;
            } while (v20 != 1);
            v13 *= 2;
            v14 = v16 >> 1;
        } while (v16 >= 2);
    }
    v23 = (int128_t)v1;
    v24 = (int128_t)v3;
    a0[3] = 0;
    a0[2] = 0;
    *((void*)&a0[1]) = v24;
    *((void*)&a0[0]) = v23;
    return (unsigned long long)v23;
}
