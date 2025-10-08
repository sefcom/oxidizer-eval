long long starship::formatter::string_formatter::StringFormatter::parse::parse_textgroup(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xa0]
    char v1;  // [bp-0x9e]
    char v2;  // [bp-0x98]
    char v3;  // [bp-0x8e]
    char v4;  // [bp-0x88]
    char v5;  // [bp-0x7b]
    int v6;  // [bp-0x7a]
    unsigned short v7;  // [bp-0x6a]
    int v8;  // [bp-0x68], Other Possible Types: char
    unsigned short v9;  // [bp-0x58]
    int v10;  // [bp-0x48]
    unsigned short v11;  // [bp-0x38]
    int v14;  // xmm0

    starship::formatter::string_formatter::StringFormatter::parse::parse_style(&v0, a1 + 24, a3);
    if (v0 != 2)
    {
        if ((v0 & 1))
        {
            *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v4);
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
            a0->field_0 = 1;
            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<starship::formatter::model::FormatElement>>(a1);
        }
        memcpy(&v8, &v1, 16);
        v9 = *((short *)&v3);
    }
    v11 = v9;
    v14 = v8;
    v10 = v8;
    v5 = 2;
    v6 = v10;
    v7 = v9;
    return starship::formatter::string_formatter::StringFormatter::parse::parse_format(a0, a1, &v5, a2, a3, a4);
}
