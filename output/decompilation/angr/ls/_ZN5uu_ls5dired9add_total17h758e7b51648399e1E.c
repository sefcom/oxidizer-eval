long long uu_ls::dired::add_total(unsigned long long a0[7], unsigned long a1)
{
    if (a0[6])
    {
        a0[6] = a0[6] + a1 + 2;
        return a0[6] + a1 + 2;
    }
    else if (a0[2])
    {
        a0[6] = *((long long *)(a0[1] + a0[2] * 16 - 8)) + 1 + a1 + 2;
        return *((long long *)(a0[1] + a0[2] * 16 - 8)) + 1 + a1 + 2;
    }
    else
    {
        a0[6] = 0 + a1 + 2;
        return 0 + a1 + 2;
    }
}
