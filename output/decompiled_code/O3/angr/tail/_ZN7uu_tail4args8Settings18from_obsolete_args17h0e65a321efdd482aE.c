double uu_tail::args::Settings::from_obsolete_args::h0e65a321efdd482a(long long a0, long long a1, long long a2)
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
    unsigned long long v18;  // rcx
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    int v23;  // xmm0
    int v24;  // xmm0
    int v25;  // xmm0
    int v26;  // xmm1
    int v27;  // xmm2
    int v28;  // ymm0

    _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::h601e07c9ebe61a4b(&v0);
    if (a1->field_a)
        v7 = a2;
    v15 = a1->field_8;
    v16 = a1->field_0;
    v20 = v18;
    if (!a1->field_9)
        v15 = 4;
    v0 = v15;
    v1 = v21;
    v2 = v20;
    if (!a2)
        _$LT$uu_tail..paths..Input$u20$as$u20$core..default..Default$GT$::default::h23df59131000da65(&v8);
    else
        uu_tail::paths::Input::from::h208d1fe4f6a3e0e8(&v8, a2, v20);
    v23 = *((int128_t *)&v8);
    *((int128_t *)&v13) = *((int128_t *)&v10);
    *((int128_t *)&v12) = *((int128_t *)&v9);
    v11 = v23;
    alloc::vec::Vec$LT$T$C$A$GT$::push::hbf892d832e50ce58(&v3, &v11);
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
