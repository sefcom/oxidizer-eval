long long uu_echo::Base::ascii_to_number::h59ff941f17249d67(char a0, unsigned int a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long v3;  // rax

    if (a0)
    {
        v0 = v2;
        return uu_echo::Base::ascii_to_number::hexadecimal_ascii_digit_to_number::h4428452b03aed7ea(a1);
    }
    return v3 | -0x100 | (char)a1 - 48 < 8;
}
