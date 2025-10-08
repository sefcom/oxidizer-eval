char fish::abbrs::AbbreviationSet::has_match(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, char a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x39]
    unsigned long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    char *v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]

    v0 = a3;
    v1 = a0[1];
    v2 = a0[2] * 136 + a0[1];
    v3 = a1;
    v4 = a2;
    v5 = &v0;
    v6 = a4;
    v7 = a5;
    return v1.any(&v3);
}
