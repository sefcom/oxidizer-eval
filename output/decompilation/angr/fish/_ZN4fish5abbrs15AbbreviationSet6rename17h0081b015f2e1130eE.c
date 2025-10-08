long long fish::abbrs::AbbreviationSet::rename(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x71]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    uint128_t v4;  // [bp-0x48]
    unsigned long v6;  // rbx
    unsigned long long v7;  // rax
    struct_0 *v8;  // r13
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rax

    v6 = a0 + 1;
    v0 = v6.remove(a1, a2);
    v1.to_vec(a3, a4);
    if (!(char)v6.insert(&v1) && v0)
    {
        v7 = a0->field_10;
        if (!v7)
            return v7;
        v8 = a0->field_8;
        v9 = v7 * 136;
        while (true)
        {
            v10 = v9;
            v11 = v8->field_0[1].equal(v8->field_8, a1, a2);
            if ((char)v11)
            {
                v1.to_vec(a3, a4);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v8);
                v8->field_8 = v3;
                *((int128_t *)&v8->field_0[0]) = *((int128_t *)&v1);
                return v3;
            }
            v8 = &v8[4].field_0[1];
            v9 = v10 - 136;
            if (v10 == 136)
                return v11;
        }
    }
    v1 = &g_14c1958;
    v2 = 1;
    v3 = 8;
    v4 = 0;
    core::panicking::panic_fmt(&v1, &g_14c1968); /* do not return */
}
