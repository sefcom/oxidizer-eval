long long uu_split::platform::unix::FilterWriter::new::h45813eca9ccac0a5(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned int v0;  // [sp-0x1c4]
    unsigned long long v1;  // [sp-0x1c0]
    int v2;  // [sp-0x1b8]
    char v3;  // [bp-0x1a8]
    char v4;  // [bp-0x1a4]
    char v5;  // [bp-0x1a0]
    char v6;  // [bp-0x198]
    int v7;  // [bp-0x188], Other Possible Types: char
    unsigned long long v8;  // [sp-0x178]
    int v9;  // [sp-0x168]
    unsigned long long v10;  // [sp-0x158]
    char v11;  // [bp-0x150]
    char v12;  // [bp-0x148]
    char v13;  // [bp-0x138]
    char v14;  // [bp-0x130]
    char v15;  // [bp-0xf8]
    unsigned long long v17;  // rdx
    int v18;  // xmm0
    unsigned long long v19;  // rsi

    uu_split::platform::unix::WithEnvVarSet::new::h0ec58cf89e23bdc9(&v14, a3, a4);
    std::env::var::h9ad1bceb8fc4ff71(&v11, "SHELL", 5);
    if (!*((long long *)&v11))
    {
        v8 = *((long long *)&v13);
        *((int128_t *)&v7) = *((int128_t *)&v12);
    }
    else
    {
        v10 = *((long long *)&v13);
        *((int128_t *)&v9) = *((int128_t *)&v12);
        uu_split::platform::unix::FilterWriter::new::_$u7b$$u7b$closure$u7d$$u7d$::he2bcca465f325ad8(&v7, &v9);
    }
    std::process::Command::new::h0377d9f8406faa73(&v15, &v7, v17);
    std::process::Command::spawn::h512586d0d6bfbf9c(&v3, std::process::Command::stdin::hd49f7a7c2d0c6c7f(std::process::Command::arg::h5f291569404c895b(std::process::Command::arg::h5f291569404c895b(&v15, "-c", 2), a1, a2), 2, v17));
    if (!*((int *)&v3))
    {
        v0 = *((int *)&v4);
        v1 = *((long long *)&v5);
        *((int128_t *)&v2) = *((int128_t *)&v6);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hdf90771df9651af5(&v15);
        v18 = *((int128_t *)&v0);
        *((void*)&a0->field_4) = v2;
        *((void*)&(&a0->field_0)[1]) = v18;
        a0->field_0 = 0;
    }
    else
    {
        *((long long *)&(&a0->field_0)[2]) = *((long long *)&v5);
        a0->field_0 = 1;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hdf90771df9651af5(&v15);
    }
    return core::ptr::drop_in_place$LT$uu_split..platform..unix..WithEnvVarSet$GT$::he2b819455e73a701(&v14, v19, v17);
}
