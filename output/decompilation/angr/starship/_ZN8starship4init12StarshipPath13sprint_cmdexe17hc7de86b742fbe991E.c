long long starship::init::StarshipPath::sprint_cmdexe(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[2];  // [bp-0x68]
    unsigned long v1;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char *v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    char *v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    void* v10;  // [bp-0x18]

    v0.str_path(a1, a2);
    if (!v0)
    {
        a0[1] = v1;
        a0[0] = 0x8000000000000000;
        return 0x8000000000000000;
    }
    *((unsigned long long [2])&v2) = v0;
    v3 = v1;
    v4 = &v2;
    v5 = <&T as core::fmt::Display>::fmt;
    v6 = &g_11f3838;
    v7 = 2;
    v10 = 0;
    v8 = &v4;
    v9 = 1;
    return a0.map_or_else(0, a2, &v6);
}
