long long uu_od::byteorder_io::ByteOrder::read_u16::h2ab1179f74bd1e55(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned short *v3;  // rax
    unsigned short *v4;  // rax
    unsigned long v5;  // rdx
    unsigned long v6;  // rdx
    unsigned int v8;  // eax
    unsigned int v10;  // eax
    unsigned long long v11;  // rax

    v0 = v2;
    if ((char)a0 && (unsigned int)a0 == 1)
    {
        v3 = ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(0, 2, a1, a2, &g_541668);
        if (v5 != 2)
            v8 = v3 | -0x100 | 1;
        else
            v8 = 0;
        v11 = core::result::Result$LT$T$C$E$GT$::unwrap::h10b505efcaa13590(*(v3) * 0x100 | v8, &g_541680);
        return v11 | -0x10000 | __ROL__((unsigned short)v11, 8);
    }
    v4 = ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(0, 2, a1, a2, &g_541638);
    if (v6 != 2)
        v10 = v4 | -0x100 | 1;
    else
        v10 = 0;
    return core::result::Result$LT$T$C$E$GT$::unwrap::h10b505efcaa13590(*(v4) * 0x100 | v10, &g_541650);
}
