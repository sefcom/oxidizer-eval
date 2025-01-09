long long uu_od::multifilereader::MultifileReader::next_file::h7ce1d576af53818d(struct_1 *a0)
{
    unsigned long long v0;  // [sp-0xd0]
    unsigned long v1;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xc0]
    struct struct_0 **v3;  // [sp-0xb8]
    unsigned long long v4;  // [sp-0xb0]
    void* v5;  // [sp-0xa8]
    char v6;  // [bp-0x98]
    char v7;  // [bp-0x90]
    char v8;  // [bp-0x88]
    char v9;  // [bp-0x80]
    char v10;  // [bp-0x7c]
    char v11;  // [bp-0x78]
    void* v12;  // [sp-0x70], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v13;  // [sp-0x68]
    unsigned long long v14;  // [sp-0x60]
    char v15;  // [sp-0x58]
    char *v16;  // [sp-0x50]
    unsigned long long v17;  // [sp-0x48]
    char *v18;  // [sp-0x40]
    unsigned long long v19;  // [sp-0x38]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rbp
    unsigned long long v23;  // r12
    unsigned long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long long v27;  // r15

    if (a0->field_10)
    {
        do
        {
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h5ed5aa81710c39da(&v6, a0, 0, &g_5431a8);
            v21 = *((long long *)&v6);
            if (v21)
            {
                if ((unsigned int)v21 != 1)
                {
                    v27 = *((long long *)&v8);
                    v25 = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(a0->field_18, a0->field_20);
                    a0->field_18 = *((long long *)&v7);
                    a0->field_20 = v27;
                    return v25;
                }
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hdd333a46d728f0dc(&v1, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(a0->field_18, a0->field_20);
                *((double *)&a0->field_18) = alloc::boxed::Box$LT$T$GT$::new::h76e6865e403783a0(&v1);
                a0->field_20 = &g_543218;
                return &g_5431c0;
            }
            v22 = *((long long *)&v7);
            v23 = *((long long *)&v8);
            std::fs::File::open::h35a119a0b35fa654(&v9, v22, v23);
            if (!*((int *)&v9))
            {
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha0adff11cdf1efa4(&v1, 0x2000, *((int *)&v10));
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(a0->field_18, a0->field_20);
                *((double *)&a0->field_18) = alloc::boxed::Box$LT$T$GT$::new::h22131294aa53784e(&v1);
                a0->field_20 = &g_5431c0;
                return &g_5431c0;
            }
            v0 = *((long long *)&v11);
            v12 = uucore::util_name::h60d842bf27b05e82();
            v13 = v24;
            v16 = &v12;
            v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
            v1 = &g_543158;
            v2 = 2;
            v5 = 0;
            v3 = &v16;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            v12 = 0;
            v13 = v22;
            v14 = v23;
            v15 = 0;
            v16 = &v12;
            v17 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v18 = &v0;
            v19 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v1 = &g_543178;
            v2 = 3;
            v5 = 0;
            v3 = &v16;
            v4 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            a0->field_28 = 1;
            ::0x4d6270::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he48ae13975420feb();
        } while (a0->field_10);
    }
    v25 = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(a0->field_18, a0->field_20);
    a0->field_18 = 0;
    return v25;
}
