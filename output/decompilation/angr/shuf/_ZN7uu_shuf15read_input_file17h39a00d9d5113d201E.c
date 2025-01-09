long long uu_shuf::read_input_file::h39a00d9d5113d201(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x78]
    void* v2;  // [bp-0x70], Other Possible Types: char
    unsigned long long v3;  // [sp-0x68]
    void* v4;  // [sp-0x60]
    char v5;  // [bp-0x58]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7a1eebabf92f0a45(a1, a2, "-src/uu/shuf/src/shuf.rs", 1))
    {
        v7 = alloc::boxed::Box$LT$T$GT$::new::hfbb2289a6863f155(std::io::stdio::stdin::h7215cc131abb55d8());
        v8 = &g_537c80;
    }
    else
    {
        std::fs::File::open::h6de938cd2a1a2187(&v2, a1, a2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h44a724dea645e385(&v0, &v2, a1, a2);
        v9 = *((long long *)&v0);
        if (v9)
        {
            v10 = *((long long *)&v1);
            a0[1] = v9;
            a0[2] = v10;
            a0[0] = 0x8000000000000000;
            return a0;
        }
        v7 = alloc::boxed::Box$LT$T$GT$::new::h76bc6918f77c692b(*((int *)&v1));
        v8 = &g_537c28;
    }
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7d287012b593b0a9(&v5, 0x2000, v7, v8);
    v2 = 0;
    v3 = 1;
    v4 = 0;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6f9450da0d088758(&v0, _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_end::hc79da0281f407c42(&v5, &v2), v11, a1, a2);
    v12 = *((long long *)&v0);
    if (!v12)
    {
        a0[2] = v4;
        *((int128_t *)&a0[0]) = *((int128_t *)&v2);
    }
    else
    {
        v13 = *((long long *)&v1);
        a0[1] = v12;
        a0[2] = v13;
        a0[0] = 0x8000000000000000;
        ::0x4bf7e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfc2a7b88a66b26dd(&v2);
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hf54340fb0eaaa981(&v5);
    return a0;
}
