long long uu_cp::verify_target_type::h7b1c78bb10dff0f5(unsigned long long *a0, unsigned long long a1, unsigned long long a2, char *a3)
{
    char *v0;  // [sp-0x80], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x78]
    unsigned long long v2;  // [sp-0x70]
    unsigned long long v3;  // [sp-0x68]
    unsigned long long v4;  // [sp-0x60]
    char v5;  // [sp-0x58]
    unsigned long v6;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x48]
    char *v8;  // [sp-0x40]
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
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v14 = &g_5b60b0;
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
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v14 = &g_5b5db8;
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
    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(a0 + 1, &v6);
    *(a0) = 4;
    return a0;
}
