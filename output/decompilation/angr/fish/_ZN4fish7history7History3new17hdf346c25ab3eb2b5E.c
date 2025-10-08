long long fish::history::History::new(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x248]
    char v1;  // [bp-0x230], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x228]
    unsigned int v3;  // [bp-0x220]
    char v4;  // [bp-0x21c]
    char v5;  // [bp-0x21b]
    char v6;  // [bp-0x113]
    char v7;  // [bp-0x110]

    v0.to_vec(a0, a1);
    v1.new(&v0);
    memcpy(&v7, &v1, 0x100);
    v1 = 1;
    v2 = 1;
    v3 = 0;
    v4 = 0;
    memcpy(&v5, &v6, 259);
    return v1.new();
}
