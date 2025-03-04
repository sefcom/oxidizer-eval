long long uu_env::apply_change_directory::h505c531f1c72246e(unsigned long long a0[17])
{
    unsigned long v0;  // [sp-0xa0]
    int v1;  // [bp-0x98], Other Possible Types: char, unsigned long
    unsigned long long v2;  // [sp-0x90]
    struct struct_0 **v3;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x80], Other Possible Types: unsigned int
    void* v5;  // [sp-0x78]
    char *v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x60]
    char *v8;  // [sp-0x58]
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
        ::0x4cb260::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&v1, "must specify command with --chdir (-C)cannot change directory to : warning: no name specified for value failed to set signal action for signal ", 38);
        v4 = 125;
        v18 = alloc::boxed::Box$LT$T$GT$::new::ha5ed2421d13baa8b(&v1);
        return v18;
    }
    if (!v17)
        return 0;
    v19 = a0[16];
    v20 = std::env::set_current_dir::h4371552348ad9e0b(v17, v19);
    if (v20)
    {
        v0 = v20;
        v10 = 1;
        v11 = v17;
        v12 = v19;
        v13 = 1;
        v6 = &v10;
        v7 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v8 = &v0;
        v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v1 = &g_548bf8;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 2;
        ::0x4cb1b0::core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&v14, &v1);
        v4 = 125;
        *((int128_t *)&v1) = *((int128_t *)&v14);
        v3 = *((long long *)&v15);
        v18 = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&v1);
        ::0x4ca250::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&v0);
        return v18;
    }
}
