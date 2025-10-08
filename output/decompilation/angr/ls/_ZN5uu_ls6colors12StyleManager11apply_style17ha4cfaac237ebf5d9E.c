long long uu_ls::colors::StyleManager::apply_style(unsigned long a0, struct_3 *a1, unsigned long long a2, unsigned long long a3, char a4)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    int v1;  // [bp-0xa0], Other Possible Types: char
    unsigned long v2;  // [bp-0x9b]
    void* v3;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    void* v6;  // [bp-0x78]
    struct_2 *v7;  // [bp-0x70]
    int v8;  // [bp-0x68]
    unsigned int v9;  // [bp-0x58]
    char v10;  // [bp-0x45]
    int v11;  // [bp-0x44]
    unsigned int v12;  // [bp-0x34]
    struct_0 *v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rsi
    struct_1 *v17;  // rax
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdx
    char v20;  // bl
    unsigned long long v21;  // r14
    unsigned long long v22;  // rdx

    v4 = 0;
    v5 = 1;
    v6 = 0;
    if (a1->field_8 == 2)
    {
        v14 = a1->field_0.get_normal_style();
        if (v14)
        {
            v9 = *((int *)((char *)&v14->field_1 + 1));
            *((int128_t *)&v8) = *((int128_t *)&(&v14->field_0)[1]);
            if (v14->field_0 != 2)
            {
                v10 = v14->field_0;
                v11 = v8;
                v12 = v9;
                v0.get_style_code(a1, &v10);
                v4.spec_extend(*((long long *)&v1), v3 + *((long long *)&v1));
                core::ptr::drop_in_place<alloc::string::String>(&v0);
            }
        }
    }
    if (!a2)
    {
        v17 = a1->field_0.get_normal_style();
        if (v17)
        {
            *((int128_t *)&v0) = *((int128_t *)&v17->field_0[0]);
            v2 = *((long long *)&v17->field_0[13]);
            if ((char)v0 != 2 && (char)a1.is_current_style(&v0))
            {
                if (a1->field_8 == 2)
                {
                    v18 = 1;
                    v19 = 0;
                }
                else
                {
                    a1->field_1d = 1;
                    a1->field_8 = 2;
                    v18 = &g_4cfea8;
                    v19 = 4;
                }
                v20 = 1;
                v4.spec_extend(v18, v19 + v18);
            }
        }
    }
    else if (!(char)a1.is_current_style(a2))
    {
        if (a1->field_8 == 2 && a1->field_1d)
        {
            v15 = 0;
            v16 = 1;
        }
        else
        {
            a1->field_1d = 1;
            a1->field_8 = 2;
            v16 = &g_4cfea8;
            v15 = 4;
        }
        v4.spec_extend(v16, v15 + v16);
        v0.get_style_code(a1, a2);
        v4.spec_extend((long long)v1, v3 + (long long)v1);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    v21 = 1;
    v3 = 0;
    memcpy(&v0, &v4, 16);
    v0.push(a3);
    if (!(a1->field_8 == 2 & ~(v20)))
    {
        a1->field_1d = 1;
        a1->field_8 = 2;
        v21 = &g_4cfea8;
        v22 = 4;
    }
    else
    {
        v22 = 0;
    }
    v0.push(v21, v22);
    v0.push((!a4 ? 1 : &g_4d2861), a4 * 3);
    v7->field_10 = 0;
    v7->field_0 = (int128_t)v0;
    return 0;
}
