long long fish::screen::Screen::command_line_y_given_cursor_y(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]

    if (a1 >= a0)
        return a1 - a0;
    v0 = a1 - a0;
    fish::screen::Screen::command_line_y_given_cursor_y::{{closure}}(a1, a0);
    return 0;
}
