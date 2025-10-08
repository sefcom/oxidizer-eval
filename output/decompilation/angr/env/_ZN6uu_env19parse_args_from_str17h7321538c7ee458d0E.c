long long uu_env::parse_args_from_str(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x18]

    uu_env::split_iterator::split(&v0, a1, a2);
    if (*((int *)&v0) == 12)
    {
        *((unsigned long *)&a0[16]) = v3;
        *((int128_t *)a0) = *((int128_t *)&v1);
    }
    else
    {
        v7 = v4;
        memcpy(&v6, &v2, 16);
        memcpy(&v5, &v0, 16);
        *((long long *)&a0[8]) = uu_env::parse_args_from_str::{{closure}}(&v5);
        *((char **)&a0[16]) = &g_5108a8;
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    return a0;
}
