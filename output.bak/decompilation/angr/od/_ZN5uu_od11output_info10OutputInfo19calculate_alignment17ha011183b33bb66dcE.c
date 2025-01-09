double uu_od::output_info::OutputInfo::calculate_alignment::ha011183b33bb66dc(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    unsigned long long v0;  // [sp-0xa0]
    int v1;  // [bp-0x98], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x90]
    int v3;  // [bp-0x88], Other Possible Types: struct struct_0 **
    unsigned long long v4;  // [sp-0x80]
    int v5;  // [bp-0x78], Other Possible Types: void*
    int v6;  // [sp-0x68]
    char *v7;  // [sp-0x50]
    unsigned long long v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x40]
    unsigned long long v10;  // [sp-0x38]
    unsigned long long v12;  // rax
    unsigned long long v13;  // r15
    unsigned long long v15;  // rbp
    unsigned long long v16;  // r14
    unsigned long long v17;  // rbp
    unsigned long long v18;  // r12
    void* v19;  // rax
    unsigned long long v20;  // r13
    int v22;  // xmm0
    int v23;  // xmm1
    int v24;  // xmm2
    int v25;  // ymm0

    if (a3 >= 9)
    {
        v0 = a3 * 8;
        v7 = &v0;
        v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v9 = "@";
        v10 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v1 = &g_543668;
        v2 = 3;
        v5 = 0;
        v3 = &v7;
        v4 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v1, &g_543698); /* do not return */
    }
    *((int128_t *)&v6) = 0;
    *((int128_t *)&v5) = 0;
    *((int128_t *)&v3) = 0;
    *((int128_t *)&v1) = 0;
    v12 = a2[3](a1);
    if (!v12)
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(&g_5436b0); /* do not return */
    v13 = v12;
    if (v13 > a3)
    {
        v22 = (int128_t)v1;
        v23 = (int128_t)v3;
        v24 = (int128_t)v5;
        *((void*)&a0[3]) = v6;
        *((void*)&a0[2]) = v24;
        *((void*)&a0[1]) = v23;
        *((void*)&a0[0]) = v22;
        return (unsigned long long)(v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22);
    }
    v15 = ((unsigned int)((a3 & 4294967295 & 4294967295) % (v13 & 65535)) CONCAT (unsigned int)((a3 & 4294967295 & 4294967295) / (v13 & 65535))) & 65535;
    v16 = a4 - v15 * a2[4](a1);
    do
    {
        v17 = v15;
        v18 = (!v16 >> 32 ? (unsigned long long)((0 CONCAT v16) % v17) CONCAT (unsigned long long)((0 CONCAT v16) / v17) : ((unsigned int)((0 CONCAT (unsigned int)v16) % (v17 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v16) / (v17 & 4294967295))) & 4294967295 & 4294967295);
        v19 = 0;
        do
        {
            v20 = v13 * v19;
            if (v20 > 7)
                core::panicking::panic_bounds_check::h25a5330941572dd1(v20, 8, &g_5436c8); /* do not return */
        } while ((v19 = ::0x4d7d00::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v19), (&v1)[v20] = (unsigned long)((&v1)[v20] + v18), v16 -= v18, v19 < v17));
        v13 *= 2;
        v15 = v17 >> 1;
    } while (v17 >= 2);
}
