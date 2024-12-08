long long uu_ls::get_inode::h474a31b3ae8fec98(unsigned long long a0, unsigned long a1)
{
    unsigned long v0;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x38]
    unsigned long v3;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x28]
    unsigned long long v5;  // [sp-0x20]
    unsigned long long v6;  // [sp-0x18]
    void* v7;  // [sp-0x10]

    v0 = a1;
    v1 = &v0;
    v2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v3 = &g_423d10;
    v4 = 1;
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    return ::0x51ccd0::core::option::Option$LT$T$GT$::map_or_else::h4ac335b83d8d44c4(a0, &v3);
}
