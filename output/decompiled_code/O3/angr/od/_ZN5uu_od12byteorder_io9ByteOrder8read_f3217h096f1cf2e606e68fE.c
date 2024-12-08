double uu_od::byteorder_io::ByteOrder::read_f32::h096f1cf2e606e68f(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned int *v4;  // rax
    unsigned long v5;  // rdx
    unsigned long v6;  // rdx
    unsigned int v8;  // eax
    unsigned int v10;  // eax
    unsigned long long v11;  // rax
    int v12;  // ymm0

    v0 = v2;
    if (!(char)a0 || (unsigned int)a0 != 1)
    {
        v4 = ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(0, 4, a1, a2, &g_541698);
        if (v6 != 4)
            v10 = v4 | -0x100 | 1;
        else
            v10 = 0;
        v11 = core::result::Result$LT$T$C$E$GT$::unwrap::hc659ede75a13c9df(*(v4) * 0x100 | v10, &g_5416b0);
    }
    else
    {
        v3 = ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(0, 4, a1, a2, &g_5416c8);
        if (v5 != 4)
            v8 = v3 | -0x100 | 1;
        else
            v8 = 0;
        v11 = __buildin_bswap32(core::result::Result$LT$T$C$E$GT$::unwrap::hc659ede75a13c9df(*(v3) * 0x100 | v8, &g_5416e0));
    }
    return (unsigned long long)(v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11);
}
