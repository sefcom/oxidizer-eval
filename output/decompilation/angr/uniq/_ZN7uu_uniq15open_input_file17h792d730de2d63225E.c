long long uu_uniq::open_input_file::h792d730de2d63225(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    unsigned int v4;  // edx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rdx

    if (!a1 || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(a1, a2, "-", 1))
    {
        v2 = std::io::stdio::stdin::h7215cc131abb55d8();
        v5 = alloc::boxed::Box$LT$T$GT$::new::he30472a92a05c52c(std::io::stdio::Stdin::lock::h161a36d857331d7f(&v2), v4 & 1);
        v6 = &g_5305f8;
        goto LABEL_4befef;
    }
    else
    {
        std::fs::File::open::h5b9f23cfe6e73f37(&v2, a1, a2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h36f5bf5261f39ece(&v0, &v2, a1, a2);
        v5 = *((long long *)&v0);
        if (v5)
        {
            v6 = *((long long *)&v1);
            v7 = 1;
        }
        else
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hcde770ac63110b2a(&v2, 0x2000, *((int *)&v1));
            v5 = alloc::boxed::Box$LT$T$GT$::new::h6a0535024ec58cb3(&v2);
            v6 = &g_530570;
LABEL_4befef:
            v7 = 0;
        }
    }
    a0[1] = v5;
    a0[2] = v6;
    a0[0] = v7;
    return a0;
}
