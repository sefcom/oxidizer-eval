long long fish::screen::wcwidth_rendered_min_0(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rsi

    v0 = v2;
    v3 = fish::screen::wcwidth_rendered(a0);
    if (v3 < 0)
        return 1.unwrap_or_default(v4);
    return 0.unwrap_or_default(v3);
}
