long long uu_cp::show_error_if_needed::h934143ac50374c6e(unsigned long long *a0)
{
    struct struct_0 **v0;  // [sp-0x68]
    unsigned long long v1;  // [sp-0x60]
    unsigned long long *v2;  // [sp-0x58]
    unsigned long v3;  // [sp-0x50]
    unsigned long long v4;  // [sp-0x48]
    struct struct_1 **v5;  // [sp-0x40], Other Possible Types: struct struct_2 **
    unsigned long long v6;  // [sp-0x38]
    void* v7;  // [sp-0x30]
    struct struct_1 **v8;  // [sp-0x20]
    unsigned long long v9;  // [sp-0x18]
    unsigned long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long v13;  // rdx

    v2 = a0;
    v12 = (v11 < 11 ? *(a0) - 2 : 4);
    if (v12 == 3)
    {
        return v12;
    }
    else if (v12 == 6)
    {
        return v12;
    }
    else
    {
        v0 = uucore::util_name::h60d842bf27b05e82();
        v1 = v13;
        v8 = &v0;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
        v3 = &g_5b5cc8;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        v0 = &v2;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2064bcc4257d401d;
        v3 = &g_5b5ce8;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        v12 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        return v12;
    }
}
