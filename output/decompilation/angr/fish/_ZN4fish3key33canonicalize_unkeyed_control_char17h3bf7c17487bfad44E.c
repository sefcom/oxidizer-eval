long long fish::key::canonicalize_unkeyed_control_char(char a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (!a0)
    {
        return 62734;
    }
    else if (a0 < 27)
    {
        return a0 | 96;
    }
    else if (a0 < 32)
    {
        return a0 | 64;
    }
    else
    {
        v0 = v2;
        core::panicking::panic("assertion failed: c < 32", 24, &g_14dbb78); /* do not return */
    }
}
