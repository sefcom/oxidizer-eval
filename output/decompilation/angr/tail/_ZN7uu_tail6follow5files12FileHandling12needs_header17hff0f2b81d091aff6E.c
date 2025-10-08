long long uu_tail::follow::files::FileHandling::needs_header(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v3;  // rax
    unsigned long v4;  // rax

    if (!a3)
    {
        return 0;
    }
    else if (!((char)(((0 ^ a0[0]) & (0 ^ -(a0[0]))) >> 63)))
    {
        v0 = v4 & 0xffffffffffffff00 | 1;
        v3 = a0[1].eq(a0[2], a1, a2);
        return v3 & 0xffffffffffffff00 | (char)v3 ^ 1;
    }
    else
    {
        return v4 & 0xffffffffffffff00 | 1;
    }
}
