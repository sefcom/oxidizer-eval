long long uu_sort::open::h555b4855251c8fd4(unsigned long long a0[3], unsigned long long a1)
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

    v10 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h969c1f4f28c13ced(a1);
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(v10, v11, "-", 1))
    {
        a0[1] = alloc::boxed::Box$LT$T$GT$::new::h7f1df9b4eebae042(std::io::stdio::stdin::h7215cc131abb55d8());
        v12 = &g_5fbff8;
    }
    else
    {
        std::fs::File::open::h2552637d7afe39d9(&v0, v10, v11);
        if (*((int *)&v0))
        {
            v2 = v6;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v3, v10, v11);
            v8 = *((long long *)&v4);
            *((int128_t *)&v7) = *((int128_t *)&v3);
            v6 = v2;
            v5 = 2;
            *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h5e2c0ba71893b6a1(&v5);
            a0[2] = &g_5fbf88;
            a0[0] = 1;
            return &g_5fbf88;
        }
        a0[1] = alloc::boxed::Box$LT$T$GT$::new::hcfd57132bb0abfed(*((int *)&v1));
        v12 = &g_5fbef8;
    }
    a0[2] = v12;
    a0[0] = 0;
    return v12;
}
