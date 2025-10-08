long long uu_sort::Line::create(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long long a4, struct_2 *a5, struct_1 *a6)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1[3];  // [bp-0x78]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    char v5;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x40]
    int v8;  // [bp-0x38]
    unsigned long long v9;  // rcx
    unsigned long v10;  // rax
    unsigned long long v11;  // r14
    void* v12;  // rsi
    struct_0 *v13;  // rbp
    unsigned long long v14;  // r13
    unsigned long long v15;  // r13
    unsigned int v16;  // eax
    unsigned long v17;  // rcx
    unsigned long v18;  // r13
    unsigned long long v19;  // [bp-0x48]

    v9 = a2;
    a5->field_10 = 0;
    if (!a6->field_60)
    {
        if (!a6->field_98)
            goto LABEL_4d0b07;
LABEL_4d0ad4:
        v0 = a1;
        v10 = a6->field_10;
        if (v10)
            goto LABEL_4d0b5f;
    }
    else
    {
        uu_sort::tokenize(a1, a2, a6->field_78, a5);
        v9 = a2;
        if (a6->field_98)
            goto LABEL_4d0ad4;
LABEL_4d0b07:
        v11 = v9;
        if ((char)a1.is_contained_in(v9))
        {
            v12 = 0;
        }
        else
        {
            v5.from_str(a1, v11);
            v12 = v5 ^ 1;
        }
        a4 + 72.push(v12);
        v9 = v11;
        v0 = a1;
        v10 = a6->field_10;
        if (v10)
        {
LABEL_4d0b5f:
            v13 = a6->field_8;
            v4 = a5->field_8;
            v3 = a4 + 24;
            v2 = a4 + 48;
            v14 = v10 * 56;
            do
            {
                v15 = v14;
                v5.get_selection(v13, v0, v9, v4, a5->field_10);
                v16 = (char)v8;
                v17 = (3 <= (v16 - 2 & 255) ? 1 : v16 - 2);
                if (!(char)v17)
                {
                    v2.push(v5);
                }
                else if ((unsigned int)v17 == 1)
                {
                    v3.push(v7, v16);
                    a4.push(v5, v19, &g_58ce38);
                }
                else if (v13->field_37)
                {
                    a4.push(v5, v19, &g_58ce50);
                }
                v13 += 1;
                v18 = v15 - 56;
                v14 = v18;
            } while (v15 != 56);
        }
    }
    v1[0] = v0;
    v1[1] = v9;
    v1[2] = a3;
    return a3;
}
