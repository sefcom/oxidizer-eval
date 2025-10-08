long long uu_df::mount_info_lt(unsigned long long a0[15], unsigned long long a1[15])
{
    unsigned int v0;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x34]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rbp
    unsigned long long v7;  // r13
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v0 = v3;
    v0 = 0;
    v4 = ::0x466280::core::char::methods::encode_utf8_raw(&v0);
    if ((char)core::slice::<impl [T]>::starts_with(a0[4], a0[5], v4))
    {
        v1 = 0;
        v5 = ::0x466280::core::char::methods::encode_utf8_raw(&v1);
        if (!(char)core::slice::<impl [T]>::starts_with(a1[4], a1[5], v5))
            return 0;
    }
    v6 = a0[14];
    v7 = a1[14];
    if (a0[11] && a1[11])
    {
        if ((a0[11] <= a1[11] ^ 1 | v7 <= v6) != 1)
            return 0;
    }
    else
    {
        if (v6 < v7)
            return 0;
    }
    v8 = a0[4].eq(a0[5], a1[4], a1[5]);
    if ((char)v8)
        return v8 & 0xffffffffffffff00 | 1;
    v9 = a0[13].eq(v6, a1[13], v7);
    return v9 & 0xffffffffffffff00 | (char)v9 ^ 1;
}
