long long uu_sum::open::h5e80565e6c0e85e2(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x120]
    void* v2;  // [sp-0x118]
    unsigned long long v3;  // [sp-0x110]
    unsigned long long v4;  // [sp-0x108]
    char v5;  // [sp-0x100]
    char v6;  // [bp-0xf8]
    char v7;  // [bp-0xf0]
    unsigned int v8;  // [sp-0xe0]
    unsigned long v9;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0xd0]
    char v11;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v12;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0xb8]
    unsigned long long v14;  // [sp-0xb0]
    void* v15;  // [sp-0xa8]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rcx

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8654a0d241c010ba(a1, a2, "-: No such file or directory", 1))
    {
        a0[1] = alloc::boxed::Box$LT$T$GT$::new::h17f7069ed2d84345(std::io::stdio::stdin::h7215cc131abb55d8());
        a0[2] = &g_513808;
        a0[0] = 0;
        return a0;
    }
    v9 = a1;
    v10 = a2;
    if ((char)std::path::Path::is_dir::h9ac0db933706da51(a1, a2))
    {
        v2 = 0;
        v3 = a1;
        v4 = a2;
        v5 = 0;
        v0 = &v2;
        v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v18 = &g_5137e8;
        goto LABEL_4ad62b;
    }
    else
    {
        std::fs::metadata::hf5ca31febd48a088(&v11, a1, a2);
        v19 = v12;
        if (v11 != 2)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h76f353d532d83a7d(v11, v19);
            std::fs::File::open::h728ce5e4abaeaf0f(&v11, &v9, v20);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1bba52e8348a3414(&v6, &v11);
            v21 = *((long long *)&v6);
            if (!v21)
            {
                a0[1] = alloc::boxed::Box$LT$T$GT$::new::h0c33778bde9c7596(*((int *)&v7));
                a0[2] = &g_5136c8;
                a0[0] = 0;
                return a0;
            }
            v22 = *((long long *)&v7);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h76f353d532d83a7d(2, v19);
            v2 = 0;
            v3 = a1;
            v4 = a2;
            v5 = 0;
            v0 = &v2;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v18 = &g_513720;
LABEL_4ad62b:
            v11 = v18;
            v12 = 2;
            v15 = 0;
            v13 = &v0;
            v14 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hbc3cf0992c00833d(&v6, &v11);
            v8 = 2;
            v21 = alloc::boxed::Box$LT$T$GT$::new::h90c2c32d49b2b983(&v6);
            v22 = &g_513778;
        }
        a0[1] = v21;
        a0[2] = v22;
        a0[0] = 1;
        return a0;
    }
}
