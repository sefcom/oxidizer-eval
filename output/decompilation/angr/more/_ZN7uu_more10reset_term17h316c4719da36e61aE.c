long long uu_more::reset_term()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    uint128_t v4;  // [bp-0x18]
    char *v6;  // rdi
    unsigned long long v7;  // rax

    v0 = std::io::stdio::stdout();
    v6 = &v0;
    if (<S as crossterm::tty::IsTty>::is_tty())
    {
        v7 = crossterm::command::write_command_ansi(v6);
        if (!v7)
        {
            v7 = crossterm::command::write_command_ansi(&v0);
            if (!v7)
            {
                v7 = crossterm::terminal::disable_raw_mode();
                if (!v7)
                    goto LABEL_4bdad9;
            }
        }
    }
    else
    {
        v7 = crossterm::command::write_command_ansi(v6, 4);
        if (!v7)
        {
            v1 = &g_5bd258;
            v2 = 1;
            v3 = 8;
            v4 = 0;
            v7 = v0.write_fmt(&v1);
            if (!v7)
            {
LABEL_4bdad9:
                v7 = v0.flush();
                if (!v7)
                    return 0;
            }
        }
    }
    return v7.from();
}
