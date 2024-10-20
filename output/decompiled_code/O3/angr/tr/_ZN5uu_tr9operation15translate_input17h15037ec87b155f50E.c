long long uu_tr::operation::translate_input::h15037ec87b155f50(unsigned long long a0, unsigned long long a1[3], unsigned long long a2)
{
    void* v0;  // [sp-0x90]
    unsigned long long v1;  // [sp-0x88]
    void* v2;  // [sp-0x80]
    void* v3;  // [sp-0x78]
    unsigned long long v4;  // [sp-0x70]
    void* v5;  // [sp-0x68]
    unsigned long long v6;  // [sp-0x60]
    unsigned long long v7;  // [sp-0x58]
    unsigned long v8;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x40]
    unsigned long long v11;  // [sp-0x38]
    unsigned long long v13;  // rdx
    void* v14;  // rsi
    unsigned long v15;  // rbx
    unsigned long long v16;  // r15
    unsigned long long v17;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    while (true)
    {
        v7 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(a0, 10);
        v8 = v13;
        if (!(!v7) || !(v13))
            break;
        v9 = v1;
        v10 = v2 + v9;
        v11 = a2;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::hd1e1a70c750d00aa(&v3, &v9, v13);
        v14 = v4;
        v15 = v5;
        v16 = a1[2];
        if (a1[0] - v16 > v15)
        {
            memcpy(a1[1] + v16, v14, v15);
            a1[2] = v16 + v15;
        }
        else
        {
            v17 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h67351ad5db9bcf4a(a1, v14, v15);
            if (v17)
            {
                v6 = v17;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
        }
        v2 = 0;
        v5 = 0;
    }
    if (v7)
        ::0x439250::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h636aec291b57824f(&v8);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd9a5c001e98c1400();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8cb7ea7aee3caef2(&v3);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd9a5c001e98c1400();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8cb7ea7aee3caef2(&v0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd9a5c001e98c1400();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8cb7ea7aee3caef2(a2);
    return _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1eb8b5b83dbba12(a2 + 24);
}
