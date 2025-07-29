long long flealib::fileserver::FileServer::read_binary_file(struct_0 *a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x16c]
    int v1;  // [bp-0x168]
    unsigned long long v2;  // [bp-0x160]
    unsigned long long v3;  // [bp-0x158]
    int v4;  // [bp-0x148], Other Possible Types: unsigned long
    unsigned int v5;  // [bp-0x148]
    unsigned int v6;  // [bp-0x144]
    unsigned long long v7;  // [bp-0x140]
    char *v8;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x130]
    void* v10;  // [bp-0x128]
    int v11;  // [bp-0x118]
    unsigned long long v12;  // [bp-0x108]
    unsigned long long v13;  // [bp-0xf8]
    unsigned long long v14;  // [bp-0xf0]
    void* v15;  // [bp-0xe8], Other Possible Types: unsigned long long [3], char
    int v16;  // [bp-0xe8]
    unsigned long long v17;  // [bp-0xe0]
    void* v18;  // [bp-0xd8], Other Possible Types: char *, unsigned long long
    unsigned long long v19;  // [bp-0xd0]
    char *v20;  // [bp-0xc8]
    unsigned long long v21;  // [bp-0xc0]
    char v22;  // [bp-0x98]
    int v23;  // [bp-0x30], Other Possible Types: char
    char v24;  // [bp-0x20]
    unsigned long long v27;  // rax
    unsigned long v28;  // rdx

    v13 = a2;
    v14 = a3;
    v5 = 0;
    v15.to_vec(::0x7796f0::core::char::methods::encode_utf8_raw(47, &v5), a2);
    v3 = v18;
    *((int128_t *)&v1) = *((int128_t *)&v15);
    if ((char)core::slice::<impl [T]>::ends_with(a1[1], a1[2], v2, v18))
    {
        v15.to_vec(1, 0);
        v8 = v18;
        *((int128_t *)&v4) = *((int128_t *)&v15);
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
        v3 = v8;
        *((int128_t *)&v1) = *((int128_t *)&v5);
    }
    v15[0] = a1;
    v17 = <alloc::string::String as core::fmt::Display>::fmt;
    v18 = &(char)v1;
    v19 = <alloc::string::String as core::fmt::Display>::fmt;
    v20 = &v13;
    v21 = <&T as core::fmt::Display>::fmt;
    v4 = &g_46b258;
    v7 = 3;
    v10 = 0;
    v8 = &v15;
    v9 = 3;
    v23.map_or_else(&v5);
    v11 = v23;
    v12 = *((long long *)&v24);
    v5.clone(&v11);
    std::fs::metadata(&v15, &v5);
    if ((int)v15 == 2)
    {
        v27 = <alloc::string::String as core::fmt::Display>::fmt;
        goto LABEL_77b676;
    }
    else if (*((long long *)&v22) > 0x1f400000)
    {
        v27 = 40.new("File too large", 14);
LABEL_77b676:
        *((unsigned long long *)&a0->padding_1[7]) = v27;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&v11);
    }
    else
    {
        v18 = v12;
        v16 = v11;
        v5.open(&v15);
        if (((char)v4 & 1))
        {
            *((unsigned long long *)&a0->padding_1[7]) = 3;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        }
        else
        {
            v0 = v6;
            v15 = 0;
            v17 = 1;
            v18 = 0;
            if (v0.read_to_end(&v15))
            {
                *((unsigned long *)&a0->padding_1[7]) = v28;
                *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                ::0x7789e0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v15);
            }
            else
            {
                a0->field_10 = 0;
                *((int128_t *)&a0->field_0) = *((int128_t *)&v15);
            }
            ::0x778970::core::ptr::drop_in_place<std::fs::File>(v0);
        }
    }
    ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
    return a0;
}
