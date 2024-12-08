long long uu_expand::open::hf36c02d90c372030(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h97581d6f16bd3e49(a1, a2, "---tabs=", 1))
    {
        v4 = alloc::boxed::Box$LT$T$GT$::new::h02e50360484707e5(std::io::stdio::stdin::h7215cc131abb55d8());
        v5 = &g_51ecf8;
    }
    else
    {
        std::fs::File::open::h969c5daf9637ba30(&v2, a1, a2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4b22652072a9072c(&v0, &v2, a1, a2);
        v6 = *((long long *)&v0);
        if (v6)
        {
            v7 = *((long long *)&v1);
            a0[1] = v6;
            a0[2] = v7;
            a0[0] = 0;
            return v6;
        }
        v4 = alloc::boxed::Box$LT$T$GT$::new::h740b3c70a51614e5(*((int *)&v1));
        v5 = &g_51eca0;
    }
    return std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb5d0adeb785c3208(a0, 0x2000, v4, v5);
}
