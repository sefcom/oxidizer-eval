long long uu_rmdir::remove_single::h7d254dd4570d65d7(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long v0;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x90]
    char *v2;  // [sp-0x88]
    unsigned long long v3;  // [sp-0x80]
    char *v4;  // [sp-0x78]
    unsigned long long v5;  // [sp-0x70]
    unsigned long long v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x60]
    unsigned long long v8;  // [sp-0x58]
    char v9;  // [sp-0x50]
    unsigned long v10;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x40]
    struct struct_0 **v12;  // [sp-0x38]
    unsigned long long v13;  // [sp-0x30]
    void* v14;  // [sp-0x28]
    unsigned long long v16;  // 4096
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rax

    v16 = a2;
    if ((a3 & 0x10000))
    {
        v0 = uucore::util_name::h60d842bf27b05e82();
        v1 = v17;
        v6 = 1;
        v7 = a1;
        v8 = a2;
        v9 = 1;
        v2 = &v0;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h39d7d38f25d43a0c;
        v4 = &v6;
        v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v10 = &g_50dab8;
        v11 = 3;
        v14 = 0;
        v12 = &v2;
        v13 = 2;
        std::io::stdio::_print::he918bceb0c89db46(&v10, v18, v17);
    }
    v19 = std::fs::remove_dir::h0572df07be869037(a1, a2, v16);
    if (v19)
    {
        a0[1] = a1;
        a0[2] = a2;
    }
    a0[0] = v19;
    return v19;
}
