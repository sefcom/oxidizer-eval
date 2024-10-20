double uu_tr::operation::SqueezeOperation::new::hed292855f237e436(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [sp-0x90]
    int v1;  // [sp-0x88]
    int v2;  // [sp-0x78]
    unsigned long v3;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x60]
    unsigned long v5;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x48]
    unsigned long long v7;  // [sp-0x40]
    unsigned long long v8;  // [sp-0x38]
    unsigned long long v10;  // r15
    unsigned long long v11;  // r12
    struct struct_0 **v12;  // fs
    unsigned long long v13[3];  // rax
    unsigned long long v14;  // r13
    unsigned long long v15;  // rbp
    unsigned long long v16[3];  // rax
    int v17;  // xmm0
    int v18;  // xmm0
    int v19;  // ymm0

    v0 = a1[0];
    v10 = a1[1];
    v11 = a1[2];
    if (*((long long *)&*(v12)->padding_-28[40]))
    {
        v13 = &*(v12)->padding_-28[40];
        v14 = v13[1];
        v15 = v13[2];
    }
    else
    {
        v14 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
        v16 = &*(v12)->padding_-28[40];
        v16[0] = 1;
        v16[1] = v14;
        v16[2] = v15;
    }
    *((unsigned long long *)&*(v12)->padding_-28[32]) = v14 + 1;
    v17 = g_4ee4d0;
    v1 = v17;
    v18 = g_4ee4e0;
    v2 = v18;
    v3 = v14;
    v4 = v15;
    if (v11)
        _ZN9hashbrown3raw21RawTable$LT$T$C$A$GT$14reserve_rehash17h7290b5c3cd7dd9deE.llvm.17431759939353519380(&v1, v11, &v3);
    v5 = v10;
    v6 = v10;
    v7 = v0;
    v8 = v11 + v10;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::he0f785c9cc70fe73(&v5, &v1);
    a0->field_20 = *((int128_t *)&v3);
    *((void*)&a0->field_10) = v2;
    *((void*)&a0->field_0) = v1;
    a0->field_30 = 0;
    return (unsigned long long)(v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v1);
}
