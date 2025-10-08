long long uu_tail::backwards_thru_file(unsigned long long a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    void* v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8]
    unsigned int v4;  // [bp-0xd7]
    unsigned short v5;  // [bp-0xd3]
    char v6;  // [bp-0xd1]
    void* v7;  // [bp-0xd0]
    unsigned long long v8;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xc0]
    void* v10;  // [bp-0xb8]
    char v11;  // [bp-0xb0]
    unsigned int v12;  // [bp-0xaf]
    unsigned short v13;  // [bp-0xab]
    char v14;  // [bp-0xa9]
    unsigned long long v15;  // [bp-0xa0]
    unsigned long long v16;  // [bp-0x98]
    unsigned long long v17;  // [bp-0x98]
    unsigned long long v18;  // [bp-0x90]
    unsigned long long v19;  // [bp-0x88]
    char v20;  // [bp-0x80]
    void* v21;  // [bp-0x60]
    unsigned long long v22;  // [bp-0x28]
    unsigned long long v24;  // r12
    void* v25;  // rbp
    char v26;  // al
    unsigned long long v27;  // rbx
    unsigned long long v28;  // r14
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx

    v22 = v24;
    v15 = a1;
    v7 = 0;
    v20.new(a0);
    (char)v17.next(&v20);
    if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
        return -(v16);
    v25 = 0;
    v17 = v16;
    while (true)
    {
        v27 = v17;
        v28 = v18;
        v0 = v28;
        v1 = v28;
        v2 = v28 + v19;
        v3 = a2;
        if (!((!v19 | v26) & 1) && (char)v2[1] == a2)
            v0.next_back(&v3);
        v10 = v2;
        v11 = v3;
        v12 = v4;
        v13 = v5;
        v14 = v6;
        v8 = v0;
        v9 = v1;
        while (((char)v8.next_back(&v11) & 1))
        {
            v7 = v25 + 1;
            if (v7 >= a1)
            {
                if (v7 == a1)
                {
                    a0.seek(2, v30 + 1).unwrap(v30, &g_573b88);
                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v27, v28);
                }
                v21 = 0;
                core::panicking::assert_failed(0, &v7, &v15, &v21, &g_573b70); /* do not return */
            }
        }
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v27, v28);
        v26 = 1;
        v29 = (char)v17.next(&v20) & 0xffffffffffffff00 | 1;
        v17 = v16;
        if (v17 == 0x8000000000000000)
            return v29;
    }
}
