long long fish::screen::is_two_byte_escape_seq(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    return ((int)a0.char_at(a1, 1) < 64 ? 0 : (int)a0.char_at(a1, 1) < 96);
}
