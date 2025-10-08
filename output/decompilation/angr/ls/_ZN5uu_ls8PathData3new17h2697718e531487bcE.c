void uu_ls::PathData::new(unsigned long a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3[3], unsigned int a4, unsigned int a5, char a6)
{
    unsigned int v0;  // [bp-0x154]
    unsigned long long v1;  // [bp-0x150]
    unsigned long v2;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long v3;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long v4;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long v5;  // [bp-0x130]
    unsigned int v6;  // [bp-0x124]
    unsigned long long v7[3];  // [bp-0x120]
    char v8;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xe0]
    char v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x28]
    unsigned long long v13;  // [bp-0x20]
    unsigned long long v14;  // [bp-0x18]
    unsigned long long v15;  // [bp-0x10]
    unsigned long long v16;  // r15
    unsigned long long v17;  // r14
    unsigned long long v18;  // r13
    unsigned long long v19;  // r12
    unsigned long long v20;  // rbx
    unsigned long long v21;  // rax

    v15 = v16;
    v14 = v17;
    v13 = v18;
    v12 = v19;
    v11 = v20;
    v6 = a4;
    v7[0] = a3;
    v1 = a2;
    v5 = a3[0];
    if (!((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63)))
    {
        v3 = a3[1];
        v4 = a3[2];
        v0 = 0;
        v2 = v5;
        goto (long long)(g_4d10a0[a5] + (char *)&g_4d10a0[0]);
    }
    else if (a6)
    {
        v8.clone(a1[1], a1[2]);
        v2 = v8;
        v3 = v9;
        v4 = *((long long *)&v10);
        v0 = (int)*((long long *)&v10) & 0xffffff00 | 1;
        goto (long long)(g_4d10b0[a5] + (char *)&g_4d10b0[0]);
    }
    else
    {
        v21 = a1[1].file_name(a1[2]);
        if (!v21)
            v21 = (unsigned long long)uu_ls::PathData::new::{{closure}}(a1[1], a1[2]);
        v8.to_vec(v21, a2);
        v2 = v8;
        v3 = v9;
        v4 = *((long long *)&v10);
        v0 = (int)*((long long *)&v10) & 0xffffff00 | 1;
        goto (long long)(g_4d10a0[a5] + (char *)&g_4d10a0[0]);
    }
}
