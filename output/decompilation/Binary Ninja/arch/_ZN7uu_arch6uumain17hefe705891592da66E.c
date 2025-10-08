
  uint64_t uu_arch::uumain::hefe705891592da66(int64_t arg1)

{
    core::result::Result$LT$T$C$E$GT$::expect::h39b34e692fa2f3bc(
        uucore::disable_rust_signal_handlers::hcf33f4a6d6e443c4());
    uint64_t rax_1;
    int64_t* rdx;
    rax_1 = uu_arch::uumain::uumain::h0bd0b462c0d82bf9(arg1);
    
    if (!rax_1)
        /* tailcall */
        return uucore::mods::error::get_exit_code::h4ce6cf124c2ef658();
    
    uint64_t var_98 = rax_1;
    uint64_t* var_58 = &var_98;
    int64_t (* var_50)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h1ac958314890ea94;
    void* const var_88 = &data_416f80;
    int64_t var_80 = 1;
    int64_t var_68 = 0;
    uint64_t** var_78 = &var_58;
    int64_t var_70 = 1;
    int128_t var_38;
    core::option::Option$LT$T$GT$::map_or_else::h9f8991aab811e6c5(&var_38, &var_88);
    var_58 = var_38;
    int64_t var_28;
    int64_t var_48 = var_28;
    int128_t* var_20;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hcd410b8465613d23(var_28))
    {
        int64_t rax_3;
        int64_t rdx_1;
        rax_3 = uucore::util_name::h074417a1e6395129();
        var_38 = rax_3;
        *var_38[8] = rdx_1;
        var_20 = &var_38;
        int64_t (* var_18_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha4a905462ef9de42;
        var_88 = &data_4d5650;
        int64_t var_80_1 = 2;
        int64_t var_68_1 = 0;
        int128_t** var_78_1 = &var_20;
        int64_t var_70_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
        var_38 = &var_58;
        *var_38[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_88 = &data_4d5670;
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
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha4a905462ef9de42;
        var_88 = &data_4d5690;
        int64_t var_80_3 = 2;
        int64_t var_68_3 = 0;
        int128_t** var_78_3 = &var_20;
        int64_t var_70_3 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
    }
    
    int32_t rax_8 = rdx[0xb](var_98);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h17ef947eedc3a79b(var_58, var_50);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h91a2378e328bf2a4(var_98, rdx);
    return rax_8;
}
