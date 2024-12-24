long long uu_sum::bsd_sum::hc6379797c22feef4(unsigned long long a0, struct_1 *a1)
{
    unsigned long v0;  // [sp-0x1040], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x1038]
    void* v2;  // [sp-0x1030]
    void* v4;  // r15
    struct struct_0 **v5;  // r14
    void* v6;  // r13
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    char *v9;  // rax

    v2 = 0;
    v4 = 0;
    memset(&v2, 0, 0x1000);
    v5 = a1->field_18;
    v6 = 0;
    while (true)
    {
        v7 = v5(a0, &v2, 0x1000);
        if (!(!v7) || !(v8))
            break;
        v0 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hf8d4ea76f81804fb(v8, &v2);
        v1 = v8 + v0;
        while (true)
        {
            v9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h97b50372559001eb(&v0);
            if (!v9)
                break;
            v4 = (v4 | -0x10000 | __ROR__((unsigned short)v4, 1)) + *(v9) & 4294967295;
        }
        v6 += v8;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::he9e4e162e044a4cb(0, v8);
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::he9e4e162e044a4cb(v7, v8);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$::h38fa581a985537df(a0, a1);
    return (v6 >> 10) - -1 - (((unsigned int)v6 & 1023) < 1);
}
