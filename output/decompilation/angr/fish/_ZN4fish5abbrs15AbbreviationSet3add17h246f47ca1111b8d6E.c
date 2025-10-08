long long fish::abbrs::AbbreviationSet::add(unsigned long long a0[3], unsigned long long a1[3])
{
    char v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xa8]
    char v2;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    uint128_t v6;  // [bp-0x88]
    unsigned long long v8;  // rdx

    if (!a1[2])
    {
        v2 = &g_14c18e8;
        v4 = 1;
        v5 = 8;
        v6 = 0;
        core::panicking::panic_fmt(&v2, &g_14c18f8); /* do not return */
    }
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v2, a1[1], a1[2]);
    v1 = v5;
    memcpy(&v0, &v2, 16);
    if ((char)a0 + 1.insert(&v0))
    {
        v3 = a0[1];
        v4 = a0[2] * 136 + a0[1];
        if (!((char)v3.position(a1) & 1))
            core::option::expect_failed("Abbreviation not found though its name was presentOld name not found or new name already presentUnable to find named abbreviation", 50, &g_14c1910); /* do not return */
        v3.remove(a0, v8, &g_14c1928);
        core::ptr::drop_in_place<fish::abbrs::Abbreviation>(&v3);
    }
    memcpy(&v2, a1, 136);
    return a0.push(&v2);
}
