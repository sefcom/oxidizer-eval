long long uu_shred::pass_name(unsigned long long a0, char *a1)
{
    unsigned long v0;  // [bp-0x78], Other Possible Types: unsigned long long
    char *v1;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x68]
    char *v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    char *v5;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long v8;  // [bp-0x38]
    char *v9;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x28]
    char *v11;  // [bp-0x20]
    unsigned long long v12;  // [bp-0x18]
    unsigned long long v13;  // [bp-0x10]
    unsigned long long v14;  // [bp-0x8]

    if (*(a1) == 2)
    {
        return a0.to_vec("random", 6);
    }
    else if ((*(a1) & 1))
    {
        v7 = v0;
        v8 = a1 + 2;
        v0 = a1 + 3;
        v1 = &v7;
        v2 = <&T as core::fmt::LowerHex>::fmt;
        v3 = &v8;
        v4 = <&T as core::fmt::LowerHex>::fmt;
        v5 = &v0;
        v6 = <&T as core::fmt::LowerHex>::fmt;
        v9 = &g_41aa58;
        v10 = 3;
        v13 = &g_41ab18;
        v14 = 3;
        v11 = &v1;
        v12 = 3;
        return a0.map_or_else(&v9);
    }
    else
    {
        v0 = v7;
        v9 = &v0;
        v10 = <&T as core::fmt::LowerHex>::fmt;
        v1 = &g_41aa58;
        v2 = 3;
        v5 = &g_41aa88;
        v6 = 3;
        v3 = &v9;
        v4 = 1;
        return a0.map_or_else(&v1);
    }
}
