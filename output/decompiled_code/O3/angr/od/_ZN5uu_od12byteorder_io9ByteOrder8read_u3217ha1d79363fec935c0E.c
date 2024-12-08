long long uu_od::byteorder_io::ByteOrder::read_u32::ha1d79363fec935c0(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned int *v4;  // rax
    unsigned long v5;  // rdx
    unsigned long v6;  // rdx
    unsigned int v8;  // eax
    unsigned int v10;  // eax

    v0 = v2;
    if ((char)a0 && (unsigned int)a0 == 1)
    {
        v3 = ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(0, 4, a1, a2, &g_5416c8);
        if (v5 != 4)
            v8 = v3 | -0x100 | 1;
        else
            v8 = 0;
        return __buildin_bswap32(core::result::Result$LT$T$C$E$GT$::unwrap::hc659ede75a13c9df(*(v3) * 0x100 | v8, &g_5416e0));
    }
    v4 = ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(0, 4, a1, a2, &g_541698);
    if (v6 != 4)
        v10 = v4 | -0x100 | 1;
    else
        v10 = 0;
    return core::result::Result$LT$T$C$E$GT$::unwrap::hc659ede75a13c9df(*(v4) * 0x100 | v10, &g_5416b0);
}
