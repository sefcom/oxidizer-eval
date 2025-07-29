long long uu_join::State::reset_read_line(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x60]
    int v2;  // [bp-0x58]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x30]
    int v6;  // [bp-0x28]
    char v7;  // [bp-0x18]

    v0.read_line(a0, a1);
    if (v0 == 9223372036854775809)
        return v1;
    memcpy(&v7, &v3, 16);
    v6 = v2;
    v4 = v0;
    v5 = v1;
    a0.reset(&v4);
    return 0;
}
