long long uu_dd::uumain::heeec4797224c983a(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x90]
    struct struct_0 **v3;  // [sp-0x88], Other Possible Types: struct struct_1 **, struct struct_3 **
    unsigned long long v4;  // [sp-0x80]
    void* v5;  // [sp-0x78]
    struct struct_0 **v6;  // [sp-0x68]
    struct struct_2 *v7[14];  // [sp-0x60], Other Possible Types: unsigned long long
    struct struct_1 **v8;  // [sp-0x58]
    unsigned long long v9;  // [sp-0x50]
    char *v10;  // [sp-0x48]
    unsigned long long v11;  // [sp-0x40]
    unsigned long long v12;  // [sp-0x38]
    char v13;  // [bp-0x28]
    char v14;  // [bp-0x18]
    unsigned long long v16;  // rax
    struct struct_2 *v17[14];  // rdx

    core::result::Result$LT$T$C$E$GT$::expect::h11e8d24de8d0195b((unsigned int)uucore::disable_rust_signal_handlers::hc16ff077e3f1e2f6());
    v16 = uu_dd::uumain::uumain::h74b70bfc5a4ff6dc(a0, a1);
    if (!v16)
        return uucore::mods::error::get_exit_code::he41365fe4dc666e7();
    v0 = v16;
    v10 = &v0;
    v11 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb2676356e16f0d47;
    v1 = &g_419580;
    v2 = 1;
    v5 = 0;
    v3 = &v10;
    v4 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hfb43af8b489c04c9();
    *((int128_t *)&v10) = *((int128_t *)&v13);
    v12 = *((long long *)&v14);
    if (_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(v11, *((long long *)&v14)))
    {
        v6 = uucore::util_name::h60d842bf27b05e82();
        v7[0] = &v17[0];
        v8 = &v6;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h670df745bbe911c1;
        v1 = &g_55dd18;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
        v6 = &v10;
        v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_55dd38;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
    }
    if (!(char)v17[13](v0))
    {
        ::0x484d30::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfa0413bd0544ab5d(&v10);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb8a1c8accec422a5(v0, v17);
        return v17[12](v0);
    }
    v6 = uucore::execution_phrase::h7a36a698673d06ab();
    v7[0] = &v17[0];
    v8 = &v6;
    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h670df745bbe911c1;
    v1 = &g_55dd58;
    v2 = 2;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
}
