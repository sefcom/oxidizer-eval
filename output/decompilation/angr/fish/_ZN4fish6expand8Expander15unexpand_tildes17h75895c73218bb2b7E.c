char fish::expand::Expander::unexpand_tildes(unsigned long long a0[4], char a1, unsigned int *a2, unsigned int a3, struct_0 *a4, unsigned long a5)
{
    char v0;  // [bp-0xb1]
    char *v1;  // [bp-0xb0]
    char v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x88]
    struct_0 *v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    char v8;  // [bp-0x70]
    char v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    char v13;  // al
    unsigned long long v15;  // rdx
    unsigned long long v16;  // r13
    unsigned long long v17;  // rsi
    unsigned long v18;  // rdx
    struct_0 *v19;  // rax
    struct_0 *v20;  // r14
    struct_0 *v21;  // rbx
    char v22;  // al

    if (!a3)
    {
        return v22;
    }
    else if (*(a2) == 126)
    {
        v0 = a1 >> 3 & 1;
        v6 = a4;
        v7 = 56 * a5 + (char *)a4;
        v13 = v6.any(&v0);
        if (!v13)
            return v13;
        v5 = 18446744073709551615;
        v6.from_str("~src/fallback.rs", 1);
        v1 = &v9;
        v9.add(&v6, fish::expand::get_home_directory_name(a2, a3, &v5), v15);
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v6, v10, *((long long *)&v11));
        v4 = *((long long *)&v8);
        memcpy(&v2, &v6, 16);
        if (!a0[0])
        {
            v17 = 472 + a0[1];
            v18 = &g_14c7518;
        }
        else if ((unsigned int)a0[0] == 1)
        {
            v17 = a0[1];
            v18 = a0[2];
        }
        else
        {
            v17 = a0[2];
            v18 = a0[3];
        }
        fish::expand::expand_tilde(&v2, v17, v18);
        if (a5)
        {
            v19 = &a4[1].padding_0[5];
            do
            {
                v20 = a4;
                v21 = v19;
                if ((!v0 || (v20->field_32 & 2)) && v20->field_8.starts_with(v20->field_10, v3, v4))
                {
                    v6.splice(v20, v4, v10, v10 + v16 * 4);
                    core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u32>>>>(&v6);
                    v20->field_32 = v20->field_32 | 16;
                }
                v19 = &v21[1].padding_0[5];
                if (v21 == v7)
                {
                    v19 = v21;
                    if (v21 == v7)
                        break;
                    continue;
                }
                else
                {
                    if (v21 == v7)
                        break;
                    continue;
                }
                a4 = v21;
            } while (a4);
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
        return (char)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
    }
    else
    {
        return v22;
    }
}
