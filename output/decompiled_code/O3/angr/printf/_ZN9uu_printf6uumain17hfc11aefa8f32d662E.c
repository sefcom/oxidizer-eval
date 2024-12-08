long long uu_printf::uumain::hfc11aefa8f32d662(unsigned long long a0, unsigned long long a1, unsigned long a2)
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
    unsigned long long v16;  // rax
    struct struct_0 *v17[14];  // rdx
    unsigned long long v18;  // rsi

    core::result::Result$LT$T$C$E$GT$::expect::h01cba602ee6fe7b7((unsigned int)uucore::disable_rust_signal_handlers::hd9a84f597b51a87c());
    v16 = uu_printf::uumain::uumain::he179439d6c871b25(a0, a1);
    if (!v16)
        return uucore::mods::error::get_exit_code::hefc5edc456808dde();
    v0 = v16;
    v10 = &v0;
    v11 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf10e19507e909be6;
    v1 = &g_4147d0;
    v2 = 1;
    v5 = 0;
    v3 = &v10;
    v4 = 1;
    ::0x46a230::core::option::Option$LT$T$GT$::map_or_else::hda96251528034ad5(&v13, &v1);
    *((int128_t *)&v10) = *((int128_t *)&v13);
    v12 = *((long long *)&v14);
    if ((char)_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(v11, *((long long *)&v14)))
    {
        v6 = uucore::util_name::h412db5e565a079f3();
        v7[0] = &v17[0];
        v8 = &v6;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he63ca32e769e9c54;
        v1 = &g_51e6c8;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v18, v17);
        v6 = &v10;
        v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_51e6e8;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v18, v17);
    }
    if (!(char)v17[13](v0))
    {
        ::0x469f50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf6c98011cfc6e0a(&v10);
        ::0x469ec0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hb1596ecd4b7ade3d(v0, v17);
        return v17[12](v0);
    }
    v6 = uucore::execution_phrase::h54f12bf70b2cca36();
    v7[0] = &v17[0];
    v8 = &v6;
    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he63ca32e769e9c54;
    v1 = &g_51e708;
    v2 = 2;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v18, v17);
}
