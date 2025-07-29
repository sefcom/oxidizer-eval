long long uu_ls::display_additional_leading_info(struct_3 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4, unsigned long long a5)
{
    int v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    char *v2;  // [bp-0xb8]
    char v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xa0]
    char *v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    void* v7;  // [bp-0x88]
    void* v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    void* v10;  // [bp-0x68]
    char *v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    char *v13;  // [bp-0x50], Other Possible Types: char, unsigned long long
    unsigned long long v14;  // [bp-0x48]
    struct_1 *v16;  // rax
    struct_2 *v18;  // rax
    unsigned long long v19;  // rax

    v8 = 0;
    v9 = 1;
    v10 = 0;
    if (a4->field_f1)
    {
        v16 = a1.get_metadata(a5);
        if (v16)
        {
            uu_ls::get_inode(&(char)v0, v16->field_28);
        }
        else
        {
            v3.to_vec("? ,\n, '  +?????????bd-???_-.:~/", 1);
            v2 = v5;
            *((int128_t *)&v0) = *((int128_t *)&v3);
        }
        uu_ls::pad_left(&v13, v1, v2, a2);
        v11 = &v13;
        v12 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_69f450;
        v4 = 2;
        v7 = 0;
        v5 = &v11;
        v6 = 1;
        (unsigned int)v8.spec_write_fmt(&v3).unwrap(&g_69f470);
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v13);
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
    }
    if (a4->field_f2)
    {
        v18 = a1.get_metadata(a5);
        if (v18)
        {
            v19 = uu_ls::get_block_size(v18->field_38, v18->field_60, a4->field_d8, a4->field_f9);
            uu_ls::display_size(&(char)v0, v19, a4->field_f9);
            if (!(a4->field_100 == 4))
                goto LABEL_52d870;
LABEL_52d7ce:
            v13 = &(char)v0;
            v14 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = &g_69f450;
            v4 = 2;
            v7 = 0;
            v5 = &v13;
            v6 = 1;
            (unsigned int)v8.spec_write_fmt(&v3).unwrap(&g_69f4a0);
        }
        else
        {
            v3.to_vec("? ,\n, '  +?????????bd-???_-.:~/", 1);
            v2 = v5;
            *((int128_t *)&v0) = *((int128_t *)&v3);
            if (a4->field_100 == 4)
                goto LABEL_52d7ce;
LABEL_52d870:
            uu_ls::pad_left(&v13, v1, v2, a3);
            v11 = &v13;
            v12 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = &g_69f450;
            v4 = 2;
            v7 = 0;
            v5 = &v11;
            v6 = 1;
            (unsigned int)v8.spec_write_fmt(&v3).unwrap(&g_69f488);
            ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v13);
        }
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v8);
    return 0;
}
