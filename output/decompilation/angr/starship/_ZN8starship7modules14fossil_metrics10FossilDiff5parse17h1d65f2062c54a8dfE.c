long long starship::modules::fossil_metrics::FossilDiff::parse(uint128_t a0[2], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    int v0;  // [bp-0x108], Other Possible Types: void*, char
    int v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    int v3;  // [bp-0xf8]
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xc8], Other Possible Types: unsigned short
    int v7;  // [bp-0xc0], Other Possible Types: char
    int v8;  // [bp-0xb0]
    int v9;  // [bp-0xa0]
    char v10;  // [bp-0x90]
    int v11;  // [bp-0x70], Other Possible Types: char
    int v12;  // [bp-0x60]
    int v13;  // [bp-0x50]
    int v14;  // [bp-0x40]
    char v15;  // [bp-0x30]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx

    v0.new("^\\s*(\\d+)\\s+(\\d+) TOTAL over \\d+ changed files?$accountprojectcomputeconfig_", 48);
    v10.unwrap(&v0, &g_11f4758);
    v7.into_searcher(10, a1, a2);
    v5 = v9;
    v4 = v8;
    v3 = v7;
    v0 = 0;
    v2 = a2;
    v6 = 0;
    v17 = v0.next_back_inclusive(a1, a2);
    if (v17)
    {
        v11.captures_at(&v10, v17.call(v18), v18);
        if (*((int *)&v11) != 2)
        {
            v6 = *((long long *)&v15);
            v5 = v14;
            v4 = v13;
            v3 = v12;
            v1 = v11;
            starship::modules::fossil_metrics::FossilDiff::parse::{{closure}}(&v7, a3, &v0);
            if ((long long)v7)
            {
                memcpy(&v3, &v8, 16);
                v0 = v7;
                v0 = 0;
                a0[0] = (int128_t)v0;
                *((void*)&a0[1]) = v3;
                return core::ptr::drop_in_place<regex::regex::string::Regex>(&v10);
            }
        }
    }
    v0.default();
    a0[0] = *((int128_t *)&v0);
    *((void*)&a0[1]) = v3;
    return core::ptr::drop_in_place<regex::regex::string::Regex>(&v10);
}
