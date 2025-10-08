long long fish::signal::match_signal_name(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx

    v0 = v2;
    if (a3 >= 3)
    {
        a3 = a3;
        if ((char)fish::signal::equals_ascii_icase(a2.slice_to(a3, 3), v3, "s", 3))
        {
            a2 = a2.slice_from(a3, 3);
            a3 = v3;
        }
    }
    return fish::signal::equals_ascii_icase(a0.slice_from(a1, 3), v3, a2, a3);
}
