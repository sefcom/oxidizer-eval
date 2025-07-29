long long uu_more::Pager::search_pattern_in_file(unsigned long long a0[18])
{
    unsigned long long v0;  // [bp-0x48]
    char v1;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x30], Other Possible Types: unsigned long long
    char v4;  // [bp-0x28]
    unsigned long long v6;  // r14
    unsigned long long v7;  // r15
    unsigned long long v8[3];  // rax

    if ((char)(((0 ^ a0[8]) & (0 ^ -(a0[8]))) >> 63))
        core::option::expect_failed("pattern should be set\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}line should exist", 21, &g_5bd2f0); /* do not return */
    v3.clone(&a0[8]);
    memcpy(&v1, &v4, 16);
    v0 = v3;
    v6 = a0[17];
    v7 = 0;
    while (true)
    {
        v8 = a0.get_line(v6);
        if (!v8)
            break;
        if (!v1.is_contained_in(v2, v8[1], v8[2]))
        {
            v6 += 1;
        }
        else
        {
            v7 = 1;
            break;
        }
    }
    ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return v7;
}
