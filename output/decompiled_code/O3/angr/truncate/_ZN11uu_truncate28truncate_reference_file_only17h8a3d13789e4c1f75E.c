long long uu_truncate::truncate_reference_file_only::h8a3d13789e4c1f75(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned int a4)
{
    char v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xd0]
    char v2;  // [bp-0x88]
    void* v4;  // rax
    unsigned long long v6[3];  // rax

    std::fs::metadata::h6368ec5e748c38e4(&v0, a0, a1);
    if (*((int *)&v0) == 2)
    {
        v4 = uu_truncate::truncate_reference_file_only::_$u7b$$u7b$closure$u7d$$u7d$::h71e741134f9f8f00(a0, a1, v1);
        return v4;
    }
    v0 = a2;
    v1 = a2 + a3 * 24;
    while (true)
    {
        v6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f1a2111712b44af(&v0);
        if (!v6)
            return 0;
        v4 = uu_truncate::file_truncate::h8689dfa8e5b80143(v6[1], v6[2], a4, *((long long *)&v2));
        if (v4)
            return v4;
    }
}
