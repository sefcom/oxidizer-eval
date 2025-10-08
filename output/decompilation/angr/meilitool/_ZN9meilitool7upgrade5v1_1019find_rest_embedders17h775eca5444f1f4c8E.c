long long meilitool::upgrade::v1_10::find_rest_embedders(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0x1d8]
    unsigned long long v1;  // [bp-0x1d0]
    void* v2;  // [bp-0x1c8]
    int v3;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v4;  // [bp-0x1a0]
    unsigned long long v5;  // [bp-0x198]
    char v6;  // [bp-0x190]
    void* v7;  // [bp-0x170], Other Possible Types: char
    int v8;  // [bp-0x168], Other Possible Types: unsigned long, unsigned long long
    void* v9;  // [bp-0x160], Other Possible Types: char
    int v10;  // [bp-0xe8]
    void* v11;  // [bp-0xd0], Other Possible Types: char
    void* v12;  // [bp-0xc8]
    char v13;  // [bp-0xc0]
    char v14;  // [bp-0x48]
    void* v16;  // rax

    v4 = a1;
    v5 = a2;
    meilitool::try_opening_poly_database(&v11, a3, a4, "main", 4);
    v7.with_context(&v11, &v4);
    if (*((int *)&v7) == 1)
    {
        *((unsigned long *)&a0[8]) = v8;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v11.get(v8, *((int *)&v9));
    v16 = v12;
    memcpy(&v3, &v13, 16);
    if (*((int *)&v11) == 1)
    {
        memcpy(&v12, &v3, 16);
        v11 = v16;
        *((long long *)&a0[8]) = v11.from();
        *((unsigned long long *)a0) = 0x8000000000000000;
        return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    }
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
    {
        v8 = 8;
        v9 = 0;
        v16 = 0;
    }
    else
    {
        v8 = v3;
    }
    v7 = v16;
    v6.into_iter(&v7);
    v7.next(&v6);
    if ((int)v7 != 6)
    {
        do
        {
            ::libc.so.0::memcpy(&v11, &v7, 160);
            if (*((int *)&v11) >= 2)
                core::ptr::drop_in_place<alloc::string::String>(&v14);
            else
                v0.push(&v10, &g_925fc0);
            core::ptr::drop_in_place<meilitool::upgrade::v1_9::EmbeddingConfig>(&v7);
            v7.next(&v6);
        } while ((int)v7 != 6);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<meilitool::upgrade::v1_9::IndexEmbeddingConfig>>(&v6);
    *((unsigned long long *)&a0[16]) = 0;
    *((int128_t *)a0) = *((int128_t *)&v0);
    return 0;
}
