int uu_split::split::h3b6295d78012e56b()
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
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v6, v7, "-", 1))
    {
        v8 = alloc::boxed::Box$LT$T$GT$::new::h84649541c58f7536(std::io::stdio::stdin::h7215cc131abb55d8());
        v9 = &g_548650;
    }
    else
    {
        std::fs::File::open::hf05dc8e7da5fafe3(&v0, v6, v7);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h36db9552504a57eb(&v1, &v0, v5);
        if (*((long long *)&v1))
            return;
        v8 = ::0x4c9770::alloc::boxed::Box$LT$T$GT$::new::h8fc4b41669740c9d(*((int *)&v2));
        v9 = &g_5485f8;
    }
    v10 = 0x2000;
    if (v5[0])
        v10 = v5[1];
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h03cd61f44017daf8(&v3, v10, v8, v9);
    v11 = v5[2] - 6;
    if (v11 >= 3)
        v11 = 3;
    goto *((int *)(4329468 + vvar_13{reg 32} * 4)) + 4329468;
}
