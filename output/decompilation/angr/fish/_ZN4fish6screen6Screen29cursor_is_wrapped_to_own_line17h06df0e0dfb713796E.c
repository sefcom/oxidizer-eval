long long fish::screen::Screen::cursor_is_wrapped_to_own_line(unsigned long long a0[14])
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // cc_ndep
    unsigned long long v5;  // rax

    v0 = v2;
    if (a0[12])
        return 0;
    v3 = a0[13];
    if (!v3)
    {
        return 0;
    }
    else if ((char)_ccall(4, 24, v3 + 1, 0, _ccall(20, v3, 0, v4)))
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14e19f0); /* do not return */
    }
    else if (v3 + 1 != a0[11])
    {
        return 0;
    }
    else
    {
        v5 = fish::screen::is_dumb();
        return v5 & 0xffffffffffffff00 | (char)v5 ^ 1;
    }
}
