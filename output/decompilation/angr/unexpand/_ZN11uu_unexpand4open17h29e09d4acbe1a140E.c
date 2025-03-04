long long uu_unexpand::open::h29e09d4acbe1a140(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x90]
    char v1;  // [bp-0x88]
    unsigned int v2;  // [sp-0x78]
    char *v3;  // [sp-0x70]
    unsigned long long v4;  // [sp-0x68]
    unsigned long v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long long v8;  // [sp-0x48]
    struct struct_0 **v9;  // [sp-0x40]
    unsigned long long v10;  // [sp-0x38]
    void* v11;  // [sp-0x30]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rcx

    if ((char)std::path::Path::is_dir::h9ac0db933706da51(a1, a2))
    {
        v5 = a1;
        v6 = a2;
        v3 = &v5;
        v4 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v7 = &g_51cf70;
        v8 = 2;
        v11 = 0;
        v9 = &v3;
        v10 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h76d79f35edc71809(&v0, &v7);
        v2 = 1;
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h94e9d4f87d516a2c(&v0);
        a0[2] = &g_51d078;
        a0[0] = 0;
        return &g_51d078;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h62532d3932070b7a(a1, a2, "-", 1))
    {
        v14 = alloc::boxed::Box$LT$T$GT$::new::habb3fb88f54e05c3(std::io::stdio::stdin::h7215cc131abb55d8());
        v15 = &g_51cfe8;
    }
    else
    {
        std::fs::File::open::h6533ca8bcbc1a3e9(&v7, a1, a2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1af4d7cd559368ac(&v0, &v7, a1, a2);
        v13 = *((long long *)&v0);
        if (v13)
        {
            v16 = *((long long *)&v1);
            a0[1] = v13;
            a0[2] = v16;
            a0[0] = 0;
            return v13;
        }
        v14 = alloc::boxed::Box$LT$T$GT$::new::hc41914ec638acdb5(*((int *)&v1));
        v15 = &g_51cf90;
    }
    return std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc296df1f2003fc99(a0, 0x2000, v14, v15);
}
