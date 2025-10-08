long long uu_more::Pager::draw_lines(unsigned long long a0[5], unsigned long long a1)
{
    unsigned long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    char *v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    void* v10;  // [bp-0x40]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16;  // r13
    unsigned long long v17;  // rax
    unsigned long long v19;  // rax

    v12 = crossterm::command::write_command_ansi(a1);
    if (!v12)
    {
        v12 = a1.flush();
        if (!v12)
        {
            v13 = a0.load_visible_lines();
            if (v13)
            {
                return v13;
            }
            else if (a0[4])
            {
                v14 = a0[3];
                v15 = a0[4] * 24;
                while (true)
                {
                    v16 = v15;
                    v0 = v14;
                    v4 = &v0;
                    v5 = <&T as core::fmt::Display>::fmt;
                    v6 = &g_525308;
                    v7 = 1;
                    v10 = 0;
                    v8 = &v4;
                    v9 = 1;
                    v1.map_or_else(&v6);
                    v17 = a1.write_all(v2, v3);
                    if (v17)
                    {
                        v19 = v17.from();
                        core::ptr::drop_in_place<alloc::string::String>(&v1);
                        return v19;
                    }
                    core::ptr::drop_in_place<alloc::string::String>(&v1);
                    v14 += 24;
                    v15 = v16 - 24;
                    if (v16 == 24)
                        return 0;
                }
            }
            else
            {
                return 0;
            }
        }
    }
    return v12.from();
}
