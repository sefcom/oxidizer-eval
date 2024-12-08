long long uu_tail::paths::path_is_tailable::h4860691d691e2e51(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xc0]
    unsigned long long v3;  // rax
    void* v4;  // rax
    unsigned long long v6;  // rsi

    v3 = std::path::Path::is_file::h82f08f46fb8d8099(a0, a1);
    v4 = v3 | -0x100 | 1;
    if ((char)v3)
        return v4;
    std::fs::metadata::hfea02cebb1894e00(&v0, a0, a1);
    v6 = *((long long *)&v1);
    if (*((long long *)&v0) == 2)
    {
        ::0x501860::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd721c1e7c1dd12bc(2, v6);
        return 0;
    }
    ::0x501860::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd721c1e7c1dd12bc(*((long long *)&v0), v6);
    std::fs::metadata::hfea02cebb1894e00(&v0, a0, a1);
    v4 = core::result::Result$LT$T$C$E$GT$::map_or::h9b356f845e69fb19(&v0);
    return v4;
}
