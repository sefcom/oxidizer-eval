long long uu_dd::read_helper::perform_swab(unsigned long a0, unsigned long long a1)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v4 = v0.new(a1);
    if (!v1)
        return v4;
    while (true)
    {
        if (v0 >= a1)
        {
            core::panicking::panic_bounds_check(v0, a1, &g_5ded18); /* do not return */
        }
        else if (v0 - 1 < a1)
        {
            v1 -= 1;
            v5 = core::ptr::swap(a0 + v0, a0 + v0 - 1);
            v0 += *((long long *)&v2) + 1;
            if (!v1)
                return v5;
        }
        else
        {
            core::panicking::panic_bounds_check(v0 - 1, a1, &g_5ded18); /* do not return */
        }
    }
}
