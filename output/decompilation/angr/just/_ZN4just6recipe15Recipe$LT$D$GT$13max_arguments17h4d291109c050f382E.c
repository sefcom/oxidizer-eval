long long just::recipe::Recipe<D>::max_arguments(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rbx

    v2 = v4;
    v0 = a0;
    v1 = a1 * 208 + a0;
    if (v0.any())
        return 18446744073709551614;
    return a1;
}
