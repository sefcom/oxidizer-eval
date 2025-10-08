long long starship::config::parse_style_string(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x70]
    char v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x67]
    unsigned short v3;  // [bp-0x5f]
    unsigned long long v4;  // [bp-0x58]
    void* v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    unsigned short v8;  // [bp-0x18]

    v4 = a3;
    v7.into_searcher(a1, a2);
    v5 = 0;
    v6 = a2;
    v8 = 1;
    v1 = 0;
    v0 = 0;
    v2 = 90194313237;
    v3 = 514;
    a0.try_fold(&v5, &v0, &v4);
    return a0;
}
