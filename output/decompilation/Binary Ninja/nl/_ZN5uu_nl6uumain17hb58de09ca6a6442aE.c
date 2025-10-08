
  uint64_t uu_nl::uumain::hb58de09ca6a6442a(int64_t arg1)

{
    core::result::Result$LT$T$C$E$GT$::expect::hcfad9442c7be756b(
        uucore::disable_rust_signal_handlers::hcf33f4a6d6e443c4());
    uint64_t rax_1;
    int64_t* rdx;
    rax_1 = uu_nl::uumain::uumain::heaba12137d28754b(arg1);
    
    if (!rax_1)
        /* tailcall */
        return uucore::mods::error::get_exit_code::h4ce6cf124c2ef658();
    
    uint64_t var_98 = rax_1;
    uint64_t* var_58 = &var_98;
    int64_t (* var_50)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he8a6ff3f4beb2870;
    void* const var_88 = &data_44e930;
    int64_t var_80 = 1;
    int64_t var_68 = 0;
    uint64_t** var_78 = &var_58;
    int64_t var_70 = 1;
    int128_t var_38;
    core::option::Option$LT$T$GT$::map_or_else::h5b303b602cbb50fb(&var_38, &var_88);
    var_58 = var_38;
    uint64_t var_28;
    uint64_t var_48 = var_28;
    int128_t* var_20;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hce4c57ff4d671dea(var_50, var_28, 1, 0))
    {
        int64_t rax_3;
        int64_t rdx_1;
        rax_3 = uucore::util_name::h074417a1e6395129();
        var_38 = rax_3;
        *var_38[8] = rdx_1;
        var_20 = &var_38;
        int64_t (* var_18_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha55ed9224fb9838c;
        var_88 = &data_6392f8;
        int64_t var_80_1 = 2;
        int64_t var_68_1 = 0;
        int128_t** var_78_1 = &var_20;
        int64_t var_70_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
        var_38 = &var_58;
        *var_38[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_88 = &data_639318;
        int64_t var_80_2 = 2;
        int64_t var_68_2 = 0;
        int128_t* var_78_2 = &var_38;
        int64_t var_70_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
    }
    
    if (rdx[0xc](var_98))
    {
        int64_t rax_6;
        int64_t rdx_2;
        rax_6 = uucore::execution_phrase::hf0e80cb4793732ad();
        var_38 = rax_6;
        *var_38[8] = rdx_2;
        var_20 = &var_38;
        int64_t (* var_18_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha55ed9224fb9838c;
        var_88 = &data_639338;
        int64_t var_80_3 = 2;
        int64_t var_68_3 = 0;
        int128_t** var_78_3 = &var_20;
        int64_t var_70_3 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
    }
    
    int32_t rax_8 = rdx[0xb](var_98);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4f3d6378997aefab(var_58, var_50);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h7d815ef7a26394b3(var_98, rdx);
    return rax_8;
}
