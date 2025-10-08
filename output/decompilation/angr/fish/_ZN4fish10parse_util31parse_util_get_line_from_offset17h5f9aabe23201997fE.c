long long fish::parse_util::parse_util_get_line_from_offset(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax

    if (a2 > a1)
        return 18446744073709551615;
    v0 = v2;
    v3 = fish::wcstringutil::count_newlines(a0, a2);
    v3 >> 63.unwrap(&g_14dd978);
    return v3;
}
