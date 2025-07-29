long long uu_sort::ext_sort::ext_sort(unsigned long long a0, struct_0 *a1, uint128_t a2[2], unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x218]
    char v1;  // [bp-0x1f8]
    unsigned long long v2;  // [bp-0x1e8]
    unsigned long long v3;  // [bp-0x1e0]
    unsigned long long v4;  // [bp-0x1d0]
    unsigned long long v5;  // [bp-0x1c8]
    unsigned long long v6;  // [bp-0x1c0]
    char v7;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v8;  // [bp-0x1b8]
    int v9;  // [bp-0x1b8]
    unsigned long long v10;  // [bp-0x1b0]
    int v11;  // [bp-0x1a8], Other Possible Types: char, unsigned long long
    unsigned long long v12;  // [bp-0x1a0]
    char v13;  // [bp-0x198]
    char v14;  // [bp-0xf0]
    void* v15;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v16;  // [bp-0xc0]
    char v17;  // [bp-0xa8]
    unsigned long long v19;  // rbp
    int v20;  // xmm0
    unsigned long long v21;  // rax
    int v22;  // xmm0

    std::sync::mpmc::sync_channel(&v7, 1, a2, a3);
    v2 = v7;
    v3 = v10;
    memcpy(&v1, &v11, 16);
    std::sync::mpmc::sync_channel(&v7, 1, a2, a3);
    v19 = v7;
    v0 = v10;
    v4 = v0;
    v5 = v11;
    v6 = v12;
    v15.clone(a1);
    *((unsigned long long *)&v9) = v5;
    v10 = v6;
    v11 = v2;
    v12 = v3;
    memcpy(&v13, &v15, 160);
    v16 = 0x8000000000000000;
    v15 = 0;
    v17 = 0;
    v14.spawn_unchecked(&v15, &(unsigned long long)v9);
    v15.expect(&v14);
    ::0x54ea90::core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v15);
    if (a1->field_30 == 0x8000000000000000)
    {
        v20 = a2[0];
        *((uint128_t *)&v11) = a2[1];
        v8 = v20;
        v21 = uu_sort::ext_sort::reader_writer(a0, a1, &v1, v19, v0, &(unsigned long long)v9, a3);
    }
    else
    {
        v22 = a2[0];
        *((uint128_t *)&v11) = a2[1];
        v9 = v22;
        v21 = uu_sort::ext_sort::reader_writer(a0, a1, &v1, v19, v0, &(unsigned long long)v9, a3);
    }
    ::0x54ecc0::core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v1);
    return v21;
}
