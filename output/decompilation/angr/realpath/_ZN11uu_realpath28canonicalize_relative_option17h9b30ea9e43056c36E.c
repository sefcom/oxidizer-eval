long long uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(unsigned long long a0[3], unsigned long long a1[3], unsigned int a2, unsigned int a3)
{
    int v0;  // [sp-0x78]
    unsigned long long v1;  // [sp-0x68]
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x40]
    unsigned long long v7;  // r13
    unsigned long long v8;  // r15
    unsigned long long v9;  // r12
    unsigned long long v10;  // rax

    if (a1[0] == 0x8000000000000000)
    {
        v7 = 0x8000000000000000;
    }
    else
    {
        v1 = a1[2];
        *((int128_t *)&v0) = *((int128_t *)&a1[0]);
        uu_realpath::canonicalize_relative::h9315a0e677658306(&v5, (long long)(&v0)[8], v1, a2, a3);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8dc0120961bddde7(&v2, &v5, &v0);
        v7 = *((long long *)&v2);
        v8 = *((long long *)&v3);
        v9 = *((long long *)&v4);
        if (v7 == 0x8000000000000000)
        {
            a0[1] = v8;
            a0[2] = v9;
            a0[0] = 9223372036854775809;
            v10 = ::0x4b4d60::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cc26ee4129f6434(&v0);
            return v10;
        }
        v10 = ::0x4b4d60::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cc26ee4129f6434(&v0);
    }
    a0[0] = v7;
    a0[1] = v8;
    a0[2] = v9;
    return v10;
}
