long long fish::builtins::set::new_var_values_by_index(unsigned long a0, unsigned long long a1[7], unsigned long long a2)
{
    int v0;  // [bp-0xd8], Other Possible Types: void*
    unsigned long long v1;  // [bp-0xd0]
    void* v2;  // [bp-0xc8]
    void* v3;  // [bp-0xb0], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [bp-0xa8]
    void* v5;  // [bp-0xa0], Other Possible Types: unsigned long long
    uint128_t v6;  // [bp-0x98]
    struct_0 *v7;  // [bp-0x80]
    int v8;  // [bp-0x78], Other Possible Types: char
    void* v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    void* v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x40]
    char v15;  // [bp-0x38]
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rbx
    unsigned long v19;  // r12
    unsigned long v20;  // r13
    unsigned long long v21;  // r15

    if (v17 != a1[2])
    {
        v3 = &g_14cccd0;
        v4 = 1;
        v5 = 8;
        v6 = 0;
        core::panicking::panic_fmt(&v3, &g_14cccf0); /* do not return */
    }
    v0 = 0;
    v1 = 8;
    v2 = 0;
    if (a1[5])
    {
        v3.to_vec(a1[5] + 16, a1[6]);
        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v0);
        v2 = v5;
        *((int128_t *)&v0) = *((int128_t *)&v3);
    }
    v10 = a2;
    v11 = v17 * 16 + a2;
    v12 = 0;
    v18 = a1[1];
    while (true)
    {
        v13.next(&v10);
        if (!v14)
        {
            v7->field_10 = v2;
            v7->field_0 = (int128_t)v0;
            return v2;
        }
        else if (v13 < v17)
        {
            v19 = *((long long *)(v18 + v13 * 8));
            v19 >> 63.unwrap(&g_14ccd20);
            if (!v19)
            {
                v3 = &g_14ccce0;
                v4 = 1;
                v5 = 8;
                v6 = 0;
                core::panicking::panic_fmt(&v3, &g_14ccd38); /* do not return */
            }
            v20 = v19 - 1;
            if (v20 >= v2)
            {
                v3 = 0;
                v4 = 4;
                v5 = 0;
                v0.resize(v19, &v3);
            }
            v3.to_vec(v14, *((long long *)&v15));
            v9 = v5;
            memcpy(&v8, &v3, 16);
            if (v20 >= v2)
                core::panicking::panic_bounds_check(v20, v2, &g_14ccd50); /* do not return */
            v21 = v20 * 3;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(8 + v21 * 8);
            *((void* *)(8 + v21 * 8 + 16)) = v9;
            *((void*)(8 + v21 * 8)) = v8;
        }
        else
        {
            core::panicking::panic_bounds_check(v13, v17, &g_14ccd08); /* do not return */
        }
    }
}
