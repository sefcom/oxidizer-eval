long long uu_du::parse_depth(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long long
    char v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx

    if (!a1)
    {
        v5 = 0;
        goto LABEL_4de967;
    }
    ::0x4d9920::core::num::<impl u64>::from_str_radix(&v0, a1, a2);
    if (v0)
    {
        if (!(!a3))
            goto LABEL_4de924;
        v1.to_vec(a1, a2);
        v0 = 0;
        goto LABEL_4de93d;
    }
    else if (a3)
    {
LABEL_4de924:
        v1.to_vec(a1, a2);
        v0 = 1;
LABEL_4de93d:
        *((double *)&a0[1]) = v0.new();
        a0[2] = &g_5e4ae0;
        v3 = 1;
    }
    else
    {
        v4 = *((long long *)&v1);
        v5 = 1;
LABEL_4de967:
        a0[1] = v5;
        a0[2] = v4;
        v3 = 0;
    }
    a0[0] = v3;
    return a0;
}
