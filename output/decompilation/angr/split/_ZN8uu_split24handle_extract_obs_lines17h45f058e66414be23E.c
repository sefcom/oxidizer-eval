void uu_split::handle_extract_obs_lines(struct_1 *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    char v0;  // [bp-0xb9]
    void* v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    void* v3;  // [bp-0xa8]
    char v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long v6;  // [bp-0x90]
    int v7;  // [bp-0x88], Other Possible Types: char
    unsigned long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    char *v11;  // [bp-0x60]
    char *v12;  // [bp-0x58]
    int v13;  // [bp-0x50], Other Possible Types: char
    unsigned long v14;  // [bp-0x40]
    int v15;  // [bp-0x38], Other Possible Types: char
    char v16;  // [bp-0x28]

    v1 = 0;
    v2 = 4;
    v3 = 0;
    v0 = 0;
    v9 = a1;
    v10 = a1 + a2;
    v11 = &v0;
    v12 = &v1;
    v4.from_iter(&v9, &g_5a6bd8);
    if (v3)
    {
        v7.from_iter(4, 4 + v3 * 4);
        ::0x4ae130::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
        a3->field_10 = v8;
        *((void*)&a3->field_0) = v7;
        if (v6 >= 2)
        {
            v13.from_iter(v5, v5 + v6 * 4);
            a0->field_10 = v14;
            *((void*)&a0->field_0) = v13;
        }
        else
        {
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        }
    }
    else
    {
        v15.to_owned(a1, a2);
        a0->field_10 = *((long long *)&v16);
        *((void*)&a0->field_0) = v15;
    }
    ::0x4ad9b0::core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v4);
    ::0x4ad9b0::core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v1);
    return;
}
