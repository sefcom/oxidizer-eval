long long uu_dd::Output::discard_cache::h9654de1740a6c207(unsigned int a0[2], unsigned long a1, unsigned int a2)
{
    unsigned long v0;  // [sp-0x78]
    unsigned long v1;  // [sp-0x68]
    struct_1 *v2;  // [sp-0x60]
    char *v3;  // [sp-0x58]
    unsigned long long v4;  // [sp-0x50]
    char *v5;  // [sp-0x48]
    unsigned long long v6;  // [sp-0x40]
    unsigned long v7;  // [sp-0x38]
    unsigned long long v8;  // [sp-0x30]
    struct struct_2 **v9;  // [sp-0x28]
    unsigned long long v10;  // [sp-0x20]
    void* v11;  // [sp-0x18]
    unsigned long long v13;  // rax
    struct_1 *v14;  // rdx

    v13 = _$LT$core..result..Result$LT$T$C$nix..errno..consts..Errno$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he363b563d49dfbc5((unsigned int)uu_dd::Dest::discard_cache::h93c1738e4adad1fb(a0[0], a0[1], a1, a2));
    if (v13)
    {
        v0 = v13;
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v14->field_60(v13, a1));
        v1 = uucore::util_name::h60d842bf27b05e82();
        v2 = v14;
        v3 = &v1;
        v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
        v5 = &v0;
        v6 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc9ea8a505475b34b;
        v7 = &g_561070;
        v8 = 3;
        v11 = 0;
        v9 = &v3;
        v10 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v7);
        v13 = ::0x4d5c50::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hef88782da503643c(v0, v14);
        return v13;
    }
    return v13;
}
