long long fish::history::file::time_to_seconds(unsigned long long a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    char v3;  // [bp-0x18]
    unsigned long long v5;  // rbx

    v0 = a0;
    v1 = a1;
    v2.duration_since(&v0, 0, 0);
    v5 = *((long long *)&v3);
    if (*((int *)&v2) != 1)
    {
        (v5 < 0 ? 1 : 0).unwrap(&g_14d9c08);
        return v5;
    }
    if (v5 >= 0)
    {
        0.unwrap(&g_14d9c20);
    }
    else
    {
        1.unwrap(&g_14d9c20);
        if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
            core::panicking::panic_const::panic_const_neg_overflow(&g_14d9c38); /* do not return */
    }
    return -(v5);
}
