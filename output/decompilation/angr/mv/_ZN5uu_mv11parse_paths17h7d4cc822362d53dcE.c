long long uu_mv::parse_paths(unsigned long long a0, unsigned long long a1, unsigned long a2, char a3)
{
    unsigned long long v1;  // rdx

    v1 = a1 + a2 * 24;
    if ((a3 & 1))
        return a0.collect(a1, v1);
    return a0.collect(a1, v1);
}
