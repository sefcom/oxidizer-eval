long long fish::builtins::printf::modify_allowed_format_specifiers(char *a0, unsigned long long a1, unsigned long a2, char a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    v0 = a1;
    v1 = a2 + a1;
    v3 = core::str::validations::next_code_point(&v0);
    if (!((char)v3 & 1))
        return v3;
    while (true)
    {
        if ((unsigned int)v4 >= 0x100)
            core::panicking::panic_bounds_check(v4 & 4294967295, 0x100, &g_14cb290); /* do not return */
        a0[v4 & 4294967295] = a3;
        v5 = core::str::validations::next_code_point(&v0);
        if (!((char)v5 & 1))
            return v5;
    }
}
