long long uu_csplit::patterns::get_patterns(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    int v3;  // [bp-0x48], Other Possible Types: char
    unsigned long long v4;  // [bp-0x38]
    char v5;  // [bp-0x30], Other Possible Types: unsigned long
    char v6;  // [bp-0x28]
    char v7;  // [bp-0x20]
    unsigned long long v8;  // [bp-0x18]
    char v9;  // [bp-0x10]
    int v11;  // xmm0
    unsigned long long v12;  // rcx

    uu_csplit::patterns::extract_patterns(&v5, a1, a2);
    memcpy(&v3, &v6, 16);
    v4 = v8;
    if (v5 != 13)
    {
        v12 = *((long long *)&v9);
        *((unsigned long long *)&a0->field_8[16]) = v4;
        *((void*)&a0->field_8[0]) = v3;
        *((unsigned long *)&a0->field_0) = v5;
        a0->field_10[0] = v12;
        return a0;
    }
    memcpy(&v0, &v3, 16);
    v2 = v4;
    uu_csplit::patterns::validate_line_numbers(&v5, v1, v4);
    if ((int)v5 == 13)
    {
        *((unsigned long long *)&a0->field_8[16]) = v2;
        *((int128_t *)&a0->field_8[0]) = *((int128_t *)&v0);
        *((unsigned long long *)&a0->field_0) = 13;
    }
    else
    {
        a0->field_10[0] = *((long long *)&v9);
        v11 = *((int128_t *)&v5);
        *((int128_t *)&a0->field_8[8]) = *((int128_t *)&v7);
        *((void*)&a0->field_0) = v11;
        core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&v0);
    }
    return a0;
}
