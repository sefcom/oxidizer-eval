long long fish::screen::wcswidth_rendered(unsigned long long a0, unsigned long a1)
{
    return a0.fold(a0 + a1 * 4);
}
