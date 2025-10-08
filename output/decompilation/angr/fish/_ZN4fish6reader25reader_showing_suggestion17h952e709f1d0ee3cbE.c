long long fish::reader::reader_showing_suggestion()
{
    unsigned long long v1[163];  // rax
    unsigned long long v2[163];  // rbx
    unsigned long v3;  // rcx
    char v4;  // al
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx

    if (!fish::proc::is_interactive_session())
        return 0;
    v1 = fish::reader::current_data();
    if (v1)
    {
        v2 = v1;
        v3 = v1[161].ends_with(v1[162], " ", 1);
        v4 = 1;
        if ((char)v3)
        {
            v5 = fish::editable_line::line_at_cursor(v2[5], v2[6], v2[15]);
            if (!v2[162])
                core::panicking::panic_const::panic_const_sub_overflow(&g_14dfcd0); /* do not return */
            v4 = (char)v5.equal(v6, v2[161].index(v2[162], v2[162] - 1, &g_14dfce8), v6) ^ 1;
        }
        return (unsigned int)v3 & 0xffffff00 | v2[162] & v4;
    }
    return 0;
}
