double uu_sort::chunks::Chunk::try_new::hd1fbfbe56025a784(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0xf8]
    char v1;  // [bp-0xf0]
    char v2;  // [bp-0xe8]
    char v3;  // [bp-0xd8]
    char v4;  // [bp-0xc8]
    char v5;  // [bp-0xb8]
    char v6;  // [bp-0xa8]
    int v7;  // [sp-0x98]
    int v8;  // [sp-0x88]
    int v9;  // [sp-0x78]
    int v10;  // [sp-0x68]
    int v11;  // [sp-0x58]
    int v12;  // [sp-0x48]
    int v13;  // [sp-0x38]
    unsigned long long v14;  // [sp-0x28]
    struct_1 *v16;  // rax
    unsigned long long v17[3];  // r14
    int v18;  // xmm0
    int v19;  // xmm0
    int v20;  // xmm0
    int v21;  // xmm0
    int v22;  // xmm0
    int v23;  // ymm0
    int v24;  // ymm0
    int v25;  // xmm0
    uint128_t v26[6];  // rax
    int v27;  // xmm0
    int v28;  // xmm0
    int v29;  // xmm0
    int v30;  // xmm1
    int v31;  // xmm2

    v16 = __rust_alloc(120, 8);
    if (!v16)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v17 = v16;
    v17[2] = a1->field_10;
    v18 = a1->field_0;
    *((void*)&v17[0]) = v18;
    v14 = a2->field_70;
    v19 = a2->field_60;
    v13 = v19;
    v20 = a2->field_50;
    v12 = v20;
    v21 = a2->field_40;
    v11 = v21;
    v22 = a2->field_0;
    v24 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
    *((uint128_t *)&v10) = a2->field_30;
    *((uint128_t *)&v9) = a2->field_20;
    *((uint128_t *)&v8) = a2->field_10;
    v7 = v22;
    uu_sort::chunks::read::_$u7b$$u7b$closure$u7d$$u7d$::h7ead982378199d48(&v0, &v7, v17[1], v17[2]);
    if (*((long long *)&v0) == 0x8000000000000000)
    {
        v25 = *((int128_t *)&v1);
        *((void*)a0) = v25;
        core::ptr::drop_in_place$LT$self_cell..unsafe_self_cell..OwnerAndCellDropGuard$LT$alloc..vec..Vec$LT$u8$GT$$C$uu_sort..chunks..ChunkContents$GT$$GT$::h663a83b6b7b7cc61(v17);
        return (unsigned long long)(v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25);
    }
    v26 = v17 + 1;
    v27 = *((int128_t *)&v6);
    *((void*)&v26[5]) = v27;
    v28 = *((int128_t *)&v5);
    *((void*)&v26[4]) = v28;
    v29 = *((int128_t *)&v0);
    v30 = *((int128_t *)&v2);
    v31 = *((int128_t *)&v3);
    v26[3] = *((int128_t *)&v4);
    *((void*)&v26[2]) = v31;
    *((void*)&v26[1]) = v30;
    *((void*)&v26[0]) = v29;
    a0[1] = v17;
    *(a0) = 0;
    return (unsigned long long)(v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29);
}
