long long fd::output::print_entry(unsigned long long a0, void* a1, struct_0 *a2)
{
    unsigned long v0;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x90]
    char *v2;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x80]
    int v4;  // [bp-0x80]
    void* v5;  // [bp-0x78]
    int v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char *v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    int v11;  // [bp-0x40], Other Possible Types: char
    char v12;  // [bp-0x30]
    unsigned long long v15;  // 4100
    unsigned long v16;  // cc_ndep
    char v17;  // bpl
    unsigned long long v18;  // r15
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax

    if (a2->field_1e8)
    {
        v11.new(a1.path(), a2);
        v15 = *((long long *)&v11);
        v17 = _ccall(1, 8, 0, v15, v16);
        if (!((char)(((0 ^ v15) & (0 ^ -(v15))) >> 63)))
        {
            v8 = *((long long *)&v12);
            v6 = v11;
            v9 = &(char)v6;
            v10 = <fd::hyperlink::PathUrl as core::fmt::Display>::fmt;
            v0 = &g_8024f0;
            v1 = 2;
            v5 = 0;
            v2 = &v9;
            v3 = 1;
            v18 = a0.write_fmt(&v0);
            core::ptr::drop_in_place<fd::hyperlink::PathUrl>((long long)v6, v7);
            if (v18)
                return v18;
        }
        if (a2->field_30 != 2)
            goto LABEL_5f69b0;
LABEL_5f6985:
        if ((char)(((0 ^ a2->field_c8) & (0 ^ -(a2->field_c8))) >> 63))
        {
            v19 = fd::output::print_entry_uncolorized(a0, a1, a2);
            if (v19)
                return v19;
        }
        else
        {
            v20 = fd::output::print_entry_colorized(a0, a1, a2, &a2->field_c8);
            if (v20)
                return v20;
        }
    }
    else
    {
        if (a2->field_30 == 2)
            goto LABEL_5f6985;
LABEL_5f69b0:
        v21 = fd::output::print_entry_format(a0, a1, a2, &a2->field_30);
        if (v21)
            return v21;
    }
    if (v17)
    {
        v0 = &g_802510;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v4) = 0;
        v22 = a0.write_fmt(&v0);
        if (v22)
            return v22;
    }
    *((int *)&v0) = (!a2->field_1e2 ? &g_802530 : &g_802520);
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v4) = 0;
    return a0.write_fmt(&v0);
}
