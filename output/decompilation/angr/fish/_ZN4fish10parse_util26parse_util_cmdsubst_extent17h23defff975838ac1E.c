long long fish::parse_util::parse_util_cmdsubst_extent(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    int v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x38]
    void* v7;  // rbx
    void* v8;  // rax
    unsigned long v9;  // rdx

    fish::parse_util::parse_util_locate_cmdsub(&v0, a0, a1, 0, 1, 0, 0);
    if (*((int *)&v0) < 2)
        return 0;
    v7 = 0;
    while (true)
    {
        memcpy(&v4, &v1, 16);
        v5 = v3;
        v8 = v4.command();
        if ((a2 <= v9 & v8 <= a2))
        {
            if (v8 < v9)
            {
                v2 = v8 + 1;
                v7 = v8;
            }
            else
            {
                return v8;
            }
        }
        else
        {
            if (a2 < v8)
            {
                return v7;
            }
            else if (v9 < a2)
            {
                v7 = v7;
                if (v2 > a1)
                    core::panicking::panic("assertion failed: pos <= buff.len()assertion failed: cursor_pos >= cmdsub_range.startassertion failed: cmdsubst_begin <= buff.len()assertion failed: cmdsubst_range.end <= buff.len()assertion failed: prev_begin <= buff.len()assertion failed: prev_end >= pre", 35, &g_14dd6c0); /* do not return */
            }
            else
            {
                core::panicking::panic("assertion failed: command.end < cursorassertion failed: pos <= buff.len()assertion failed: cursor_pos >= cmdsub_range.startassertion failed: cmdsubst_begin <= buff.len()assertion failed: cmdsubst_range.end <= buff.len()assertion failed: prev_begin <= buff.", 38, &g_14dd6a8); /* do not return */
            }
        }
        fish::parse_util::parse_util_locate_cmdsub(&v0, a0, a1, v2, 1, 0, 0);
        if (*((int *)&v0) < 2)
            return v7;
    }
}
