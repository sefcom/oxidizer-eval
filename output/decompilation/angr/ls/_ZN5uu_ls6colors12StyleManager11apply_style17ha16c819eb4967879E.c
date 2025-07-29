long long uu_ls::colors::StyleManager::apply_style(unsigned long a0, char a1[30], unsigned long long a2, struct_0 *a3, char a4)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    int v1;  // [bp-0xa0], Other Possible Types: char
    unsigned long v2;  // [bp-0x9b]
    unsigned long v3;  // [bp-0x98], Other Possible Types: unsigned long long
    int v4;  // [bp-0x88]
    char v5;  // [bp-0x88]
    int v6;  // [bp-0x87]
    void* v7;  // [bp-0x78]
    unsigned int v8;  // [bp-0x77]
    void* v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    void* v11;  // [bp-0x58]
    struct_0 *v12;  // [bp-0x50]
    int v13;  // [bp-0x48]
    unsigned int v14;  // [bp-0x38]
    struct_1 *v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rsi
    void* v19;  // rax
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rdx
    char v22;  // bl
    unsigned long long v23;  // r13
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax

    v9 = 0;
    v10 = 1;
    v11 = 0;
    if (a1[8] == 2)
    {
        v16 = a1.get_normal_style();
        if (v16)
        {
            v14 = *((int *)((char *)&v16->field_1 + 1));
            *((int128_t *)&v13) = *((int128_t *)&(&v16->field_0)[1]);
            if (v16->field_0 != 2)
            {
                v5 = v16->field_0;
                v6 = v13;
                v8 = v14;
                v0.get_style_code(a1, &v5);
                v9.append_elements(*((long long *)&v1), v3, &g_6a0bd8);
                ::0x549fe0::core::ptr::drop_in_place<alloc::string::String>(&v0);
            }
        }
    }
    if (!a2)
    {
        v19 = a1.get_normal_style();
        if (v19)
        {
            *((int128_t *)&v0) = *((int128_t *)v19);
            v2 = (long long)v19[13];
            if ((char)v0 != 2 && (char)a1.is_current_style(&(char)v0))
            {
                if (a1[8] == 2)
                {
                    v20 = 1;
                    v21 = 0;
                }
                else
                {
                    a1[29] = 1;
                    a1[8] = 2;
                    v20 = &g_4263c0;
                    v21 = 4;
                }
                v22 = 1;
                v9.append_elements(v20, v21, &g_6a0bd8);
            }
        }
    }
    else if (!(char)a1.is_current_style(a2))
    {
        if (a1[8] == 2 && a1[29])
        {
            v17 = 0;
            v18 = 1;
        }
        else
        {
            a1[29] = 1;
            a1[8] = 2;
            v18 = &g_4263c0;
            v17 = 4;
        }
        v9.append_elements(v18, v17, &g_6a0bd8);
        v0.get_style_code(a1, a2);
        v9.append_elements((long long)v1, v3, &g_6a0bd8);
        ::0x549fe0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    v23 = 1;
    v7 = 0;
    *((int128_t *)&v4) = *((int128_t *)&v9);
    v3 = a3->field_10;
    *((uint128_t *)&v0) = a3->field_0;
    (char)v4.push(&(char)v0);
    if (!(a1[8] == 2 & ~(v22)))
    {
        a1[29] = 1;
        a1[8] = 2;
        v23 = &g_4263c0;
        v24 = 4;
    }
    else
    {
        v24 = 0;
    }
    (char)v4.push(v23, v24);
    (char)v4.push((!(a4 & 255) ? 1 : &g_42b75e), a4 * 3);
    v25 = v7;
    v12->field_10 = v25;
    v12->field_0 = (int128_t)v4;
    return v25;
}
