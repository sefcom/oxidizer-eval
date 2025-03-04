long long uu_cp::copydir::ends_with_slash_dot::h7ca260d86f8cd653(unsigned long long a0)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long v3;  // [sp-0x18]
    unsigned long long v4;  // [sp-0x10]
    unsigned long v6;  // rdx

    v3 = ::0x50d850::_$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h28e4b529e1fbf8c2(a0);
    v4 = v6;
    ::0x50d160::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0383ffa9f5ca7973(&v0, &v3);
    ::0x50d400::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v0);
    return (unsigned int)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h706a83e6dc488ee6(*((long long *)&v1), *((long long *)&v2), "/.src/uu/cp/src/copydir.rsFailed to create directory: \n", 2);
}
