char fish::reader::text_ends_in_comment(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x6c]
    char v1;  // [bp-0x5b]
    char v2;  // [bp-0x5a]
    void* v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    void* v6;  // [bp-0x38]
    char v7;  // [bp-0x30]
    void* v8;  // [bp-0x28]
    unsigned int v9;  // [bp-0x20]
    unsigned short v10;  // [bp-0x1c]
    char v11;  // [bp-0x14]
    char v12;  // [bp-0x2]

    v8 = 0;
    v4 = a0;
    v5 = a1;
    v6 = 0;
    v7 = 1;
    v9 = 65793;
    v10 = 0;
    v3 = 0;
    v12 = 2;
    v0.fold(&v3, &v11);
    return v1 == 10 & v2 != 2;
}
