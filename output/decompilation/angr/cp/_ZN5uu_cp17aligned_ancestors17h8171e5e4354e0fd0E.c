long long uu_cp::aligned_ancestors(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    char v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    char v11;  // [bp-0x68]
    int v12;  // [bp-0x40]
    int v13;  // [bp-0x30]
    unsigned long long v15;  // r14
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax
    uint128_t *v18;  // rax
    uint128_t *v19;  // rdx

    v3.from_iter(a1, a2, &g_5fb230);
    v6.from_iter(a3, a4, &g_5fb230);
    v15 = 1.index(v5 - 1, v4, v5, &g_5fb860);
    v9 = 1;
    v10 = v16;
    v11 = 0;
    v17 = v9.index(v7, v8);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v9.zip(v15, v16 * 16 + v15, v17, v16 * 16 + v17);
    if (v9.next())
    {
        do
        {
            *((uint128_t *)&v12) = *(v18);
            *((uint128_t *)&v13) = *(v19);
            v0.push(&v12);
            v18 = v9.next();
        } while (v18);
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    ::0x4d40e0::core::ptr::drop_in_place<alloc::vec::Vec<&std::path::Path>>(&v6);
    ::0x4d40e0::core::ptr::drop_in_place<alloc::vec::Vec<&std::path::Path>>(&v3);
    return a0;
}
