long long starship::modules::memory_usage::pct(unsigned long a0, unsigned long a1)
{
    if (a1 > a0)
        return 0;
    return a0 - a1;
}
