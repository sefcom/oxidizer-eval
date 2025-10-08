char fish::reader::reader_can_replace(unsigned long long a0, unsigned long a1, char a2)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    if ((a2 & 8))
        return 1;
    v0 = a0;
    v1 = a0 + a1 * 4;
    return v0.try_fold().eq(1) ^ 1;
}
