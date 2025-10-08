long long uu_cp::backup_dest(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    v0 = v2;
    if (a5)
    {
        v3 = std::fs::rename(a1, a2, a3, a4);
        if (v3)
        {
            a0[0] = 9223372036854775809;
            a0[1] = v3;
            return v3;
        }
    }
    else
    {
        v4 = std::fs::copy(a1, a2, a3, a4);
        if (((char)v4 & 1))
        {
            a0[0] = 9223372036854775809;
            a0[1] = v5;
            return v4;
        }
    }
    v6 = a0[1].to_vec(a3, a4);
    a0[0] = 9223372036854775820;
    return v6;
}
