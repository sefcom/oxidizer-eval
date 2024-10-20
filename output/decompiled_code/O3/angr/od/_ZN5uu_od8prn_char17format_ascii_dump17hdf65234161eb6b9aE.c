double uu_od::prn_char::format_ascii_dump::hdf65234161eb6b9a(long long a0, long long a1, long long a2)
{
    unsigned long v0;  // [sp-0x50]
    unsigned long v1;  // [sp-0x48]
    unsigned long v2;  // [sp-0x40]
    unsigned long v4;  // r12
    unsigned long v5;  // r13
    unsigned long v6;  // rax
    unsigned long v7;  // rax
    unsigned long v9;  // rbp
    unsigned long v10;  // r12
    int v11;  // xmm0
    int v12;  // ymm0

    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h275c396a68023b70(&v0);
    *((char *)v1) = 62;
    v2 = &g_1;
    v4 = &g_1;
    if (a2)
    {
        v5 = 0;
        do
        {
            v6 = *((char *)(a1 + v5));
            if ((v6 - 32 & 255) < 95)
            {
                v7 = (unsigned int)v6 * 16;
                v9 = *((long long *)(v7 + (char *)&g_504168));
                if (v0 - v4 < v9)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h94e7c1edf1535031(&v0, v4, v9);
                    v10 = v2;
                }
                memcpy(v10 + v1, *((long long *)(v7 + (char *)&_ZN5uu_od8prn_char7C_CHARS17h272b39be43a8a6cfE.llvm.7625547399934783417)), v9);
                v4 = v9 + v2;
            }
            else
            {
                if (v4 == v0)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h275c396a68023b70(&v0);
                *((char *)(v1 + v4)) = 46;
                v4 += (char *)&g_1;
            }
        } while ((v2 = v4, v5 += &g_1, a2 != v5));
    }
    if (v4 == v0)
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h275c396a68023b70(&v0);
    *((char *)(v1 + v4)) = 60;
    v2 = v4 + (char *)&g_1;
    *((unsigned long *)(a0 + 16)) = v2;
    v11 = *((int128_t *)&v0);
    *((void*)a0) = v11;
    return (unsigned long long)(v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v11);
}
