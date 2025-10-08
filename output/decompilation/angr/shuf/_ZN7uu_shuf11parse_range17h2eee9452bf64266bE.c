long long uu_shuf::parse_range(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x69]
    char v1;  // [bp-0x68]
    char v2;  // [bp-0x67]
    unsigned long v3;  // [bp-0x60]
    int v4;  // [bp-0x58], Other Possible Types: char
    unsigned long v5;  // [bp-0x48]
    char v6;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    char v9;  // [bp-0x28]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax

    core::str::<impl str>::split_once(&v6, a1, a2);
    if (!v6)
    {
        v12 = a0 + 8.to_vec("missing '-'", 11);
        *((unsigned long long *)a0) = 1;
        return v12;
    }
    ::0x462f80::core::num::<impl usize>::from_ascii_radix(&v1, v6, v7);
    if (!v1)
    {
        ::0x462f80::core::num::<impl usize>::from_ascii_radix(&v1, v8, *((long long *)&v9));
        if (v1 != 1)
        {
            *((unsigned long *)&a0[8]) = v3;
            *((unsigned long *)&a0[16]) = v3;
            *((char *)&a0[24]) = 0;
            v11 = 0;
            *((unsigned long long *)a0) = v11;
            return v11;
        }
    }
    v0 = v2;
    v4.spec_to_string(&v0);
    a0[8] = v4;
    *((unsigned long *)&a0[24]) = v5;
    *((unsigned long long *)a0) = 1;
    return v5;
}
