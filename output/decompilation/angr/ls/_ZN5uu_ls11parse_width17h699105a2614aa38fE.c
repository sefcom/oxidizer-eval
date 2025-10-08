double uu_ls::parse_width(long long a0, long long a1)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned short v1;  // [bp-0x50]
    int v2;  // [bp-0x4e]
    char v3;  // [bp-0x3e]
    unsigned long v4;  // [bp-0x30]
    char v5;  // [bp-0x28]
    unsigned long long v7;  // rax
    unsigned long v8;  // xmm0lq

    if (a1)
    {
        uu_ls::parse_width::{{closure}}(&v0, a1[1], a1[2]);
        if (v0 != 9223372036854775814)
        {
            *((unsigned long *)&a0->field_1a[8]) = v4;
            *((int128_t *)((char *)&a0->field_a + 10)) = *((int128_t *)&v3);
            *((void*)&(&a0->field_8)[1]) = v2;
            a0->field_0 = v0;
            a0->field_8 = v1;
            return (unsigned long long)v2;
        }
    }
    else
    {
        std::env::var_os(&v5, "COLUMNS: ignoring invalid width in environment variable COLUMNS: : warning: Invalid pattern for ignore: Invalid pattern for hide: ", 7);
        if (*((long long *)&v5) == 0x8000000000000000)
        {
            v7 = terminal_size::unix::terminal_size();
            if (((char)v7 & 1))
                v1 = (unsigned int)v7 >> 16;
            else
                v1 = 80;
        }
        else
        {
            v1 = uu_ls::parse_width::{{closure}}(&v5);
        }
    }
    a0->field_8 = v1;
    a0->field_0 = 9223372036854775814;
    return v8;
}
