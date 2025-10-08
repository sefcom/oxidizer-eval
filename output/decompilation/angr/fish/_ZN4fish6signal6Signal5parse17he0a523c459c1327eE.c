long long fish::signal::Signal::parse(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    unsigned long long v4;  // rax
    unsigned int v5;  // ebx

    v0 = v2;
    if ((char)fish::signal::match_signal_name("S", 6, a0, a1))
    {
        v3 = &g_14e21e0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 6, a0, a1))
    {
        v3 = &g_14e2210.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2240.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 6, a0, a1))
    {
        v3 = &g_14e2270.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e22a0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e22d0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 6, a0, a1))
    {
        v3 = &g_14e2300.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 6, a0, a1))
    {
        v3 = &g_14e2330.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2360.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2390.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e23c0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e23f0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2420.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2450.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2480.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e24b0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e24e0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2510.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2540.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2570.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e25a0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 6, a0, a1))
    {
        v3 = &g_14e25d0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2600.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2630.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 9, a0, a1))
    {
        v3 = &g_14e2660.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 7, a0, a1))
    {
        v3 = &g_14e2690.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 8, a0, a1))
    {
        v3 = &g_14e26c0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 5, a0, a1))
    {
        v3 = &g_14e26f0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 6, a0, a1))
    {
        v3 = &g_14e2720.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 6, a0, a1))
    {
        v3 = &g_14e2750.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 9, a0, a1))
    {
        v3 = &g_14e2780.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 6, a0, a1))
    {
        v3 = &g_14e27b0.padding_0[0];
    }
    else if ((char)fish::signal::match_signal_name("S", 6, a0, a1))
    {
        v3 = &g_14e27e0.padding_0[0];
    }
    else
    {
        v4 = fish::wutil::wcstoi::fish_wcstoi(a0, a1);
        v5 = v4 >> 32;
        if (!((v5 <= 0 | (char)v4) & 1))
        {
            v5.new();
            return v5;
        }
        return 0;
    }
    return v3->field_28;
}
