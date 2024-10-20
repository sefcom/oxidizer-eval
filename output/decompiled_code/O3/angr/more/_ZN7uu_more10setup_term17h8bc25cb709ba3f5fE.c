long long uu_more::setup_term::h8bc25cb709ba3f5f(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x10]
    unsigned long long v3;  // rdi
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rax

    v5 = crossterm::terminal::sys::unix::enable_raw_mode::had0f7565aa58cdce(v3, v4);
    if (v5)
    {
        v0 = v5;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    return std::io::stdio::stdout::h077da66234850927();
}
