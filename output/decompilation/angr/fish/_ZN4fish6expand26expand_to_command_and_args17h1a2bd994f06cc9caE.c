long long fish::expand::expand_to_command_and_args(unsigned long long a0, unsigned long long a1, void* a2, struct_0 *a3, unsigned long long a4, unsigned long long a5, char a6)
{
    char v0;  // [bp-0x10d]
    unsigned int v1;  // [bp-0x10c]
    int v2;  // [bp-0x108]
    unsigned long v3;  // [bp-0xf8]
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xd8], Other Possible Types: char
    int v6;  // [bp-0xc8], Other Possible Types: char
    int v7;  // [bp-0xb8], Other Possible Types: char
    int v8;  // [bp-0xb8]
    int v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0x98]
    void* v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    void* v13;  // [bp-0x80]
    int v14;  // [bp-0x78]
    char v15;  // [bp-0x68]
    int v16;  // [bp-0x50], Other Possible Types: char
    char v17;  // [bp-0x40]
    char v18;  // dl
    char *v19;  // rdi
    unsigned long long v20;  // [bp-0xb0]

    if ((char)fish::expand::expand_is_clean(a0, a1))
    {
        v6.to_vec(a0, a1);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a3);
        a3->field_10 = *((long long *)&v7);
        *((void*)&a3->field_0) = v6;
        return 0;
    }
    v11 = 0;
    v12 = 8;
    v13 = 0;
    v6.to_vec(a0, a1);
    v3 = *((long long *)&v7);
    v2 = v6;
    v1 = fish::expand::expand_string(&v2, &v11, a6 * 4 + 1, a2, a5);
    v0 = v18;
    if (v18 == 2)
    {
        v16.into_iter(&v11);
        v2.next(&v16);
        if (!((char)(((0 ^ (long long)v2) & (0 ^ -((long long)v2))) >> 63)))
        {
            v10 = *((long long *)&v5);
            v9 = v4;
            *((int128_t *)&v7) = *((int128_t *)&v3);
            v6 = v2;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a3);
            a3->field_10 = v3;
            *((void*)&a3->field_0) = v2;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v7);
        }
        if (a4)
        {
            memcpy(&v15, &v17, 16);
            v14 = v16;
            v2.next(&v14);
            if ((long long)v2 != 0x8000000000000000)
            {
                do
                {
                    v10 = (long long)v5;
                    v9 = v4;
                    *((int128_t *)&v8) = *((int128_t *)&v3);
                    v6 = v2;
                    a4.push(&v2, &g_14d8060);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v20);
                    v2.next(&v14);
                } while ((long long)v2 != 0x8000000000000000);
            }
            v19 = &v14;
        }
        else
        {
            v19 = &v16;
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::complete::Completion>>(v19);
    }
    else
    {
        core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v11);
    }
    return v1;
}
