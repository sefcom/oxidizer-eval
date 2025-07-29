long long uu_tail::backwards_thru_file(unsigned long long a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    void* v2;  // [bp-0xf0]
    char v3;  // [bp-0xe8]
    unsigned int v4;  // [bp-0xe7]
    unsigned short v5;  // [bp-0xe3]
    char v6;  // [bp-0xe1]
    void* v7;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    void* v10;  // [bp-0xc8]
    char v11;  // [bp-0xc0]
    unsigned int v12;  // [bp-0xbf]
    unsigned short v13;  // [bp-0xbb]
    char v14;  // [bp-0xb9]
    unsigned long long v15;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xb0]
    unsigned long long v17;  // [bp-0xa8]
    unsigned long long v18;  // [bp-0xa0]
    char v19;  // [bp-0x98]
    unsigned long long v20;  // [bp-0x88]
    char v21;  // [bp-0x80]
    void* v22;  // [bp-0x60]
    void* v24;  // r15
    char v25;  // al
    unsigned long long v26;  // rsi
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx

    v18 = a1;
    v7 = 0;
    v21.new(a0);
    v19.next(&v21);
    if ((char)(((0 ^ *((long long *)&v19)) & (0 ^ -(*((long long *)&v19)))) >> 63))
        return 0;
    v24 = 0;
    while (true)
    {
        v17 = v20;
        memcpy(&v15, &v19, 16);
        v26 = v16;
        v0 = v26;
        v1 = v26;
        v2 = v26 + v17;
        if (!((!v17 | v25) & 1) && (char)v2[1] == a2)
            v0.next_back(&v3);
        v10 = v2;
        v11 = v3;
        v12 = v4;
        v13 = v5;
        v14 = v6;
        v8 = v0;
        v9 = v1;
        while (v8.next_back(&v11))
        {
            v7 = v24 + 1;
            if (v7 >= a1)
            {
                if (v7 == a1)
                {
                    a0.seek(2, v28 + 1).unwrap(v28, &g_6365f8);
                    return (unsigned long long)::0x4f2900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v15);
                }
                v22 = 0;
                core::panicking::assert_failed(0, &v7, &v18, &v22, &g_6365e0); /* do not return */
            }
        }
        ::0x4f2900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v15);
        v25 = 1;
        v27 = v19.next(&v21) & 0xffffffffffffff00 | 1;
        if (*((long long *)&v19) == 0x8000000000000000)
            return v27;
    }
}
