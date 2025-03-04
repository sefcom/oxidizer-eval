long long uu_join::State::new::h1e047ff86b763ae6(struct_0 *a0, char a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5, char a6, char a7)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    unsigned int v3;  // edx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(a2, a3, "-", 1))
    {
        v4 = alloc::boxed::Box$LT$T$GT$::new::hf2d7d209ce9381d4(std::io::stdio::Stdin::lock::h161a36d857331d7f(a4), v3 & 1);
        v5 = &g_5353c8;
    }
    else
    {
        std::fs::File::open::h5119db07cecb01a2(&v2, a2, a3);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7f1f9b7a34a3754b(&v0, &v2, a2, a3);
        v6 = *((long long *)&v0);
        if (v6)
        {
            v7 = *((long long *)&v1);
            a0->field_8 = v6;
            a0->field_10 = v7;
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hde7863a5cb2c8fe9(&v2, 0x2000, *((int *)&v1));
        v4 = alloc::boxed::Box$LT$T$GT$::new::h27c807e2bc113c31(&v2);
        v5 = &g_535340;
    }
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    a0->field_18 = a2;
    a0->field_20 = a3;
    a0->field_28 = v4;
    a0->field_30 = v5;
    a0->field_38 = a6;
    a0->field_40 = a5;
    a0->field_48 = 1;
    a0->field_50 = 0;
    a0->field_58 = a1;
    a0->field_59 = a7;
    a0->field_5a = 0;
    return a0;
}
