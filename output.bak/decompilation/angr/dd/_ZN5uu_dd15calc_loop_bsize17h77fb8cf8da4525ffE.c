long long uu_dd::calc_loop_bsize::h77fb8cf8da4525ff(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long long v1;  // [bp+0x8]
    char v2;  // [bp+0x10]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v3;
    v4 = *((long long *)&v2);
    if (!a0)
    {
        return ::0x4d4e70::core::cmp::min_by::h3a5b4e3765dbfb91(v4, v1 * (a1 - (a2 + a3)));
    }
    else if (a0 != 1)
    {
        return v4;
    }
    else
    {
        return core::cmp::min_by::h39295d55eac2d5ec(v4, 0, a1 - a4, -(a5) - (a1 < a4));
    }
}
