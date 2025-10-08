long long meilitool::upgrade::v1_10::update_index_stats(unsigned long long a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned int v0;  // [bp-0x170]
    unsigned int v1;  // [bp-0x16d]
    unsigned long long v2;  // [bp-0x168]
    unsigned long long v3;  // [bp-0x160]
    int v4;  // [bp-0x158], Other Possible Types: char
    unsigned long long v5;  // [bp-0x148]
    unsigned int v6;  // [bp-0x138]
    unsigned int v7;  // [bp-0x135]
    char v8;  // [bp-0x131]
    unsigned long long v9;  // [bp-0x130]
    char v10;  // [bp-0x128]
    int v11;  // [bp-0x118]
    unsigned long long v12;  // [bp-0x108]
    int v13;  // [bp-0x100]
    unsigned long long v14;  // [bp-0xf0]
    char v15;  // [bp-0xe8]
    unsigned int v16;  // [bp-0xe5]
    char v17;  // [bp-0xe1]
    unsigned long v18;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v19;  // [bp-0xd8]
    int v20;  // [bp-0xc8]
    unsigned long long v21;  // [bp-0xb8]
    char v22;  // [bp-0xb0]
    unsigned long long v23;  // [bp-0xa0]
    int v24;  // [bp-0x98]
    char v25;  // [bp-0x80]
    unsigned long long v27;  // rbx

    v2 = a2;
    v3 = a3;
    (char)v6.get(a0, a1, a5, a4);
    v25.with_context(&(char)v6, &v2);
    v15.with_context(&v25);
    if (v17 == 2)
        return v18;
    v1 = v16;
    v0 = *((int *)&v15);
    v24 = v19;
    memcpy(&v4, &v22, 16);
    v5 = v23;
    if ((v17 & 1))
        return 0;
    v14 = v5;
    v13 = v4;
    v6 = v0;
    v7 = v1;
    memcpy(&v10, &v24, 16);
    v11 = v20;
    v12 = v21;
    v8 = v17;
    v9 = v18;
    v25.put(a0, a1, a5, a4, &(char)v6);
    v27 = v25.with_context(&v2, a2).with_context();
    core::ptr::drop_in_place<meilitool::upgrade::v1_9::IndexStats>(&(char)v6);
    if (v27)
        return v27;
    return 0;
}
