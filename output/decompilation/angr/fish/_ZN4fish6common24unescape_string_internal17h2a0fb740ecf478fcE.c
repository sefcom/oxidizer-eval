void fish::common::unescape_string_internal(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0xf4]
    unsigned int v1;  // [bp-0xf0]
    char v2;  // [bp-0xe9]
    void* v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    void* v5;  // [bp-0xd8]
    void* v6;  // [bp-0xd0]
    void* v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xc0]
    void* v9;  // [bp-0xb8]
    void* v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0xa8]
    void* v12;  // [bp-0xa0]
    unsigned long long v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x90]
    unsigned int v15;  // [bp-0x84]
    unsigned long long v18;  // [bp-0x78]
    unsigned long long v19;  // [bp-0x70]
    unsigned long long v20;  // [bp-0x68]
    unsigned long v26;  // rbp
    void* v27;  // rbx
    char v28;  // al
    unsigned int v29;  // esi
    void* v30;  // rbx

    v26 = a3;
    v27 = a0;
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v3.reserve(a2);
    v28 = fish::future_feature_flags::test(4);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v27 = a0;
    v6 = 0;
    if (((char)v26 & 2))
        v29 = 0;
    else
        v29 = 92;
    v15 = v29;
    v0 = v26;
    v2 = (v28 ^ 1) & (char)v26;
    v20 = &g_14c0958;
    v19 = "assertion failed: escape_chars > 0assertion failed: !result.is_empty()not an escape";
    v13 = &g_14c09b8;
    v18 = &g_14c0a00;
    v1 = 0;
    v30 = 0;
    v14 = 0;
}
