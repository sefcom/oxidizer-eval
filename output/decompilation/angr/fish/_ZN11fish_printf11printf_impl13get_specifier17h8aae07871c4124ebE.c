long long fish_printf::printf_impl::get_specifier(unsigned long long a0[2])
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    char v3;  // al
    unsigned int v4;  // eax
    unsigned int v5;  // ebp
    unsigned long long v6;  // rax

    v0 = v2;
    v3 = fish_printf::printf_impl::get_prefix(a0);
    if (v3 && ((int)a0[0].at(a0[1], 0) | 16) == 83)
        return vvar_23{reg 56} & 0xffffff00 | 1;
    v4 = a0[0].at(a0[1], 0);
    v5 = vvar_23{reg 56} & 0xffffff00 | 1;
    if (v4 == 0x110000)
        return v5;
    v6 = v4.from_char();
    if ((char)v6 == 17)
        return v5;
    if (!v3)
    {
        a0.advance_by(1);
        return 0;
    }
    goto (long long)(g_547a78[v6 & 4294967295] + (char *)&g_547a78[0]);
}
