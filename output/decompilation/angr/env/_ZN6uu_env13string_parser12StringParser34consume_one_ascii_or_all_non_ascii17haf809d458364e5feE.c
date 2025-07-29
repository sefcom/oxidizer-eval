long long uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(unsigned long a0, void* a1)
{
    int v0[17];  // [bp-0x78]
    void* v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
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

    v1 = 0;
    v2 = 8;
    v3 = 0;
    do
    {
        v4.consume_chunk(a1);
        if (((char)v4 & 1))
        {
            *((unsigned long long *)&v0[8]) = v5;
            *((char *)&v0[16]) = v6;
            *((unsigned long long *)&v0[0]) = 0x8000000000000000;
            ::0x4c29a0::core::ptr::drop_in_place<alloc::vec::Vec<uu_env::string_parser::Chunk>>(&v1);
            return a0;
        }
        v12 = v8;
        v11 = (int)v7;
        v9 = v5;
        v10 = v6;
        if (v5)
        {
            v1.push(&v9);
            continue;
        }
        else
        {
            v1.push(&v9);
            if (*((int *)&v10) < 128)
                break;
            continue;
        }
        v4.peek_chunk(a1);
    } while ((int)v4 == 1 && (v5 || *((int *)&v6) > 127));
    *((unsigned long long *)&v0[16]) = 0;
    *((int128_t *)&v0[0]) = *((int128_t *)&v1);
    return a0;
}
