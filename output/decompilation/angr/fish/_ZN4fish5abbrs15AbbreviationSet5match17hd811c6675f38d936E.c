long long fish::abbrs::AbbreviationSet::match(unsigned long a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3, char a4, unsigned long long a5, unsigned long long a6)
{
    void* v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    void* v2;  // [bp-0xd0]
    struct_1 *v3;  // [bp-0xc8]
    unsigned long v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xb8]
    unsigned long v6;  // [bp-0xb0]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    int v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x88]
    int v12;  // [bp-0x78]
    int v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    int v16;  // [bp-0x48]
    char v17;  // [bp-0x38]
    struct_0 *v18;  // rax
    char v19;  // 4096
    unsigned long long v21;  // rax

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v4 = a1[1];
    v5 = a1[2] * 136 + a1[1];
    if (v4.next_back())
    {
        v19 = a4;
        do
        {
            v19 = vvar_256{reg 56};
            v6 = v7;
            if ((char)v18.matches(a2, a3, v19, a5, a6))
            {
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v7, v18->field_50, v18->field_58);
                v11 = v9;
                memcpy(&v10, &v7, 16);
                v6 = v7;
                v21 = 0x8000000000000000;
                if (v18->field_60 != 0x8000000000000000)
                {
                    fish::builtins::fish_indent::fish_indent::{{closure}}(&v7, v18->field_68, v18->field_70);
                    memcpy(&v12, &v8, 16);
                    v6 = v7;
                    v21 = v7;
                }
                v14 = v11;
                v13 = v10;
                v17 = v18->field_80;
                v15 = v21;
                v16 = v12;
                v0.push(&v13);
                v19 = a4;
            }
            v19 = vvar_256{reg 56};
            v7 = v6;
            v18 = v4.next_back();
        } while (v18);
    }
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return v3;
}
