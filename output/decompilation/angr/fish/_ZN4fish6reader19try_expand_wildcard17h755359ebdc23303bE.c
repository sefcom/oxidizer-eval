long long fish::reader::try_expand_wildcard(unsigned long a0, struct_0 *a1, unsigned long long a2, struct_1 *a3)
{
    void* v0;  // [bp-0x118]
    unsigned long long v1;  // [bp-0x110]
    void* v2;  // [bp-0x108]
    void* v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xf8]
    void* v5;  // [bp-0xf0]
    int v6;  // [bp-0xe8]
    unsigned long v7;  // [bp-0xe0]
    void* v8;  // [bp-0xd8], Other Possible Types: unsigned long
    int v9;  // [bp-0xb6]
    unsigned long long v10;  // [bp-0xa8]
    unsigned long v11;  // [bp-0xa0]
    unsigned long long v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x80]
    unsigned long long v15;  // [bp-0x78]
    void* v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x68]
    unsigned long long v18;  // [bp-0x60]
    unsigned long long v19;  // [bp-0x58]
    char v20;  // [bp-0x50]
    unsigned long long v22;  // r12
    unsigned long long v23;  // 4096
    unsigned long long v24;  // rbp
    unsigned long long v25;  // rbp
    unsigned long v26;  // rsi
    char v27;  // al
    unsigned long long v28;  // rdx

    v22 = a2;
    v23 = a2;
    while (true)
    {
        v24 = v23;
        v25 = v24 - 1;
        if (v24 < 1)
            break;
        v23 = v25;
        if (fish::reader::try_expand_wildcard::{{closure}}(a1, v23))
            break;
    }
    v26 = a1->field_8;
    if (a2 < a1->field_8)
    {
        while (true)
        {
            v27 = fish::reader::try_expand_wildcard::{{closure}}(a1, v22);
            v26 = a1->field_8;
            if (v27)
                break;
            v22 += 1;
            if (v22 >= v26)
                break;
        }
    }
    if (!(char)fish::wildcard::wildcard_has(a1->field_0[1].index(v26, v24, v22, &g_14e0e70), v28))
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1) & 0xffffffffffffff00 | 4;
    a3->field_10 = 0;
    v10 = 1;
    v11 = a0 + 472;
    v12 = &g_14c7518;
    v15 = 0x100;
    v16 = 0;
    v13 = alloc::boxed::Box<T>::new();
    v14 = &g_14e0e88;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v8 = a1->field_8;
    *((unsigned long long [2])&v6) = a1->field_0;
    fish::expand::expand_string(&(char)v6, &v0, 131, &v10, 0);
    if ((char)v28 != 2)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v0);
        core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v10);
        return v28 & 4294967295;
    }
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v20.into_iter(&v0);
    (char)v6.next(&v20);
    if (!((char)(((0 ^ (long long)v6) & (0 ^ -((long long)v6))) >> 63)))
    {
        do
        {
            if (!((char)(short)v9 & 8))
            {
                fish::common::escape_string(&v17, v7, v8, 0);
                v3.spec_extend(v18, v18 + v19 * 4);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v17);
            }
            else
            {
                v3.spec_extend(v7, v7 + v8 * 4);
            }
            v3.push(32);
            core::ptr::drop_in_place<fish::complete::Completion>(&(char)v6);
            (char)v6.next(&v20);
        } while ((long long)v6 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::complete::Completion>>(&v20);
    v8 = 0;
    *((int128_t *)&v6) = *((int128_t *)&v3);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a3);
    a3->field_10 = 0;
    a3->field_0 = (int128_t)v6;
    return (unsigned long long)core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v10) & 0xffffffffffffff00 | 2;
}
