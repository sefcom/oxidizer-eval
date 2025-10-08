long long fish::color::simple_icase_compare(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long a3)
{
    return a0.cmp_by(a0 + a1 * 4, a2, a2 + a3 * 4);
}
