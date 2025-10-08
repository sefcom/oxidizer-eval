void uu_stat::Stater::generate_tokens(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0xc4]
    void* v1;  // [bp-0xc0]
    void* v2;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0xb0]
    void* v4;  // [bp-0xa8]
    void* v5;  // [bp-0xa0]
    unsigned int v6;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x98]
    unsigned int v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x88]
    int v10;  // [bp-0x80]
    char v11;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned int *v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x48]
    int v17;  // [bp-0x40]
    void* v19;  // rdi
    unsigned int v20;  // eax
    unsigned long long v21;  // rdx

    v0 = a3;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    v11.collect(a1, a2 + a1);
    v1 = 0;
    if (a2)
    {
        v19 = 0;
        do
        {
            if (v19 >= v13)
                core::panicking::panic_bounds_check(v19, v13, &g_519f08); /* do not return */
            v20 = *((int *)((char *)v12 + 0x4 * v19));
            switch (v20)
            {
            case 37:
                v7.handle_percent_case(v12, v13, &v1, a2, a1, a2);
                if (v7 == 5)
                {
                    *((long long *)&v5[8]) = *((long long *)&v8);
                    *((unsigned long long *)&v5[16]) = v9;
                    *((unsigned long long *)v5) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::vec::Vec<char>>(v11, v12);
                    v2.drop_in_place<alloc::vec::Vec<uu_stat::Token>>(8);
                    return;
                }
                v17 = v10;
                v14 = v7;
                v15 = *((long long *)&v8);
                v16 = v9;
                v2.push(&v14, &g_519f20);
                break;
            case 92:
                if ((char)v0)
                {
                    v7.handle_escape_sequences(v12, v13, &v1, a2, a1, a2);
                    v2.push(&v7, &g_519f50);
                    break;
                }
                else
                {
                    v8 = 92;
                    v7 = 3;
                    v2.push(&v7, &g_519f38);
                    break;
                }
            default:
                v8 = v20;
                v7 = 3;
                v2.push(&v7, &g_519f68);
            }
            v19 = v1 + 1;
            v1 = v19;
        } while (v1 < a2);
    }
    if (!(char)v0)
    {
        v6 = 0;
        if (!(char)core::slice::<impl [T]>::ends_with(a1, a2, ::0x46d190::core::char::methods::encode_utf8_raw(10, &v6), v21))
        {
            v8 = 10;
            v6 = 3;
            v2.push(&v6, &g_519ef0);
        }
    }
    *((unsigned long long *)&v5[16]) = 0;
    *((int128_t *)v5) = *((int128_t *)&v2);
    core::ptr::drop_in_place<alloc::vec::Vec<char>>(v11, v12);
    return;
}
