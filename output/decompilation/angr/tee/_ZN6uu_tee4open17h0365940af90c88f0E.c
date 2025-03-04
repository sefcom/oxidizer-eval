long long uu_tee::open::h0365940af90c88f0(unsigned long long a0[5], unsigned long long a1, unsigned long long a2, unsigned int a3, char *a4)
{
    unsigned long long v0;  // [sp-0xe0]
    unsigned long long v1;  // [sp-0xd8]
    unsigned int v2;  // [bp-0xd0]
    char v3;  // [sp-0xcf]
    char v4;  // [sp-0xce]
    char v5;  // [sp-0xcd]
    char v6;  // [bp-0xcc], Other Possible Types: unsigned short
    char v7;  // [sp-0xc8], Other Possible Types: unsigned long
    unsigned long long v8;  // [sp-0xc0]
    struct struct_0 **v9;  // [sp-0xb8], Other Possible Types: unsigned long
    unsigned long long v10;  // [sp-0xb0]
    void* v11;  // [sp-0xa8]
    char v12;  // [bp-0x98]
    char v13;  // [bp-0x90]
    char v14;  // [bp-0x88]
    char v15;  // [bp-0x80]
    char v16;  // [bp-0x7c]
    char v17;  // [bp-0x78]
    char *v18;  // [sp-0x70]
    unsigned long long v19;  // [sp-0x68]
    char *v20;  // [sp-0x60]
    unsigned long long v21;  // [sp-0x58]
    void* v22;  // [sp-0x50], Other Possible Types: unsigned long
    unsigned long long v23;  // [sp-0x48]
    unsigned long long v24;  // [sp-0x40]
    char v25;  // [sp-0x38]
    unsigned long long v27;  // rax
    unsigned long v28;  // rdx

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
    std::fs::OpenOptions::open::h097a071329397a72(&v15, &v1, *((long long *)&v13), *((long long *)&v14));
    if (!*((int *)&v15))
    {
        v27 = alloc::boxed::Box$LT$T$GT$::new::h8dc79dc8461f5b4a(*((int *)&v16));
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h02ba9e8c78156205(&v7, a1, a2);
        a0[2] = v9;
        *((int128_t *)&a0[0]) = *((int128_t *)&v7);
        a0[3] = v27;
        a0[4] = &g_51f9f8;
    }
    else
    {
        v0 = *((long long *)&v17);
        v22 = uucore::util_name::h60d842bf27b05e82();
        v23 = v28;
        v18 = &v22;
        v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
        v7 = &g_51f9a8;
        v8 = 2;
        v11 = 0;
        v9 = &v18;
        v10 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v7);
        v22 = 0;
        v23 = a1;
        v24 = a2;
        v25 = 0;
        v18 = &v22;
        v19 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v20 = &v0;
        v21 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v7 = &g_51f9c8;
        v8 = 3;
        v11 = 0;
        v9 = &v18;
        v10 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v7);
        if (!a4 || *(a4) <= 1)
        {
            a0[0] = 9223372036854775809;
            ::0x4b1ad0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(v0);
        }
        else
        {
            a0[0] = 0x8000000000000000;
            a0[1] = v0;
        }
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc65b4027f210db7e(&v12);
    return a0;
}
