int uu_split::split::hb1cda9e341d2f253()
{
    char v0;  // [bp-0x218]
    char v1;  // [bp-0x180]
    char v2;  // [bp-0x178]
    char v3;  // [bp-0xe8]
    unsigned long long v5[17];  // rdi
    unsigned long long v6;  // rbx
    unsigned long long v7;  // r15
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rcx

    v6 = v5[15];
    v7 = v5[16];
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h799d22e267aaebaa(v6, v7, "-", 1))
    {
        v8 = alloc::boxed::Box$LT$T$GT$::new::hac72448e17f35593(std::io::stdio::stdin::h7215cc131abb55d8());
        v9 = &g_548b60;
    }
    else
    {
        std::fs::File::open::ha2a77c506ff16f6b(&v0, v6, v7);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h768c7f8315cb736b(&v1, &v0, v5);
        if (*((long long *)&v1))
            return;
        v8 = ::0x4c9820::alloc::boxed::Box$LT$T$GT$::new::h2527ecc614bd44ac(*((int *)&v2));
        v9 = &g_548b08;
    }
    v10 = 0x2000;
    if (v5[0])
        v10 = v5[1];
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h2a2676119dcfbf20(&v3, v10, v8, v9);
    v11 = v5[2] - 6;
    if (v11 >= 3)
        v11 = 3;
    goto *((int *)(4329980 + vvar_13{reg 32} * 4)) + 4329980;
}
