long long uu_env::uumain::h2d1a09be319fa9e5(unsigned int a0, unsigned int a1)
{
    unsigned long v0;  // [sp-0xa8]
    char v1[3];  // [sp-0x98], Other Possible Types: unsigned short
    char v2;  // [sp-0x96]
    unsigned long long v3;  // [sp-0x90]
    struct struct_0 **v4;  // [sp-0x88], Other Possible Types: struct struct_1 **, struct struct_2 **
    unsigned long long v5;  // [sp-0x80]
    void* v6;  // [sp-0x78]
    struct struct_0 **v7;  // [sp-0x68]
    struct struct_3 *v8[14];  // [sp-0x60], Other Possible Types: unsigned long long
    struct struct_1 **v9;  // [sp-0x58]
    unsigned long long v10;  // [sp-0x50]
    char *v11;  // [bp-0x48]
    unsigned long long v12;  // [sp-0x40]
    unsigned long long v13;  // [sp-0x38]
    char v14;  // [bp-0x28]
    char v15;  // [bp-0x18]
    unsigned long long v17;  // rax
    unsigned int v18;  // ebx
    struct struct_3 *v19[14];  // rdx

    core::result::Result$LT$T$C$E$GT$::expect::h16af578bf76ac2e6((unsigned int)uucore::disable_rust_signal_handlers::hc16ff077e3f1e2f6());
    v1 = 0;
    v2 = 2;
    v17 = uu_env::EnvAppData::run_env::ha7719131c2b1bb9b(&v1, a0, a1);
    if (!v17)
    {
        v18 = uucore::mods::error::get_exit_code::he41365fe4dc666e7();
        return v18;
    }
    v0 = v17;
    v11 = &v0;
    v12 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha89f889f02ecb343;
    *((char **)v1) = &g_417280;
    v3 = 1;
    v6 = 0;
    v4 = &v11;
    v5 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h60f4303fb8255fc3(&v14, &v1);
    *((int128_t *)&v11) = *((int128_t *)&v14);
    v13 = *((long long *)&v15);
    if (_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(v12, *((long long *)&v15)))
    {
        v7 = uucore::util_name::h60d842bf27b05e82();
        v8[0] = &v19[0];
        v9 = &v7;
        v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hca024d7dd65e16bb;
        *((char **)v1) = &g_545a20;
        v3 = 2;
        v6 = 0;
        v4 = &v9;
        v5 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
        v7 = &v11;
        v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        *((char **)v1) = &g_545a40;
        v3 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
    }
    if ((char)v19[13](v0))
    {
        v7 = uucore::execution_phrase::h7a36a698673d06ab();
        v8[0] = &v19[0];
        v9 = &v7;
        v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hca024d7dd65e16bb;
        *((char **)v1) = &g_545a70;
        v3 = 2;
        v6 = 0;
        v4 = &v9;
        v5 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
    }
    v18 = v19[12](v0);
    ::0x47a570::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb9361acd21bda034(&v11);
    ::0x47a3b0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hc4769e5c0a6689ea(v0, v19);
    return v18;
}
