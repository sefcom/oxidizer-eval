long long fish::key::ctrl_to_symbol(unsigned long long a0, unsigned int a1)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x20]
    unsigned long v4;  // rbp
    unsigned long long v5;  // rsi

    v4 = a1;
    0x100 <= a1.unwrap(&g_14dbdb8);
    if ((char)v4 == 9)
    {
        v5 = "\\";
    }
    else if ((unsigned int)v4 == 13)
    {
        v5 = "\\";
    }
    else if ((unsigned int)v4 == 27)
    {
        v5 = "\\";
    }
    else
    {
        v0 = 4;
        v1 = v4 & 4294967295;
        fish_printf::printf_impl::sprintf_locale(&v2, a0, "\\x%02x~#\\%c%c", 6, &v0, 1);
        v2.unwrap(&g_14dbdd0);
        return core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
    }
    return a0.spec_extend(v5, v5 + 8);
}
