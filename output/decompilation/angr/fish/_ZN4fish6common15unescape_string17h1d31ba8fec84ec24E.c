long long fish::common::unescape_string(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4)
{
    if (!a3)
    {
        fish::common::unescape_string_internal(a0, a1, a2, a4);
        return a0;
    }
    if (a3 == 1)
        fish::common::unescape_string_url(a0, a1, a2);
    else
        fish::common::unescape_string_var(a0, a1, a2);
    return a0;
}
