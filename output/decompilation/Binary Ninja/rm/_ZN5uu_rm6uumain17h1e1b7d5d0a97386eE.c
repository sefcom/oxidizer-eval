
  uint64_t uu_rm::uumain::h1e1b7d5d0a97386e(int64_t arg1)

{
    core::result::Result$LT$T$C$E$GT$::expect::he06e51ad87a21432(
        uucore::disable_rust_signal_handlers::hcf33f4a6d6e443c4());
    uint64_t rax_1;
    int64_t* rdx;
    rax_1 = uu_rm::uumain::uumain::h70e0ab345ddb6bc4(arg1);
    
    if (!rax_1)
        /* tailcall */
        return uucore::mods::error::get_exit_code::h4ce6cf124c2ef658();
    
    uint64_t var_90 = rax_1;
    uint64_t* var_28 = &var_90;
    int64_t (* var_20)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he48c80030f99de4b;
    void* const var_80 = &data_418830;
    int64_t var_78 = 1;
    int64_t var_60 = 0;
    uint64_t** var_70 = &var_28;
    int64_t var_68 = 1;
    int128_t var_50;
    core::option::Option$LT$T$GT$::map_or_else::h8617635e584293d6(&var_50, &var_80);
    var_28 = var_50;
    uint64_t var_40;
    uint64_t var_18 = var_40;
    int128_t* var_38;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5e8de16b13b0fa7a(var_20, var_40, 1, 0))
    {
        int64_t rax_3;
        int64_t rdx_1;
        rax_3 = uucore::util_name::h074417a1e6395129();
        var_50 = rax_3;
        *var_50[8] = rdx_1;
        var_38 = &var_50;
        int64_t (* var_30_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h709d5a6c04fcf791;
        var_80 = &data_4e9798;
        int64_t var_78_1 = 2;
        int64_t var_60_1 = 0;
        int128_t** var_70_1 = &var_38;
        int64_t var_68_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
        var_50 = &var_28;
        *var_50[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_80 = &data_4e97b8;
        int64_t var_78_2 = 2;
        int64_t var_60_2 = 0;
        int128_t* var_70_2 = &var_50;
        int64_t var_68_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
    }
    
    if (rdx[0xc](var_90))
    {
        int64_t rax_6;
        int64_t rdx_2;
        rax_6 = uucore::execution_phrase::hf0e80cb4793732ad();
        var_50 = rax_6;
        *var_50[8] = rdx_2;
        var_38 = &var_50;
        int64_t (* var_30_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h709d5a6c04fcf791;
        var_80 = &data_4e97d8;
        int64_t var_78_3 = 2;
        int64_t var_60_3 = 0;
        int128_t** var_70_3 = &var_38;
        int64_t var_68_3 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
    }
    
    int32_t rax_8 = rdx[0xb](var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc367c76fecfebbb2(&var_28);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h7684e11f81e8d33e(var_90, rdx);
    return rax_8;
}
