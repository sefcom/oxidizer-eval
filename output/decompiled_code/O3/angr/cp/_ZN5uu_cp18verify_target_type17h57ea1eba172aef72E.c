long long uu_cp::verify_target_type::h57ea1eba172aef72(unsigned long long *a0, unsigned long long a1, unsigned long long a2, char *a3)
{
    unsigned long v0;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x78]
    unsigned long long v2;  // [sp-0x70]
    unsigned long long v3;  // [sp-0x68]
    unsigned long long v4;  // [sp-0x60]
    char v5;  // [sp-0x58]
    unsigned long v6;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x48]
    unsigned long long v8;  // [sp-0x40]
    unsigned long long v9;  // [sp-0x38]
    void* v10;  // [sp-0x30]
    char v12;  // al
    unsigned long long v14;  // rax

    v12 = std::path::Path::is_dir::h9ac0db933706da51(a1, a2);
    if (!*(a3))
    {
        if (!v12)
        {
            v2 = 1;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v14 = &g_5b59e0;
        }
        else
        {
            *(a0) = 13;
            return a0;
        }
    }
    else
    {
        if (v12)
        {
            v2 = 1;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v14 = &g_5b56e8;
        }
        else
        {
            *(a0) = 13;
            return a0;
        }
    }
    v6 = v14;
    v7 = 2;
    v10 = 0;
    v8 = &v0;
    v9 = 1;
    ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(a0 + 1, &v6);
    *(a0) = 4;
    return a0;
}
