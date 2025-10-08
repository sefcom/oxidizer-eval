char fish::parse_util::parser_is_pipe_forbidden(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    unsigned long long v10;  // [bp-0x10]
    unsigned long long v11;  // [bp-0x8]

    v0 = a0;
    v1 = a1;
    v2 = "e";
    v3 = 4;
    v4 = "c";
    v5 = 4;
    v6 = "b";
    v7 = 5;
    v8 = "r";
    v9 = 6;
    v10 = "c";
    v11 = 8;
    return v0.slice_contains(&v2, 5);
}
