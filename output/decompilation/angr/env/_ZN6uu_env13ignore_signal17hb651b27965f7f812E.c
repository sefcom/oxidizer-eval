long long uu_env::ignore_signal::hb651b27965f7f812(unsigned int a0)
{
    unsigned int v0;  // [sp-0x9c]
    char v1;  // [bp-0x98]
    char v2;  // [bp-0x90]
    unsigned long v3;  // [sp-0x88]
    unsigned long long v4;  // [sp-0x80]
    char *v5;  // [sp-0x78]
    unsigned long long v6;  // [sp-0x70]
    char *v7;  // [sp-0x68]
    unsigned long long v8;  // [sp-0x60]
    unsigned long v9;  // [sp-0x58]
    unsigned long long v10;  // [sp-0x50]
    struct struct_0 **v11;  // [sp-0x48]
    unsigned long long v12;  // [sp-0x40]
    void* v13;  // [sp-0x38]
    char v14;  // [bp-0x28]
    unsigned int v15;  // [sp-0x10]
    unsigned long v18;  // rdx

    nix::sys::signal::signal::haa2dccad64099f8c(&v1, a0, 1);
    if (*((int *)&v1) != 4)
        return 0;
    v0 = a0;
    v3 = nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::desc::hd335e127646dbdc2(*((int *)&v2));
    v4 = v18;
    v5 = &v0;
    v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
    v7 = &v3;
    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
    v9 = &g_548c58;
    v10 = 2;
    v13 = 0;
    v11 = &v5;
    v12 = 2;
    ::0x4cb1b0::core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&v14, &v9);
    v15 = 125;
    return alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&v14);
}
