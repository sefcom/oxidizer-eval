long long uu_cp::show_error_if_needed::h93135378e483dbed(unsigned long long *a0, unsigned long a1, unsigned long a2)
{
    struct struct_0 **v0;  // [sp-0x68], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x60]
    unsigned long long *v2;  // [sp-0x58]
    unsigned long v3;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x48]
    struct struct_1 **v5;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x38]
    void* v7;  // [sp-0x30]
    unsigned long v8;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x18]
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rsi

    v2 = a0;
    v11 = *(a0) - 2;
    if (v11 >= 11)
        v11 = 4;
    if (v11 == 3)
    {
        return v11;
    }
    else if (v11 == 6)
    {
        return v11;
    }
    else
    {
        v0 = uucore::util_name::h412db5e565a079f3();
        v1 = v12;
        v8 = &v0;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcead1029d5dc0e68;
        v3 = &g_5b55f8;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v13, v12);
        v0 = &v2;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2cbe03cc63476bad;
        v3 = &g_5b5618;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        v11 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v13, v12);
        return v11;
    }
}
