long long uu_cksum::uumain::he6c7166d5a8d1f1f(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0xa8]
    unsigned long v1;  // [sp-0x98]
    unsigned long long v2;  // [sp-0x90]
    struct struct_1 **v3;  // [sp-0x88], Other Possible Types: struct struct_2 **, struct struct_3 **
    unsigned long long v4;  // [sp-0x80]
    void* v5;  // [sp-0x78]
    struct struct_1 **v6;  // [sp-0x68]
    struct struct_0 *v7[14];  // [sp-0x60], Other Possible Types: unsigned long long
    struct struct_2 **v8;  // [sp-0x58]
    unsigned long long v9;  // [sp-0x50]
    char *v10;  // [bp-0x48]
    unsigned long long v11;  // [sp-0x40]
    unsigned long long v12;  // [sp-0x38]
    char v13;  // [bp-0x28]
    char v14;  // [bp-0x18]
    unsigned long long v16;  // rax
    struct struct_0 *v17[14];  // rdx

    core::result::Result$LT$T$C$E$GT$::expect::h3fe0ac65674ede90((unsigned int)uucore::disable_rust_signal_handlers::hc16ff077e3f1e2f6());
    v16 = uu_cksum::uumain::uumain::hf3578f9fe0c3201c(a0, a1);
    if (!v16)
        return uucore::mods::error::get_exit_code::he41365fe4dc666e7();
    v0 = v16;
    v10 = &v0;
    v11 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h412ef4f961bd2408;
    v1 = &g_454f40;
    v2 = 1;
    v5 = 0;
    v3 = &v10;
    v4 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&v13, &v1);
    *((int128_t *)&v10) = *((int128_t *)&v13);
    v12 = *((long long *)&v14);
    if (::0x57dc50::_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(v11, *((long long *)&v14)))
    {
        v6 = uucore::util_name::h60d842bf27b05e82();
        v7[0] = &v17[0];
        v8 = &v6;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
        v1 = &g_7528e0;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
        v6 = &v10;
        v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_752900;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
    }
    if (!(char)v17[13](v0))
    {
        ::0x57c590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h23113bc82093f2bc(&v10);
        ::0x57c4d0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h88065cc496e49ab5(v0, v17);
        return v17[12](v0);
    }
    v6 = uucore::execution_phrase::h7a36a698673d06ab();
    v7[0] = &v17[0];
    v8 = &v6;
    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
    v1 = &g_752920;
    v2 = 2;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
}
