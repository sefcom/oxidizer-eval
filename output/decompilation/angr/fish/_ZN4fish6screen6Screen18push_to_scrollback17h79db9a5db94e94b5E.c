long long fish::screen::Screen::push_to_scrollback(unsigned long long a0[25], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x30], Other Possible Types: unsigned short
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v5;  // r14
    unsigned long v6;  // rdi
    unsigned long long v7;  // rax
    unsigned long long v8;  // r15
    unsigned long long v9;  // r15
    unsigned long long v10;  // rdx

    v5 = a0[13].command_line_y_given_cursor_y(a1);
    v6 = &a0[17];
    if ((char)(((0 ^ a0[17]) & (0 ^ -(a0[17]))) >> 63))
        v6 = 0;
    v7 = v6.map_or();
    v8 = v5;
    v9 = v8 - v7;
    if (v8 < v7)
    {
        return (unsigned long long)fish::screen::Screen::push_to_scrollback::{{closure}}(v7, v5);
    }
    else if (v8 != v7)
    {
        v0 = a0[24].new();
        v1 = v10;
        v3 = v9;
        v2 = 38;
        v0.write_command(&v2);
        v3 = v9;
        v2 = 20;
        v0.write_command(&v2);
        return (unsigned long long)core::ptr::drop_in_place<fish::terminal::BufferedOutputter>(&v0);
    }
    else
    {
        return v7;
    }
}
