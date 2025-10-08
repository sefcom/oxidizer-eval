long long fish::builtins::abbr::abbr_erase(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    if (a1)
        return fish::abbrs::with_abbrs_mut(a0, a1, a2);
    return 4294967297;
}
