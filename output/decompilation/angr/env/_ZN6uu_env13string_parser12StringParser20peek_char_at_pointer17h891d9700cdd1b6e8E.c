long long uu_env::string_parser::StringParser::peek_char_at_pointer(void* a0, unsigned long long a1[5], unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    uint128_t v3;  // [bp-0x48]
    char v4;  // [bp-0x30]
    char *v5;  // [bp-0x20]
    char v6;  // [bp-0x18]
    unsigned int v8;  // eax

    if (a2 > a1[1])
    {
        v0 = &g_5104e8;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_5106a8); /* do not return */
    }
    core::slice::<impl [T]>::split_at_unchecked(&v4, a1[0], a1[1], a2);
    if (!*((long long *)&v6))
    {
        *((unsigned long long *)a0) = a1[4];
        *((char *)&a0[8]) = 0;
        return a0;
    }
    v8 = uu_env::native_int_str::get_char_from_native_int(*(v5));
    if (v8 == 0x110000)
        *((unsigned int *)a0) = 65533;
    else
        *((unsigned int *)a0) = v8;
    *((char *)&a0[8]) = 2;
    return a0;
}
