double uu_tail::args::Settings::from_obsolete_args::hf9c13cdfe31c2b03(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0xc0]
    unsigned long v2;  // [sp-0xb8], Other Possible Types: unsigned long long
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x88]
    char v7;  // [sp-0x7c]
    char v8;  // [bp-0x78]
    char v9;  // [bp-0x68]
    char v10;  // [bp-0x58]
    int v11;  // [sp-0x48]
    int v12;  // [sp-0x38]
    int v13;  // [sp-0x28]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    char v17;  // cc_dep1
    unsigned long long v18;  // rcx
    unsigned long long v21;  // rax
    int v23;  // xmm0
    int v24;  // xmm0
    int v25;  // xmm0
    int v26;  // xmm1
    int v27;  // xmm2
    int v28;  // ymm0

    _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hfebeb1c4deedc4af(&v0);
    if (a1->field_a)
        v7 = a2;
    v15 = a1->field_8;
    v16 = a1->field_0;
    v17 = a1->field_9;
    if (!a1->field_9)
        v18 = v16;
    else
        v18 = 10;
    if (!v17)
        v21 = v15;
    else
        v21 = v16;
    if (!v17)
        v15 = 4;
    v0 = v15;
    v1 = v21;
    v2 = v18;
    if (!a2)
        _$LT$uu_tail..paths..Input$u20$as$u20$core..default..Default$GT$::default::hd997c7035054d831(&v8);
    else
        uu_tail::paths::Input::from::h6db62654b008023a(&v8, a2);
    v23 = *((int128_t *)&v8);
    *((int128_t *)&v13) = *((int128_t *)&v10);
    *((int128_t *)&v12) = *((int128_t *)&v9);
    v11 = v23;
    alloc::vec::Vec$LT$T$C$A$GT$::push::h8fc9b727b1446556(&v3, &v11);
    v24 = *((int128_t *)&v6);
    *((void*)&a0[4]) = v24;
    v25 = *((int128_t *)&v0);
    v26 = *((int128_t *)&v2);
    v27 = *((int128_t *)&v4);
    a0[3] = *((int128_t *)&v5);
    *((void*)&a0[2]) = v27;
    *((void*)&a0[1]) = v26;
    *((void*)&a0[0]) = v25;
    return (unsigned long long)(v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25);
}
