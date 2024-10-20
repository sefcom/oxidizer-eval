long long uu_date::parse_date::hf30e39b07665fc3a(struct_0 *a0, unsigned long long a1[3], unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    int v6;  // [sp-0x48]
    unsigned long long v7;  // [sp-0x38]
    void* v9;  // r12
    unsigned long v10;  // r15
    unsigned long long v11;  // r13
    unsigned long long v12;  // rbp

    v9 = a1[1];
    v10 = a1[2];
    parse_datetime::parse_datetime::he0f693b076042ed1(&v0, v9, v10, a3, a4, a5);
    if (*((long long *)&v0) == 9223372036854775810)
    {
        *((int128_t *)&a0->field_8) = *((int128_t *)&v1);
        a0->field_0 = 0x8000000000000000;
    }
    else
    {
        v7 = *((long long *)&v2);
        *((int128_t *)&v6) = *((int128_t *)&v0);
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hc41536a938e71bbc(&v3, v10, 0);
        v11 = *((long long *)&v4);
        if (*((long long *)&v3))
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v12 = *((long long *)&v5);
        memcpy(v12, v9, v10);
        *((int128_t *)&(&a0->padding_10)[1]) = *((int128_t *)&v0);
        *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v2);
        a0->field_0 = v11;
        a0->field_8 = v12;
        *((unsigned long *)&a0->padding_10[0]) = v10;
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcaacd3d5c9c8cfba();
    return _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he7a4fbae18610d67(a1);
}
