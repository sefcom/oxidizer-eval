long long uu_pr::print_page::h6e73dbc2020375d5(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3)
{
    unsigned long v0;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xf0]
    unsigned long long v2;  // [sp-0xe8]
    char v3;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xd8]
    void* v5;  // [sp-0xd0]
    char v6;  // [bp-0xc0]
    char v7;  // [bp-0xb8]
    char v8;  // [bp-0xb0]
    int v9;  // [sp-0xa8]
    unsigned long long v10;  // [sp-0x98]
    unsigned long long v11;  // [sp-0x88]
    unsigned long long v12;  // [sp-0x80]
    unsigned long v13;  // [sp-0x68], Other Possible Types: unsigned long long
    char v14;  // [bp-0x60]
    char v15;  // [bp-0x50]
    char v16;  // [bp-0x48]
    int v20;  // ymm0
    int v21;  // xmm0
    unsigned long long v22;  // rax
    unsigned long long v23[3];  // rdx
    unsigned long long v25[3];  // rdx

    v2 = a2->field_50;
    v1 = a2->field_58;
    uu_pr::header_content::h02dbeaeea8884abb(&v16, a2, a3);
    uu_pr::trailer_content::h355b304d1d1d6111(&v6, a2->field_141, a2->field_142);
    v11 = a2->field_a0;
    v12 = a2->field_98;
    v13 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v13);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc20ab2c0828df040(&v3, &v16);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haec41bb14c083d45(&v14, &v3);
    if (*((long long *)&v14) != 0x8000000000000000)
    {
        do
        {
            v21 = *((int128_t *)&v14);
            v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21;
            v9 = v21;
            v10 = *((long long *)&v15);
            if (!(!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, (long long)(&v9)[8], *((long long *)&v15))) || !(!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, v2, v1)))
            {
                ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v9);
                ::0x5c0e90::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::ha46bc5424c6e948f(&v3);
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he446444bf71f01b1();
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h72ab41bb7772a064(&v6);
                return 1;
            }
            ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v9);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haec41bb14c083d45(&v14, &v3);
        } while (*((long long *)&v14) != 0x8000000000000000);
    }
    ::0x5c0e90::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::ha46bc5424c6e948f(&v3);
    if (uu_pr::write_columns::h4b27546e3d45b76a(a0, a1, a2, &v0))
    {
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he446444bf71f01b1();
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h72ab41bb7772a064(&v6);
        return 1;
    }
    v3 = *((long long *)&v7);
    v4 = v3 + *((long long *)&v8) * 24;
    v5 = 0;
    v22 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he43dc31389a3d3c2(&v3);
    if (!v23)
    {
LABEL_5c7a0a:
        if (!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, v12, v11) && !_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(&v0))
        {
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he446444bf71f01b1();
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h72ab41bb7772a064(&v6);
            return 0;
        }
    }
    else
    {
        while (!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, v25[1], v25[2]) && (v22 + 1 == *((long long *)&v8) || !_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, v2, v1)))
        {
            v22 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he43dc31389a3d3c2(&v3);
            if (!v23)
                goto LABEL_5c7a0a;
        }
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he446444bf71f01b1();
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h72ab41bb7772a064(&v6);
    return 1;
}
