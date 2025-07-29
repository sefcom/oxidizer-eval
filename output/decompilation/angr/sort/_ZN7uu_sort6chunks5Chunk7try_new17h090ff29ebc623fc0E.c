long long uu_sort::chunks::Chunk::try_new(struct_0 **a0, struct_1 *a1, void* a2)
{
    struct_0 *v0;  // [bp-0x130]
    char v1;  // [bp-0x128], Other Possible Types: unsigned long long
    char v2;  // [bp-0x120]
    int v3;  // [bp-0x118]
    int v4;  // [bp-0x108]
    int v5;  // [bp-0xf8]
    int v6;  // [bp-0xe8]
    int v7;  // [bp-0xd8]
    int v8;  // [bp-0xc8]
    unsigned long v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0]
    struct_0 *v12;  // rax
    struct_0 *v13;  // r14
    unsigned long v14;  // rax
    int v15;  // xmm0

    v12 = __rust_alloc(144, 8);
    if (!v12)
        core::option::unwrap_failed(&g_671f60); /* do not return */
    v13 = v12;
    v13->field_10 = a1->field_10;
    *((uint128_t *)&v13->field_0) = a1->field_0;
    v0 = v13;
    memcpy(&v10, a2, 144);
    uu_sort::chunks::read::{{closure}}(&v1, &v10, *((long long *)&v0->padding_1[7]), v0->field_10);
    if (!((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63)))
    {
        v14 = &(&v0->field_10)[1];
        *((unsigned long *)(v14 + 112)) = v9;
        *((void*)(v14 + 96)) = v8;
        *((void*)(v14 + 80)) = v7;
        *((void*)(v14 + 64)) = v6;
        v15 = *((int128_t *)&v1);
        *((void*)(v14 + 48)) = v5;
        *((void*)(v14 + 32)) = v4;
        *((void*)(v14 + 16)) = v3;
        *((void*)v14) = v15;
        a0[1] = v0;
        *(a0) = 0;
        return v14;
    }
    *((int128_t *)&a0) = *((int128_t *)&v2);
    return (unsigned long long)::0x52de70::core::ptr::drop_in_place<self_cell::unsafe_self_cell::OwnerAndCellDropGuard<alloc::vec::Vec<u8>,uu_sort::chunks::ChunkContents>>(&v0);
}
