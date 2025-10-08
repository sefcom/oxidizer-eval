long long uu_more::setup_term(unsigned long long a0[2])
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    void* v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rdx

    v0 = v2;
    v3 = std::io::stdio::stdout();
    v4 = crossterm::terminal::enable_raw_mode();
    if (v4)
    {
        v5 = v4.from();
        v7 = v6;
    }
    else
    {
        v5 = 0;
        v7 = v3;
    }
    a0[1] = v7;
    a0[0] = v5;
    return a0;
}
