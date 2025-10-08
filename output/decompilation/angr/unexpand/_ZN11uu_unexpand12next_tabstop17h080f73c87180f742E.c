long long uu_unexpand::next_tabstop(unsigned long long *a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long *v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]

    v0 = a2;
    if (a1 != 1)
    {
        v1 = a0;
        v2 = &a0[a1];
        if (!v1.find(&v0))
            return 0;
        return 1;
    }
    else if (*(a0))
    {
        return 1;
    }
    else
    {
        core::panicking::panic_const::panic_const_rem_by_zero(&g_4e82f8); /* do not return */
    }
}
