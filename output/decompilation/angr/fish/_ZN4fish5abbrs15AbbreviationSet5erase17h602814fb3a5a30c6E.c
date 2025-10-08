long long fish::abbrs::AbbreviationSet::erase(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    void* v2;  // [bp-0xc0]
    char v3;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    uint128_t v6;  // [bp-0xa0]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10[3];  // rdx

    v8 = a0 + 1.remove(a1, a2);
    if (!(char)v8)
        return v8;
    v0 = a0[1];
    v1 = a0[2] * 136 + a0[1];
    v2 = 0;
    while (true)
    {
        v9 = v0.next_back();
        if (!v10)
        {
            v3 = &g_14c1980;
            v4 = 1;
            v5 = 8;
            v6 = 0;
            core::panicking::panic_fmt(&v3, &g_14c1990); /* do not return */
        }
        else if ((char)v10[1].equal(v10[2], a1, a2))
        {
            v3.remove(a0, v9, &g_14c19a8);
            core::ptr::drop_in_place<fish::abbrs::Abbreviation>(&v3);
            return v8 & 4294967295;
        }
    }
}
