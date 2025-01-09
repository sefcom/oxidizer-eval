double uu_split::number::DynamicWidthNumber::digits::hff29e0107769e312(long long a0, long long a1, long long a2)
{
    void* v0;  // [sp-0x48]
    unsigned long long v1;  // [sp-0x40]
    void* v2;  // [sp-0x38]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rax
    unsigned long long v7;  // r15
    unsigned long long v8;  // r14
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned int v12;  // edx
    unsigned int v13;  // eax
    int v14;  // xmm0
    int v15;  // ymm0

    v4 = a1;
    v5 = a2 & 4294967295;
    v6 = v5 * (v5 - 1);
    v7 = 2;
    if (v6 <= a1)
    {
        do
        {
            v4 -= v6;
            v7 += 1;
            v6 *= v5;
        } while (v4 >= v6);
    }
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (v4)
    {
        if (!(char)a2)
            core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_5494b0); /* do not return */
        do
        {
            if (!v10 >> 32)
            {
                v13 = v10;
                v12 = ((unsigned int)((0 CONCAT v13) % (v5 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v13) / (v5 & 4294967295))) >> 32;
                v11 = ((unsigned int)((0 CONCAT v13) % (v5 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v13) / (v5 & 4294967295))) & 4294967295 & 4294967295;
            }
            else
            {
                v10 = v8;
                v11 = (unsigned long long)((0 CONCAT v10) % v5) CONCAT (unsigned long long)((0 CONCAT v10) / v5);
                v12 = ((unsigned long long)((0 CONCAT v10) % v5) CONCAT (unsigned long long)((0 CONCAT v10) / v5)) >> 64;
            }
        } while ((::0x4db560::alloc::vec::Vec$LT$T$C$A$GT$::push::hf1e1eb1ae4f6230e(&v0, (unsigned long long)v12), v10 >= v5));
    }
    alloc::vec::Vec$LT$T$C$A$GT$::resize::h073d932e12575a02(&v0, v7, 0);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h611a04afb35bad30(v1, v2);
    a0->field_10 = v2;
    v14 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v14;
    return (unsigned long long)(v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14);
}
