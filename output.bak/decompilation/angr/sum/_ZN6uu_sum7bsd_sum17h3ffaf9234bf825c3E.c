long long uu_sum::bsd_sum::h3ffaf9234bf825c3(unsigned long long a0, struct_1 *a1)
{
    unsigned long v0;  // [sp-0x1040], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x1038]
    void* v2;  // [sp-0x1030]
    unsigned long long v4;  // r15
    void* v6;  // r13
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    char *v9;  // rax

    v2 = 0;
    v4 = 0;
    memset(&v2, 0, 0x1000);
    v6 = 0;
    while (true)
    {
        v7 = a1->field_18(a0, &v2, 0x1000);
        if (!(!v7) || !(v8))
            break;
        v0 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h4f7c6d1d3194fc05(v8, &v2, &g_5123d8);
        v1 = v8 + v0;
        while (true)
        {
            v9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h000bc77802a7698a(&v0);
            if (!v9)
                break;
            v4 = (v4 | -0x10000 | __ROR__((unsigned short)v4, 1)) + *(v9) & 4294967295;
        }
        v6 += v8;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1f7ee64c99c66cf3(0, v8);
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1f7ee64c99c66cf3(v7, v8);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$::h5da1723ca861270e(a0, a1);
    return (v6 >> 10) - -1 - (((unsigned int)v6 & 1023) < 1);
}
