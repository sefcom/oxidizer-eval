long long fish::terminal::Output::write_command(unsigned long a0, char *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // ecx

    v0 = v2;
    v3 = fish::screen::is_dumb();
    v4 = *(a1);
    if ((char)v3)
    {
        if (v4 != 17)
            return v3;
        core::panicking::panic("assertion failed: !matches!(cmd, CursorDown)src/terminal.rsm", 44, &g_14e2880); /* do not return */
    }
    goto (long long)(g_9f5904[v4] + (char *)&g_9f5904[0]);
}
