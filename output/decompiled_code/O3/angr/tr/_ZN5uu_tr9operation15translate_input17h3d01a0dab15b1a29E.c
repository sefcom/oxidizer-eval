long long uu_tr::operation::translate_input::h3d01a0dab15b1a29(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [sp-0x88]
    unsigned long long v1;  // [sp-0x80]
    void* v2;  // [sp-0x78]
    void* v3;  // [sp-0x70]
    unsigned long long v4;  // [sp-0x68]
    void* v5;  // [sp-0x60]
    unsigned long v6;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x50]
    unsigned long v8;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x40]
    unsigned long long v10;  // [sp-0x38]
    unsigned long long v12;  // rdx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    while (true)
    {
        v6 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(a0);
        v7 = v12;
        if (!(!v6) || !(v12))
            break;
        v8 = v1;
        v9 = v2 + v8;
        v10 = a2;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h6a2418ec77155289(&v3, &v8, v12);
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d6c1e03445a2eaf(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4e64c2698a15f5af(a1, v4, v5));
        v2 = 0;
        v5 = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hc73a6ec6b3bcd488(&v6);
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hc73a6ec6b3bcd488(&v6);
    ::0x46bea0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h988507a9be912e8d(&v3);
    ::0x46bea0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h988507a9be912e8d(&v0);
    return ::0x46bef0::core::ptr::drop_in_place$LT$std..sys..os_str..bytes..Buf$GT$::h6b2557c9188fc382(a2);
}
