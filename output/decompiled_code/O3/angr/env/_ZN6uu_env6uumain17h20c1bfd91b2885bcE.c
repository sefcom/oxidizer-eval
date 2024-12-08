long long uu_env::uumain::h20c1bfd91b2885bc(unsigned long long a0, unsigned long a1)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned short v1;  // [sp-0x98], Other Possible Types: unsigned long
    char v2;  // [sp-0x96]
    unsigned long long v3;  // [sp-0x90]
    unsigned long long v4;  // [sp-0x88]
    unsigned long long v5;  // [sp-0x80]
    void* v6;  // [sp-0x78]
    unsigned long v7;  // [sp-0x68], Other Possible Types: unsigned long long
    struct struct_0 *v8[14];  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x50]
    int v11;  // [sp-0x48], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [sp-0x40]
    unsigned long long v13;  // [sp-0x38]
    char v14;  // [bp-0x28]
    char v15;  // [bp-0x18]
    unsigned long long v17;  // rax
    unsigned int v18;  // eax
    struct struct_0 *v19[14];  // rdx
    unsigned long long v20;  // rsi

    core::result::Result$LT$T$C$E$GT$::expect::h31e53a15066e811b((unsigned int)uucore::disable_rust_signal_handlers::hd9a84f597b51a87c());
    v1 = 0;
    v2 = 2;
    v17 = uu_env::EnvAppData::run_env::hb4ce48da2720fdbc(&v1, a0);
    if (!v17)
    {
        v18 = uucore::mods::error::get_exit_code::hefc5edc456808dde();
        return v18;
    }
    v0 = v17;
    v11 = &v0;
    v12 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h296ee272af41c843;
    v1 = &g_417460;
    v3 = 1;
    v6 = 0;
    v4 = &v11;
    v5 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hfc074a6e38d5d337(&v14, &v1);
    *((int128_t *)&v11) = *((int128_t *)&v14);
    v13 = *((long long *)&v15);
    if ((char)_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(v12, *((long long *)&v15)))
    {
        v7 = uucore::util_name::h412db5e565a079f3();
        v8[0] = &v19[0];
        v9 = &v7;
        v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf2a868dc38726852;
        v1 = &g_5460f8;
        v3 = 2;
        v6 = 0;
        v4 = &v9;
        v5 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v20, v19);
        v7 = &v11;
        v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_546118;
        v3 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v20, v19);
    }
    if ((char)v19[13](v0))
    {
        v7 = uucore::execution_phrase::h54f12bf70b2cca36();
        v8[0] = &v19[0];
        v9 = &v7;
        v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf2a868dc38726852;
        v1 = &g_546160;
        v3 = 2;
        v6 = 0;
        v4 = &v9;
        v5 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v20, v19);
    }
    v18 = v19[12](v0);
    ::0x4768f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf8167c02964adf12(&v11);
    ::0x4766d0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hfecb941c1ca92667(v0, v19);
    return v18;
}
