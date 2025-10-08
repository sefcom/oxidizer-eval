long long fish::screen::is_csi_style_escape_seq(unsigned long long *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r14
    unsigned long long v4;  // r14
    unsigned long v5;  // r14

    v0 = v2;
    if ((int)a0.char_at(a1, 1) != 91)
        return 0;
    v3 = 2;
    if (a1 < 3)
        return 1;
    while (true)
    {
        v4 = v3;
        if (*((int *)((char *)a0 + 4 * v4)) > 127)
            return 1;
        v5 = v4 + 1;
        if ((char)*((int *)((char *)a0 + 4 * v4)).contains())
            return 1;
        v3 = v5;
        if (a1 == v3)
            return 1;
    }
}
