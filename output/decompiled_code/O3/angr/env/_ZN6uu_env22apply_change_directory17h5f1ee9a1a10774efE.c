long long uu_env::apply_change_directory::h5f1ee9a1a10774ef(unsigned long long a0[17], unsigned long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0xa0], Other Possible Types: unsigned long long
    int v1;  // [bp-0x98], Other Possible Types: char, unsigned long long
    unsigned long long v2;  // [sp-0x90]
    unsigned long long v3;  // [sp-0x88]
    unsigned long long v4;  // [bp-0x80], Other Possible Types: unsigned int
    void* v5;  // [sp-0x78]
    unsigned long v6;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x60]
    unsigned long long v8;  // [sp-0x58]
    unsigned long long v9;  // [sp-0x50]
    unsigned long long v10;  // [sp-0x48]
    unsigned long long v11;  // [sp-0x40]
    unsigned long long v12;  // [sp-0x38]
    char v13;  // [sp-0x30]
    char v14;  // [bp-0x28]
    char v15;  // [bp-0x18]
    unsigned long long v17;  // rbx
    void* v18;  // rax
    unsigned long long v19;  // r14
    unsigned long long v20;  // rax

    v17 = a0[15];
    if (!a0[11] && v17)
    {
        ::0x4cb390::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h58b87609619f8c5b(&v1, "must specify command with --chdir (-C)cannot change directory to : warning: no name specified for value failed to set signal action for signal ", 38);
        v4 = 125;
        v18 = alloc::boxed::Box$LT$T$GT$::new::h327a230aaa8be308(&v1);
        return v18;
    }
    if (!v17)
        return 0;
    v19 = a0[16];
    v20 = std::env::set_current_dir::h38eef58918bd831c(v17, v19, a2);
    if (v20)
    {
        v0 = v20;
        v10 = 1;
        v11 = v17;
        v12 = v19;
        v13 = 1;
        v6 = &v10;
        v7 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v8 = &v0;
        v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v1 = &g_5493b8;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 2;
        ::0x4cb2e0::core::option::Option$LT$T$GT$::map_or_else::hc0527ddab4d2c9e4(&v14, &v1);
        v4 = 125;
        *((int128_t *)&v1) = *((int128_t *)&v14);
        v3 = *((long long *)&v15);
        v18 = alloc::boxed::Box$LT$T$GT$::new::h5d579e58798cc40b(&v1);
        ::0x4ca380::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haacea6b38d3e7802(&v0);
        return v18;
    }
}
