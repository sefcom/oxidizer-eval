long long uu_head::is_seekable::h10276630579ab154(unsigned long long a0)
{
    unsigned long v0;  // [sp-0x30]
    unsigned long long v1;  // [sp-0x28]
    unsigned long v2;  // [sp-0x20]
    unsigned long long v3;  // [sp-0x18]
    unsigned long long v5;  // rdx

    v2 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0, 2, 0);
    v3 = v5;
    if (!v2)
    {
        v0 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0, 1, 0);
        v1 = v5;
        if (!v0)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&v0);
            v0 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0, 0, core::result::Result$LT$T$C$E$GT$::unwrap::h241df4b67d3ddb4e(v5));
            v1 = v5;
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&v0);
            return (unsigned int)(a0 & 0xffffffffffffff00 | !v0);
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&v0);
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&v2);
    return 0;
}
