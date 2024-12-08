int uu_head::read_but_last_n_bytes::hfc6ff5f98e60489a()
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
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdi
    unsigned int v12;  // rdx
    unsigned long long v13;  // rdx
    void* v16;  // rbp
    unsigned long long v17;  // r12
    unsigned long long v18;  // rax

    do
    {
        v8 = 0;
    } while (&v8 != &v7);
    if (!v10)
    {
        uu_head::read_n_bytes::h0925f1801434f10d(v11, -1, v12);
        return;
    }
    v6 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v6, v10, v13);
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4 = 0;
    memset(&v7, 0, 0x10000);
    while (true)
    {
        if (_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(v11, &v7, 0x10000))
        {
            v5 = v13;
            if ((char)::0x4b72e0::std::io::error::Error::kind::hb2ff5fa058639b3d(v13) != 35)
            {
                goto LABEL_4b9a7f;
            }
            else
            {
                ::0x4b7780::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6d532d673cc6564c(&v5);
                continue;
            }
        }
        if (!v13)
        {
            ::0x4b77a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf4b8546456eaed67(&v1);
            ::0x4b7800::core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h0ca90cd3116acc27(v0);
            break;
        }
        v4 += v13;
        if (v4 <= v10)
        {
            v16 = 0;
            goto LABEL_4b9a4c;
        }
        if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, v2, v3))
        {
LABEL_4b9ae0:
LABEL_4b9a7f:
            ::0x4b77a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf4b8546456eaed67(&v1);
            ::0x4b7800::core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h0ca90cd3116acc27(v0);
            break;
        }
        else
        {
            v16 = v13 - v10;
            if (!(!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, ::0x4b6f50::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he34e1e0212e7c5e9(0, v3 + v16), v13)))
                goto LABEL_4b9ae0;
            v3 = 0;
LABEL_4b9a4c:
            v18 = ::0x4b6f50::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he34e1e0212e7c5e9(v16, v17);
            ::0x4b8460::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hba4c199dc5694472(&v1, ::0x4b83d0::core::slice::iter::Iter$LT$T$GT$::make_slice::h8b1695d2ea019850(v18, v13 + v18), v13);
        }
    }
    return;
}
