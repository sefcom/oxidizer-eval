void uu_more::reset_term(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    uint128_t v3;  // [bp-0x20]

    crossterm::terminal::disable_raw_mode().unwrap(&g_525318);
    crossterm::command::write_command_ansi(a0).unwrap(&g_525330);
    v0 = &g_525308;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    std::io::stdio::_print(&v0);
    a0.flush().unwrap(&g_525348);
    return;
}
