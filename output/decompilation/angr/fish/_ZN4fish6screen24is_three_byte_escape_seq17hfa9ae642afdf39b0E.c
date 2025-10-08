long long fish::screen::is_three_byte_escape_seq(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if ((int)a0.char_at(a1, 1) == 91 && (int)a0.char_at(a1, 2) >= 64)
        return (int)a0.char_at(a1, 2) < 96;
    return 0;
}
