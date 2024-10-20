long long uu_sort::open::h65a9b99e392460a7(unsigned long long a0[3], unsigned long long a1[3])
{
    char v0;  // [bp-0x98]
    char v1;  // [bp-0x94]
    unsigned long long v2;  // [sp-0x88]
    char v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    int v5;  // [sp-0x70]
    unsigned long long v6;  // [sp-0x60]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x40]
    char v9;  // [bp-0x30]
    unsigned long long v11;  // r14
    unsigned long long v12;  // r15
    unsigned long long *v14;  // rax
    unsigned int *v16;  // rax
    unsigned long long v17;  // rax
    uint128_t v18[4];  // rax
    int v19;  // xmm0
    int v20;  // xmm2

    v11 = a1[1];
    v12 = a1[2];
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd856cd282d90a03c(v11, v12, "-", 1))
    {
        std::fs::File::open::h357430353bc93369(&v0, v11, v12);
        if (*((int *)&v0))
        {
            v2 = v4;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v8, v11, v12);
            v6 = *((long long *)&v9);
            *((int128_t *)&v5) = *((int128_t *)&v8);
            v4 = v2;
            v3 = 2;
            v18 = __rust_alloc(64, 8);
            if (v18)
            {
                v19 = *((int128_t *)&v3);
                v20 = *((int128_t *)&v6);
                v18[3] = *((int128_t *)&v7);
                *((void*)&v18[2]) = v20;
                *((void*)&v18[1]) = v5;
                *((void*)&v18[0]) = v19;
                a0[1] = v18;
                a0[2] = &g_58f098;
                a0[0] = 1;
                return &g_58f098;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v16 = __rust_alloc(4, 4);
        if (!v16)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v16) = *((int *)&v1);
        a0[1] = v16;
        v17 = &g_58f008;
    }
    else
    {
        v14 = __rust_alloc(8, 8);
        if (!v14)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v14) = std::io::stdio::stdin::h7215cc131abb55d8();
        a0[1] = v14;
        v17 = &g_58f108;
    }
    a0[2] = v17;
    a0[0] = 0;
    return v17;
}
