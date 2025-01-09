long long uu_expand::is_digit_or_comma::hc2baabf702804034(unsigned long a0)
{
    unsigned long long v1;  // rax

    v1 = a0 - 48 & 4294967295;
    return v1 & 0xffffffffffffff00 | (unsigned int)a0 == 44 | (unsigned int)v1 < 10;
}
