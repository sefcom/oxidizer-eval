long long uu_dd::blocks::unblock::h328a1d7e73c47058(unsigned long long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    void* v0;  // [sp-0x48], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x40]
    void* v2;  // [sp-0x38], Other Possible Types: unsigned long long
    int v3;  // [sp-0x30]
    unsigned long v4;  // [sp-0x18]
    unsigned long long v5;  // [sp-0x10]
    unsigned long long v6;  // [sp-0x8]

    if (a3)
    {
        v4 = a1;
        v5 = a2;
        v6 = a3;
        v0 = 0;
        v1 = 1;
        v2 = 0;
        return core::iter::traits::iterator::Iterator::fold::h2b84e305e1d72edf(a0, &v4, &v0);
    }
    v0 = &g_561910;
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v3) = 0;
    core::panicking::panic_fmt::he12d0d7468628bb4(&v0, &g_561920); /* do not return */
}
