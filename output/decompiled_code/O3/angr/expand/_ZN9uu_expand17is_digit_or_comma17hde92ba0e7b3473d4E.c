long long uu_expand::is_digit_or_comma::hde92ba0e7b3473d4(unsigned long a0)
{
    unsigned long long v1;  // rax

    v1 = a0 - 48 & 4294967295;
    return v1 | -0x100 | (unsigned int)a0 == 44 | (unsigned int)v1 < 10;
}
