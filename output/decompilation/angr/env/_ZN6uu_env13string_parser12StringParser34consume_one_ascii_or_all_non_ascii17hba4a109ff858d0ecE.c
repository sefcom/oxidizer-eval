long long uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(unsigned long a0, void* a1)
{
    void* v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    void* v2;  // [bp-0x68]
    void* v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    int v7;  // [bp-0x47]
    unsigned int v8;  // [bp-0x44]
    unsigned long long v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    unsigned int v11;  // [bp-0x37]
    unsigned int v12;  // [bp-0x34]

    v0 = 0;
    v1 = 8;
    v2 = 0;
    do
    {
        v4.consume_chunk(a1);
        if ((int)v4 == 1)
        {
            *((unsigned long long *)&v3[8]) = v5;
            *((char *)&v3[16]) = v6;
            *((unsigned long long *)v3) = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v0, 8);
            return v3;
        }
        v12 = v8;
        v11 = (int)v7;
        v9 = v5;
        v10 = v6;
        if (v5)
        {
            v0.push(&v9);
            continue;
        }
        else
        {
            v0.push(&v9);
            if (*((int *)&v10) < 128)
                break;
            continue;
        }
        v4.peek_chunk(a1);
    } while ((int)v4 == 1 && (v5 || *((int *)&v6) > 127));
    *((unsigned long long *)&v3[16]) = 0;
    *((int128_t *)v3) = *((int128_t *)&v0);
    return a0;
}
