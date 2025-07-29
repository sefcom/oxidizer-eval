long long uu_wc::Inputs::try_iter(struct_0 *a0, unsigned long long a1[4], unsigned long long *a2)
{
    char v0;  // [bp-0xe0]
    char v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    int v3;  // [bp-0xc8]
    int v4;  // [bp-0xb8]
    int v5;  // [bp-0xa8]
    char v6;  // [bp-0x98]
    int v7;  // [bp-0x88], Other Possible Types: char
    unsigned long long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    int v11;  // [bp-0x60]
    int v12;  // [bp-0x50]
    int v13;  // [bp-0x40]
    unsigned long long v14;  // [bp-0x30]
    unsigned long long v16;  // rax
    unsigned long long v17;  // r15
    unsigned long long v18;  // r13
    unsigned long long v19;  // r12

    if (!a1[0])
    {
        v19 = 9223372036854775809;
        v1 = 1;
        v16 = v19.new();
        v17 = v16;
        v18 = &g_59f050;
        v19 = 9223372036854775810;
        if (!(*(a2) == 9223372036854775810))
            goto LABEL_4af28b;
    }
    else if ((unsigned int)a1[0] == 1)
    {
        v16 = a1[2].new(a1[2] + a1[3] * 24);
        v17 = v16;
        v18 = &g_59f088;
        v19 = 9223372036854775810;
        if (!(*(a2) == 9223372036854775810))
            goto LABEL_4af28b;
    }
    else if (a1[1] == 9223372036854775809)
    {
        uu_wc::files0_iter_stdin(&v0);
        v16 = v0.new();
        v17 = v16;
        v18 = &g_59f0f8;
        v19 = 9223372036854775810;
        if (!(*(a2) == 9223372036854775810))
            goto LABEL_4af28b;
    }
    else
    {
        uu_wc::files0_iter_file(&v0, a1[2], a1[3]);
        if (v19 == 9223372036854775809)
        {
            *((unsigned long long *)&a0->field_8) = v9;
            *((unsigned long long *)&a0->padding_9[7]) = v2;
            a0->field_0 = 9223372036854775811;
            return v9;
        }
        v14 = *((long long *)&v6);
        v13 = v5;
        v12 = v4;
        v11 = v3;
        v8 = v19;
        v9 = *((long long *)&v1);
        v10 = v2;
        v16 = v8.new();
        v17 = v16;
        v18 = &g_59f0c0;
        v19 = 9223372036854775810;
        if (*(a2) != 9223372036854775810)
        {
LABEL_4af28b:
            v16 = v19.call_once(a2);
            memcpy(&v7, &v1, 16);
        }
    }
    a0->field_0 = v19;
    *((void*)&a0->field_8) = v7;
    a0->field_18 = v17;
    a0->field_20 = v18;
    a0->field_28 = 0;
    return v16;
}
