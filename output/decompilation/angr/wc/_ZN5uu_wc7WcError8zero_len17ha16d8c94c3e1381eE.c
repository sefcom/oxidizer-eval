long long uu_wc::WcError::zero_len(unsigned long long a0[4], unsigned long long a1[3], unsigned long long a2)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rcx
    unsigned long long v8;  // r14
    unsigned long long v9;  // rbx

    v4 = 0x8000000000000000;
    if (!a1)
    {
        a0[0] = 9223372036854775811;
        return a0;
    }
    if (a1[0] == 9223372036854775809)
    {
        v5 = "-";
        v6 = 1;
        v7 = v4;
    }
    else
    {
        v2 = v8;
        v1 = v9;
        uu_wc::escape_name_wrapper(&v0, a1[1], a1[2]);
        v7 = v0;
    }
    a0[0] = v7;
    a0[1] = v5;
    a0[2] = v6;
    a0[3] = a2;
    return a0;
}
