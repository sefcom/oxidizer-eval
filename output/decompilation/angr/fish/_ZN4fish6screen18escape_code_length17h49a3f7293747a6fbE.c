long long fish::screen::escape_code_length(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rax

    if ((int)a0.char_at(a1, 0) != 27)
        return 0;
    v1 = fish::screen::is_terminfo_escape_seq(a0, a1);
    v3 = v1.or_else(v2, a0, a1).or_else(v2, a0, a1);
    return v3.or_else(v2, a0, a1).or_else(v2, a0, a1).or_else(v2, a0, a1);
}
