char fish::parse_util::parse_util_argument_is_help(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]

    v0 = a0;
    v1 = a1;
    v2 = "-";
    v3 = 2;
    v4 = "-";
    v5 = 6;
    return v0.slice_contains(&v2, 2);
}
