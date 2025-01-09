long long uu_tail::paths::HeaderPrinter::print::h45f27ae0b4b499e5(char a0[2], unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x70]
    unsigned long v2;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x60]
    char *v4;  // [sp-0x58]
    unsigned long long v5;  // [sp-0x50]
    char *v6;  // [sp-0x48]
    unsigned long long v7;  // [sp-0x40]
    unsigned long v8;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x30]
    struct struct_0 **v10;  // [sp-0x28]
    unsigned long long v11;  // [sp-0x20]
    void* v12;  // [sp-0x18]
    unsigned long long v14;  // rax
    unsigned long long v16;  // rax

    v0 = a1;
    v1 = a2;
    if (a0[0])
    {
        v14 = a0[1];
        *((int *)&v2) = (!v14 ? "\n" : 1);
        v3 = v14 ^ 1;
        v4 = &v2;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        v6 = &v0;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        v8 = &g_5bc6e8;
        v9 = 3;
        v12 = 0;
        v10 = &v4;
        v11 = 2;
        v16 = std::io::stdio::_print::he918bceb0c89db46(&v8);
        a0[1] = 0;
        return v16;
    }
    return v16;
}
