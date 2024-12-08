double uu_split::number::DynamicWidthNumber::digits::h314c38c1b5e76107(long long a0, long long a1, long long a2)
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
            v6 = v5 * v6;
        } while (v4 >= v6);
    }
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (v4)
    {
        if (!(char)a2)
            core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
        do
        {
            if (!v10 >> 32)
            {
                v13 = v10;
                v12 = (0 CONCAT v13) /m (unsigned int)v5 >> 32;
                v11 = (0 CONCAT v13) /m (unsigned int)v5 & 4294967295 & 4294967295;
            }
            else
            {
                v10 = v8;
                v11 = (0 CONCAT v10) /m v5;
                v12 = (0 CONCAT v10) /m v5 >> 64;
            }
        } while ((::0x4db490::alloc::vec::Vec$LT$T$C$A$GT$::push::hddbfbae5e33ac3af(&v0, (unsigned long long)v12), v10 >= v5));
    }
    alloc::vec::Vec$LT$T$C$A$GT$::resize::h806964630ef9da41(&v0, v7, 0);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::hd350149ee33e53f5(v1, v2);
    a0->field_10 = v2;
    v14 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v14;
    return (unsigned long long)(v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14);
}
