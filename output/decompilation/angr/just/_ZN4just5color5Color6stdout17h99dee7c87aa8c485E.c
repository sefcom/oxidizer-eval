long long just::color::Color::stdout(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    std::io::stdio::stdout();
    return a0.redirect(a1);
}
