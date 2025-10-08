long long uu_sort::FieldSelector::get_selection(struct_1 *a0, char a1[55], void* a2, unsigned long long a3, void* a4, unsigned long long a5)
{
    struct_0 *v0;  // [bp-0x68]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x3c]
    char v6;  // [bp-0x34]
    unsigned long long v8;  // cc_ndep
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx
    void* v11;  // rax
    void* v12;  // r15
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // xmm0lq
    char v16;  // bpl
    unsigned long long v18;  // rdx
    void* v19;  // r15
    unsigned long long v20;  // r14

    if (!a1[54])
        a4 = 0;
    v9 = a1.get_range(a2, a3, a4, a5);
    v11 = v9.get(v10, a2, a3);
    if (!v11)
        core::str::slice_error_fail(a2, a3, v9, v10, &g_58d0b8); /* do not return */
    v12 = v11;
    v13 = a1[53];
    if ((unsigned int)v13 < 2)
    {
        v6 = (char)v13 == 1;
        v5 = 0x2e00110000;
        v1.parse(v12, a2);
        v13 = v3.get(*((long long *)&v4), v12, v10);
        if (!v13)
            core::str::slice_error_fail(v12, v10, v3, *((long long *)&v4), &g_58d0d0); /* do not return */
        v0->field_0 = v13;
        v0->field_8 = v10;
        v0->field_10 = v1;
    }
    else if ((char)v13 == 2)
    {
        v9 = uu_sort::get_leading_gen(v12, v10);
        v14 = v9.get(v10, v12, v10);
        if (!v14)
        {
            v18 = v10;
            v19 = v12;
            core::str::slice_error_fail(v19, v18, v9, v20, &g_58d0e8); /* do not return */
        }
        v1.from_str(v14, a2);
        if ((char)v1)
        {
            v13 = 0;
        }
        else
        {
            v15 = v2;
            if (((char)((CmpF(v15, v15) & 69) >> 2) & 1))
            {
                v13 = 1;
            }
            else if (!(CmpF(0xfff0000000000000, v15) & 1))
            {
                v13 = 2;
            }
            else
            {
                v13 = 4 - (_ccall(0, (unsigned long long)(CmpF(v15, 0x7ff0000000000000) & 69), 0, v8) & 1);
            }
        }
        a0->field_0 = v13;
        a0->field_8 = v15;
        v16 = 2;
    }
    else
    {
        v0->field_0 = v12;
        v0->field_8 = v10;
        v16 = 4;
    }
    a0->field_18 = v16;
    return v13;
}
