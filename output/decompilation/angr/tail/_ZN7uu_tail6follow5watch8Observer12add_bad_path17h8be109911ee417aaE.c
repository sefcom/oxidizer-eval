long long uu_tail::follow::watch::Observer::add_bad_path(char a0[143], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5)
{
    char v0;  // [bp-0x18]

    if (a0[140] != 1)
    {
        return 0;
    }
    else if (a0[142] != 2)
    {
        return a0.add_path(a1, a2, a3, a4, 0, *((long long *)&v0), 0);
    }
    else
    {
        return 0;
    }
}
