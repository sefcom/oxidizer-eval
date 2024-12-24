long long uu_join::State::new::h0cd55892c1b4350a(struct_0 *a0, char a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    unsigned long v3;  // [bp+0x8]
    char v4;  // [bp+0x10]
    unsigned int v5;  // edx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx
    char v10;  // dl
    char v11;  // sil

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he3c4ae2851c65488(a2, a3, "-", 1))
    {
        v6 = alloc::boxed::Box$LT$T$GT$::new::h28b81083dc9f25e5(std::io::stdio::Stdin::lock::h161a36d857331d7f(a4), v5 & 1);
        v7 = &g_535f68;
    }
    else
    {
        std::fs::File::open::h68904dfaefae8b43(&v2, a2, a3);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0f2daa8d605181cd(&v0, &v2, a2, a3);
        v8 = *((long long *)&v0);
        if (v8)
        {
            v9 = *((long long *)&v1);
            a0->field_8 = v8;
            a0->field_10 = v9;
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h2668d47989eaf971(&v2, 0x2000, *((int *)&v1));
        v6 = alloc::boxed::Box$LT$T$GT$::new::had03c3f6c182a5cc(&v2);
        v7 = &g_535ee0;
    }
    v10 = v4;
    v11 = v3;
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    a0->field_18 = a2;
    a0->field_20 = a3;
    a0->field_28 = v6;
    a0->field_30 = v7;
    a0->field_38 = v11;
    a0->field_40 = a5;
    a0->field_48 = 1;
    a0->field_50 = 0;
    a0->field_58 = a1;
    a0->field_59 = v10;
    a0->field_5a = 0;
    return a0;
}
