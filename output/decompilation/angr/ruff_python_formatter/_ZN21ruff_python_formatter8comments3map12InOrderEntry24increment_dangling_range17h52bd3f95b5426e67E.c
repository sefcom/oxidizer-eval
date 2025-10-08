long long ruff_python_formatter::comments::map::InOrderEntry::increment_dangling_range(unsigned int a0[4])
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    uint128_t v3;  // [bp-0x20]
    unsigned long long v5;  // rax

    if (a0[3])
    {
        v0 = &g_97d028;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_97d038); /* do not return */
    }
    else if (a0[2])
    {
        return a0[2].increment();
    }
    else
    {
        v5 = a0[1].incremented();
        a0[2] = v5;
        return v5;
    }
}
