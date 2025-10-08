long long fish::history::HistoryImpl::items_at_indexes(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    uint128_t v1[3];  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long v4;  // [bp-0xd0]
    void* v6;  // [bp-0xd0]
    unsigned long long v7[3];  // [bp-0xc8]
    unsigned long v8;  // [bp-0xc8]
    void* v9;  // [bp-0xc0]
    unsigned long v10;  // [bp-0xc0]
    int v11;  // [bp-0xb8]
    int v12;  // [bp-0xa8]
    unsigned long long v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x90]
    void* v15;  // [bp-0x80]
    unsigned long long v16[3];  // [bp-0x78]
    void* v17;  // [bp-0x70]
    char v18;  // [bp-0x68]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    char *v22;  // r15
    char *v23;  // rbp
    unsigned long long v24;  // rdx
    unsigned long long v28[3];  // rbp
    void* v29;  // r15
    void* v30;  // r14

    v20 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v11) = g_14bd810;
    *((uint128_t *)&v12) = g_14bd820;
    v13 = v20;
    v14 = v21;
    v2 = a2.map(a3);
    v3 = v21;
    if (((char)v2.next() & 1))
    {
        v22 = &v0;
        v23 = &(char)v4;
        do
        {
            v0 = v24;
            v4 = v6;
            v8 = v7;
            v10 = v9;
            if (!v11.get_inner(v22))
            {
                v15.item_at_index(a1, v0);
                if (v15 == 9223372036854775809)
                {
                    v4 = v6;
                    v8 = v7;
                    v10 = v9;
                    v28 = 4;
                    v29 = 0;
                    v30 = 0;
                }
                else if ((char)(((0 ^ v15) & (0 ^ -(v15))) >> 63))
                {
                    fish::builtins::fish_indent::fish_indent::{{closure}}(v23, v16[1], v16[2]);
                    v4 = v6;
                    v8 = v7;
                    v10 = v9;
                    v28[0] = v7;
                    v29 = v9;
                    v30 = v6;
                }
                else
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v18);
                    v4 = v6;
                    v8 = v7;
                    v10 = v9;
                    v28[0] = v16;
                    v29 = v17;
                    v30 = v15;
                }
                v15 = v30;
                v16[0] = v28;
                v17 = v29;
                v23 = &(char)v4;
                (char)v4.insert(&v11, v0, &v15);
                core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&(char)v4);
                v22 = &v0;
            }
            v9 = v10;
            v7[0] = v8;
            v6 = v4;
        } while (((char)v2.next() & 1));
    }
    v1[2] = *((int128_t *)&v13);
    *((void*)&v1[1]) = v12;
    *((void*)&v1[0]) = v11;
    return v1;
}
