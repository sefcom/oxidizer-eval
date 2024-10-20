long long uu_nl::NumberFormat::format::h4dd18d00612f638b(unsigned long long a0, char *a1, unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x98]
    unsigned long long v2;  // [sp-0x90]
    void* v3;  // [sp-0x88]
    unsigned long v4;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x78]
    unsigned long long v6;  // [sp-0x70]
    unsigned long long v7;  // [sp-0x68]
    unsigned long long v8;  // [sp-0x60]
    unsigned long long v9;  // [sp-0x58]
    unsigned long v10;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long v11;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x38]
    unsigned long long v13;  // [sp-0x30]
    void* v14;  // [sp-0x28]
    unsigned long long v15;  // [sp-0x20]
    char v16;  // [sp-0x18]
    unsigned long v17;  // [sp-0x10], Other Possible Types: unsigned long long
    unsigned int v19;  // eax
    unsigned long long v20;  // rax

    v10 = a2;
    v19 = *(a1);
    if (!v19)
    {
        v0 = &v10;
        v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::he353d7b3f48ba6e6;
        v2 = a3;
        v3 = 0;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 32;
        v16 = 0;
        goto LABEL_5333a5;
    }
    if (v19 == 1)
    {
        v0 = &v10;
        v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::he353d7b3f48ba6e6;
        v2 = a3;
        v3 = 0;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 32;
        goto LABEL_53339d;
    }
    else if (a2 < 0)
    {
        v17 = -(a2);
        v0 = &v17;
        v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::he353d7b3f48ba6e6;
        v2 = a3 - 1;
        v3 = 0;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 48;
        v16 = 1;
        v20 = &g_66e700;
    }
    else
    {
        v0 = &v10;
        v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::he353d7b3f48ba6e6;
        v2 = a3;
        v3 = 0;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 48;
LABEL_53339d:
        v16 = 1;
LABEL_5333a5:
        v20 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    }
    v4 = v20;
    v5 = 1;
    v8 = &v11;
    v9 = 1;
    v6 = &v0;
    v7 = 2;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v4);
    return a0;
}
