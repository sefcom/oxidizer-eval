long long fd::cli::parse_millis(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x18]
    char v1;  // [bp-0x17]
    char v2;  // [bp-0x10]
    unsigned long v4;  // rdx
    unsigned int v5;  // ecx

    ::0x5c5910::core::num::<impl u64>::from_ascii_radix(&v0, a1, a2);
    if (v0 != 1)
    {
        v4 = (*((long long *)&v2) >> 3) / 125;
        v5 = *((long long *)&v2) - (unsigned int)v4 * 1000;
        *((unsigned long *)a0) = v4;
        *((unsigned int *)&a0[8]) = v5 * 1000000;
        return v5 * 1000000;
    }
    *((char *)a0) = v1;
    *((unsigned int *)&a0[8]) = 0x3b9aca00;
    return 0x3b9aca00;
}
