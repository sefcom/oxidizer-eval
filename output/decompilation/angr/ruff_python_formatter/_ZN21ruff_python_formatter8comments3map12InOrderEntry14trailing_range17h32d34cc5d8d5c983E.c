long long ruff_python_formatter::comments::map::InOrderEntry::trailing_range(unsigned int a0[4])
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (a0[2])
    {
        return a0[2] - 1;
    }
    else if (!a0[3])
    {
        return a0[1] - 1;
    }
    else
    {
        v0 = &g_97d068;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_97d078); /* do not return */
    }
}
