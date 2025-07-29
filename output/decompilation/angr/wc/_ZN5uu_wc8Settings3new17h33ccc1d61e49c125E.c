long long uu_wc::Settings::new(struct_0 *a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x9c]
    int v1;  // [bp-0x98], Other Possible Types: char
    unsigned long long v2;  // [bp-0x88]
    char v3;  // [bp-0x80]
    char v4;  // [bp-0x7f]
    char v5;  // [bp-0x7e]
    char v6;  // [bp-0x7d]
    char v7;  // [bp-0x7c]
    char v8;  // [bp-0x7b]
    char v9;  // [bp-0x78], Other Possible Types: unsigned long long
    int v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x68]
    char v12;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x48]
    unsigned int v14;  // [bp-0x40]
    unsigned short v15;  // [bp-0x3c]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    char v19;  // al
    char v20;  // al
    char v21;  // al
    char v22;  // al
    char v23;  // al

    v12.try_get_one(a1, _ZN5uu_wc7options11FILES0_FROM17h8fc2e84e76cada7aE, g_59f6d8);
    v17 = _ZN5uu_wc7options11FILES0_FROM17h8fc2e84e76cada7aE.unwrap(g_59f6d8, &v12);
    if (v17)
    {
        v12.call_once(v17);
        v11 = v13;
        memcpy(&v9, &v12, 16);
    }
    else
    {
        v9 = 9223372036854775810;
    }
    v12.try_get_one(a1, _ZN5uu_wc7options5TOTAL17h1b6a3927e84ead75E, g_59f708);
    v18 = _ZN5uu_wc7options5TOTAL17h1b6a3927e84ead75E.unwrap(g_59f708, &v12);
    v0 = (!v18 ? 0 : (int)v18.call_once());
    v19 = a1.get_flag(_ZN5uu_wc7options5BYTES17hf98e9feba5852405E, g_59f6b8);
    v20 = a1.get_flag(_ZN5uu_wc7options4CHAR17h0e37c09bbca16459E, g_59f6c8);
    v21 = a1.get_flag(_ZN5uu_wc7options5LINES17h7a7d7ab3c10ee0dbE, g_59f6e8);
    v22 = a1.get_flag(_ZN5uu_wc7options5WORDS17h50d4562f01753878E, g_59f718);
    v23 = a1.get_flag(_ZN5uu_wc7options15MAX_LINE_LENGTH17ha736897a11d2ae48E, g_59f6f8);
    v2 = v11;
    memcpy(&v1, &v10, 16);
    v3 = v19;
    v4 = v20;
    v5 = v21;
    v6 = v22;
    v7 = v23;
    v8 = v0;
    if (!(int)v1.number_enabled())
    {
        *((unsigned long long *)&a0->field_10) = v2;
        *((void*)&a0->field_0) = v1;
        v14 = 16842753;
        v15 = 0;
        v12 = 9223372036854775810;
        *((unsigned int *)((char *)&a0[1].field_0 + 7)) = 16842753;
        *((char *)&a0[1].field_0 + 11) = 0;
        *((char *)&a0[1].field_0 + 12) = v8;
        core::ptr::drop_in_place<uu_wc::Settings>(&v12);
        return a0;
    }
    *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v1;
    return a0;
}
