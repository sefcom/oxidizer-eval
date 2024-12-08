long long uu_env::ignore_signal::h1c2b1631f97aeab0(unsigned int a0)
{
    unsigned int v0;  // [sp-0x9c]
    char v1;  // [bp-0x98]
    char v2;  // [bp-0x90]
    unsigned long v3;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x80]
    unsigned long v5;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x70]
    unsigned long long v7;  // [sp-0x68]
    unsigned long long v8;  // [sp-0x60]
    unsigned long v9;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x50]
    unsigned long long v11;  // [sp-0x48]
    unsigned long long v12;  // [sp-0x40]
    void* v13;  // [sp-0x38]
    char v14;  // [bp-0x28]
    unsigned int v15;  // [sp-0x10]
    unsigned long v18;  // rdx

    nix::sys::signal::signal::h1004271f079d8121(&v1, a0, 1);
    if (*((int *)&v1) != 4)
        return 0;
    v0 = a0;
    v3 = nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::desc::h1bcc37dd8fe15fac(*((int *)&v2));
    v4 = v18;
    v5 = &v0;
    v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
    v7 = &v3;
    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf063c1e607342e2f;
    v9 = &g_549418;
    v10 = 2;
    v13 = 0;
    v11 = &v5;
    v12 = 2;
    ::0x4cb2e0::core::option::Option$LT$T$GT$::map_or_else::hc0527ddab4d2c9e4(&v14, &v9);
    v15 = 125;
    return alloc::boxed::Box$LT$T$GT$::new::h5d579e58798cc40b(&v14);
}
