int uu_head::read_but_last_n_bytes::hc5f1d0ad028c7bde()
{
    unsigned long v0;  // [sp-0x10070], Other Possible Types: unsigned long long
    void* v1;  // [sp-0x10068]
    unsigned long long v2;  // [sp-0x10060]
    void* v3;  // [sp-0x10058]
    void* v4;  // [sp-0x10048]
    unsigned long v5;  // [sp-0x10040], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0x10038], Other Possible Types: unsigned long long
    char v7;  // [bp-0x10030]
    void* v8;  // [sp-0x2030]
    unsigned long v10;  // rsi
    unsigned long long v11;  // rdi
    void* v14;  // rbp
    unsigned long long v15;  // rcx
    unsigned long long v16;  // r12
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx

    do
    {
        v8 = 0;
    } while (&v8 != &v7);
    if (!v10)
    {
        uu_head::read_n_bytes::h6fceecc1df8e2d16(v11, -1);
        return;
    }
    v6 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v6);
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4 = 0;
    memset(&v7, 0, 0x10000);
    while (true)
    {
        if (_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(v11))
        {
            v5 = v18;
            if ((char)::0x4b7150::std::io::error::Error::kind::hb2ff5fa058639b3d(v18) != 35)
            {
                goto LABEL_4b96bf;
            }
            else
            {
                ::0x4b75f0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57d894b44a41053e(&v5);
                continue;
            }
        }
        if (!v18)
        {
            ::0x4b7610::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb5d1cc1ebcc864d9(&v1);
            ::0x4b7670::core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42();
            break;
        }
        v4 += v18;
        if (v4 <= v10)
        {
            v14 = 0;
            v15 = &g_52cec0;
            v16 = v18 + v10 - v4;
            goto LABEL_4b968c;
        }
        if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, v2, v3))
        {
LABEL_4b9720:
LABEL_4b96bf:
            ::0x4b7610::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb5d1cc1ebcc864d9(&v1);
            ::0x4b7670::core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42();
            break;
        }
        else
        {
            v14 = v18 - v10;
            if (!(!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, ::0x4b6dc0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha1b168ca8ea64d34(0, v3 + v14, &v7, &g_52ce90), v18)))
                goto LABEL_4b9720;
            v3 = 0;
            v15 = &g_52cea8;
LABEL_4b968c:
            v17 = ::0x4b6dc0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha1b168ca8ea64d34(v14, v16, &v7, v15);
            ::0x4b82d0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h638c534dbe90cd22(&v1, ::0x4b8240::core::slice::iter::Iter$LT$T$GT$::make_slice::hbdca4b1d4fdb647e(v17, v18 + v17), v18);
        }
    }
    return;
}
