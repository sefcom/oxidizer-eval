long long uu_sort::chunks::Chunk::try_new(void* a0, struct_1 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x98], Other Possible Types: unsigned long long
    char v1;  // [bp-0x90]
    int v2;  // [bp-0x88]
    int v3;  // [bp-0x78]
    int v4;  // [bp-0x68]
    int v5;  // [bp-0x58]
    int v6;  // [bp-0x48]
    int v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    struct_0 *v10;  // rax
    struct_0 *v11;  // r14
    unsigned long v12;  // rax
    int v13;  // xmm0

    v10 = 144.__rust_alloc(8);
    if (!v10)
        core::option::unwrap_failed(&g_58d640); /* do not return */
    v11 = v10;
    v11->field_8 = a1->field_10;
    *((uint128_t *)&v11->field_0[0]) = a1->field_0;
    uu_sort::chunks::read::{{closure}}(&v0, a2, v11->field_0[1], v11->field_8);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v12 = &v11->field_10;
        *((long long *)(v12 + 112)) = *((long long *)&v8);
        *((void*)(v12 + 96)) = v7;
        *((void*)(v12 + 80)) = v6;
        *((void*)(v12 + 64)) = v5;
        v13 = *((int128_t *)&v0);
        *((void*)(v12 + 48)) = v4;
        *((void*)(v12 + 32)) = v3;
        *((void*)(v12 + 16)) = v2;
        *((void*)v12) = v13;
        *((struct_0 **)&a0[8]) = v11;
        *((unsigned long long *)a0) = 0;
        return v12;
    }
    *((int128_t *)a0) = *((int128_t *)&v1);
    return (unsigned long long)core::ptr::drop_in_place<self_cell::unsafe_self_cell::OwnerAndCellDropGuard<alloc::vec::Vec<u8>,uu_sort::chunks::ChunkContents>>(v11);
}
