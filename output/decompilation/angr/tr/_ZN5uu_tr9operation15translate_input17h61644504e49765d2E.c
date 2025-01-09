long long uu_tr::operation::translate_input::h61644504e49765d2(unsigned long long a0, unsigned long long a1, unsigned long a2)
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
    unsigned long v12;  // rdx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    while (true)
    {
        v6 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(a0, 10, &v0);
        v7 = v12;
        if (!(!v6) || !(v12))
            break;
        v8 = v1;
        v9 = v2 + v8;
        v10 = a2;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h365d6544a280625d(&v3, &v8);
        core::result::Result$LT$T$C$E$GT$::unwrap::hdacc8680b3e233fd(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h266d567e2e387c1e(a1, v4, v5));
        v2 = 0;
        v5 = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h3721ff3632bfcddf(&v6);
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h3721ff3632bfcddf(&v6);
    ::0x471490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hefea7399e2ac3a44(&v3);
    ::0x471490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hefea7399e2ac3a44(&v0);
    return core::ptr::drop_in_place$LT$uu_tr..operation..SqueezeOperation$GT$::h73ada71f4cc2121e();
}
