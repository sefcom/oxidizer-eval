double uu_od::output_info::OutputInfo::calculate_alignment::hebff24f9e2f724c1(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    unsigned long v0;  // [sp-0xa0], Other Possible Types: unsigned long long
    int v1;  // [bp-0x98], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x90]
    int v3;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x80]
    int v5;  // [bp-0x78], Other Possible Types: void*
    int v6;  // [sp-0x68]
    unsigned long v7;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x40]
    unsigned long long v10;  // [sp-0x38]
    unsigned long long v12;  // rax
    unsigned long long v13;  // r15
    unsigned long long v15;  // rsi
    unsigned long long v16;  // r14
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rax
    void* v20;  // rdi
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rcx
    int v24;  // xmm0
    int v25;  // xmm1
    int v26;  // xmm2
    int v27;  // ymm0

    if (a3 >= 9)
    {
        v0 = a3 * 8;
        v7 = &v0;
        v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v9 = "@";
        v10 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v1 = &anon.a94949093028d2d8e47277762c52d369.20.llvm.199664298606218765;
        v2 = 3;
        v5 = 0;
        v3 = &v7;
        v4 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v1); /* do not return */
    }
    *((int128_t *)&v6) = 0;
    *((int128_t *)&v5) = 0;
    *((int128_t *)&v3) = 0;
    *((int128_t *)&v1) = 0;
    v12 = a2[3](a1);
    if (!v12)
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
    v13 = v12;
    if (v13 > a3)
    {
        v24 = (int128_t)v1;
        v25 = (int128_t)v3;
        v26 = (int128_t)v5;
        *((void*)&a0[3]) = v6;
        *((void*)&a0[2]) = v26;
        *((void*)&a0[1]) = v25;
        *((void*)&a0[0]) = v24;
        return (unsigned long long)(v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24);
    }
    v15 = (a3 & 4294967295 & 4294967295) /m (unsigned int)v13 & 65535;
    v16 = a4 - v15 * a2[4](a1);
    do
    {
        v17 = v15;
        v18 = (!v16 >> 32 ? (0 CONCAT v16) /m v17 : (0 CONCAT (unsigned int)v16) /m (unsigned int)v17 & 4294967295);
        v20 = 0;
        do
        {
            v21 = v17 + (v17 < 1);
            if (v20 > 7)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        } while ((*((unsigned long long *)((char *)&v1 + 0x8 * (unsigned long long)v20)) = *((long long *)((char *)&v1 + 0x8 * (unsigned long long)v20)) + v18, v16 -= v18, v20 += v13, v22 = v21 - 1, v21 != 1));
        v13 *= 2;
    } while (v17 >= 2);
}
