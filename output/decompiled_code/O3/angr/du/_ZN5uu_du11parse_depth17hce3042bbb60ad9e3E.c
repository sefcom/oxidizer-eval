long long uu_du::parse_depth::hce3042bbb60ad9e3(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, char a3)
{
    void* v0;  // [bp-0x40], Other Possible Types: char, unsigned long long
    char v1;  // [bp-0x38]
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    if (!a1)
    {
        v3 = 0;
        goto LABEL_4f3ce8;
    }
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, a1, a2);
    if (!v0)
    {
        if (!(!a3))
            goto LABEL_4f3ca5;
        v4 = *((long long *)&v1);
        v3 = 1;
LABEL_4f3ce8:
        a0[1] = v3;
        a0[2] = v4;
        v5 = 0;
    }
    else
    {
        if (!a3)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8434be8f27859977(&v1, a1, a2);
            v0 = 0;
        }
        else
        {
LABEL_4f3ca5:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8434be8f27859977(&v1, a1, a2);
            v0 = 1;
        }
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h65b741b2d8b6c1fe(&v0);
        a0[2] = &g_583ff8;
        v5 = 1;
    }
    a0[0] = v5;
    return a0;
}
