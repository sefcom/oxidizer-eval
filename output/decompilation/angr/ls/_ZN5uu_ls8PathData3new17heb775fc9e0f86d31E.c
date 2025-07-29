void uu_ls::PathData::new(unsigned long a0, unsigned long long a1[3], unsigned long long a2, struct_0 *a3, unsigned int a4, unsigned int a5, char a6)
{
    struct_0 *v0;  // [bp-0x168]
    unsigned long long v1[3];  // [bp-0x160]
    unsigned int v2;  // [bp-0x14c]
    int v3;  // [bp-0x148], Other Possible Types: char
    unsigned long v4;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x130]
    char v6;  // [bp-0xe8]
    char v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    unsigned long long v12;  // [bp-0x10]
    unsigned long long v13;  // r15
    unsigned long long v14;  // r14
    unsigned long long v15;  // r13
    unsigned long long v16;  // r12
    unsigned long long v17;  // rbx
    unsigned long v18;  // 4117
    unsigned long long v19;  // rax

    v12 = v13;
    v11 = v14;
    v10 = v15;
    v9 = v16;
    v8 = v17;
    v2 = a4;
    v18 = *((long long *)&a3->field_0);
    v1[0] = a1;
    v5 = a2;
    v0 = a3;
    if (!((char)(((0 ^ v18) & (0 ^ -(v18))) >> 63)))
    {
        v4 = a3->field_10;
        *((int128_t *)&v3) = *((int128_t *)&a3->field_0);
        goto (long long)(g_427b34[a5] + (char *)&g_427b34[0]);
    }
    else if (a6)
    {
        v6.clone(a1);
        v4 = *((long long *)&v7);
        memcpy(&v3, &v6, 16);
        goto (long long)(g_427b44[a5] + (char *)&g_427b44[0]);
    }
    else
    {
        v19 = a1[1].file_name(a1[2]);
        if (!v19)
            v19 = (unsigned long long)uu_ls::PathData::new::{{closure}}(a1[1], a1[2]);
        v6.to_owned(v19, a2);
        v4 = *((long long *)&v7);
        memcpy(&v3, &v6, 16);
        goto (long long)(g_427b34[a5] + (char *)&g_427b34[0]);
    }
}
