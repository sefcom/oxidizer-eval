long long just::justfile::Justfile::suggest_recipe(void* a0, unsigned long long a1[90], unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x140]
    void* v1;  // [bp-0x138]
    unsigned long v2;  // [bp-0x130]
    unsigned long v3;  // [bp-0x128]
    unsigned long long v4;  // [bp-0x120]
    void* v5;  // [bp-0x118]
    unsigned long v6;  // [bp-0x110]
    unsigned long v7;  // [bp-0x108]
    unsigned long v8;  // [bp-0x100]
    unsigned long long v9;  // [bp-0xf8]
    void* v10;  // [bp-0xf0]
    unsigned long v11;  // [bp-0xe8]
    unsigned long v12;  // [bp-0xe0]
    unsigned long long v13;  // [bp-0xd8]
    void* v14;  // [bp-0xd0]
    unsigned long v15;  // [bp-0xc8]
    unsigned long v16;  // [bp-0xc0]
    unsigned long v17;  // [bp-0xb8]
    char v18;  // [bp-0xb0]
    unsigned long v20;  // rax
    unsigned long v21;  // rax
    unsigned long v23;  // rax
    unsigned long v24;  // rdx
    unsigned long v25;  // rax

    v20 = a1[87];
    v21 = v20;
    if (v21)
        v21 = a1[89];
    v0 = v20;
    v1 = 0;
    v2 = v20;
    v3 = a1[88];
    v4 = v0;
    v5 = 0;
    v6 = v20;
    v7 = a1[88];
    v8 = v21;
    v23 = a1[77];
    v24 = v23;
    v25 = v23;
    if (v25)
        v25 = a1[79];
    v9 = v23;
    v10 = 0;
    v11 = v23;
    v12 = a1[78];
    v13 = v9;
    v14 = 0;
    v15 = v23;
    v16 = a1[78];
    v17 = v25;
    v18.chain(&v0, &v9);
    return a0.find_suggestion(a2, a3, &v18);
}
