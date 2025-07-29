long long uu_sort::FieldSelector::get_selection(unsigned long long *a0, char a1[55], unsigned long long a2, unsigned long long a3, void* a4, unsigned long long a5)
{
    struct_0 *v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x5c]
    char v2;  // [bp-0x54]
    char v3;  // [bp-0x50], Other Possible Types: unsigned long
    char v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // r15
    unsigned long v12;  // rax
    char v13;  // bpl
    unsigned long long v14;  // rax
    unsigned long long *v15;  // rcx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    if (!a1[54])
        a4 = 0;
    v8 = a1.get_range(a2, a3, a4, a5);
    v10 = v8.get(v9, a2, a3);
    if (!v10)
        core::str::slice_error_fail(a2, a3, v8, v9, &g_670710); /* do not return */
    v11 = v10;
    v12 = a1[53];
    if ((unsigned int)v12 < 2)
    {
        v2 = (char)v12 == 1;
        v1 = 0x2e00110000;
        v3.parse(v11, a2);
        v13 = v4;
        v14 = v5.get(*((long long *)&v6), v11, v9);
        if (!v14)
            core::str::slice_error_fail(v11, v9, v5, *((long long *)&v6), &g_670740); /* do not return */
        v15 = a0;
        v0->field_8 = v14;
        v0->field_10 = v9;
        v0->field_18 = v3;
        v0->field_20 = v13;
        v16 = 9223372036854775813;
    }
    else
    {
        if ((char)v12 == 2)
        {
            v17 = uu_sort::get_leading_gen(v11, v9);
            v18 = v17.get(v9, v11, v9);
            if (!v18)
                core::str::slice_error_fail(v11, v9, v17, v9, &g_670728); /* do not return */
            return (unsigned long long)uu_sort::general_bd_parse(a0, v18, a2);
        }
        v15 = a0;
        v0->field_8 = v11;
        v0->field_10 = v9;
        v16 = 9223372036854775814;
    }
    *(v15) = v16;
    return v16;
}
