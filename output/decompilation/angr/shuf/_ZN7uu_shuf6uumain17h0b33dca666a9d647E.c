long long uu_shuf::uumain::h0b33dca666a9d647(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0xa8]
    unsigned long v1;  // [sp-0x98]
    unsigned long long v2;  // [sp-0x90]
    struct struct_0 **v3;  // [sp-0x88], Other Possible Types: struct struct_1 **, struct struct_3 **
    unsigned long long v4;  // [sp-0x80]
    void* v5;  // [sp-0x78]
    struct struct_0 **v6;  // [sp-0x68]
    struct struct_2 *v7[14];  // [sp-0x60], Other Possible Types: unsigned long long
    struct struct_1 **v8;  // [sp-0x58]
    unsigned long long v9;  // [sp-0x50]
    char *v10;  // [bp-0x48]
    unsigned long long v11;  // [sp-0x40]
    unsigned long long v12;  // [sp-0x38]
    char v13;  // [bp-0x28]
    char v14;  // [bp-0x18]
    unsigned long long v16;  // rax
    struct struct_2 *v17[14];  // rdx

    core::result::Result$LT$T$C$E$GT$::expect::h0e87b2a292888b49((unsigned int)uucore::disable_rust_signal_handlers::hc16ff077e3f1e2f6());
    v16 = uu_shuf::uumain::uumain::he0c9c6e9cffa8175(a0, a1);
    if (!v16)
        return uucore::mods::error::get_exit_code::he41365fe4dc666e7();
    v0 = v16;
    v10 = &v0;
    v11 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hfca92545a4102958;
    v1 = &g_415c10;
    v2 = 1;
    v5 = 0;
    v3 = &v10;
    v4 = 1;
    ::0x46edf0::core::option::Option$LT$T$GT$::map_or_else::h56059d1a533ad2f3(&v13, &v1);
    *((int128_t *)&v10) = *((int128_t *)&v13);
    v12 = *((long long *)&v14);
    if (_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(v11, *((long long *)&v14)))
    {
        v6 = uucore::util_name::h60d842bf27b05e82();
        v7[0] = &v17[0];
        v8 = &v6;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf06f4878b7fd4ac4;
        v1 = &g_534d28;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
        v6 = &v10;
        v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_534d48;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
    }
    if (!(char)v17[13](v0))
    {
        ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v10);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h976b963ecaa00352(v0, v17);
        return v17[12](v0);
    }
    v6 = uucore::execution_phrase::h7a36a698673d06ab();
    v7[0] = &v17[0];
    v8 = &v6;
    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf06f4878b7fd4ac4;
    v1 = &g_534d68;
    v2 = 2;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
}
