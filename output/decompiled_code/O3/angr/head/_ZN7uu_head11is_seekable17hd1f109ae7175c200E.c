long long uu_head::is_seekable::hd1f109ae7175c200(unsigned long long a0)
{
    unsigned long v0;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x28]
    unsigned long v2;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x18]
    unsigned long long v5;  // rdx

    v2 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0, 2);
    v3 = v5;
    if (!v2)
    {
        v0 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0, 1);
        v1 = v5;
        if (!v0)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hca7135ab0df44ddc(&v0);
            core::result::Result$LT$T$C$E$GT$::unwrap::h6bad8152ea06e946(v5);
            v0 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0, 0);
            v1 = v5;
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hca7135ab0df44ddc(&v0);
            return (unsigned int)(a0 | -0x100 | !v0);
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hca7135ab0df44ddc(&v0);
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hca7135ab0df44ddc(&v2);
    return 0;
}
