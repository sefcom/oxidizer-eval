long long uu_join::Line::get_field(unsigned long long a0[6], unsigned long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rsi

    if (a1 >= a0[2])
        return 0;
    v0 = v2;
    v3 = a1 * 16;
    return *((long long *)(a0[1] + v3)).index(*((long long *)(a0[1] + v3 + 8)), a0[4], a0[5], &g_4fe3c8);
}
