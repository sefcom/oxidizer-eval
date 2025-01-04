long long uu_rm::remove_file::hfb41d07f759de271(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa0]
    struct struct_0 **v2;  // [sp-0x98]
    unsigned long long v3;  // [sp-0x90]
    void* v4;  // [sp-0x88]
    unsigned long v5;  // [sp-0x78], Other Possible Types: unsigned long long
    int v6;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x68]
    char v8;  // [sp-0x60]
    char *v9;  // [sp-0x58]
    char v10;  // [bp-0x50], Other Possible Types: unsigned long long
    struct struct_0 **v11;  // [sp-0x48]
    unsigned long long v12;  // [sp-0x40]
    char *v13;  // [sp-0x38]
    unsigned long long v14;  // [sp-0x30]
    unsigned long long v16;  // rdx
    char *v17;  // rax
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rsi

    if (!(char)uu_rm::prompt_file::h2c52052acc0b58bb(a0, a1, a3))
        return 0;
    v17 = std::fs::remove_file::hccd6459e5c502755(a0, a1, v16);
    if (v17)
    {
        v13 = v17;
        if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v17) == 1)
        {
            v5 = uucore::util_name::h60d842bf27b05e82();
            v6 = v16;
            v9 = &v5;
            v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v0 = &g_527970;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v16);
            v5 = 1;
            v6 = a0;
            v7 = a1;
            v8 = 1;
            v9 = &v5;
            v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v0 = &g_5279b0;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v16);
        }
        else
        {
            v5 = uucore::util_name::h60d842bf27b05e82();
            v6 = v16;
            v9 = &v5;
            v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v0 = &g_527970;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v20, v16);
            v5 = 1;
            v6 = a0;
            v7 = a1;
            v8 = 1;
            v9 = &v5;
            v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v11 = &v13;
            v12 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v0 = &g_5279d0;
            v1 = 3;
            v4 = 0;
            v2 = &v9;
            v3 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v20, v16);
        }
        return ::0x4b54d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&v13) | -0x100 | 1;
    }
    else if (a2)
    {
        uu_rm::normalize::hc5c72b2dd9f7b482();
        v5 = 1;
        *((int128_t *)&v6) = *((int128_t *)&v10);
        v8 = 1;
        v13 = &v5;
        v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v0 = &g_527ac8;
        v1 = 2;
        v4 = 0;
        v2 = &v13;
        v3 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v0, v18, v16);
        ::0x4b54b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7c5c2bfda3b8aa48(&v9);
    }
}
