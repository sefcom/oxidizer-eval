char just::config::Config::parse_module_path(void* a0, struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v1[2];  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    int v3;  // [bp-0x98], Other Possible Types: char
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    void* v6;  // [bp-0x80], Other Possible Types: char
    unsigned long v7;  // [bp-0x78]
    char v8;  // [bp-0x70]
    unsigned long v9;  // [bp-0x48], Other Possible Types: unsigned short
    int v10;  // [bp-0x40], Other Possible Types: char
    char v11;  // [bp-0x30]
    char v13;  // bpl
    unsigned long long v14;  // r12
    int v15;  // xmm0
    char v16;  // al

    v6.clone(a1, a2);
    v9 = a1->field_38;
    v0.collect(&v6);
    if (v2 == 1 && 32.is_contained_in(v1[0], v1[1]))
    {
        v8.into_searcher(v1[0], v1[1]);
        v6 = 0;
        v7 = v1[1];
        v9 = 1;
        v3.collect(&v6);
        v13 = 1;
    }
    else
    {
        v5 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
    }
    v6.try_from(v4, v5);
    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
    {
        v10.collect(a1);
        *((long long *)&a0[24]) = *((long long *)&v11);
        a0[8] = v10;
        v14 = 9223372036854775810;
    }
    else
    {
        v15 = *((int128_t *)&v6);
        *((int128_t *)&a0[24]) = *((int128_t *)&v8);
        a0[8] = v15;
        v14 = 9223372036854775815;
    }
    *((unsigned long long *)a0) = v14;
    v16 = core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>((long long)v3, v4);
    if (!v13)
        return v16;
    return core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(v0, v1);
}
