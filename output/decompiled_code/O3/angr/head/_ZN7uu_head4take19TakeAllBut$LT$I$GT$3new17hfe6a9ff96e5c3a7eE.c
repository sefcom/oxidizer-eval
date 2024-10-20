double uu_head::take::TakeAllBut$LT$I$GT$::new::hfe6a9ff96e5c3a7e(long long a0, long long a1, long long a2, long long a3)
{
    char v0;  // [bp-0xa8]
    unsigned int v1;  // [sp-0xa4]
    void* v2;  // [sp-0xa0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [sp-0x98]
    void* v4;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x78]
    void* v6;  // [sp-0x70]
    unsigned long long v7;  // [sp-0x68]
    int v8;  // [sp-0x60]
    unsigned long v9;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x40]
    unsigned long long v11;  // [sp-0x38]
    unsigned long long v13;  // 4096
    unsigned long long v14;  // r12
    unsigned long v17;  // rdx
    int v23;  // ymm0

    v6 = 0;
    v7 = 8;
    *((int128_t *)&v8) = 0;
    if (!a3)
    {
        a0->field_20 = a3;
        *((void*)&a0->field_10) = v8;
        a0->field_0 = v6;
        a0->field_8 = v7;
        a0->field_28 = a1;
        a0->field_30 = a2;
        return (unsigned long long)(v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v8);
    }
    v1 = v0;
    v5 = 0x8000000000000000;
    while (true)
    {
        v14 = v13;
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v5 = v5;
        if (_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(a1) || !v17)
        {
            if (v2)
                __rust_dealloc(v3);
        }
        else
        {
            v3 = v3;
            v4 = v4;
            v2 = v2;
        }
        if (v9 == 9223372036854775809)
            break;
        v9 = v2;
        v10 = v3;
        v11 = v4;
        uucore::features::ringbuffer::RingBuffer$LT$T$GT$::push_back::h68d00029c4e513b5(&v2, &v6, &v9);
        _ZN4core3ptr126drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$std..io..error..Error$GT$$GT$$GT$17h4c5f37e7af0b082cE.llvm.1431650823985739752(&v2);
        if (v14 == 1)
            break;
    }
}
