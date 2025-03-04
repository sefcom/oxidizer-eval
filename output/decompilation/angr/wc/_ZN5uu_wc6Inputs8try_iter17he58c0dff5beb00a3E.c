long long uu_wc::Inputs::try_iter::he58c0dff5beb00a3(unsigned long long a0[6], unsigned long long a1[4])
{
    unsigned long v0;  // [sp-0xe0], Other Possible Types: unsigned long long
    char v1;  // [sp-0xd8]
    char v2;  // [bp-0xd0]
    char v3;  // [bp-0xc8]
    char v4;  // [bp-0xb8]
    char v5;  // [bp-0xa8]
    char v6;  // [bp-0x98]
    int v7;  // [sp-0x88]
    unsigned long v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x70]
    unsigned long long v10;  // [sp-0x68]
    int v11;  // [sp-0x60]
    int v12;  // [sp-0x50]
    int v13;  // [sp-0x40]
    unsigned long long v14;  // [sp-0x30]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // r15
    unsigned long long v19;  // r13
    unsigned long long v21;  // r12
    unsigned long long *v22;  // rdx

    v16 = a1[0];
    if (!v16)
    {
        v0 = 9223372036854775809;
        v1 = 1;
        v17 = alloc::boxed::Box$LT$T$GT$::new::hb1b1f7e97a75751a(&v0);
        v18 = v17;
        v19 = &g_531000;
    }
    else if ((unsigned int)v16 == 1)
    {
        v17 = alloc::boxed::Box$LT$T$GT$::new::hca89ae0b97a778fb(a1[2], a1[2] + a1[3] * 24);
        v18 = v17;
        v19 = &g_531038;
    }
    else if (a1[1] == 9223372036854775809)
    {
        uu_wc::files0_iter_stdin::h027d8be6f7e7f770(&v0);
        v17 = alloc::boxed::Box$LT$T$GT$::new::hf248821590b359db(&v0);
        v18 = v17;
        v19 = &g_5310a8;
    }
    else
    {
        uu_wc::files0_iter_file::h4e3b8ab8e030dfca(&v0, a1[2], a1[3]);
        v17 = *((long long *)&v1);
        if (v8 == 9223372036854775809)
        {
            a0[1] = v9;
            a0[2] = v10;
            a0[0] = 9223372036854775811;
            return v17;
        }
        v14 = *((long long *)&v6);
        *((int128_t *)&v13) = *((int128_t *)&v5);
        *((int128_t *)&v12) = *((int128_t *)&v4);
        *((int128_t *)&v11) = *((int128_t *)&v3);
        v8 = v0;
        v9 = v17;
        v10 = *((long long *)&v2);
        v17 = alloc::boxed::Box$LT$T$GT$::new::h8a205305a0670f0b(&v8);
        v18 = v17;
        v19 = &g_531070;
    }
    v21 = 9223372036854775810;
    if (*(v22) != 9223372036854775810)
    {
        v17 = core::ops::function::FnOnce::call_once::h817deecf557940d0(&v0, v22);
        v21 = v0;
        *((int128_t *)&v7) = *((int128_t *)&v1);
    }
    a0[0] = v21;
    *((void*)&a0[1]) = v7;
    a0[3] = v18;
    a0[4] = v19;
    a0[5] = 0;
    return v17;
}
