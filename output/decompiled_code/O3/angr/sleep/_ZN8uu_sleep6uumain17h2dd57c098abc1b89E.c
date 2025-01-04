long long uu_sleep::uumain::h2dd57c098abc1b89(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x90]
    struct struct_1 **v3;  // [sp-0x88], Other Possible Types: struct struct_2 **, struct struct_3 **
    unsigned long long v4;  // [sp-0x80]
    void* v5;  // [sp-0x78]
    struct struct_1 **v6;  // [sp-0x68]
    struct struct_0 *v7[14];  // [sp-0x60], Other Possible Types: unsigned long long
    struct struct_2 **v8;  // [sp-0x58]
    unsigned long long v9;  // [sp-0x50]
    char *v10;  // [sp-0x48]
    unsigned long long v11;  // [sp-0x40]
    unsigned long long v12;  // [sp-0x38]
    char v13;  // [bp-0x28]
    char v14;  // [bp-0x18]
    struct struct_0 *v16[14];  // rdx
    unsigned long long v17;  // rcx
    unsigned long long v18;  // r8
    unsigned long long v19;  // r9
    unsigned long long v20;  // rax
    unsigned long long v21;  // rsi

    core::result::Result$LT$T$C$E$GT$::expect::hac6d4e68c87cb6a8((unsigned int)uucore::disable_rust_signal_handlers::hc16ff077e3f1e2f6());
    v20 = uu_sleep::uumain::uumain::hb48cd8deb42f88c8(a0, a1, v16, v17, v18, v19);
    if (!v20)
        return uucore::mods::error::get_exit_code::he41365fe4dc666e7();
    v0 = v20;
    v10 = &v0;
    v11 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c2b9adef8397f;
    v1 = &g_40b180;
    v2 = 1;
    v5 = 0;
    v3 = &v10;
    v4 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hab4ab316d799c943(&v13, &v1);
    *((int128_t *)&v10) = *((int128_t *)&v13);
    v12 = *((long long *)&v14);
    if ((char)_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(v11, *((long long *)&v14)))
    {
        v6 = uucore::util_name::h60d842bf27b05e82();
        v7[0] = &v16[0];
        v8 = &v6;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5a12a4968cce70ae;
        v1 = &g_5142c0;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v21, v16);
        v6 = &v10;
        v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_5142e0;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v21, v16);
    }
    if (!(char)v16[13](v0))
    {
        ::0x460f10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd83318ddf7c5f3b3(&v10);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hdc907958c86e8350(v0, v16);
        return v16[12](v0);
    }
    v6 = uucore::execution_phrase::h7a36a698673d06ab();
    v7[0] = &v16[0];
    v8 = &v6;
    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5a12a4968cce70ae;
    v1 = &g_514300;
    v2 = 2;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v21, v16);
}
