long long fish::abbrs::abbrs_match(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x59]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    char *v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    char v6;  // [bp-0x30]

    v0 = a3;
    v1 = a1;
    v2 = a2;
    v3 = &v0;
    v4 = a4;
    v5 = a5;
    fish::abbrs::with_abbrs(&v6, &v1);
    v1.into_iter(&v6);
    a0.collect(&v1);
    return a0;
}
