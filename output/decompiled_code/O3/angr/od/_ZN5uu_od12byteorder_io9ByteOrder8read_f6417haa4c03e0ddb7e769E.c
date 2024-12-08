long long uu_od::byteorder_io::ByteOrder::read_f64::haa4c03e0ddb7e769(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x10]
    unsigned long long *v2;  // rax
    unsigned long v3;  // rdx
    unsigned long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned int v7;  // eax

    if ((char)a0 && (unsigned int)a0 == 1)
    {
        v6 = core::result::Result$LT$T$C$E$GT$::unwrap::hc412afbaa41f745a((v3 == 8 ? 0 : (int)(::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(0, 8, a1, a2, &g_541728) | -0x100 | 1)), &g_541740);
        return v6;
    }
    v2 = ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(0, 8, a1, a2, &g_5416f8);
    if (v5 != 8)
    {
        v7 = v2 | -0x100 | 1;
    }
    else
    {
        v0 = *(v2);
        v7 = 0;
    }
    v6 = core::result::Result$LT$T$C$E$GT$::unwrap::hc412afbaa41f745a(v7, &g_541710);
    return v6;
}
