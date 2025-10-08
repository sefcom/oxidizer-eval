long long fish_printf::printf_impl::pad(unsigned long long a0, unsigned int a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r15
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rbx
    unsigned long long v6;  // r12
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbx

    v0 = v2;
    switch (a1)
    {
    case 48:
        if (a2 > a3)
        {
            v3 = "0000000000000000";
            break;
        }
        else
        {
            return v2;
        }
    case 32:
        if (a2 > a3)
        {
            v3 = "                l";
            break;
        }
        else
        {
            return v2;
        }
    default:
        core::panicking::panic("assertion failed: c == '0' || c == ' '", 38, &g_149a128); /* do not return */
    }
    v4 = a2 - a3;
    if (a2 < a3)
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_149a0e0); /* do not return */
    }
    else if (a2 != a3)
    {
        while (true)
        {
            v5 = v4;
            v6 = v5.min(16);
            v7 = v6.get(v3, 16);
            if (!v7)
                core::str::slice_error_fail(v3, 16, 0, v6, &g_149a0f8); /* do not return */
            v8 = a0.write_str(v7, a2);
            v9 = v5 - v6;
            if (v5 < v6)
                core::panicking::panic_const::panic_const_sub_overflow(&g_149a110); /* do not return */
            v4 = v9;
            if (v5 == v6)
                return v8;
        }
    }
    else
    {
        return v2;
    }
}
