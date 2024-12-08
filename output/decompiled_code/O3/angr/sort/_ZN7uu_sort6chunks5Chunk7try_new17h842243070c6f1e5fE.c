long long uu_sort::chunks::Chunk::try_new::h842243070c6f1e5f(unsigned long long *a0, struct_0 *a1, struct_1 *a2)
{
    struct_0 *v0;  // [sp-0x100], Other Possible Types: unsigned long long [3]
    char v1;  // [bp-0xf8]
    char v2;  // [bp-0xf0]
    char v3;  // [bp-0xe8]
    char v4;  // [bp-0xd8]
    char v5;  // [bp-0xc8]
    char v6;  // [bp-0xb8]
    char v7;  // [bp-0xa8]
    int v8;  // [sp-0x98]
    int v9;  // [sp-0x88]
    int v10;  // [sp-0x78]
    int v11;  // [sp-0x68]
    int v12;  // [sp-0x58]
    int v13;  // [sp-0x48]
    int v14;  // [sp-0x38]
    unsigned long long v15;  // [sp-0x28]
    struct_0 *v17;  // rax
    struct_0 *v18;  // r14
    uint128_t v19[6];  // rax
    int v20;  // xmm0
    int v21;  // xmm1
    int v22;  // xmm2

    v17 = __rust_alloc(120, 8);
    if (!v17)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v18 = v17;
    v18->field_10 = a1->field_10;
    v18->field_0 = a1->field_0;
    v0[0] = v18;
    v15 = a2->field_70;
    *((uint128_t *)&v14) = a2->field_60;
    *((uint128_t *)&v13) = a2->field_50;
    *((uint128_t *)&v12) = a2->field_40;
    *((uint128_t *)&v11) = a2->field_30;
    *((uint128_t *)&v10) = a2->field_20;
    *((uint128_t *)&v9) = a2->field_10;
    *((uint128_t *)&v8) = a2->field_0;
    uu_sort::chunks::read::_$u7b$$u7b$closure$u7d$$u7d$::ha3ce3d47a1180fa8(&v1, &v8, v0[1], v0[2]);
    if (*((long long *)&v1) != 0x8000000000000000)
    {
        v19 = v0 + 1;
        v19[5] = *((int128_t *)&v7);
        v19[4] = *((int128_t *)&v6);
        v20 = *((int128_t *)&v1);
        v21 = *((int128_t *)&v3);
        v22 = *((int128_t *)&v4);
        v19[3] = *((int128_t *)&v5);
        *((void*)&v19[2]) = v22;
        *((void*)&v19[1]) = v21;
        *((void*)&v19[0]) = v20;
        a0[1] = v0;
        *(a0) = 0;
        return v19;
    }
    *((int128_t *)&a0) = *((int128_t *)&v2);
    v19 = ::0x56c340::core::ptr::drop_in_place$LT$self_cell..unsafe_self_cell..OwnerAndCellDropGuard$LT$alloc..vec..Vec$LT$u8$GT$$C$uu_sort..chunks..ChunkContents$GT$$GT$::h35312c236dd3d72b(&v0);
    return v19;
}
