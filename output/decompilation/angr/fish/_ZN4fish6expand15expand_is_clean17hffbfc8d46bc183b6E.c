long long fish::expand::expand_is_clean(unsigned int *a0, unsigned long a1)
{
    unsigned int *v0;  // [bp-0x20], Other Possible Types: unsigned int
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // r14
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long v8;  // rax

    if (!a1)
        return v8 & 0xffffffffffffff00 | 1;
    v3 = v5;
    v2 = v6;
    v0 = *(a0);
    if (!v0.slice_contains("~", 2))
    {
        v0 = a0;
        v1 = &a0[a1];
        v7 = v0.try_fold().eq(1);
        return v7 & 0xffffffffffffff00 | (char)v7 ^ 1;
    }
    return 0;
}
