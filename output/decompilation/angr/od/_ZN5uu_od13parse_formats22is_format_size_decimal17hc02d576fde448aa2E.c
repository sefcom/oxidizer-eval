long long uu_od::parse_formats::is_format_size_decimal(unsigned int a0, char a1, unsigned long long a2)
{
    unsigned int v1;  // ebx

    if ((a0 - 48 < 10 & a1) == 1)
        a2.push(a0);
    return v1 & 0xffffff00 | a0 - 48 < 10 & a1;
}
