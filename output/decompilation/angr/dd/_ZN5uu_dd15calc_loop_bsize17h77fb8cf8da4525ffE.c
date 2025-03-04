long long uu_dd::calc_loop_bsize::h77fb8cf8da4525ff(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v1;  // rax

    v0 = v1;
    if (!a0)
    {
        return ::0x4d4e70::core::cmp::min_by::h3a5b4e3765dbfb91(a7, a6 * (a1 - (a2 + a3)));
    }
    else if (a0 != 1)
    {
        return a7;
    }
    else
    {
        return core::cmp::min_by::h39295d55eac2d5ec(a7, 0, a1 - a4, -(a5) - (a1 < a4));
    }
}
