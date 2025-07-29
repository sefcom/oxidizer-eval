long long uu_expand::is_digit_or_comma(unsigned int a0)
{
    return a0 - 48 & 0xffffffffffffff00 | a0 == 44 | a0 - 48 < 10;
}
