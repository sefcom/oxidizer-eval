long long fish::screen::Screen::offset_in_cmdline_given_cursor(unsigned long long a0[14], unsigned long a1, unsigned long long a2, unsigned long a3, unsigned long long a4)
{
    unsigned long long v1;  // rax
    void* v2;  // rdi
    unsigned long long v3;  // rax
    unsigned long long v4;  // r14
    unsigned long long v5;  // r12
    unsigned long v6;  // rbx
    unsigned long long v7[4];  // r14
    unsigned long long v8;  // r15
    unsigned long long v9;  // rcx
    unsigned long v10;  // rdx
    unsigned long v11;  // r13
    unsigned long v12;  // rdx
    unsigned long long v13[3];  // rax
    unsigned long v14;  // rcx
    unsigned long v15;  // rax

    v1 = a0[13].command_line_y_given_cursor_y(a4);
    v2 = a2 - v1;
    if (a2 < v1)
    {
        fish::screen::Screen::offset_in_cmdline_given_cursor::{{closure}}(a2, v1);
        v2 = 0;
    }
    if (!a0[11])
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e1960); /* do not return */
    v3 = v2.min(a0[11] - 1);
    v4 = a3 - a0[12];
    if (a3 < a0[12])
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e1978); /* do not return */
    }
    else if (a1 >= v4)
    {
        v5 = v3;
        v6 = &a0[7];
        v7 = v6.line(v3);
        v8 = a1 - v4.max(v7[3]);
        v9 = v7[2];
        v10 = v7[1] + v9 * 24 - 24;
        if (!v9)
            v10 = 0;
        v11 = v7[1] + v8 * 24;
        if (v9 <= v8)
            v12 = v10;
        else
            v12 = v11;
        if (v5)
        {
            v13 = v6.line(v5 - 1);
            if (!v13[2])
                goto LABEL_140bfdc;
            v14 = v13[1] + v13[2] * 24 - 24;
            if (v12)
                v12 = v12;
            else
                v12 = v14;
            if (v12)
                goto LABEL_140bfea;
        }
        else
        {
LABEL_140bfdc:
            if (!v12)
                v12 = 0;
            if (v12)
            {
LABEL_140bfea:
                v15 = *((long long *)v12);
                if (v15 == 3)
                {
                    return (v8 < v7[2]) * 3;
                }
                else if ((unsigned int)v15 != 1)
                {
                    return v15;
                }
                else if (v8 < v7[2])
                {
                    return 1;
                }
                else if ((char)_ccall(4, 24, *((long long *)(v12 + 8)) + 1, 0, (unsigned long long)(char)(v8 < v7[2])))
                {
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e19a8); /* do not return */
                }
                else
                {
                    return 1;
                }
            }
        }
        return 2;
    }
    else
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e1990); /* do not return */
    }
}
