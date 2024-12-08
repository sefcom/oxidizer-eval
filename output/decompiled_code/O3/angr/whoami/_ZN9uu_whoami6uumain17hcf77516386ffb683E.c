long long uu_whoami::uumain::hcf77516386ffb683(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x90]
    unsigned long long v3;  // [sp-0x88]
    unsigned long long v4;  // [sp-0x80]
    void* v5;  // [sp-0x78]
    unsigned long v6;  // [sp-0x68], Other Possible Types: unsigned long long
    struct struct_0 *v7[14];  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long v8;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x50]
    int v10;  // [sp-0x48], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v11;  // [sp-0x40]
    unsigned long long v12;  // [sp-0x38]
    char v13;  // [bp-0x28]
    char v14;  // [bp-0x18]
    struct struct_0 *v16[14];  // rdx
    unsigned long long v17;  // rax
    unsigned long long v18;  // rsi

    core::result::Result$LT$T$C$E$GT$::expect::h4de2b388f79d6834((unsigned int)uucore::disable_rust_signal_handlers::hd9a84f597b51a87c());
    v17 = uu_whoami::uumain::uumain::he7c8b0b4919b978d(a0, a1, v16);
    if (!v17)
        return uucore::mods::error::get_exit_code::hefc5edc456808dde();
    v0 = v17;
    v10 = &v0;
    v11 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7cdbb8c8c439a05e;
    v1 = &g_413540;
    v2 = 1;
    v5 = 0;
    v3 = &v10;
    v4 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h41866114cf5246ce(&v13, &v1);
    *((int128_t *)&v10) = *((int128_t *)&v13);
    v12 = *((long long *)&v14);
    if ((char)_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(v11, *((long long *)&v14)))
    {
        v6 = uucore::util_name::h412db5e565a079f3();
        v7[0] = &v16[0];
        v8 = &v6;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc0958a266f5e46ff;
        v1 = &g_506c20;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v18, v16);
        v6 = &v10;
        v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_506c40;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v18, v16);
    }
    if (!(char)v16[13](v0))
    {
        ::0x45e770::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf5f5450ec9a3fc5(&v10);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h2404ea7b08ed673c(v0, v16);
        return v16[12](v0);
    }
    v6 = uucore::execution_phrase::h54f12bf70b2cca36();
    v7[0] = &v16[0];
    v8 = &v6;
    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc0958a266f5e46ff;
    v1 = &g_506c60;
    v2 = 2;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v18, v16);
}
