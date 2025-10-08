void meilitool::main()
{
    char v0;  // [bp-0xf8]
    int v1;  // [bp-0xe8]
    char v2;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xc8]
    char v4;  // [bp-0xb8]
    unsigned int v5;  // [bp-0xb4]
    unsigned long long v6;  // [bp-0xb0]
    int v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long v9;  // [bp-0x98]
    unsigned int v10;  // [bp-0x84]
    unsigned long long v11;  // [bp-0x80]
    int v12;  // [bp-0x78], Other Possible Types: char
    unsigned long long v13;  // [bp-0x68]
    char v14;  // [bp-0x60]
    int v15;  // [bp-0x50]
    char v16;  // [bp-0x40]
    unsigned long long v17;  // [bp-0x30]
    unsigned long long v18;  // [bp-0x28]
    unsigned long long v19;  // [bp-0x20]
    unsigned long long v20;  // [bp-0x18]
    unsigned long long v21;  // [bp-0x10]
    unsigned long long v23;  // r15
    unsigned long long v24;  // r14
    unsigned long long v25;  // r12
    unsigned long long v26;  // rbx

    v21 = v23;
    v20 = v24;
    v19 = v25;
    v18 = v26;
    v12.parse();
    v9 = v13;
    v7 = v12;
    v3 = v17;
    memcpy(&v2, &v16, 16);
    v1 = v15;
    memcpy(&v0, &v14, 16);
    meilisearch_types::versioning::get_version(&v12, v8, v13);
    v4.context(&v12, "While checking the version file", 31);
    if ((v4 & 1))
    {
        goto (long long)(g_54b770[v0] + (char *)&g_54b770[0]);
    }
    else
    {
        v10 = v5;
        v11 = v6;
        goto (long long)(g_54b744[v0] + (char *)&g_54b744[0]);
    }
}
