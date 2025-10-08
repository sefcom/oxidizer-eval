long long fish::redirection::Dup2List::add_close(unsigned long long a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (a1 < 0)
    {
        v0 = &g_14e1578;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14e1588); /* do not return */
    }
    return a0.push(a1, 4294967295, &g_14e15a0);
}
