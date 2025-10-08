long long fish::common::valid_func_name(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x18], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x14]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // r14
    unsigned long long v6;  // rbx
    unsigned long v7;  // rax
    unsigned long long v8;  // rax

    if (!a1)
        return 0;
    v3 = v5;
    v2 = v6;
    v0 = v7;
    if (a0.starts_with(a1, 45))
        return 0;
    v0 = 47;
    if (!v0.slice_contains(a0, a1))
    {
        v1 = 0;
        v8 = v1.slice_contains(a0, a1);
        return v8 & 0xffffffffffffff00 | (char)v8 ^ 1;
    }
    return 0;
}
