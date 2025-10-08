long long fish_printf::fmt_fp::decimal::Decimal::trim_trailing_zeros(unsigned long long a0)
{
    int v0;  // [bp-0x38]
    int v1;  // [bp-0x38]
    int v2;  // [bp-0x28]
    unsigned int *v4;  // rax

    while (true)
    {
        v0.iter(a0);
        v4 = v2.next_back();
        v0 = v0;
        if (!v4)
        {
            v1 = v2;
            v2 = v0;
            v4 = v2.next_back();
            v0 = v1;
            if (!v4)
                return v4;
        }
        if (*(v4))
            return v4;
        a0.pop_back();
    }
}
