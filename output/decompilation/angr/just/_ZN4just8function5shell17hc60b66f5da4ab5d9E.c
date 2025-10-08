long long just::function::shell(struct_0 *a0, void* *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5)
{
    char v0;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    char v3;  // [bp-0x80], Other Possible Types: unsigned long long
    char v4;  // [bp-0x78]
    unsigned long v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    int v7;  // [bp-0x50], Other Possible Types: char
    char v8;  // [bp-0x40]

    v7.chain(a2, a3, a4, a4 + a5 * 24);
    v0.collect(&v7);
    v3.run_command(*(a1), a2, a3, v1, v2);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        memcpy(&v6, &v4, 16);
        just::function::shell::{{closure}}(&v7, &v6);
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v8);
        *((void*)&(&a0->field_0)[1]) = v7;
        a0->field_0 = 1;
    }
    else
    {
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v5;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v3);
        a0->field_0 = 0;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(v0, v1);
    return a0;
}
