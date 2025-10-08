
  int64_t bat::printer::InteractivePrinter::create_fake_panel::h8e64f6333b59f2d6(int128_t* arg1, void* arg2, int64_t arg3)

{
    if (!arg3)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(arg1, 1, 0);
    
    char const* const var_a8 = &data_481164[0x10];
    char const* const var_a0 = &data_481164[0x14];
    void var_40;
    core::iter::traits::iterator::Iterator::collect::hf2327cdb95cc4d00(&var_40, &var_a8);
    int64_t var_30;
    uint64_t rdx = alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_a8, 
        " \s +Failed to load one or more …", 1, ~var_30 + arg3);
    int64_t var_b8 = arg3 - 1;
    int128_t var_c8 = var_a8;
    void* var_78 = &var_40;
    int64_t (* var_70)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    int128_t* var_68 = &var_c8;
    int64_t (* var_60)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_a8 = &data_485820;
    int64_t var_a0_1 = 2;
    int64_t var_88 = 0;
    void** var_98_1 = &var_78;
    int64_t var_90 = 2;
    int128_t var_58;
    core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_58, 0, rdx, &var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_c8);
    var_c8 = var_58;
    char rax_3;
    uint64_t rdx_1;
    rax_3 = bat::style::StyleComponents::grid::h47e585e5c9942068(arg2 + 0xc0);
    
    if (!rax_3)
    {
        int64_t var_48;
        arg1[1] = var_48;
        *arg1 = var_c8;
    }
    else
    {
        var_58 = &var_c8;
        *var_58[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_a8 = &data_aceaa0;
        int64_t var_a0_2 = 2;
        int64_t var_88_1 = 0;
        int128_t* var_98_2 = &var_58;
        int64_t var_90_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_78, 0, rdx_1, &var_a8);
        arg1[1] = var_68;
        *arg1 = var_78;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_c8);
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_40);
}
