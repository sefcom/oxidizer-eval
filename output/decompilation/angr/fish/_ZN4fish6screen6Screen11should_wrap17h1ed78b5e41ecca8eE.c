long long fish::screen::Screen::should_wrap(unsigned long long a0[12], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    unsigned long v4;  // rbx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    v0 = v2;
    if ((char)fish::screen::allow_soft_wrap())
    {
        v3 = a0.line(a1);
        if (v3->field_20 == 1)
        {
            v4 = a1 + 1;
            if ((char)_ccall(4, 24, a1 + 1, 0, (unsigned long long)(char)(v3->field_20 < 1)))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14e1c48); /* do not return */
            }
            else if (v4 < a0[4])
            {
                if (v4 < a0[11])
                {
                    v5 = a0[7].line(v4);
                    v6 = fish::screen::line_shared_prefix(v5, a0.line(v4));
                    return v6 & 0xffffffffffffff00 | !v6;
                }
                return v3 & 0xffffffffffffff00 | 1;
            }
        }
    }
    return 0;
}
