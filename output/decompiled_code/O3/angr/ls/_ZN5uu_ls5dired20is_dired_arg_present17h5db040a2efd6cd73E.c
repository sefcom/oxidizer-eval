long long uu_ls::dired::is_dired_arg_present::h5db040a2efd6cd73()
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v4;  // [sp-0x30]
    char v5;  // [bp-0x28]

    std::env::args::hcc0787e3c3e9e7bb(&v5);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha8ea7375c2a5a1e7(&v0, &v5);
    v3 = *((long long *)&v1);
    v4 = v3 + *((long long *)&v2) * 24;
    ::0x54e580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbaa87f9dbd448729(&v0);
    return (unsigned int)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h9b168894964f23d9(&v3);
}
