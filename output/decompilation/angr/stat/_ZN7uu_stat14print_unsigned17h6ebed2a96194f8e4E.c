void uu_stat::print_unsigned(unsigned long long a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned long a4, unsigned long a5, char a6)
{
    int v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    char v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    char v7;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xa8]
    char *v9;  // [bp-0xa0], Other Possible Types: unsigned long long
    int v10;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    char v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x70]
    char *v16;  // [bp-0x68]
    unsigned long long v17;  // [bp-0x60]
    void* v18;  // [bp-0x58]
    unsigned short v19;  // [bp-0x50]
    int v20;  // [bp-0x48], Other Possible Types: char
    char v21;  // [bp-0x38]
    char v23;  // r12b
    char v24;  // r14b

    v13.to_vec(core::fmt::num::imp::<impl usize>::_fmt(a0, &v7, 20), a2);
    if (((char)a2 & 1))
    {
        uu_stat::group_num(&v3, v14, v15);
        v23 = a6;
        if (!a4)
            goto LABEL_474bbd;
LABEL_474b5e:
        if (a4 == 1)
        {
            *((int128_t *)&v0) = *((int128_t *)&v4);
            v2 = v6;
            if ((long long)v0 != 0x8000000000000000)
                goto LABEL_474bf5;
            uu_stat::pad_and_print(v1, v2, a1, a3, v23);
        }
        else
        {
            if (a5 > 65535)
            {
                v7 = &g_519960;
                v8 = 1;
                v9 = 8;
                *((uint128_t *)&v10) = 0;
                core::panicking::panic_fmt(&v7, &g_519ce8); /* do not return */
            }
            v16 = &v3;
            v17 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
            v18 = 0;
            v19 = a5;
            v7 = &g_41ab40;
            v8 = 1;
            v11 = &g_41d388;
            v12 = 1;
            v9 = &v16;
            v10 = 2;
            v20.map_or_else(&v7);
            v0 = v20;
            v2 = *((long long *)&v21);
            v24 = 1;
LABEL_474ca9:
            uu_stat::pad_and_print(v1, v2, a1, a3, v23);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v0);
            if (!v24)
            {
                core::ptr::drop_in_place<alloc::string::String>(&v13);
                return;
            }
        }
    }
    else
    {
        v5 = v14;
        v6 = v15;
        v4 = 0x8000000000000000;
        v23 = a6;
        if (a4)
            goto LABEL_474b5e;
LABEL_474bbd:
        *((int128_t *)&v0) = *((int128_t *)&v4);
        v2 = v6;
        if ((long long)v0 == 0x8000000000000000)
        {
            uu_stat::pad_and_print(v1, v2, a1, a3, v23);
        }
        else
        {
LABEL_474bf5:
            goto LABEL_474ca9;
        }
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v3);
    core::ptr::drop_in_place<alloc::string::String>(&v13);
    return;
}
