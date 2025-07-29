void uu_uniq::handle_extract_obs_skip_fields(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    char v0;  // [bp-0xca]
    char v1;  // [bp-0xc9]
    int v2;  // [bp-0xc8], Other Possible Types: char
    unsigned long v3;  // [bp-0xb8], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    void* v6;  // [bp-0x98]
    char v7;  // [bp-0x90]
    unsigned long long v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    char v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    char *v14;  // [bp-0x50]
    char *v15;  // [bp-0x48]
    char *v16;  // [bp-0x40]
    int v17;  // [bp-0x38], Other Possible Types: char
    char v18;  // [bp-0x28]
    unsigned long long v20;  // rax

    v4 = 0;
    v5 = 4;
    v6 = 0;
    v1 = 0;
    v0 = 0;
    v12 = a1;
    v13 = a1 + a2;
    v14 = &v0;
    v15 = &v1;
    v16 = &v4;
    v7.from_iter(&v12, &g_58bac8);
    if (!v6)
    {
        (char)v2.to_owned(a1, a2);
        a0->field_10 = v3;
        *((void*)&a0->field_0) = v2;
    }
    else if (v0)
    {
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a3);
        *((unsigned long long *)&a3->field_0) = 0x8000000000000000;
        v20 = v9;
        if (v9 <= 1)
            goto LABEL_4aa5d6;
LABEL_4aa512:
        v17.from_iter(v8, v8 + v20 * 4);
        a0->field_10 = *((long long *)&v18);
        *((void*)&a0->field_0) = v17;
    }
    else
    {
        v10.from_iter(4, 4 + v6 * 4);
        if (*((long long *)&a3->field_0) != 0x8000000000000000)
            v10.append_elements(*((long long *)&a3->padding_1[7]), a3->field_10, &g_58bb90);
        v3 = v11;
        memcpy(&v2, &v10, 16);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a3);
        a3->field_10 = v3;
        *((void*)&a3->field_0) = v2;
        v20 = v9;
        if (!(v9 <= 1))
            goto LABEL_4aa512;
LABEL_4aa5d6:
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    }
    ::0x4a7ca0::core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v7);
    ::0x4a7ca0::core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v4);
    return;
}
