long long uu_od::byteorder_io::ByteOrder::read_u64::ha37470c0ef0e5e29(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long *v1;  // rax
    unsigned long long *v2;  // rax
    unsigned long v3;  // rdx
    unsigned long v4;  // rdx
    unsigned long long v5;  // rbx
    unsigned int v6;  // eax
    unsigned int v7;  // eax

    if ((char)a0 && (unsigned int)a0 == 1)
    {
        v1 = ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(0, 8, a1, a2, &g_541728);
        if (v3 != 8)
        {
            v6 = v1 | -0x100 | 1;
        }
        else
        {
            v5 = *(v1);
            v6 = 0;
        }
        core::result::Result$LT$T$C$E$GT$::unwrap::hc412afbaa41f745a(v6, &g_541740);
        v5 = (((((v5 & -0xff00ff00ff0100) >> 8 | v5 * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((v5 & -0xff00ff00ff0100) >> 8 | v5 * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) & -0x100000000) >> 32 | ((((v5 & -0xff00ff00ff0100) >> 8 | v5 * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((v5 & -0xff00ff00ff0100) >> 8 | v5 * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) * 0x100000000 & -0x100000000;
        return v5;
    }
    v2 = ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(0, 8, a1, a2, &g_5416f8);
    if (v4 != 8)
    {
        v7 = v2 | -0x100 | 1;
    }
    else
    {
        v5 = *(v2);
        v7 = 0;
    }
    core::result::Result$LT$T$C$E$GT$::unwrap::hc412afbaa41f745a(v7, &g_541710);
    return v5;
}
