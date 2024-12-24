int uu_test::path::h1171f6392a3e4a38()
{
    char v0;  // [bp-0x188]
    char v1;  // [bp-0x178]
    char v2;  // [bp-0x168]
    char v3;  // [bp-0x158]
    char v4;  // [bp-0x150]
    char v5;  // [bp-0x14c]
    char v6;  // [bp-0x148]
    char v7;  // [bp-0x144]
    char v8;  // [bp-0x13c]
    char v9;  // [bp-0x138]
    char v10;  // [bp-0x130]
    char v11;  // [bp-0x120]
    char v12;  // [bp-0x110]
    char v13;  // [bp-0x100]
    char v14;  // [bp-0xf0]
    char v15;  // [bp-0xe0]
    int v16;  // [sp-0xd8]
    int v17;  // [sp-0xc8]
    int v18;  // [sp-0xb8]
    unsigned long long v19;  // [sp-0xa8]
    unsigned int v20;  // [sp-0xa0]
    unsigned int v21;  // [sp-0x9c]
    unsigned int v22;  // [sp-0x98]
    unsigned long long v23;  // [sp-0x94]
    unsigned int v24;  // [sp-0x8c]
    unsigned long long v25;  // [sp-0x88]
    int v26;  // [sp-0x80]
    int v27;  // [sp-0x70]
    int v28;  // [sp-0x60]
    int v29;  // [sp-0x50]
    int v30;  // [sp-0x40]
    unsigned long long v31;  // [sp-0x30]
    unsigned int v33;  // edx
    unsigned long long v36;  // rdi
    unsigned long long v37;  // rsi

    if ((char)v33 != 8)
    {
        std::fs::metadata::hd55240321bf37b44(&v0, v36, v37);
        if (*((int *)&v0) != 2)
        {
            *((int128_t *)&v16) = *((int128_t *)&v0);
            *((int128_t *)&v17) = *((int128_t *)&v1);
            *((int128_t *)&v18) = *((int128_t *)&v2);
            v19 = *((long long *)&v3);
            v20 = *((int *)&v4);
            v21 = *((int *)&v5);
            v22 = *((int *)&v6);
            v23 = *((long long *)&v7);
            v24 = *((int *)&v8);
            v25 = *((long long *)&v9);
            v31 = *((long long *)&v15);
            *((int128_t *)&v30) = *((int128_t *)&v14);
            *((int128_t *)&v29) = *((int128_t *)&v13);
            *((int128_t *)&v28) = *((int128_t *)&v12);
            *((int128_t *)&v27) = *((int128_t *)&v11);
            *((int128_t *)&v26) = *((int128_t *)&v10);
            goto *((int *)(4309976 + v33 * 4)) + 4309976;
        }
    }
    else
    {
        std::fs::symlink_metadata::hb4b2c138b2d34dda(&v0, v36, v37);
        if (*((int *)&v0) != 2)
        {
            vvar_121{stack -216} = *((int128_t *)&v0);
            vvar_122{stack -200} = *((int128_t *)&v1);
            vvar_123{stack -184} = *((int128_t *)&v2);
            vvar_124{stack -168} = *((long long *)&v3);
            vvar_125{stack -160} = *((int *)&v4);
            vvar_126{stack -156} = *((int *)&v5);
            vvar_127{stack -152} = *((int *)&v6);
            vvar_128{stack -148} = *((long long *)&v7);
            vvar_129{stack -140} = *((int *)&v8);
            vvar_130{stack -136} = *((long long *)&v9);
            vvar_131{stack -48} = *((long long *)&v15);
            vvar_132{stack -64} = *((int128_t *)&v14);
            vvar_133{stack -80} = *((int128_t *)&v13);
            vvar_134{stack -96} = *((int128_t *)&v12);
            vvar_135{stack -112} = *((int128_t *)&v11);
            vvar_136{stack -128} = *((int128_t *)&v10);
            goto *((int *)(4309976 + v33 * 4)) + 4309976;
        }
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h55a51baada99ba08(&v0);
    return;
}
