long long starship::modules::git_branch::get_first_grapheme(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0xc0]
    void* v1;  // [bp-0xb0]
    void* v2;  // [bp-0xa0]
    void* v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    void* v5;  // [bp-0x80]
    char v6;  // [bp-0x78]
    unsigned int v7;  // [bp-0x74]
    char v8;  // [bp-0x70]
    void* v9;  // [bp-0x68]
    void* v10;  // [bp-0x58]
    void* v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x38]
    unsigned long long v13;  // [bp-0x30]
    void* v14;  // [bp-0x28]
    char v15;  // [bp-0x20]
    unsigned int v16;  // [bp-0x1c]
    char v17;  // [bp-0x18]
    unsigned long long v18;  // [bp-0x10]
    unsigned long long v19;  // [bp-0x8]
    unsigned long long v21;  // rax

    v18 = a0;
    v19 = a1;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = a1;
    v5 = 0;
    v6 = 2;
    v7 = 268566529;
    v8 = 16;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = a1;
    v13 = a1;
    v14 = 0;
    v15 = 2;
    v16 = 268566529;
    v17 = 16;
    v21 = v0.next();
    if (v21)
        return v21;
    return 1;
}
