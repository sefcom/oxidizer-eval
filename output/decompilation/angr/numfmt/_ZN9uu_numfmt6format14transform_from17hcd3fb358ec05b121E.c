long long uu_numfmt::format::transform_from(void* a0, unsigned long long a1, unsigned long long a2, unsigned long a3, char a4)
{
    unsigned int v0;  // [bp-0x58]
    unsigned short v1;  // [bp-0x54]
    char v2;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    char v5;  // [bp-0x3f]
    unsigned int v6;  // [bp-0x3e]
    unsigned short v7;  // [bp-0x3a]
    unsigned long long v8[2];  // [bp-0x38]
    unsigned long v9;  // [bp-0x30]
    char v10;  // [bp-0x28]
    unsigned long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    uu_numfmt::format::parse_suffix(&v2, a1, a2);
    v12 = v5;
    if (!((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63)))
    {
        v1 = v7;
        v0 = v6;
        *((unsigned short *)&a0[22]) = v7;
        *((unsigned int *)&a0[18]) = v6;
        *((unsigned long long *)a0) = v2;
        *((unsigned long *)&a0[8]) = v3;
        *((char *)&a0[16]) = v4;
        *((char *)&a0[17]) = v12;
        return v12;
    }
    uu_numfmt::format::remove_suffix(&v8, v4, v12, a4);
    if (v8 != 0x8000000000000000)
    {
        v14 = *((long long *)&v10);
        *((unsigned long long *)&a0[16]) = v14;
        *((unsigned long long [2])a0) = v8;
        return v14;
    }
    v13 = uu_numfmt::format::transform_from::{{closure}}(a4);
    *((unsigned long *)&a0[8]) = v9;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return v13;
}
