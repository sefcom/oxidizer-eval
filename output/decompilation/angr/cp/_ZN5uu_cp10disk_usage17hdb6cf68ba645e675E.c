long long uu_cp::disk_usage::hdb6cf68ba645e675(unsigned long a0, unsigned long a1, char a2)
{
    unsigned long v0;  // [sp-0xe8]
    unsigned long long v1;  // [sp-0xe0]
    char v2;  // [bp-0xd8]
    char v3;  // [bp-0xa0]
    char v4;  // [bp-0x88]
    unsigned long long v6[3];  // rax
    void* v7;  // rbx
    void* v8;  // rbx
    unsigned long v9;  // rdx

    v0 = a0;
    v1 = a0 + a1 * 24;
    v6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&v0);
    if (!a2)
    {
        v8 = 0;
        while (true)
        {
            std::fs::metadata::hcf81ab27d993cd47(&v2, v6);
            if (*((int *)&v2) == 2)
                break;
            v8 += ((*((int *)&v3) & 0xf000) == 0x4000 ? 0 : *((long long *)&v4));
            v6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&v0);
        }
    }
    v7 = 0;
    while (true)
    {
        std::fs::metadata::hcf81ab27d993cd47(&v2, v6);
        if (*((int *)&v2) == 2)
            break;
        if (((short)*((int *)&v3) & 0xf000) != 0x4000)
        {
            v7 += *((long long *)&v4);
        }
        else if (!uu_cp::disk_usage_directory::h440b87226599f819(v6[1], v6[2]))
        {
            v7 += v9;
        }
        v6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&v0);
    }
}
