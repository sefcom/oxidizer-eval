long long just::function::read(struct_0 *a0, struct_1 **a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x68]
    unsigned long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    int v6;  // [bp-0x40], Other Possible Types: char
    unsigned long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]

    v8 = a2;
    v9 = a3;
    v3.working_directory(*(a1)->field_10, *((long long *)&*(a1)->field_18));
    v6.join(v4, v5, a2, a3);
    std::fs::read_to_string(&v0, &v6);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        just::function::read::{{closure}}(&v6, &v8, v1);
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v7;
        *((void*)&(&a0->field_0)[1]) = v6;
        a0->field_0 = 1;
    }
    else
    {
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v2;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v0);
        a0->field_0 = 0;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    return a0;
}
