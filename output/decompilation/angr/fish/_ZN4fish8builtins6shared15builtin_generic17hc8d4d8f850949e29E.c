long long fish::builtins::shared::builtin_generic(unsigned long long a0, void* a1, unsigned long long a2[2], unsigned long long a3)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx

    v0.parse(a2, a3, a0, a1);
    if (v1 == 2)
    {
        v3 = *((int *)&v0) * 0x100000000;
        v4 = 1;
    }
    else if ((v1 & 1))
    {
        if (a3)
        {
            fish::builtins::shared::builtin_print_help(a0, a1, a2[0], a2[1]);
            v3 = 0;
            v4 = 0;
        }
        else
        {
            core::panicking::panic_bounds_check(0, 0, &g_14c6210); /* do not return */
        }
    }
    else
    {
        if (a3 != 1)
        {
            if (!a3)
                core::panicking::panic_bounds_check(0, 0, &g_14c61f8); /* do not return */
            if (a2[0].eq_by(a2[0] + a2[1] * 4, "time~%ls", "~%ls"))
                goto LABEL_133366c;
            v4 = 1;
            v3 = 0x100000000;
        }
        else
        {
LABEL_133366c:
            fish::builtins::shared::builtin_print_help(a0, a1, a2[0], a2[1]);
            v4 = 1;
            v3 = 0x200000000;
        }
    }
    return v3 | v4;
}
