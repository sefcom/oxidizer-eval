double uu_numfmt::format::round_with_precision(char a0, long long a1)
{
    char v0;  // [bp-0x11]
    unsigned long long v1;  // [bp-0x10]
    int v3;  // xmm0

    v0 = a0;
    pow(0x4024000000000000, (unsigned long long)(AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000)));
    v1 = 0x4024000000000000;
    v0.round();
    return (unsigned long long)(DivV(MulV(v3 & 18446744073709551615, 0x4024000000000000), 0x4024000000000000));
}
