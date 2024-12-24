long long uu_tail::follow::files::PathData::from_other_with_path::h5a1fd25c8c500c9b(void* a0, unsigned long long a1[27], unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [sp-0x1a0]
    unsigned long long v1;  // [sp-0x198]
    char v2;  // [bp-0x190], Other Possible Types: unsigned long long
    char v3;  // [bp-0x18c]
    char v4;  // [bp-0xe0]
    char v5;  // [bp-0xd8]
    unsigned long long v6;  // [sp-0x10]
    unsigned long v8;  // r15
    unsigned long v9;  // r15

    v6 = v8;
    v9 = a1[26];
    v1 = v9;
    v0 = a1[25];
    if (!v0)
    {
        std::fs::File::open::hf2bb51bf556498d2(&v2, a2, a3);
        if (*((int *)&v2))
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h765746d261264567(&v2);
            v0 = 0;
        }
        else
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::he4bc06bf02b31045(&v4, 0x2000, *((int *)&v3));
            v0 = ::0x501d20::alloc::boxed::Box$LT$T$GT$::new::h6b18eadb82176d54(&v4);
        }
        v9 = &g_5bd988;
    }
    std::fs::metadata::hfea02cebb1894e00(&v4, a2, a3);
    if (*((int *)&v4) != 2)
    {
        memcpy(&v2, &v4, 176);
    }
    else
    {
        v2 = 2;
        ::0x501860::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd721c1e7c1dd12bc(2, *((long long *)&v5));
    }
    uu_tail::follow::files::PathData::new::h478ca1589788c7fd(a0, v0, v9, &v2, a1[23], a1[24]);
    ::0x501560::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h667f9f3993499da7(&a1[22]);
    return a0;
}
