long long uu_unexpand::unexpand_line(struct_0 *a0, unsigned long long a1[3], unsigned int a2, char a3, unsigned long a4, unsigned long long *a5, unsigned int a6)
{
    unsigned int v0;  // [bp-0x94]
    void* v1;  // [bp-0x90]
    char *v2;  // [bp-0x88]
    void* v3;  // [bp-0x78]
    void* v4;  // [bp-0x70]
    unsigned int v5;  // [bp-0x60]
    unsigned int v6;  // [bp-0x5c]
    unsigned long v7;  // [bp-0x58]
    unsigned long v8;  // [bp-0x50]
    char v9;  // [bp-0x48]
    char v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x18]
    unsigned long long v12;  // r14
    unsigned long long v13[3];  // r12
    struct_0 *v14;  // rbx
    unsigned long long v15[3];  // r14
    unsigned long long v16;  // rax
    unsigned long v17;  // r15
    unsigned long v18;  // rbx
    void* v19;  // r11
    unsigned long v20;  // r11
    unsigned long long v21;  // rax
    void* v22;  // r11
    char v23;  // r13b
    char v24;  // al
    unsigned long long v25;  // rax

    v11 = v12;
    v13 = a1;
    v14 = a0;
    v4 = a0->field_10;
    if (v4)
    {
        v14 = a0;
        v0 = (unsigned int)v4 & 0xffffff00 | 1;
        v6 = a3;
        v5 = a2;
        v7 = a2;
        v3 = 0;
        v2 = a0->field_8;
        v8 = a4 - 1;
        v1 = 0;
        if (v8 >= 0)
        {
            uu_unexpand::next_char_info(&v9, v6, v14->field_8, v4, NULL);
            goto (long long)(g_418d50[v10] + (char *)&g_418d50[0]);
        }
        else
        {
            v15 = a1;
            v16 = uu_unexpand::write_tabs(a1, a5, a6, 0, 0, 0, v0, 1);
            if (v16)
                return v16;
            v17 = v4 - 0;
            v18 = v15[2];
            if (v17 < v15[0] - v18)
            {
                memcpy(v15[1] + v18, v2, v17);
                v15[2] = v18 + v17;
                v19 = v1;
                v13 = v15;
                v20 = v19;
            }
            else
            {
                v21 = v15.write_all_cold(v2, v17);
                if (v21)
                    return v21.from();
                v20 = v1;
                v19 = v20;
                v13 = a1;
            }
        }
    }
    else
    {
        v23 = 3;
        v24 = 1;
        v22 = 0;
        v19 = 0;
    }
    v25 = uu_unexpand::write_tabs(v13, a5, a6, v19, v22, v23 == 2, v24 & 1, 1);
    if (v25)
        return v25;
    v21 = v13.flush();
    if (!v21)
    {
        v14->field_10 = 0;
        return 0;
    }
    return v21.from();
}
