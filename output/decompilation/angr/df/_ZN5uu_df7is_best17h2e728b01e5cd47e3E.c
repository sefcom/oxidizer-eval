long long uu_df::is_best(unsigned long long a0[3], unsigned long a1, unsigned long long a2[3])
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned int v3;  // ebx
    unsigned int v4;  // ebx
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rbp

    v0 = v2;
    v4 = v3 & 0xffffff00 | 1;
    if (!a1)
        return v4;
    v5 = a1 * 152;
    while (true)
    {
        v6 = v5;
        if ((char)a0[1].eq(a0[2], a2[1], a2[2]) && (char)uu_df::mount_info_lt(a2, a0))
            return 0;
        a0 = &a0[6 + 1];
        v5 = v6 - 152;
        if (v6 == 152)
            return v4;
    }
}
