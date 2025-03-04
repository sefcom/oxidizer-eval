long long uu_split::split::h3b6295d78012e56b(unsigned long long a0[17])
{
    char v0;  // [bp-0x218]
    char v1;  // [bp-0x180]
    char v2;  // [bp-0x178]
    char v3;  // [bp-0xe8]
    unsigned long long v5;  // rbx
    unsigned long long v6;  // r15
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rsi
    unsigned long v11;  // rdx
    unsigned long long v12;  // rdx

    v5 = a0[15];
    v6 = a0[16];
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v5, v6, "-", 1))
    {
        v7 = alloc::boxed::Box$LT$T$GT$::new::h84649541c58f7536(std::io::stdio::stdin::h7215cc131abb55d8());
        v8 = &g_548650;
    }
    else
    {
        std::fs::File::open::hf05dc8e7da5fafe3(&v0, v5, v6);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h36db9552504a57eb(&v1, &v0, a0);
        v9 = *((long long *)&v1);
        if (v9)
            return v9;
        v7 = ::0x4c9770::alloc::boxed::Box$LT$T$GT$::new::h8fc4b41669740c9d(*((int *)&v2));
        v8 = &g_5485f8;
    }
    v10 = 0x2000;
    if (a0[0])
        v10 = a0[1];
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h03cd61f44017daf8(&v3, v10, v7, v8);
    v12 = (v11 < 3 ? a0[2] - 6 : 3);
    goto *((int *)(4329468 + vvar_14{reg 32} * 4)) + 4329468;
}
