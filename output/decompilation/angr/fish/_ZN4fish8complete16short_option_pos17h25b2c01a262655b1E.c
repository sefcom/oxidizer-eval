long long fish::complete::short_option_pos(unsigned long long a0, unsigned int a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    void* v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v8;  // rax
    unsigned int v9;  // edx

    if (a1 < 2 || fish::complete::leading_dash_count(a0, a1) != 1)
        return 0;
    v1 = a0;
    v2 = a0 + a1 * 4;
    v3 = 0;
    v4 = 1;
    v4 = 1;
    if (!(0))
        goto LABEL_0x13908c3;
    v8 = v1.next();
    if (v9 == 0x110000)
        return 1;
    continue;
    return 1;
    return 0;
}
