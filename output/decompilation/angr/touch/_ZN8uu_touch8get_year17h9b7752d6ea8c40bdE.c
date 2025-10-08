long long uu_touch::get_year(unsigned int a0, char a1)
{
    return a0 * 2 * 5 & 0xffffff00 | (char)a0 * 10 + a1 - 16;
}
