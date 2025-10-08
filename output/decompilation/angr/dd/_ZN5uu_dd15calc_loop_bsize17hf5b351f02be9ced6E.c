long long uu_dd::calc_loop_bsize(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v1;  // rax

    v0 = v1;
    if (a0 == 2)
    {
        return a7;
    }
    else if (((char)a0 & 1))
    {
        return a7.min(0, a1 - a4, -(a5) - (a1 < a4));
    }
    else
    {
        return a7.min(a6 * (a1 - (a2 + a3)));
    }
}
