long long uu_test::isatty(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x30], Other Possible Types: unsigned int
    int v5;  // [bp-0x2c]
    char v6;  // [bp-0x1c]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    core::str::converts::from_utf8(&v0, a1, a2);
    if (*((int *)&v0) != 1)
    {
        v8 = core::num::<impl i32>::from_ascii_radix(v1, v2);
        if (!((char)v8 & 1))
        {
            v9 = isatty(v8 >> 32);
            *((char *)&a0[8]) = (unsigned int)v9 == 1;
            *((unsigned long long *)a0) = 7;
            return v9;
        }
    }
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    v4.spec_to_string(&v0);
    *((int *)&a0[28]) = *((int *)&v6);
    a0[12] = v5;
    *((unsigned long long *)a0) = 5;
    *((unsigned int *)&a0[8]) = v4;
    return v4;
}
