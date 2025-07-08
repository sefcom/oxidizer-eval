
  uint64_t uu_test::uumain::h5e6935b00bfb3566(int64_t arg1)

{
    core::result::Result$LT$T$C$E$GT$::expect::h6b30e76c56c2a2d9(
        uucore::disable_rust_signal_handlers::hc16ff077e3f1e2f6());
    int32_t* rax_1;
    int64_t* rdx;
    rax_1 = uu_test::uumain::uumain::h9b4c2f0d3a9c2e97(arg1);
    
    if (!rax_1)
        /* tailcall */
        return uucore::mods::error::get_exit_code::he41365fe4dc666e7();
    
    int32_t* var_a8 = rax_1;
    int32_t** var_48 = &var_a8;
    int64_t (* var_40)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h19f09f0bbe19fbb2;
    void* const var_98 = &data_413dc0;
    int64_t var_90 = 1;
    int64_t var_78 = 0;
    int32_t*** var_88 = &var_48;
    int64_t var_80 = 1;
    int128_t var_28;
    core::option::Option$LT$T$GT$::map_or_else::hf4c6eb2f6e277d9c(&var_28, &var_98);
    var_48 = var_28;
    uint64_t var_18;
    uint64_t var_38 = var_18;
    int32_t*** var_68;
    int64_t* var_58;
    
    if (_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(var_40, var_18))
    {
        int32_t*** rax_3;
        int64_t rdx_1;
        rax_3 = uucore::util_name::h60d842bf27b05e82();
        var_68 = rax_3;
        int64_t var_60_1 = rdx_1;
        var_58 = &var_68;
        int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a0a8a8d0612ffe6;
        var_98 = &data_5122e0;
        int64_t var_90_1 = 2;
        int64_t var_78_1 = 0;
        int64_t** var_88_1 = &var_58;
        int64_t var_80_1 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
        var_68 = &var_48;
        int64_t (* var_60_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_98 = &data_512300;
        int64_t var_90_2 = 2;
        int64_t var_78_2 = 0;
        int32_t**** var_88_2 = &var_68;
        int64_t var_80_2 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
    }
    
    if (rdx[0xd](var_a8))
    {
        int32_t*** rax_6;
        int64_t rdx_2;
        rax_6 = uucore::execution_phrase::h7a36a698673d06ab();
        var_68 = rax_6;
        int64_t var_60_3 = rdx_2;
        var_58 = &var_68;
        int64_t (* var_50_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a0a8a8d0612ffe6;
        var_98 = &data_512320;
        int64_t var_90_3 = 2;
        int64_t var_78_3 = 0;
        int64_t** var_88_3 = &var_58;
        int64_t var_80_3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
    }
    
    int32_t rax_8 = rdx[0xc](var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::he07d4e56e2ed3173(&var_48);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h0e196491fb9b8614(var_a8, rdx);
    return rax_8;
}
