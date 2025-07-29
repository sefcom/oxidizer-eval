long long uu_uniq::Uniq::cmp_key(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    char v6;  // [bp-0x40]
    unsigned long v7;  // [bp-0x38]
    char v8;  // [bp-0x30]
    void* v10;  // rcx
    unsigned long long v11;  // r12
    void* v12;  // r12
    unsigned long long v13;  // r13
    unsigned int v14;  // eax
    unsigned long long v15;  // r12
    unsigned long long v16;  // r13
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    v6.skip_fields(a0->field_0, *((long long *)&a0->field_8), a1, a2);
    v10 = 0;
    if (a0->field_10)
        v10 = a0->field_18;
    v11 = *((long long *)&v8);
    v12 = v11 - v10;
    if (v11 < v10)
        v12 = 0;
    v13 = (v11 > v10 ? v7 + v10 : 1);
    core::str::converts::from_utf8(&v0, v13, v12);
    if ((v0 & 1))
    {
        v0 = v13;
        v1 = v12 + v13;
        v14 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_58bd20);
    }
    else
    {
        v15 = v1;
        v16 = v2 + v15;
        v17 = v15.count(v16);
        v18 = v17;
        if (a0->field_20)
            v18 = a0->field_28;
        v3 = v15;
        v4 = v16;
        v5 = ::0x4a7820::core::cmp::min_by(v18, v17);
        if (a0->field_34)
        {
            v2 = v5;
            v0 = v3;
            v1 = v4;
            v14 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_58bce8);
        }
        else
        {
            v14 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v3, &g_58bc40);
        }
    }
    ::0x4a7c20::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v6);
    return v14;
}
