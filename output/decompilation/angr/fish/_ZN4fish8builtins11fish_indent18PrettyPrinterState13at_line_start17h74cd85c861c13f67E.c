long long fish::builtins::fish_indent::PrettyPrinterState::at_line_start(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned int v3;  // eax
    unsigned int v4;  // edx
    unsigned int v5;  // ecx
    unsigned int v6;  // ecx

    v0 = a0;
    v1 = a0 + a1 * 4;
    v3 = v0.next_back();
    if (v3 == 2)
        return v6 & 0xffffff00 | 1;
    v3.unwrap(v4, &g_14bd3d0);
    return v5 & 0xffffff00 | v4 == 10;
}
