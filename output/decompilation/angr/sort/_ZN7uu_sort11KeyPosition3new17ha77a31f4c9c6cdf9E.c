long long uu_sort::KeyPosition::new(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [bp-0xfd]
    void* v1;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    char v4;  // [bp-0xe0]
    char v5;  // [bp-0xd8]
    char v6;  // [bp-0xd7]
    unsigned long long v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xc0]
    char *v9;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xb0]
    void* v11;  // [bp-0xa8]
    char *v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x90]
    char *v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x80]
    void* v16;  // [bp-0x78]
    unsigned long long v17;  // [bp-0x70]
    char v18;  // [bp-0x68]
    unsigned short v19;  // [bp-0x38]
    unsigned long long v21;  // rax
    unsigned long long v22;  // r13
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r13
    unsigned long long v26;  // rax

    v18.into_searcher(46, a1, a2);
    v16 = 0;
    v17 = a2;
    v19 = 1;
    v21 = v16.next();
    if (v21)
    {
        v22 = v21;
        v23 = v16.next();
        ::0x4ae0a0::core::num::<impl usize>::from_ascii_radix(&v5, v22, v24);
        if (!v5)
        {
            if (v25)
                goto LABEL_4d2d95;
            v26 = a0 + 8.to_vec("field index can not be 0invalid key invalid option: ''", 24);
        }
        else if (v6 == 2)
        {
            v25 = 18446744073709551615;
LABEL_4d2d95:
            v8 = a3;
            v7 = 0x8000000000000000;
            (char)v1.map_or(v23, v24, &v7);
            v26 = v2;
            if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
            {
                *((unsigned long long *)&a0[8]) = v25;
                *((unsigned long long *)&a0[16]) = v2;
                *((char *)&a0[24]) = a4;
                *((unsigned long long *)a0) = 0;
                return a4;
            }
            *((unsigned long long *)&a0[8]) = v1;
            *((unsigned long long *)&a0[16]) = v2;
            *((unsigned long long *)&a0[24]) = v3;
        }
        else
        {
            v0 = v6;
            v1 = 0;
            v2 = v22;
            v3 = v24;
            v4 = 1;
            v12 = &v1;
            v13 = <os_display::Quoted as core::fmt::Display>::fmt;
            v14 = &v0;
            v15 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
            v7 = &g_58d018;
            v8 = 2;
            v11 = 0;
            v9 = &v12;
            v10 = 2;
            v26 = a0 + 8.map_or_else(&v7);
        }
    }
    else
    {
        uu_sort::KeyPosition::new::{{closure}}(&(char)v7, a1, a2);
        v26 = v9;
        *((int128_t *)&a0[8]) = *((int128_t *)&v7);
        *((unsigned long long *)&a0[24]) = v9;
    }
    *((unsigned long long *)a0) = 1;
    return v26;
}
