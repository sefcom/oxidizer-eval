long long uu_mktemp::uumain::h8c86789a0faa888d(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
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
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rsi

    core::result::Result$LT$T$C$E$GT$::expect::h14197ed5ec9cde15((unsigned int)uucore::disable_rust_signal_handlers::hd9a84f597b51a87c());
    v18 = uu_mktemp::uumain::uumain::h89ae2d7d2680c3bb(a0, a1, v16, v17);
    if (!v18)
        return uucore::mods::error::get_exit_code::hefc5edc456808dde();
    v0 = v18;
    v10 = &v0;
    v11 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h85a767b4d1a0d48d;
    v1 = &g_416210;
    v2 = 1;
    v5 = 0;
    v3 = &v10;
    v4 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hb3f6daaecd98b5bd(&v13, &v1);
    *((int128_t *)&v10) = *((int128_t *)&v13);
    v12 = *((long long *)&v14);
    if ((char)_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(v11, *((long long *)&v14)))
    {
        v6 = uucore::util_name::h412db5e565a079f3();
        v7[0] = &v16[0];
        v8 = &v6;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h93273932de9ac80d;
        v1 = &g_533740;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v19, v16);
        v6 = &v10;
        v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_533760;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v19, v16);
    }
    if (!(char)v16[13](v0))
    {
        ::0x472220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h81ae20a1645b6b67(&v10);
        ::0x4720c0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h9f33fce132e8c629(v0, v16);
        return v16[12](v0);
    }
    v6 = uucore::execution_phrase::h54f12bf70b2cca36();
    v7[0] = &v16[0];
    v8 = &v6;
    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h93273932de9ac80d;
    v1 = &g_533780;
    v2 = 2;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v19, v16);
}
