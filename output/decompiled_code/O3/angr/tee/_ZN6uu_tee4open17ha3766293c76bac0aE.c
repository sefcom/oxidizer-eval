long long uu_tee::open::ha3766293c76bac0a(unsigned long long a0[5], unsigned long long a1, unsigned long long a2, unsigned int a3, char *a4)
{
    unsigned long long v0;  // [sp-0xe0]
    unsigned long long v1;  // [sp-0xd8]
    unsigned int v2;  // [bp-0xd0]
    char v3;  // [sp-0xcf]
    char v4;  // [sp-0xce]
    char v5;  // [sp-0xcd]
    char v6;  // [bp-0xcc], Other Possible Types: unsigned short
    char v7;  // [sp-0xc8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v8;  // [sp-0xc0]
    unsigned long v9;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0xb0]
    void* v11;  // [sp-0xa8]
    char v12;  // [bp-0x98]
    char v13;  // [bp-0x90]
    char v14;  // [bp-0x88]
    char v15;  // [bp-0x80]
    char v16;  // [bp-0x7c]
    char v17;  // [bp-0x78]
    unsigned long v18;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x68]
    unsigned long long v20;  // [sp-0x60]
    unsigned long long v21;  // [sp-0x58]
    void* v22;  // [sp-0x50], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v23;  // [sp-0x48]
    unsigned long long v24;  // [sp-0x40]
    char v25;  // [sp-0x38]
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rsi

    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v12, a1, a2);
    v1 = 0x1b600000000;
    v2 = 0;
    v6 = 0;
    if (a3)
        v4 = 1;
    else
        v5 = 1;
    v3 = 1;
    v6 = 1;
    std::fs::OpenOptions::open::hdb55febdd213a2a2(&v15, &v1, *((long long *)&v13), *((long long *)&v14));
    if (!*((int *)&v15))
    {
        v27 = alloc::boxed::Box$LT$T$GT$::new::hcdd2374c605cdf15(*((int *)&v16));
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h78c35168082532f0(&v7, a1, a2);
        a0[2] = v9;
        *((int128_t *)&a0[0]) = *((int128_t *)&v7);
        a0[3] = v27;
        a0[4] = &g_5202e8;
    }
    else
    {
        v0 = *((long long *)&v17);
        v22 = uucore::util_name::h412db5e565a079f3();
        v23 = v28;
        v18 = &v22;
        v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he69afc6e69987fb8;
        v7 = &g_520338;
        v8 = 2;
        v11 = 0;
        v9 = &v18;
        v10 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v7, v29, v28);
        v22 = 0;
        v23 = a1;
        v24 = a2;
        v25 = 0;
        v18 = &v22;
        v19 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v20 = &v0;
        v21 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v7 = &g_520358;
        v8 = 3;
        v11 = 0;
        v9 = &v18;
        v10 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v7, v29, v28);
        if (!a4 || *(a4) <= 1)
        {
            a0[0] = 9223372036854775809;
            ::0x4b1cd0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h49b06029efa5deec(v0);
        }
        else
        {
            a0[0] = 0x8000000000000000;
            a0[1] = v0;
        }
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h8477713f010ea0de(&v12);
    return a0;
}
