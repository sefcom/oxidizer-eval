long long fish::widecharwidth::widechar_width::WcWidth::from_char(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbp

    v0 = v2;
    if (fish::widecharwidth::widechar_width::in_table(" ", 1, a0))
    {
        v3 = 0;
    }
    else
    {
        v3 = vvar_16{reg 56} & 0xffffffffffffff00 | 5;
        if (!fish::widecharwidth::widechar_width::in_table(&g_10de994, 3, a0))
        {
            v3 = v3 & 0xffffffffffffff00 | 2;
            if (!fish::widecharwidth::widechar_width::in_table(&g_10de9ac, 24, a0))
            {
                v3 = v3 & 0xffffffffffffff00 | 8;
                if (!fish::widecharwidth::widechar_width::in_table(&g_10dea6c, 18, a0))
                {
                    v3 = v3 & 0xffffffffffffff00 | 3;
                    if (!fish::widecharwidth::widechar_width::in_table(&g_10deafc, 321, a0) && !fish::widecharwidth::widechar_width::in_table(&g_548ad0, 2, a0))
                    {
                        v3 = v3 & 0xffffffffffffff00 | 1;
                        if (!fish::widecharwidth::widechar_width::in_table(&g_10df504, 73, a0))
                        {
                            v3 = v3 & 0xffffffffffffff00 | 4;
                            if (!fish::widecharwidth::widechar_width::in_table(&g_10df74c, 179, a0))
                            {
                                v3 = v3 & 0xffffffffffffff00 | 6;
                                if (!fish::widecharwidth::widechar_width::in_table(&g_10dfce4, 751, a0))
                                    v3 = (!fish::widecharwidth::widechar_width::in_table(&g_10e145c, 66, a0) ? 0 : 7);
                            }
                        }
                    }
                }
            }
        }
    }
    return v3 & 4294967295;
}
