long long uu_du::format_error_message::hc0aac58ff7c8913b(unsigned long long a0, unsigned long long *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char *v0;  // [sp-0x88], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x80]
    char *v2;  // [sp-0x78]
    unsigned long long v3;  // [sp-0x70]
    void* v4;  // [sp-0x68]
    unsigned long long v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x58]
    char v7;  // [sp-0x50]
    unsigned long v8;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x40]
    char *v10;  // [sp-0x38]
    unsigned long long v11;  // [sp-0x30]
    void* v12;  // [sp-0x28]
    unsigned long v13;  // [sp-0x18]
    unsigned long long v14;  // [sp-0x10]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax

    v13 = a4;
    v14 = a5;
    v16 = *(a1);
    if (!v16)
    {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
        v2 = &v4;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v17 = &g_584850;
        goto LABEL_4f599c;
    }
    else if ((unsigned int)v16 != 1)
    {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
        v2 = &v4;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v8 = &g_584890;
        v9 = 3;
    }
    else
    {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
        v2 = &v4;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v17 = &g_584870;
LABEL_4f599c:
        v8 = v17;
        v9 = 2;
    }
    v12 = 0;
    v10 = &v0;
    v11 = 2;
    ::0x4f08e0::core::option::Option$LT$T$GT$::map_or_else::he00bf600f5f44dbc(a0, &v8);
    return a0;
}
