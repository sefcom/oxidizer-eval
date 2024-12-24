long long uu_ln::relative_path::he28c1e1cf68f2c09(unsigned long long a0[3], unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long a5)
{
    char v0;  // [bp-0xd8]
    char v1;  // [bp-0xc8]
    char v2;  // [bp-0xc0]
    char v3;  // [bp-0xb0]
    int v4;  // [sp-0xa8]
    unsigned long long v5;  // [sp-0x98]
    int v6;  // [sp-0x88]
    unsigned long long v7;  // [sp-0x78]
    int v8;  // [sp-0x68]
    unsigned long long v9;  // [sp-0x58]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rax
    unsigned long long v16;  // r8
    unsigned long long v17;  // r9
    unsigned long long v18;  // rax

    uucore::features::fs::canonicalize::ha026fcbbcd37326b(&v0, a1);
    if (*((long long *)&v0) != 0x8000000000000000)
    {
        v5 = *((long long *)&v1);
        *((int128_t *)&v4) = *((int128_t *)&v0);
        v15 = std::path::Path::parent::h65c9a340a6266f2d(a3, a4, v13, v14);
        if (!v15)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        uucore::features::fs::canonicalize::ha026fcbbcd37326b(&v2, v15, v13, 2, 1);
        if (*((long long *)&v2) != 0x8000000000000000)
        {
            v7 = *((long long *)&v3);
            *((int128_t *)&v6) = *((int128_t *)&v2);
            v9 = v5;
            v8 = v4;
            uucore::features::fs::make_path_relative_to::h9256d1bcacdae183(&v10, &v8, &v6, v14, v16, v17);
            v18 = *((long long *)&v11);
            a0[2] = v18;
            *((int128_t *)&a0[0]) = *((int128_t *)&v10);
            if (*((long long *)&v2) == 0x8000000000000000)
                v18 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h13c9a13c39462517(&v2);
            if (*((long long *)&v0) == 0x8000000000000000)
            {
                v18 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h13c9a13c39462517(&v0);
                return v18;
            }
            return v18;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h13c9a13c39462517(&v2);
            v18 = ::0x4b77a0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc15fd571fc19ad9b(&v4);
            if (*((long long *)&v0) != 0x8000000000000000)
            {
                a0[1] = a1;
                a0[2] = a2;
                a0[0] = 0x8000000000000000;
                return v18;
            }
        }
    }
    v18 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h13c9a13c39462517(&v0);
    a0[1] = a1;
    a0[2] = a2;
    a0[0] = 0x8000000000000000;
    return v18;
}
