long long fd::ensure_use_hidden_option_for_leading_dot_pattern(char a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (!(a0 & 1))
        return 0;
    v0 = a1;
    v1 = a1 + a2 * 24;
    if (v0.any())
    {
        v0 = &g_802950;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        return anyhow::__private::format_err(&v0);
    }
    return 0;
}
