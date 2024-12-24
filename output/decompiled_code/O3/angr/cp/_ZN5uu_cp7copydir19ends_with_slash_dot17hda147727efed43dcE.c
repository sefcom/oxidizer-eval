long long uu_cp::copydir::ends_with_slash_dot::hda147727efed43dc(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long v3;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x10]
    unsigned long v6;  // rdx

    v3 = ::0x50ce90::_$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h7c392fa0d3e1e07c(a0);
    v4 = v6;
    ::0x50c7a0::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h4e88d462e02f0a87(&v0, &v3);
    ::0x50ca40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v0);
    return (unsigned int)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h06f0cf9cb26fe1e1(*((long long *)&v1), *((long long *)&v2), "/.src/uu/cp/src/copydir.rsFailed to create directory: \n", 2);
}
