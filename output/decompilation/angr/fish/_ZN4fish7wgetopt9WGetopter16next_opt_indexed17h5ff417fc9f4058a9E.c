long long fish::wgetopt::WGetopter::next_opt_indexed(void* a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned int v2;  // eax
    unsigned long long v3;  // rcx
    void* v4;  // rdx

    v0 = 18446744073709551615;
    v2 = a1.wgetopt_inner(&v0);
    v3 = v0;
    if (v0 == -1)
    {
        v3 = 2;
        v4 = 8;
        if (v2 != 0x110000)
        {
            *((unsigned int *)a0) = v2;
            v3 = 0;
        }
    }
    else if (v2 == 0x110000)
    {
        v3 = 2;
        v4 = 8;
    }
    else
    {
        *((unsigned int *)a0) = v2;
        *((unsigned long long *)&a0[8]) = 1;
        v4 = 16;
    }
    *((unsigned long long *)(a0 + v4)) = v3;
    return a0;
}
