long long uu_truncate::truncate_reference_and_size::h4e3270fcd25f5342(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x158]
    char v1;  // [bp-0x150]
    char v2;  // [bp-0x148]
    char *v3;  // [sp-0x138]
    unsigned long long v4;  // [sp-0x130]
    int v5;  // [sp-0x128]
    int v6;  // [sp-0x118]
    char v7;  // [bp-0x100]
    char v8;  // [bp-0xf0]
    int v9;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0xe0]
    struct struct_0 **v11;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xd0], Other Possible Types: unsigned int
    void* v13;  // [sp-0xc8]
    unsigned long v14;  // [bp+0x8]
    unsigned long long v15;  // r13
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    void* v19;  // rax
    unsigned long long v22[3];  // rax

    uu_truncate::parse_mode_and_size::hbf18cbb89603c372(&v0, a2, a3);
    if (*((int *)&v0) != 3)
    {
        *((int128_t *)&v6) = *((int128_t *)&v2);
        *((int128_t *)&v5) = *((int128_t *)&v0);
        v3 = &v5;
        v4 = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::h1bebe12c07ded6a0;
        v9 = &g_516668;
        v10 = 1;
        v13 = 0;
        v11 = &v3;
        v12 = 1;
        ::0x4acf90::core::option::Option$LT$T$GT$::map_or_else::ha526a84f6413e2dc();
        v12 = 1;
        *((int128_t *)&v9) = *((int128_t *)&v7);
        v11 = *((long long *)&v8);
        v19 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&v9);
        core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::hd9babfdf21675581(&v5);
        return v19;
    }
    v15 = *((long long *)&v1);
    if (!v15)
    {
        v17 = "you must specify a relative '--size' with '--reference'cannot stat : No such file or directory";
        v18 = 55;
    }
    else if (!((unsigned int)v15 == 5) && !((unsigned int)v15 == 6) || !(!*((long long *)&v2)))
    {
        std::fs::metadata::h6368ec5e748c38e4(&v9, a0, a1);
        if ((int)v9 == 2)
        {
            v19 = uu_truncate::truncate_reference_and_size::_$u7b$$u7b$closure$u7d$$u7d$::h76112823d9285587(a0, a1, v10);
            return v19;
        }
        v9 = a4;
        v10 = a4 + a5 * 24;
        while (true)
        {
            v22 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f1a2111712b44af(&v9);
            if (!v22)
                return 0;
            v19 = uu_truncate::file_truncate::h8689dfa8e5b80143(v22[1], v22[2], v14, uu_truncate::TruncateMode::to_size::h56da67cab21ebb4e(v15));
            if (v19)
                return v19;
        }
    }
    else
    {
        v17 = "division by zero";
        v18 = 16;
    }
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40f585cb9c895814(&v9, v17, v18);
    v12 = 1;
    v19 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&v9);
    return v19;
}
