double uu_pr::header_content(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long v3;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x70]
    char *v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    char v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    char *v11;  // [bp-0x28]
    unsigned long long v12;  // [bp-0x20]
    void* v13;  // [bp-0x18]
    struct_1 *v15;  // rax
    unsigned long v16;  // xmm0lq

    v0 = a2;
    if (!a1->field_141)
    {
        a0->field_0 = 0;
        a0->field_8 = 8;
        a0->field_10 = 0;
        return v16;
    }
    v1 = &a1->padding_0[120];
    v2 = <alloc::string::String as core::fmt::Display>::fmt;
    v3 = &a1->padding_0[48];
    v4 = <alloc::string::String as core::fmt::Display>::fmt;
    v5 = &v0;
    v6 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v9 = &g_669650;
    v10 = 3;
    v13 = 0;
    v11 = &v1;
    v12 = 3;
    v7.map_or_else(&v9);
    v15 = 8.alloc_impl(120);
    if (!v15)
        alloc::alloc::handle_alloc_error(8, 120); /* do not return */
    v3 = v8;
    memcpy(&v1, &v7, 16);
    v15->field_0 = 0;
    v15->field_8 = 1;
    v15->field_10 = 0;
    v15->field_20 = 1;
    v15->field_28 = 0;
    v15->field_30 = *((int128_t *)&v1);
    v15->field_40 = v3;
    v15->field_48 = 0;
    v15->field_50 = 1;
    *((uint128_t *)&(&v15->field_50)[1]) = 0;
    *((unsigned long long *)((char *)&v15->field_58 + 8)) = 1;
    v15->field_68 = 0;
    a0->field_0 = 5;
    a0->field_8 = v15;
    a0->field_10 = 5;
    return 0;
}
