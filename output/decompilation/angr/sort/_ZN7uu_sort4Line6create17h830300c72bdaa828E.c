long long uu_sort::Line::create(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, struct_1 *a5, struct_3 *a6)
{
    unsigned int v0;  // [bp-0xe8]
    unsigned int v1;  // [bp-0xe5]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3[3];  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long v5;  // [bp-0xc0]
    unsigned long v6;  // [bp-0xb8]
    struct_0 *v7;  // [bp-0xb0], Other Possible Types: char
    unsigned long long v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    char v12;  // [bp-0x88]
    int v13;  // [bp-0x87]
    unsigned int v14;  // [bp-0x84]
    unsigned long v15;  // [bp-0x80]
    unsigned long long v16;  // [bp-0x78]
    unsigned long long v17;  // [bp-0x70]
    unsigned long long v18;  // [bp-0x68]
    struct_2 *v19;  // [bp-0x60]
    unsigned long long v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x50]
    unsigned long long v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x40]
    char v24;  // [bp-0x38]
    unsigned int v25;  // [bp-0x37]
    unsigned int v26;  // [bp-0x34]
    void* v27;  // rsi
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rcx
    unsigned long long v31;  // r12
    unsigned long long v32;  // rbx
    unsigned long v33;  // rax
    unsigned long v34;  // rdi
    unsigned long long v35;  // rdi
    unsigned long long v36;  // rsi
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rcx

    a5->field_10 = 0;
    if (a6->field_60)
        uu_sort::tokenize(a1, a2, a6->field_78, a5);
    if (!a6->field_98)
    {
        if ((char)a1.is_contained_in(a2))
        {
            v27 = 0;
        }
        else
        {
            v7.from_str(a1, a2);
            v27 = v7 ^ 1;
        }
        a4 + 72.push(v27);
    }
    v15 = a6->field_8;
    v16 = a6->field_10 * 56 + a6->field_8;
    v2 = a1;
    v17 = a1;
    v4 = a2;
    v18 = a2;
    v19 = &a5->padding_0;
    if (v15.next())
    {
        v29 = a4;
        v6 = v29 + 24;
        v5 = v29 + 48;
        do
        {
            v7.call_once(&v17, v28);
            v30 = v8;
            v31 = v9;
            v32 = v10;
            v33 = v12;
            v1 = v14;
            v0 = (int)v13;
            v34 = v30 + 9223372036854775804;
            if (2 <= v30 + 9223372036854775803)
                v34 = 0;
            if (v34 == 2)
            {
                if (!v7->field_37)
                    continue;
                v35 = a4;
                v36 = v31;
                v37 = v32;
                v38 = &g_670528;
            }
            else if (v34 != 1)
            {
                v20 = v30;
                v21 = v31;
                v22 = v32;
                v23 = v11;
                v24 = v33;
                v26 = v1;
                v25 = v0;
                v5.push(&v20);
            }
            else
            {
                v6.push(v11, (unsigned int)v33 & 255 & 1);
                v35 = a4;
                v36 = v31;
                v37 = v32;
                v38 = &g_670510;
            }
            v35.push(v36, v37, v38);
            v28 = v15.next();
        } while (v28);
    }
    v3[0] = v2;
    v3[1] = v4;
    v3[2] = a3;
    return v3;
}
