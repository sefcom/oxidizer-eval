long long uu_more::setup_term(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    void* v6;  // rax
    unsigned long long v7;  // rax

    v0 = v2;
    v0 = std::io::stdio::stdout();
    if (!<S as crossterm::tty::IsTty>::is_tty())
    {
        v6 = v0.new();
        a0->field_8 = v6;
        a0->field_10 = &g_5bd208;
        a0->field_0 = 0;
        return v6;
    }
    v4 = crossterm::terminal::enable_raw_mode();
    if (!v4)
    {
        v4 = v5;
        if (!v0.execute())
        {
            if (v5.execute())
            {
                v4 = v5;
            }
            else
            {
                a0->field_8 = 0;
                a0->field_10 = v0;
                a0->field_0 = 0;
                return 0;
            }
        }
    }
    v7 = v4.from();
    a0->field_8 = v7;
    a0->field_10 = v5;
    a0->field_0 = 1;
    return v7;
}
