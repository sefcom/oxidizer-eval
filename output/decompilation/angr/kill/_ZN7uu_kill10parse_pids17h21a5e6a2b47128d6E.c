long long uu_kill::parse_pids(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    a0.collect(a1, a1 + a2 * 24);
    return a0;
}
