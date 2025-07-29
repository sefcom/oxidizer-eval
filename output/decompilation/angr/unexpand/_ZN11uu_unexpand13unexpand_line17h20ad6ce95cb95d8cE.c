long long uu_unexpand::unexpand_line(unsigned long long a0[3], unsigned long long a1[3], unsigned int a2, char a3, unsigned long a4, unsigned long long *a5, unsigned long long a6)
{
    char v0;  // [bp-0x9d]
    unsigned int v1;  // [bp-0x9c]
    void* v2;  // [bp-0x98]
    unsigned long v3;  // [bp-0x78]
    unsigned long v4;  // [bp-0x70]
    unsigned int v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x64]
    unsigned long v7;  // [bp-0x60]
    unsigned long v8;  // [bp-0x58]
    char v9;  // [bp-0x48]
    char v10;  // [bp-0x40]
    unsigned long long v11[3];  // r13
    unsigned int v12;  // eax
    unsigned long long v13;  // rax
    unsigned long v14;  // r15
    void* v15;  // rbx
    unsigned long long v16[3];  // r12
    unsigned long long v17;  // r13
    unsigned long long v18;  // rax
    unsigned int v19;  // eax
    unsigned long long v21[3];  // rbx
    unsigned long long v22;  // rax

    v11 = a0;
    if (a0[2])
    {
        v0 = 3;
        v1 = v12 & 0xffffff00 | 1;
        v6 = a3 & 1;
        v5 = a2;
        v8 = a2 & 1;
        v2 = 0;
        v11[0] = a0;
        v4 = a0[2];
        v3 = a4 - 1;
        if (v3 >= 0)
        {
            v7 = a0[1];
            uu_unexpand::next_char_info(&v9, v6, a0[1], v4, NULL);
            v0 = v10;
            goto (long long)(g_42fef0[v10] + (char *)&g_42fef0[0]);
        }
        else
        {
            v13 = uu_unexpand::write_tabs(a1, a5, a6, 0, 0, 0, (char)v1 & 1, 1);
            if (v13)
                return v13;
            v14 = v4 - 0;
            if (v4 < 0)
                core::slice::index::slice_start_index_len_fail(0, v4, &g_57ac40); /* do not return */
            v15 = 0 + a0[1];
            v16 = a1;
            v17 = v16[2];
            if (v14 < v16[0] - v17)
            {
                memcpy(v16[1] + v17, v15, v14);
                v16[2] = v17 + v14;
                v0 = 3;
                v2 = 0;
            }
            else
            {
                v18 = v16.write_all_cold(v15, v14);
                v0 = 3;
                v2 = 0;
                if (v18)
                    return v18.from();
            }
        }
    }
    else
    {
        v1 = v19 & 0xffffff00 | 1;
        v0 = 3;
        v2 = 0;
    }
    v21 = a1;
    v22 = uu_unexpand::write_tabs(v21, a5, a6, 0, 0, 0, (char)v1 & 1, 1);
    if (v22)
        return v22;
    v18 = v21.flush();
    if (!v18)
    {
        v11.truncate(0);
        return 0;
    }
    return v18.from();
}
