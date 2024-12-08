long long uu_sort::open::h4d8040bc6cf739e4(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x90]
    char v1;  // [bp-0x8c]
    unsigned long long v2;  // [sp-0x80]
    char v3;  // [bp-0x78]
    char v4;  // [bp-0x68]
    char v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x58]
    int v7;  // [sp-0x50]
    unsigned long long v8;  // [sp-0x40]
    unsigned long long v10;  // r14
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax

    v10 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h82c92a7a09baf09a(a1, a2);
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0b27ad94596856c0(v10, v11, "-invalid suffix in -- argument invalid ---- too large", 1))
    {
        a0[1] = alloc::boxed::Box$LT$T$GT$::new::hc33b961348c083bf(std::io::stdio::stdin::h7215cc131abb55d8());
        v12 = &g_5ff470;
    }
    else
    {
        std::fs::File::open::hcc71a797103cdd0a(&v0, v10, v11);
        if (*((int *)&v0))
        {
            v2 = v6;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v3, v10, v11);
            v8 = *((long long *)&v4);
            *((int128_t *)&v7) = *((int128_t *)&v3);
            v6 = v2;
            v5 = 2;
            *((double *)&a0[1]) = ::0x51c0f0::alloc::boxed::Box$LT$T$GT$::new::h0f817cda3e2779c3(&v5);
            a0[2] = &g_5feb50;
            a0[0] = 1;
            return a0;
        }
        a0[1] = alloc::boxed::Box$LT$T$GT$::new::h6148f5f48f10f768(*((int *)&v1));
        v12 = &g_5ff418;
    }
    a0[2] = v12;
    a0[0] = 0;
    return a0;
}
