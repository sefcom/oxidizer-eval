long long fish::util::get_time()
{
    unsigned long long v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    char v4;  // [bp-0x8]
    unsigned int v6;  // edx
    unsigned long long v7;  // rax

    v0 = std::time::SystemTime::now();
    v1 = v6;
    v2.duration_since(&v0, 0, 0);
    v7 = *((int *)&v4) / 1000 + v3 * 1000000;
    if (*((int *)&v2) != 1)
    {
        return v7;
    }
    else if (!((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63)))
    {
        return -(v7);
    }
    else
    {
        core::panicking::panic_const::panic_const_neg_overflow(&g_14e4518); /* do not return */
    }
}
